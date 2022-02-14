
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int uint32 ;
typedef int uint16 ;



__inline uint16 FUNC_0(void *VAR_0, uint32 VAR_1)
{
 return ((uint16)
  ((uint16)*((uint8 *)VAR_0+VAR_1+0)<<8|
   (uint16)*((uint8 *)VAR_0+VAR_1+1)<<0));
}
