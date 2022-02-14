
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int uint32 ;



__inline uint32 FUNC_0(void *VAR_0, uint32 VAR_1)
{
 return ((uint32)*((uint8 *)VAR_0+VAR_1)<<24|
   (uint32)*((uint8 *)VAR_0+VAR_1+1)<<16|
   (uint32)*((uint8 *)VAR_0+VAR_1+2)<<8|
   (uint32)*((uint8 *)VAR_0+VAR_1+3)<<0);
}
