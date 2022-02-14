
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LexerState ;
typedef char Codepoint ;


 char VAR_0 ;
 int VAR_1 ;
__attribute__((used)) static LexerState FUNC_0(LexerState VAR_2, Codepoint VAR_3)
{
   switch (VAR_2)
   {
      case 128:
         if (VAR_3 == '-')
            VAR_2 = 134;
         else if (VAR_3 == '0')
            VAR_2 = 135;
         else if (VAR_3 >= '1' && VAR_3 <= '9')
            VAR_2 = 132;
         else
            VAR_2 = VAR_1;
         break;

      case 134:
         if (VAR_3 == '0')
            VAR_2 = 136;
         else if (VAR_3 >= '1' && VAR_3 <= '9')
            VAR_2 = 132;
         else
            VAR_2 = VAR_1;
         break;

      case 135:
      case 136:
         if (VAR_3 == '.')
            VAR_2 = 139;
         else if (VAR_3 == 'e' || VAR_3 == 'E')
            VAR_2 = 138;
         else if ((VAR_3 == 'x' || VAR_3 == 'X') && VAR_2 == 135)
            VAR_2 = 133;
         else if (VAR_3 == VAR_0)
            VAR_2 = 128;
         else
            VAR_2 = VAR_1;
         break;

      case 133:
         if ((VAR_3 >= '0' && VAR_3 <= '9') || (VAR_3 >= 'A' && VAR_3 <= 'F') || (VAR_3 >= 'a' && VAR_3 <= 'f'))
            VAR_2 = 129;
         else
            VAR_2 = VAR_1;
         break;

      case 129:
         if ((VAR_3 >= '0' && VAR_3 <= '9') || (VAR_3 >= 'A' && VAR_3 <= 'F') || (VAR_3 >= 'a' && VAR_3 <= 'f'))
         {

         }
         else if (VAR_3 == VAR_0)
            VAR_2 = 128;
         else
            VAR_2 = VAR_1;
         break;

      case 132:
         if (VAR_3 >= '0' && VAR_3 <= '9')
         {

         }
         else if (VAR_3 == '.')
            VAR_2 = 139;
         else if (VAR_3 == 'e' || VAR_3 == 'E')
            VAR_2 = 138;
         else if (VAR_3 == VAR_0)
            VAR_2 = 128;
         else
            VAR_2 = VAR_1;
         break;

      case 139:
         if (VAR_3 >= '0' && VAR_3 <= '9')
            VAR_2 = 130;
         else
            VAR_2 = VAR_1;
         break;

      case 130:
         if (VAR_3 >= '0' && VAR_3 <= '9')
         {

         }
         else if (VAR_3 == 'e' || VAR_3 == 'E')
            VAR_2 = 138;
         else if (VAR_3 == VAR_0)
            VAR_2 = 128;
         else
            VAR_2 = VAR_1;
         break;

      case 138:
         if (VAR_3 == '+' || VAR_3 == '-')
            VAR_2 = 137;
         else if (VAR_3 >= '0' && VAR_3 <= '9')
            VAR_2 = 131;
         else
            VAR_2 = VAR_1;
         break;

      case 137:
         if (VAR_3 >= '0' && VAR_3 <= '9')
            VAR_2 = 131;
         else
            VAR_2 = VAR_1;
         break;

      case 131:
         if (VAR_3 >= '0' && VAR_3 <= '9')
         {

         }
         else if (VAR_3 == VAR_0)
            VAR_2 = 128;
         else
            VAR_2 = VAR_1;
         break;
   }
   return VAR_2;
}
