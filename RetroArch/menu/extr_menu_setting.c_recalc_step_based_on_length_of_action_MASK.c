
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {float step; } ;
typedef TYPE_2__ rarch_setting_t ;
struct TYPE_6__ {scalar_t__ action_press_time; } ;
struct TYPE_8__ {TYPE_1__ menu; } ;
typedef TYPE_3__ global_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_0 () ;

__attribute__((used)) static float FUNC_1(rarch_setting_t *VAR_7)
{
   float VAR_8 = VAR_7->step;
   global_t *VAR_9 = FUNC_0();

   if ( VAR_9 )
   {
      if ( VAR_9->menu.action_press_time > VAR_3)
         VAR_8 = VAR_7->step*1000000.0f;
      else if ( VAR_9->menu.action_press_time > VAR_2)
         VAR_8 = VAR_7->step*100000.0f;
      else if ( VAR_9->menu.action_press_time > VAR_1)
         VAR_8 = VAR_7->step*10000.0f;
      else if ( VAR_9->menu.action_press_time > VAR_0)
         VAR_8 = VAR_7->step*1000.0f;
      else if ( VAR_9->menu.action_press_time > VAR_6)
         VAR_8 = VAR_7->step*100.0f;
      else if ( VAR_9->menu.action_press_time > VAR_5)
         VAR_8 = VAR_7->step*10.0f;
      else if ( VAR_9->menu.action_press_time > VAR_4)
         VAR_8 = VAR_7->step*5.0f;
      else
         VAR_8 = VAR_7->step;
   }
   return VAR_8 < VAR_7->step ? VAR_7->step : VAR_8;
}
