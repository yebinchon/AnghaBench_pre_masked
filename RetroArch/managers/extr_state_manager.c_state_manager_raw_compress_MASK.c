
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (scalar_t__ const*,scalar_t__ const*) ;
 size_t FUNC_1 (scalar_t__ const*,scalar_t__ const*) ;

__attribute__((used)) static size_t FUNC_2(const void *VAR_2,
      const void *VAR_3, size_t VAR_4, void *VAR_5)
{
   const uint16_t *VAR_6 = (const uint16_t*)VAR_2;
   const uint16_t *VAR_7 = (const uint16_t*)VAR_3;
   uint16_t *VAR_8 = (uint16_t*)VAR_5;
   size_t VAR_9 = (VAR_4 + sizeof(uint16_t) - 1)
      / sizeof(uint16_t);

   while (VAR_9)
   {
      size_t VAR_10, VAR_11;
      size_t VAR_12 = FUNC_0(VAR_6, VAR_7);

      if (VAR_12 >= VAR_9)
         break;

      VAR_6 += VAR_12;
      VAR_7 += VAR_12;
      VAR_9 -= VAR_12;

      if (VAR_12 > VAR_0)
      {
         if (VAR_12 > VAR_1)
         {



            VAR_12 = VAR_1;
         }
         *VAR_8++ = 0;
         *VAR_8++ = VAR_12;
         *VAR_8++ = VAR_12 >> 16;
         continue;
      }

      VAR_11 = FUNC_1(VAR_6, VAR_7);
      if (VAR_11 > VAR_0)
         VAR_11 = VAR_0;

      *VAR_8++ = VAR_11;
      *VAR_8++ = VAR_12;

      for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
         VAR_8[VAR_10] = VAR_6[VAR_10];

      VAR_6 += VAR_11;
      VAR_7 += VAR_11;
      VAR_9 -= VAR_11;
      VAR_8 += VAR_11;
   }

   VAR_8[0] = 0;
   VAR_8[1] = 0;
   VAR_8[2] = 0;

   return (uint8_t*)(VAR_8+3) - (uint8_t*)VAR_5;
}
