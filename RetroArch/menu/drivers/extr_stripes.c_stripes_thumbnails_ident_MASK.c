
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char menu_thumbnails; char menu_left_thumbnails; } ;
struct TYPE_5__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(char VAR_1)
{
   char VAR_2 = 0;
   settings_t *VAR_3 = FUNC_0();

   if (VAR_1 == 'R')
      VAR_2 = VAR_3->uints.menu_thumbnails;
   if (VAR_1 == 'L')
      VAR_2 = VAR_3->uints.menu_left_thumbnails;

   switch (VAR_2)
   {
      case 1:
         return "Named_Snaps";
      case 2:
         return "Named_Titles";
      case 3:
         return "Named_Boxarts";
      case 0:
      default:
         break;
   }

   return FUNC_1(VAR_0);
}
