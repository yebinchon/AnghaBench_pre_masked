
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float msg_transition_animation; int * msg_new; int * msg; } ;
typedef TYPE_1__ menu_widget_msg_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   menu_widget_msg_t *VAR_1 = (menu_widget_msg_t*) VAR_0;

   FUNC_0(VAR_1->msg);

   VAR_1->msg = VAR_1->msg_new;
   VAR_1->msg_new = ((void*)0);
   VAR_1->msg_transition_animation = 0.0f;
}
