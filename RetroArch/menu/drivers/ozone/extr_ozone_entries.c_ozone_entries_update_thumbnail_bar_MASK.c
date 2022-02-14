
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct menu_animation_ctx_entry {uintptr_t tag; float* subject; float target_value; TYPE_3__* userdata; int (* cb ) (TYPE_3__*) ;int easing_enum; int duration; } ;
struct TYPE_7__ {float thumbnail_bar_position; } ;
struct TYPE_6__ {float thumbnail_bar_width; } ;
struct TYPE_8__ {int show_thumbnail_bar; int depth; TYPE_2__ animations; TYPE_1__ dimensions; int cursor_in_sidebar; } ;
typedef TYPE_3__ ozone_handle_t ;
typedef uintptr_t menu_animation_ctx_tag ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (uintptr_t*) ;
 int FUNC_1 (struct menu_animation_ctx_entry*) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(ozone_handle_t *VAR_2, bool VAR_3, bool VAR_4)
{
   struct menu_animation_ctx_entry VAR_5;
   menu_animation_ctx_tag VAR_6 = (uintptr_t) &VAR_2->show_thumbnail_bar;

   VAR_5.duration = VAR_0;
   VAR_5.easing_enum = VAR_1;
   VAR_5.tag = VAR_6;
   VAR_5.subject = &VAR_2->animations.thumbnail_bar_position;

   FUNC_0(&VAR_6);


   if (VAR_3 && !VAR_2->cursor_in_sidebar && !VAR_2->show_thumbnail_bar && VAR_2->depth == 1)
   {
      if (VAR_4)
      {
         VAR_2->show_thumbnail_bar = 1;

         VAR_5.cb = ((void*)0);
         VAR_5.userdata = ((void*)0);
         VAR_5.target_value = VAR_2->dimensions.thumbnail_bar_width;

         FUNC_1(&VAR_5);
      }
      else
      {
         VAR_2->animations.thumbnail_bar_position = VAR_2->dimensions.thumbnail_bar_width;
         VAR_2->show_thumbnail_bar = 1;
      }
   }

   else
   {
      if (VAR_4)
      {
         VAR_5.cb = FUNC_2;
         VAR_5.userdata = VAR_2;
         VAR_5.target_value = 0.0f;

         FUNC_1(&VAR_5);
      }
      else
      {
         VAR_2->animations.thumbnail_bar_position = 0.0f;
         FUNC_2(VAR_2);
      }
   }
}
