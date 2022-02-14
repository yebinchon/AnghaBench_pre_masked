
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int int16_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 unsigned int VAR_1 ;
 int*** VAR_2 ;

__attribute__((used)) static int16_t FUNC_2(unsigned VAR_3, uint32_t VAR_4)
{
   int VAR_5 = 0;
   int VAR_6 = -1;
   bool VAR_7 = 0;
   bool VAR_8 = 0;






   if (FUNC_0(VAR_4) < 4)
   {
      VAR_6 = FUNC_0(VAR_4);
      VAR_7 = 1;
   }
   else if (FUNC_1(VAR_4) < 4)
   {
      VAR_6 = FUNC_1(VAR_4);
      VAR_8 = 1;
   }

   switch(VAR_6)
   {
      case 0:
         VAR_5 = VAR_2[VAR_3][0][0];
         break;
      case 1:
         VAR_5 = VAR_2[VAR_3][0][1];
         break;
      case 2:
         VAR_5 = VAR_2[VAR_3][1][0];
         break;
      case 3:
         VAR_5 = VAR_2[VAR_3][1][1];
         break;
   }

   if (VAR_7 && VAR_5 > 0)
      VAR_5 = 0;
   else if (VAR_8 && VAR_5 < 0)
      VAR_5 = 0;

   return VAR_5;
}
