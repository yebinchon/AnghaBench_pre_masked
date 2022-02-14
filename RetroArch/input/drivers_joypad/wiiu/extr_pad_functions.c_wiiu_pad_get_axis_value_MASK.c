
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int int16_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;






 size_t VAR_4 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int16_t FUNC_1(int32_t VAR_5,
      int16_t VAR_6[3][2], bool VAR_7)
{
   int16_t VAR_8 = 0;

   switch(VAR_5)
   {
      case 133:
         VAR_8 = VAR_6[VAR_2][VAR_0];
         break;
      case 132:
         VAR_8 = VAR_6[VAR_2][VAR_1];
         break;
      case 131:
         VAR_8 = VAR_6[VAR_3][VAR_0];
         break;
      case 130:
         VAR_8 = VAR_6[VAR_3][VAR_1];
         break;
      case 129:
         return VAR_6[VAR_4][VAR_0];
      case 128:
         return VAR_6[VAR_4][VAR_1];
   }

   return FUNC_0(VAR_8, VAR_7);
}
