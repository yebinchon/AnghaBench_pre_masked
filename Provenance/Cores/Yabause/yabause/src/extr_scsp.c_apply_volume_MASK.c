
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int s32 ;
typedef int s16 ;



s16 FUNC_0(u16 VAR_0, u16 VAR_1, const s16 VAR_2)
{
   u32 VAR_3 = VAR_0 * 4;
   u32 VAR_4 = 0;
   s32 VAR_5 = 0;
   u32 VAR_6 = 0;

   VAR_3 += VAR_1;

   VAR_4 = VAR_3;
   VAR_4 &= 0x3f;
   VAR_4 ^= 0x7f;
   VAR_4 += 1;

   VAR_5 = VAR_2 * VAR_4;
   VAR_6 = VAR_3 >> 6;

   VAR_5 = VAR_5 >> (VAR_6 + 7);

   return VAR_5;
}
