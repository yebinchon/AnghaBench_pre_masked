
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float menu_timer_t ;
struct TYPE_5__ {int userdata; int cb; int duration; } ;
typedef TYPE_1__ menu_timer_ctx_entry_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_6__ {uintptr_t tag; float target_value; float* subject; int userdata; int cb; int duration; int easing_enum; } ;
typedef TYPE_2__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (float*) ;

void FUNC_2(menu_timer_t *VAR_1, menu_timer_ctx_entry_t *VAR_2)
{
   menu_animation_ctx_entry_t VAR_3;
   menu_animation_ctx_tag VAR_4 = (uintptr_t) VAR_1;

   FUNC_1(VAR_1);

   *VAR_1 = 0.0f;

   VAR_3.easing_enum = VAR_0;
   VAR_3.tag = VAR_4;
   VAR_3.duration = VAR_2->duration;
   VAR_3.target_value = 1.0f;
   VAR_3.subject = VAR_1;
   VAR_3.cb = VAR_2->cb;
   VAR_3.userdata = VAR_2->userdata;

   FUNC_0(&VAR_3);
}
