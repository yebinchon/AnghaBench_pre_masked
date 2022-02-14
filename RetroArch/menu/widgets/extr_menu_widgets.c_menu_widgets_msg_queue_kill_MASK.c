
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dying; float offset_y; float alpha; } ;
typedef TYPE_1__ menu_widget_msg_t ;
struct TYPE_5__ {uintptr_t tag; float* subject; float target_value; int * cb; int * userdata; int easing_enum; int duration; } ;
typedef TYPE_2__ menu_animation_ctx_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (TYPE_2__*) ;
 int * VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(unsigned VAR_7)
{
   menu_animation_ctx_entry_t VAR_8;

   menu_widget_msg_t *VAR_9 = (menu_widget_msg_t*)
      FUNC_0(VAR_2, VAR_7);

   if (!VAR_9)
      return;

   VAR_6 = 1;
   VAR_9->dying = 1;

   VAR_5 = VAR_7;


   VAR_8.cb = ((void*)0);
   VAR_8.duration = VAR_1;
   VAR_8.easing_enum = VAR_0;
   VAR_8.tag = (uintptr_t) VAR_9;
   VAR_8.userdata = ((void*)0);
   VAR_8.subject = &VAR_9->offset_y;
   VAR_8.target_value = VAR_9->offset_y - VAR_4/4;

   FUNC_1(&VAR_8);


   VAR_8.cb = VAR_3;
   VAR_8.subject = &VAR_9->alpha;
   VAR_8.target_value = 0.0f;

   FUNC_1(&VAR_8);


   FUNC_2();
}
