
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double above_subitem_offset; double above_item_offset; double active_item_factor; double under_item_offset; double categories_active_zoom; double categories_passive_zoom; double items_active_zoom; double items_passive_zoom; double categories_active_alpha; double categories_passive_alpha; double items_active_alpha; double items_passive_alpha; double shadow_offset; double font2_size; int margins_screen_top; double thumbnail_width; double left_thumbnail_width; double savestate_thumbnail_width; double cursor_size; double icon_spacing_horizontal; double icon_spacing_vertical; double margins_screen_left; int margins_title_left; int margins_title_top; int margins_title_bottom; double margins_label_left; unsigned int margins_label_top; double margins_setting_left; int margins_dialog; int margins_slice; double icon_size; unsigned int font_size; } ;
typedef TYPE_2__ stripes_handle_t ;
struct TYPE_6__ {int menu_scale_factor; } ;
struct TYPE_8__ {TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;


 int FUNC_0 (char*,double) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3(stripes_handle_t *VAR_0, int VAR_1)
{
   unsigned VAR_2, VAR_3;
   settings_t *VAR_4 = FUNC_1();
   float VAR_5 =
      ((VAR_4->floats.menu_scale_factor * VAR_1) / 1920.0) * 1.5;





   VAR_0->above_subitem_offset = 1.5;
   VAR_0->above_item_offset = -1.0;
   VAR_0->active_item_factor = 2.0;
   VAR_0->under_item_offset = 3.0;

   VAR_0->categories_active_zoom = 1.0;
   VAR_0->categories_passive_zoom = 1.0;
   VAR_0->items_active_zoom = 1.0;
   VAR_0->items_passive_zoom = 1.0;

   VAR_0->categories_active_alpha = 1.0;
   VAR_0->categories_passive_alpha = 0.85;
   VAR_0->items_active_alpha = 1.0;
   VAR_0->items_passive_alpha = 0.85;

   VAR_0->shadow_offset = 1.0;

   VAR_2 = 32.0 * VAR_5;
   VAR_0->font2_size = 24.0 * VAR_5;
   VAR_3 = 128.0 * VAR_5;
   VAR_0->margins_screen_top = (256+32) * VAR_5;

   VAR_0->thumbnail_width = 460.0 * VAR_5;
   VAR_0->left_thumbnail_width = 400.0 * VAR_5;
   VAR_0->savestate_thumbnail_width= 460.0 * VAR_5;
   VAR_0->cursor_size = 64.0;

   VAR_0->icon_spacing_horizontal = 250.0 * VAR_5;
   VAR_0->icon_spacing_vertical = 108.0 * VAR_5;

   VAR_0->margins_screen_left = 136.0 * VAR_5;
   VAR_0->margins_title_left = 60 * VAR_5;
   VAR_0->margins_title_top = 60 * VAR_5 + VAR_2 / 3;
   VAR_0->margins_title_bottom = 60 * VAR_5 - VAR_2 / 3;
   VAR_0->margins_label_left = 85.0 * VAR_5;
   VAR_0->margins_label_top = VAR_2 / 3.0;
   VAR_0->margins_setting_left = 600.0 * VAR_5;
   VAR_0->margins_dialog = 48 * VAR_5;
   VAR_0->margins_slice = 16;
   VAR_0->icon_size = 128.0 * VAR_5;
   VAR_0->font_size = VAR_2;
   FUNC_2(VAR_3);
}
