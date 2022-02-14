
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct menu_animation_ctx_entry {float* subject; uintptr_t tag; float target_value; int * userdata; int easing_enum; int duration; int * cb; } ;
struct TYPE_6__ {float cursor_alpha; } ;
struct TYPE_7__ {int cursor_in_sidebar_old; int cursor_in_sidebar; TYPE_1__ animations; int categories_selection_ptr; int categories_active_idx_old; scalar_t__ empty_playlist; } ;
typedef TYPE_2__ ozone_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct menu_animation_ctx_entry*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(ozone_handle_t *VAR_2, uintptr_t VAR_3)
{
   struct menu_animation_ctx_entry VAR_4;

   if (VAR_2->empty_playlist)
      return;

   FUNC_2(VAR_2);

   VAR_2->categories_active_idx_old = VAR_2->categories_selection_ptr;
   VAR_2->cursor_in_sidebar_old = VAR_2->cursor_in_sidebar;
   VAR_2->cursor_in_sidebar = 0;


   VAR_2->animations.cursor_alpha = 0.0f;

   VAR_4.cb = ((void*)0);
   VAR_4.duration = VAR_0;
   VAR_4.easing_enum = VAR_1;
   VAR_4.subject = &VAR_2->animations.cursor_alpha;
   VAR_4.tag = VAR_3;
   VAR_4.target_value = 1.0f;
   VAR_4.userdata = ((void*)0);

   FUNC_0(&VAR_4);

   FUNC_1(VAR_2, 1);
}
