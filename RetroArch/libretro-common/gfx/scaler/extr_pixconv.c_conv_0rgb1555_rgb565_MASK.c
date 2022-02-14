
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int int16_t ;
typedef int __m128i ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int const FUNC_4 (int const,int) ;
 int const FUNC_5 (int const,int) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(void *VAR_0, const void *VAR_1,
      int VAR_2, int VAR_3,
      int VAR_4, int VAR_5)
{
   int VAR_6;
   const uint16_t *VAR_7 = (const uint16_t*)VAR_1;
   uint16_t *VAR_8 = (uint16_t*)VAR_0;


   int VAR_9 = VAR_2 - 7;

   const __m128i VAR_10 = FUNC_3(
         (int16_t)((0x1f << 11) | (0x1f << 6)));
   const __m128i VAR_11 = FUNC_3(0x1f);
   const __m128i VAR_12 = FUNC_3(1 << 5);


   for (VAR_6 = 0; VAR_6 < VAR_3;
         VAR_6++, VAR_8 += VAR_4 >> 1, VAR_7 += VAR_5 >> 1)
   {
      int VAR_13 = 0;

      for (; VAR_13 < VAR_9; VAR_13 += 8)
      {
         const __m128i VAR_14 = FUNC_1((const __m128i*)(VAR_7 + VAR_13));
         __m128i VAR_15 = FUNC_0(FUNC_4(VAR_14, 1), VAR_10);
         __m128i VAR_16 = FUNC_0(VAR_14, VAR_11);
         __m128i VAR_17 = FUNC_0(FUNC_5(VAR_14, 4), VAR_12);
         FUNC_6((__m128i*)(VAR_8 + VAR_13),
               FUNC_2(VAR_15, FUNC_2(VAR_16, VAR_17)));
      }


      for (; VAR_13 < VAR_2; VAR_13++)
      {
         uint16_t VAR_18 = VAR_7[VAR_13];
         uint16_t VAR_19 = (VAR_18 << 1) & ((0x1f << 11) | (0x1f << 6));
         uint16_t VAR_20 = VAR_18 & 0x1f;
         uint16_t VAR_21 = (VAR_18 >> 4) & (1 << 5);
         VAR_8[VAR_13] = VAR_19 | VAR_20 | VAR_21;
      }
   }
}
