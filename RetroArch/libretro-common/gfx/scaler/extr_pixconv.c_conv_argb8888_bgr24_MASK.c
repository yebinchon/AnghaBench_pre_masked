
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint32_t ;
typedef int __m128i ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (void**,int ,int ,int ,int ) ;

void FUNC_2(void *VAR_0, const void *VAR_1,
      int VAR_2, int VAR_3,
      int VAR_4, int VAR_5)
{
   int VAR_6;
   const uint32_t *VAR_7 = (const uint32_t*)VAR_1;
   uint8_t *VAR_8 = (uint8_t*)VAR_0;


   int VAR_9 = VAR_2 - 15;


   for (VAR_6 = 0; VAR_6 < VAR_3;
         VAR_6++, VAR_8 += VAR_4, VAR_7 += VAR_5 >> 2)
   {
      uint8_t *VAR_10 = VAR_8;
      int VAR_11 = 0;

      for (; VAR_11 < VAR_9; VAR_11 += 16, VAR_10 += 48)
      {
         __m128i VAR_12 = FUNC_0((const __m128i*)(VAR_7 + VAR_11 + 0));
         __m128i VAR_13 = FUNC_0((const __m128i*)(VAR_7 + VAR_11 + 4));
         __m128i VAR_14 = FUNC_0((const __m128i*)(VAR_7 + VAR_11 + 8));
         __m128i VAR_15 = FUNC_0((const __m128i*)(VAR_7 + VAR_11 + 12));
         FUNC_1(VAR_10, VAR_12, VAR_13, VAR_14, VAR_15);
      }


      for (; VAR_11 < VAR_2; VAR_11++)
      {
         uint32_t VAR_16 = VAR_7[VAR_11];
         *VAR_10++ = (uint8_t)(VAR_16 >> 0);
         *VAR_10++ = (uint8_t)(VAR_16 >> 8);
         *VAR_10++ = (uint8_t)(VAR_16 >> 16);
      }
   }
}
