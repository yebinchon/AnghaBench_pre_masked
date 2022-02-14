
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct menu_animation_ctx_entry {uintptr_t tag; float* subject; float target_value; int (* cb ) (TYPE_5__*) ;int duration; TYPE_5__* userdata; int easing_enum; } ;
struct TYPE_11__ {scalar_t__ ozone_collapse_sidebar; } ;
struct TYPE_14__ {TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_13__ {float sidebar_width; float sidebar_width_collapsed; float sidebar_width_normal; } ;
struct TYPE_12__ {float sidebar_text_alpha; } ;
struct TYPE_15__ {int sidebar_collapsed; TYPE_3__ dimensions; TYPE_2__ animations; scalar_t__ cursor_in_sidebar; } ;
typedef TYPE_5__ ozone_handle_t ;
typedef uintptr_t menu_animation_ctx_tag ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 () ;
 int FUNC_1 (uintptr_t*) ;
 int FUNC_2 (struct menu_animation_ctx_entry*) ;
 int FUNC_3 (TYPE_5__*,int,int) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*) ;

void FUNC_6(ozone_handle_t *VAR_2, bool VAR_3)
{

   settings_t *VAR_4 = FUNC_0();
   bool VAR_5 = FUNC_4(VAR_2, 0);
   menu_animation_ctx_tag VAR_6 = (uintptr_t) &VAR_2->sidebar_collapsed;

   struct menu_animation_ctx_entry VAR_7;

   VAR_7.easing_enum = VAR_1;
   VAR_7.tag = VAR_6;
   VAR_7.userdata = VAR_2;
   VAR_7.duration = VAR_0;

   FUNC_1(&VAR_6);


   if (VAR_4->bools.ozone_collapse_sidebar || (VAR_5 && !VAR_2->cursor_in_sidebar))
   {
      if (VAR_3)
      {
         VAR_7.cb = FUNC_5;


         VAR_7.subject = &VAR_2->animations.sidebar_text_alpha;
         VAR_7.target_value = 0.0f;

         FUNC_2(&VAR_7);


         VAR_7.subject = &VAR_2->dimensions.sidebar_width;
         VAR_7.target_value = VAR_2->dimensions.sidebar_width_collapsed;

         FUNC_2(&VAR_7);
      }
      else
      {
         VAR_2->animations.sidebar_text_alpha = 0.0f;
         VAR_2->dimensions.sidebar_width = VAR_2->dimensions.sidebar_width_collapsed;
         FUNC_5(VAR_2);
      }
   }

   else if (VAR_2->cursor_in_sidebar || (!VAR_5 && !VAR_4->bools.ozone_collapse_sidebar))
   {
      if (VAR_3)
      {
         VAR_2->sidebar_collapsed = 0;

         VAR_7.cb = ((void*)0);


         VAR_7.subject = &VAR_2->animations.sidebar_text_alpha;
         VAR_7.target_value = 1.0f;

         FUNC_2(&VAR_7);


         VAR_7.subject = &VAR_2->dimensions.sidebar_width;
         VAR_7.target_value = VAR_2->dimensions.sidebar_width_normal;

         FUNC_2(&VAR_7);
      }
      else
      {
         VAR_2->animations.sidebar_text_alpha = 1.0f;
         VAR_2->dimensions.sidebar_width = VAR_2->dimensions.sidebar_width_normal;
         VAR_2->sidebar_collapsed = 0;
      }
   }

   FUNC_3(VAR_2, VAR_5, VAR_3);
}
