
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int* VAR_3 ;
 int** VAR_4 ;

__attribute__((used)) static void FUNC_1(void)
{
   unsigned VAR_5, VAR_6, VAR_7;


   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
      {
         for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
         {
            uint8_t VAR_8 = 1 << ((VAR_6 + VAR_7 * VAR_1) & 7);
            unsigned VAR_9 = (VAR_6 + VAR_7 * VAR_1) >> 3;


            VAR_4[VAR_5][VAR_6 + (VAR_7 * VAR_1)] = (VAR_3[FUNC_0(VAR_5) + VAR_9] & VAR_8) > 0;
         }
      }
   }
}
