
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unfolded; int unfolding; int unfold; } ;
typedef TYPE_1__ menu_widget_msg_t ;
struct TYPE_5__ {uintptr_t tag; float target_value; TYPE_1__* userdata; int * subject; int easing_enum; int duration; int cb; } ;
typedef TYPE_2__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(void *VAR_4)
{
   if (VAR_4)
   {
      menu_widget_msg_t *VAR_5 = (menu_widget_msg_t*) VAR_4;

      menu_animation_ctx_entry_t VAR_6;

      VAR_6.cb = VAR_2;
      VAR_6.duration = VAR_1;
      VAR_6.easing_enum = VAR_0;
      VAR_6.subject = &VAR_5->unfold;
      VAR_6.tag = (uintptr_t) VAR_5;
      VAR_6.target_value = 1.0f;
      VAR_6.userdata = VAR_5;

      FUNC_0(&VAR_6);

      VAR_5->unfolded = 1;
      VAR_5->unfolding = 1;
   }
   else
      VAR_3 = 0;
}
