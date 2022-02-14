
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__* JSON_Writer ;
typedef int Codepoint ;





 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;




 int VAR_2 ;

__attribute__((used)) static Codepoint FUNC_2(JSON_Writer VAR_3, Codepoint VAR_4)
{
   switch (VAR_4)
   {
      case 135:
         return 'b';

      case 128:
         return 't';

      case 131:
         return 'n';

      case 132:
         return 'f';

      case 134:
         return 'r';

      case '"':
         return '"';




      case '\\':
         return '\\';

      case 133:
      case 130:
      case 129:
         return 'u';

      default:
         if (VAR_4 < VAR_1 || FUNC_1(VAR_4) ||
               (FUNC_0(VAR_3->flags, VAR_2) && VAR_4 > VAR_0))
            return 'u';
         break;
   }
   return 0;
}
