
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float hourglass_rotation; int hourglass_timer; } ;
typedef TYPE_1__ menu_widget_msg_t ;
struct TYPE_5__ {TYPE_1__* userdata; int duration; int cb; } ;
typedef TYPE_2__ menu_timer_ctx_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
   menu_timer_ctx_entry_t VAR_3;
   menu_widget_msg_t *VAR_4 = (menu_widget_msg_t*) VAR_2;

   VAR_4->hourglass_rotation = 0.0f;

   VAR_3.cb = VAR_1;
   VAR_3.duration = VAR_0;
   VAR_3.userdata = VAR_4;

   FUNC_0(&VAR_4->hourglass_timer, &VAR_3);
}
