
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int __m128i ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int const FUNC_4 (int const,int) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(void *VAR_0, const void *VAR_1,
      int VAR_2, int VAR_3,
      int VAR_4, int VAR_5)
{
   int VAR_6;
   const uint16_t *VAR_7 = (const uint16_t*)VAR_1;
   uint16_t *VAR_8 = (uint16_t*)VAR_0;


   int VAR_9 = VAR_2 - 7;
   const __m128i VAR_10 = FUNC_3(0x7fe0);
   const __m128i VAR_11 = FUNC_3(0x1f);


   for (VAR_6 = 0; VAR_6 < VAR_3;
         VAR_6++, VAR_8 += VAR_4 >> 1, VAR_7 += VAR_5 >> 1)
   {
      int VAR_12 = 0;

      for (; VAR_12 < VAR_9; VAR_12 += 8)
      {
         const __m128i VAR_13 = FUNC_1((const __m128i*)(VAR_7 + VAR_12));
         __m128i VAR_14 = FUNC_0(FUNC_4(VAR_13, 1), VAR_10);
         __m128i VAR_15 = FUNC_0(VAR_13, VAR_11);
         FUNC_5((__m128i*)(VAR_8 + VAR_12), FUNC_2(VAR_14, VAR_15));
      }


      for (; VAR_12 < VAR_2; VAR_12++)
      {
         uint16_t VAR_16 = VAR_7[VAR_12];
         uint16_t VAR_17 = (VAR_16 >> 1) & 0x7fe0;
         uint16_t VAR_18 = VAR_16 & 0x1f;
         VAR_8[VAR_12] = VAR_17 | VAR_18;
      }
   }
}
