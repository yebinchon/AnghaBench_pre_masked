
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int s32 ;
typedef int s16 ;



void FUNC_0(s32 *VAR_0, s32 *VAR_1, s16 *VAR_2, u32 VAR_3)
{
   u32 VAR_4;

   for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++, VAR_0++, VAR_1++, VAR_2 += 2)
   {

      if (*VAR_0 > 0x7FFF)
         VAR_2[0] = 0x7FFF;
      else if (*VAR_0 < -0x8000)
         VAR_2[0] = -0x8000;
      else
         VAR_2[0] = *VAR_0;

      if (*VAR_1 > 0x7FFF)
         VAR_2[1] = 0x7FFF;
      else if (*VAR_1 < -0x8000)
         VAR_2[1] = -0x8000;
      else
         VAR_2[1] = *VAR_1;
   }
}
