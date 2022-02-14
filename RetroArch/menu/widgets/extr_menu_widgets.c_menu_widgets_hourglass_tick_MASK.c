
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hourglass_rotation; } ;
typedef TYPE_1__ menu_widget_msg_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_5__ {uintptr_t tag; int target_value; TYPE_1__* userdata; int cb; int * subject; int duration; int easing_enum; } ;
typedef TYPE_2__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(void *VAR_4)
{
   menu_widget_msg_t *VAR_5 = (menu_widget_msg_t*) VAR_4;
   menu_animation_ctx_tag VAR_6 = (uintptr_t) VAR_5;

   menu_animation_ctx_entry_t VAR_7;

   VAR_7.easing_enum = VAR_0;
   VAR_7.tag = VAR_6;
   VAR_7.duration = VAR_1;
   VAR_7.target_value = -(2 * VAR_2);
   VAR_7.subject = &VAR_5->hourglass_rotation;
   VAR_7.cb = VAR_3;
   VAR_7.userdata = VAR_5;

   FUNC_0(&VAR_7);
}
