
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int uint32 ;
typedef int int32 ;



__inline int32 FUNC_0(void *VAR_0, uint32 VAR_1)
{
 return ((int32)*((uint8 *)VAR_0+VAR_1)<<24|
   (int32)*((uint8 *)VAR_0+VAR_1+1)<<16|
   (int32)*((uint8 *)VAR_0+VAR_1+2)<<8|
   (int32)*((uint8 *)VAR_0+VAR_1+3)<<0);
}
