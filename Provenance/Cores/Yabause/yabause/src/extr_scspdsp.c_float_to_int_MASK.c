
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int s32 ;



s32 FUNC_0(u16 VAR_0)
{
   u32 VAR_1 = (VAR_0 >> 15) & 1;
   u32 VAR_2 = (!VAR_1) & 1;
   u32 VAR_3 = (VAR_0 >> 11) & 0xf;
   u32 VAR_4 = VAR_0 & 0x7FF;

   s32 VAR_5 = VAR_1 << 31;

   if (VAR_3 > 11)
   {
      VAR_3 = 11;
      VAR_5 |= (VAR_1 << 30);
   }
   else
      VAR_5 |= (VAR_2 << 30);

   VAR_5 |= VAR_4 << 19;

   VAR_5 = VAR_5 >> (VAR_3 + (1 << 3));

   return VAR_5;
}
