
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct menu_animation_ctx_entry {float* subject; float target_value; int * userdata; void* tag; void* easing_enum; void* duration; int * cb; } ;
struct TYPE_9__ {float cursor_alpha; int scroll_y_sidebar; } ;
struct TYPE_8__ {int header_height; int sidebar_entry_height; unsigned int footer_height; float sidebar_padding_vertical; } ;
struct TYPE_10__ {unsigned int categories_selection_ptr; unsigned int categories_active_idx_old; unsigned int system_tab_end; size_t* tabs; TYPE_2__ animations; TYPE_1__ dimensions; int cursor_in_sidebar; int cursor_in_sidebar_old; } ;
typedef TYPE_3__ ozone_handle_t ;
typedef void* menu_animation_ctx_tag ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (struct menu_animation_ctx_entry*) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 float FUNC_3 (TYPE_3__*) ;
 float FUNC_4 (TYPE_3__*) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 (int *,unsigned int*) ;

void FUNC_6(ozone_handle_t *VAR_6, unsigned VAR_7)
{
   unsigned VAR_8;

   struct menu_animation_ctx_entry VAR_9;

   menu_animation_ctx_tag VAR_10;

   float VAR_11;
   float VAR_12;
   float VAR_13;
   float VAR_14;
   float VAR_15;
   float VAR_16;

   FUNC_5(((void*)0), &VAR_8);

   VAR_10 = (uintptr_t)VAR_6;

   if (VAR_6->categories_selection_ptr != VAR_7)
   {
      VAR_6->categories_active_idx_old = VAR_6->categories_selection_ptr;
      VAR_6->categories_selection_ptr = VAR_7;

      VAR_6->cursor_in_sidebar_old = VAR_6->cursor_in_sidebar;

      FUNC_0(&VAR_10);
   }


   VAR_6->animations.cursor_alpha = 0.0f;

   VAR_9.cb = ((void*)0);
   VAR_9.duration = VAR_0;
   VAR_9.easing_enum = VAR_1;
   VAR_9.subject = &VAR_6->animations.cursor_alpha;
   VAR_9.tag = VAR_10;
   VAR_9.target_value = 1.0f;
   VAR_9.userdata = ((void*)0);

   FUNC_1(&VAR_9);


   VAR_11 = 0;
   VAR_12 = FUNC_3(VAR_6);
   VAR_13 = VAR_6->dimensions.header_height + 1 + VAR_6->animations.scroll_y_sidebar + VAR_12 + VAR_6->dimensions.sidebar_entry_height / 2;
   VAR_14 = VAR_8 - (VAR_6->dimensions.header_height + 1) - VAR_6->dimensions.footer_height;
   VAR_15 = VAR_8/2;
   VAR_16 = FUNC_4(VAR_6);

   if (VAR_13 != VAR_15)
      VAR_11 = VAR_6->animations.scroll_y_sidebar - (VAR_13 - VAR_15);

   if (VAR_11 + VAR_16 < VAR_14)
      VAR_11 = VAR_14 - VAR_16 - VAR_6->dimensions.sidebar_padding_vertical;

   if (VAR_11 > 0)
      VAR_11 = 0;

   VAR_9.cb = ((void*)0);
   VAR_9.duration = VAR_0;
   VAR_9.easing_enum = VAR_1;
   VAR_9.subject = &VAR_6->animations.scroll_y_sidebar;
   VAR_9.tag = VAR_10;
   VAR_9.target_value = VAR_11;
   VAR_9.userdata = ((void*)0);

   FUNC_1(&VAR_9);

   if (VAR_7 > VAR_6->system_tab_end)
   {
      FUNC_2(VAR_6, VAR_2, VAR_3);
   }
   else
   {
      FUNC_2(VAR_6, VAR_4[VAR_6->tabs[VAR_7]], VAR_5[VAR_6->tabs[VAR_7]]);
   }
}
