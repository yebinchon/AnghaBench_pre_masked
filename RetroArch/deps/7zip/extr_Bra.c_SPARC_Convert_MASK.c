
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;



size_t FUNC_0(uint8_t *VAR_0, size_t VAR_1, uint32_t VAR_2, int VAR_3)
{
   uint32_t VAR_4;
   if (VAR_1 < 4)
      return 0;
   VAR_1 -= 4;
   for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4 += 4)
   {
      if ((VAR_0[VAR_4] == 0x40 && (VAR_0[VAR_4 + 1] & 0xC0) == 0x00) ||
            (VAR_0[VAR_4] == 0x7F && (VAR_0[VAR_4 + 1] & 0xC0) == 0xC0))
      {
         uint32_t VAR_5 =
            ((uint32_t)VAR_0[VAR_4 + 0] << 24) |
            ((uint32_t)VAR_0[VAR_4 + 1] << 16) |
            ((uint32_t)VAR_0[VAR_4 + 2] << 8) |
            ((uint32_t)VAR_0[VAR_4 + 3]);
         uint32_t VAR_6;

         VAR_5 <<= 2;
         if (VAR_3)
            VAR_6 = VAR_2 + VAR_4 + VAR_5;
         else
            VAR_6 = VAR_5 - (VAR_2 + VAR_4);
         VAR_6 >>= 2;

         VAR_6 = (((0 - ((VAR_6 >> 22) & 1)) << 22) & 0x3FFFFFFF) | (VAR_6 & 0x3FFFFF) | 0x40000000;

         VAR_0[VAR_4 + 0] = (uint8_t)(VAR_6 >> 24);
         VAR_0[VAR_4 + 1] = (uint8_t)(VAR_6 >> 16);
         VAR_0[VAR_4 + 2] = (uint8_t)(VAR_6 >> 8);
         VAR_0[VAR_4 + 3] = (uint8_t)VAR_6;
      }
   }
   return VAR_4;
}
