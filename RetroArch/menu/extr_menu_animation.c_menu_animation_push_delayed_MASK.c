
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int duration; TYPE_2__* userdata; int cb; } ;
typedef TYPE_1__ menu_timer_ctx_entry_t ;
struct TYPE_5__ {int timer; int entry; } ;
typedef TYPE_2__ menu_delayed_animation_t ;
typedef int menu_animation_ctx_entry_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;

void FUNC_3(unsigned VAR_1, menu_animation_ctx_entry_t *VAR_2)
{
   menu_timer_ctx_entry_t VAR_3;
   menu_delayed_animation_t *VAR_4 = (menu_delayed_animation_t*) FUNC_0(sizeof(menu_delayed_animation_t));

   FUNC_1(&VAR_4->entry, VAR_2, sizeof(menu_animation_ctx_entry_t));

   VAR_3.cb = VAR_0;
   VAR_3.duration = VAR_1;
   VAR_3.userdata = VAR_4;

   FUNC_2(&VAR_4->timer, &VAR_3);
}
