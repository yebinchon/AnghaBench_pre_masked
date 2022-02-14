
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



size_t FUNC_0(uint8_t *VAR_0, size_t VAR_1, uint32_t VAR_2, int VAR_3)
{
   size_t VAR_4;
   if (VAR_1 < 4)
      return 0;
   VAR_1 -= 4;
   for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4 += 4)
   {
      if ((VAR_0[VAR_4] >> 2) == 0x12 && (VAR_0[VAR_4 + 3] & 3) == 1)
      {
         uint32_t VAR_5 = ((uint32_t)(VAR_0[VAR_4 + 0] & 3) << 24) |
            ((uint32_t)VAR_0[VAR_4 + 1] << 16) |
            ((uint32_t)VAR_0[VAR_4 + 2] << 8) |
            ((uint32_t)VAR_0[VAR_4 + 3] & (~3));

         uint32_t VAR_6;
         if (VAR_3)
            VAR_6 = VAR_2 + (uint32_t)VAR_4 + VAR_5;
         else
            VAR_6 = VAR_5 - (VAR_2 + (uint32_t)VAR_4);
         VAR_0[VAR_4 + 0] = (uint8_t)(0x48 | ((VAR_6 >> 24) & 0x3));
         VAR_0[VAR_4 + 1] = (uint8_t)(VAR_6 >> 16);
         VAR_0[VAR_4 + 2] = (uint8_t)(VAR_6 >> 8);
         VAR_0[VAR_4 + 3] &= 0x3;
         VAR_0[VAR_4 + 3] |= VAR_6;
      }
   }
   return VAR_4;
}
