
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_5__ {uintptr_t tag; float duration; float target_value; int * userdata; int * cb; int * subject; int easing_enum; } ;
typedef TYPE_1__ menu_animation_ctx_entry_t ;
struct TYPE_6__ {int scroll_y; } ;
typedef TYPE_2__ materialui_handle_t ;


 int VAR_0 ;
 int FUNC_0 (uintptr_t*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(
      materialui_handle_t *VAR_1, float VAR_2, float VAR_3)
{
   menu_animation_ctx_tag VAR_4 = (uintptr_t)&VAR_1->scroll_y;
   menu_animation_ctx_entry_t VAR_5;


   FUNC_0(&VAR_4);




   FUNC_2(0.0f);


   VAR_5.easing_enum = VAR_0;
   VAR_5.tag = VAR_4;
   VAR_5.duration = VAR_3;
   VAR_5.target_value = VAR_2;
   VAR_5.subject = &VAR_1->scroll_y;
   VAR_5.cb = ((void*)0);
   VAR_5.userdata = ((void*)0);


   FUNC_1(&VAR_5);
}
