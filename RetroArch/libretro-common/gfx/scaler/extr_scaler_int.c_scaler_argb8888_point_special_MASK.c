
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scaler_ctx {int dummy; } ;



void FUNC_0(const struct scaler_ctx *VAR_0,
      void *VAR_1, const void *VAR_2,
      int VAR_3, int VAR_4,
      int VAR_5, int VAR_6,
      int VAR_7, int VAR_8)
{
   int VAR_9, VAR_10;
   int VAR_11 = (1 << 15) * VAR_5 / VAR_3 - (1 << 15);
   int VAR_12 = (1 << 16) * VAR_5 / VAR_3;
   int VAR_13 = (1 << 15) * VAR_6 / VAR_4 - (1 << 15);
   int VAR_14 = (1 << 16) * VAR_6 / VAR_4;
   const uint32_t *VAR_15 = (const uint32_t*)VAR_2;
   uint32_t *VAR_16 = (uint32_t*)VAR_1;

   if (VAR_11 < 0)
      VAR_11 = 0;
   if (VAR_13 < 0)
      VAR_13 = 0;

   for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++, VAR_13 += VAR_14, VAR_16 += VAR_7 >> 2)
   {
      int VAR_17 = VAR_11;
      const uint32_t *VAR_18 = VAR_15 + (VAR_13 >> 16) * (VAR_8 >> 2);

      for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++, VAR_17 += VAR_12)
         VAR_16[VAR_10] = VAR_18[VAR_17 >> 16];
   }
}
