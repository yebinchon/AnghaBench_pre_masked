
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int __m128i ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static size_t FUNC_4(const uint16_t *VAR_0, const uint16_t *VAR_1)
{

   const __m128i *VAR_2 = (const __m128i*)VAR_0;
   const __m128i *VAR_3 = (const __m128i*)VAR_1;

   for (;;)
   {
      __m128i VAR_4 = FUNC_1(VAR_2);
      __m128i VAR_5 = FUNC_1(VAR_3);
      __m128i VAR_6 = FUNC_0(VAR_4, VAR_5);
      uint32_t VAR_7 = FUNC_2(VAR_6);

      if (VAR_7 != 0xffff)
      {
         size_t VAR_8 = (((uint8_t*)VAR_2 - (uint8_t*)VAR_0) |
               (FUNC_3(~VAR_7))) >> 1;
         return VAR_8 | (VAR_0[VAR_8] == VAR_1[VAR_8]);
      }

      VAR_2++;
      VAR_3++;
   }
}
