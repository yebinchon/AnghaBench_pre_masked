
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_0 (char*,int) ;





 int FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static const char *FUNC_2(unsigned VAR_5)
{
   int VAR_6 = FUNC_1(VAR_5);
   if (VAR_6 < 0)
      return "unknown";

   switch(VAR_4[VAR_6].type)
   {
      case 129:
         return VAR_3;
      case 132:
         return VAR_0;
      case 130:
         return VAR_1;
      case 128:
         return VAR_2;
      case 131:
      default:
         FUNC_0("[kpad]: Unknown pad type %d\n", VAR_4[VAR_5].type);
         break;
   }

   return "N/A";
}
