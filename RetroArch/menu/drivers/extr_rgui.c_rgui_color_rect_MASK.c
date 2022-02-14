
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static void FUNC_0(
      uint16_t *VAR_0,
      unsigned VAR_1, unsigned VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      uint16_t VAR_7)
{
   unsigned VAR_8, VAR_9;
   unsigned VAR_10 = VAR_3 <= VAR_1 ? VAR_3 : VAR_1;
   unsigned VAR_11 = VAR_4 <= VAR_2 ? VAR_4 : VAR_2;
   unsigned VAR_12 = VAR_3 + VAR_5;
   unsigned VAR_13 = VAR_4 + VAR_6;

   VAR_12 = VAR_12 <= VAR_1 ? VAR_12 : VAR_1;
   VAR_13 = VAR_13 <= VAR_2 ? VAR_13 : VAR_2;

   for (VAR_9 = VAR_11; VAR_9 < VAR_13; VAR_9++)
   {
      uint16_t *VAR_14 = VAR_0 + (VAR_9 * VAR_1);
      for (VAR_8 = VAR_10; VAR_8 < VAR_12; VAR_8++)
         *(VAR_14 + VAR_8) = VAR_7;
   }
}
