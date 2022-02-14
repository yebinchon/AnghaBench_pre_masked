
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int expiration_timer_started; int expiration_timer; } ;
typedef TYPE_1__ menu_widget_msg_t ;
struct TYPE_6__ {unsigned int duration; TYPE_1__* userdata; int cb; } ;
typedef TYPE_2__ menu_timer_ctx_entry_t ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(menu_widget_msg_t *VAR_1, unsigned VAR_2)
{
   menu_timer_ctx_entry_t VAR_3;
   if (VAR_1->expiration_timer_started)
      return;

   VAR_3.cb = VAR_0;
   VAR_3.duration = VAR_2;
   VAR_3.userdata = VAR_1;

   FUNC_0(&VAR_1->expiration_timer, &VAR_3);

   VAR_1->expiration_timer_started = 1;
}
