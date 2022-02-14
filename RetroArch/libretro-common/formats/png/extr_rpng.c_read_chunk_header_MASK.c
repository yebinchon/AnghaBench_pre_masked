
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct png_chunk {int* type; int size; } ;


 int FUNC_0 (int*) ;

__attribute__((used)) static bool FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, struct png_chunk *VAR_2)
{
   unsigned VAR_3;
   uint8_t VAR_4[4];

   VAR_4[0] = '\0';



   if (VAR_1 - VAR_0 < 8)
      return 0;

   for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
      VAR_4[VAR_3] = VAR_0[VAR_3];

   VAR_2->size = FUNC_0(VAR_4);


   if (VAR_0 + 8 + VAR_2->size > VAR_1)
      return 0;

   for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   {
      uint8_t VAR_5 = VAR_0[VAR_3 + 4];



      if ((VAR_5 < 65) || ((VAR_5 > 90) && (VAR_5 < 97)) || (VAR_5 > 122))
         return 0;

      VAR_2->type[VAR_3] = VAR_5;
   }

   return 1;
}
