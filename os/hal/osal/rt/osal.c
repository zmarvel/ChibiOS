/*
    ChibiOS - Copyright (C) 2006..2015 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/**
 * @file    osal.c
 * @brief   OSAL module code.
 *
 * @addtogroup OSAL
 * @{
 */
#include <string.h>
#include "osal.h"

/*===========================================================================*/
/* Module local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported variables.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Module local types.                                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Module local variables.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Module local functions.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported functions.                                                */
/*===========================================================================*/
 /**
 * @brief  Osal_MemCpy
 * @param  dest: Pointer to the destination buffer
 * @param  src : Pointer to the source buffer
 * @param  size: Number of bytes to copy from the source to the destination
 *               buffer
 * @retval Pointer to the destination buffer
 */
void* Osal_MemCpy(void *dest, const void *src, unsigned int size)
{
    return(memcpy(dest,src,size)); 
}

/**
 * @brief  Osal_MemSet
 * @param  ptr  : Pointer to block of memory to fill  
 * @param  value: Value to assign to each byte of the memory block
 * @param  size : Number of bytes to be set to "value"
 * @retval Pointer to the filled block of memory
 */
void* Osal_MemSet(void *ptr, int value, unsigned int size)
{
    return(memset(ptr,value,size));
}
/** @} */
