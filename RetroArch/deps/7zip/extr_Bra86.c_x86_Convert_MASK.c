
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int) ;
 int * VAR_0 ;
 int* VAR_1 ;

size_t FUNC_1(uint8_t *VAR_2, size_t VAR_3, uint32_t VAR_4, uint32_t *VAR_5, int VAR_6)
{
   size_t VAR_7 = 0, VAR_8;
   uint32_t VAR_9 = *VAR_5 & 0x7;
   if (VAR_3 < 5)
      return 0;
   VAR_4 += 5;
   VAR_8 = (size_t)0 - 1;

   for (;;)
   {
      uint8_t *VAR_10 = VAR_2 + VAR_7;
      uint8_t *VAR_11 = VAR_2 + VAR_3 - 4;
      for (; VAR_10 < VAR_11; VAR_10++)
         if ((*VAR_10 & 0xFE) == 0xE8)
            break;
      VAR_7 = (size_t)(VAR_10 - VAR_2);
      if (VAR_10 >= VAR_11)
         break;
      VAR_8 = VAR_7 - VAR_8;
      if (VAR_8 > 3)
         VAR_9 = 0;
      else
      {
         VAR_9 = (VAR_9 << ((int)VAR_8 - 1)) & 0x7;
         if (VAR_9 != 0)
         {
            uint8_t VAR_12 = VAR_10[4 - VAR_1[VAR_9]];
            if (!VAR_0[VAR_9] || FUNC_0(VAR_12))
            {
               VAR_8 = VAR_7;
               VAR_9 = ((VAR_9 << 1) & 0x7) | 1;
               VAR_7++;
               continue;
            }
         }
      }
      VAR_8 = VAR_7;

      if (FUNC_0(VAR_10[4]))
      {
         uint32_t VAR_13 = ((uint32_t)VAR_10[4] << 24) | ((uint32_t)VAR_10[3] << 16) | ((uint32_t)VAR_10[2] << 8) | ((uint32_t)VAR_10[1]);
         uint32_t VAR_14;
         for (;;)
         {
            uint8_t VAR_15;
            int VAR_16;
            if (VAR_6)
               VAR_14 = (VAR_4 + (uint32_t)VAR_7) + VAR_13;
            else
               VAR_14 = VAR_13 - (VAR_4 + (uint32_t)VAR_7);
            if (VAR_9 == 0)
               break;
            VAR_16 = VAR_1[VAR_9] * 8;
            VAR_15 = (uint8_t)(VAR_14 >> (24 - VAR_16));
            if (!FUNC_0(VAR_15))
               break;
            VAR_13 = VAR_14 ^ ((1 << (32 - VAR_16)) - 1);
         }
         VAR_10[4] = (uint8_t)(~(((VAR_14 >> 24) & 1) - 1));
         VAR_10[3] = (uint8_t)(VAR_14 >> 16);
         VAR_10[2] = (uint8_t)(VAR_14 >> 8);
         VAR_10[1] = (uint8_t)VAR_14;
         VAR_7 += 5;
      }
      else
      {
         VAR_9 = ((VAR_9 << 1) & 0x7) | 1;
         VAR_7++;
      }
   }
   VAR_8 = VAR_7 - VAR_8;
   *VAR_5 = ((VAR_8 > 3) ? 0 : ((VAR_9 << ((int)VAR_8 - 1)) & 0x7));
   return VAR_7;
}
