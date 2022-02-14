
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



void FUNC_0(void *VAR_0, const void *VAR_1,
      int VAR_2, int VAR_3,
      int VAR_4, int VAR_5)
{
   int VAR_6, VAR_7;
   const uint16_t *VAR_8 = (const uint16_t*)VAR_1;
   uint16_t *VAR_9 = (uint16_t*)VAR_0;

   for (VAR_6 = 0; VAR_6 < VAR_3;
         VAR_6++, VAR_9 += VAR_4 >> 1, VAR_8 += VAR_5 >> 1)
   {
      for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
      {
         uint32_t VAR_10 = VAR_8[VAR_7];
         uint32_t VAR_11 = (VAR_10 >> 12) & 0xf;
         uint32_t VAR_12 = (VAR_10 >> 8) & 0xf;
         uint32_t VAR_13 = (VAR_10 >> 4) & 0xf;

         VAR_9[VAR_7] = (VAR_11 << 12) | (VAR_12 << 7) | (VAR_13 << 1);
      }
   }
}
