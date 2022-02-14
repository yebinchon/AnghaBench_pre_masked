
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* init ) () ;} ;
typedef TYPE_2__ ui_companion_driver_t ;
struct TYPE_7__ {scalar_t__ ui_companion_start_on_boot; scalar_t__ ui_companion_toggle; scalar_t__ desktop_menu_enable; } ;
struct TYPE_9__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_10__ {int (* init ) () ;} ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__* VAR_4 ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;

void FUNC_3(void)
{
   settings_t *VAR_7 = VAR_0;

   VAR_2 = (ui_companion_driver_t*)VAR_4[0];
   if (VAR_2)
   {
      if (VAR_7->bools.ui_companion_start_on_boot)
      {
         if (VAR_2->init)
            VAR_3 = VAR_2->init();

         FUNC_2(0);
      }
   }
}
