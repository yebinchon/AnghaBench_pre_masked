
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u32 ;



u32 FUNC_0(void)
{
   extern u32 VAR_0;

   uint32_t* VAR_1 = (u32*)VAR_0;
   while(*VAR_1++ == 0xFCFCFCFC);
   VAR_1--;

   return ((u32)VAR_1 - VAR_0);
}
