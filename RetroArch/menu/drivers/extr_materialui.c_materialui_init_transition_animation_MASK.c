
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ menu_materialui_transition_animation; } ;
struct TYPE_12__ {TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
typedef void* menu_animation_ctx_tag ;
struct TYPE_13__ {float target_value; float* subject; int * userdata; int * cb; void* duration; void* tag; void* easing_enum; } ;
typedef TYPE_4__ menu_animation_ctx_entry_t ;
struct TYPE_11__ {scalar_t__ active_menu_tab_index; scalar_t__ last_active_menu_tab_index; scalar_t__ menu_navigation_wrapped; } ;
struct TYPE_14__ {float transition_alpha; float transition_x_offset; size_t last_stack_size; TYPE_2__ nav_bar; scalar_t__ menu_stack_flushed; } ;
typedef TYPE_5__ materialui_handle_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 size_t FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(
      materialui_handle_t *VAR_6, settings_t *VAR_7)
{
   size_t VAR_8 = FUNC_0(VAR_6, VAR_4);
   menu_animation_ctx_tag VAR_9 = (uintptr_t)&VAR_6->transition_alpha;
   menu_animation_ctx_tag VAR_10 = (uintptr_t)&VAR_6->transition_x_offset;
   menu_animation_ctx_entry_t VAR_11;
   menu_animation_ctx_entry_t VAR_12;



   if (VAR_7->uints.menu_materialui_transition_animation ==
         VAR_2)
   {
      VAR_6->transition_alpha = 1.0f;
      VAR_6->transition_x_offset = 0.0f;
      VAR_6->last_stack_size = VAR_8;
      return;
   }







   FUNC_1(&VAR_9);
   VAR_6->transition_alpha = 0.0f;


   VAR_11.easing_enum = VAR_0;
   VAR_11.tag = VAR_9;
   VAR_11.duration = VAR_5;
   VAR_11.target_value = 1.0f;
   VAR_11.subject = &VAR_6->transition_alpha;
   VAR_11.cb = ((void*)0);
   VAR_11.userdata = ((void*)0);


   FUNC_2(&VAR_11);





   FUNC_1(&VAR_10);
   VAR_6->transition_x_offset = 0.0f;





   if (VAR_6->menu_stack_flushed)
   {
      if (VAR_7->uints.menu_materialui_transition_animation !=
               VAR_1)
         VAR_6->transition_x_offset = -1.0f;
   }

   else if (VAR_8 > VAR_6->last_stack_size)
   {
      if (VAR_7->uints.menu_materialui_transition_animation ==
               VAR_3)
         VAR_6->transition_x_offset = 1.0f;
   }

   else if (VAR_8 < VAR_6->last_stack_size)
   {
      if (VAR_7->uints.menu_materialui_transition_animation ==
               VAR_3)
         VAR_6->transition_x_offset = -1.0f;
   }


   else if ((VAR_8 == 1) &&
            (VAR_7->uints.menu_materialui_transition_animation !=
                  VAR_1))
   {



      if (VAR_6->nav_bar.active_menu_tab_index < VAR_6->nav_bar.last_active_menu_tab_index)
      {
         if (VAR_6->nav_bar.menu_navigation_wrapped)
            VAR_6->transition_x_offset = 1.0f;
         else
            VAR_6->transition_x_offset = -1.0f;
      }
      else if (VAR_6->nav_bar.active_menu_tab_index > VAR_6->nav_bar.last_active_menu_tab_index)
      {
         if (VAR_6->nav_bar.menu_navigation_wrapped)
            VAR_6->transition_x_offset = -1.0f;
         else
            VAR_6->transition_x_offset = 1.0f;
      }
   }

   VAR_6->last_stack_size = VAR_8;

   if (VAR_6->transition_x_offset != 0.0f)
   {

      VAR_12.easing_enum = VAR_0;
      VAR_12.tag = VAR_10;
      VAR_12.duration = VAR_5;
      VAR_12.target_value = 0.0f;
      VAR_12.subject = &VAR_6->transition_x_offset;
      VAR_12.cb = ((void*)0);
      VAR_12.userdata = ((void*)0);


      FUNC_2(&VAR_12);
   }
}
