
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
   VAR_2 += 4;
   for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4 += 2)
   {
      if ((VAR_0[VAR_4 + 1] & 0xF8) == 0xF0 &&
            (VAR_0[VAR_4 + 3] & 0xF8) == 0xF8)
      {
         uint32_t VAR_5;
         uint32_t VAR_6 =
            (((uint32_t)VAR_0[VAR_4 + 1] & 0x7) << 19) |
            ((uint32_t)VAR_0[VAR_4 + 0] << 11) |
            (((uint32_t)VAR_0[VAR_4 + 3] & 0x7) << 8) |
            (VAR_0[VAR_4 + 2]);

         VAR_6 <<= 1;
         if (VAR_3)
            VAR_5 = VAR_2 + (uint32_t)VAR_4 + VAR_6;
         else
            VAR_5 = VAR_6 - (VAR_2 + (uint32_t)VAR_4);
         VAR_5 >>= 1;

         VAR_0[VAR_4 + 1] = (uint8_t)(0xF0 | ((VAR_5 >> 19) & 0x7));
         VAR_0[VAR_4 + 0] = (uint8_t)(VAR_5 >> 11);
         VAR_0[VAR_4 + 3] = (uint8_t)(0xF8 | ((VAR_5 >> 8) & 0x7));
         VAR_0[VAR_4 + 2] = (uint8_t)VAR_5;
         VAR_4 += 2;
      }
   }
   return VAR_4;
}
