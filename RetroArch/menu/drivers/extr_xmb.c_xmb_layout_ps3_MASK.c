
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double above_subitem_offset; double above_item_offset; double active_item_factor; double under_item_offset; double categories_active_zoom; double categories_passive_zoom; double items_active_zoom; double items_passive_zoom; double categories_active_alpha; double categories_passive_alpha; double items_active_alpha; double items_passive_alpha; double shadow_offset; double font2_size; double thumbnail_width; double left_thumbnail_width; double savestate_thumbnail_width; double cursor_size; double icon_spacing_horizontal; double icon_spacing_vertical; int margins_screen_top; double margins_screen_left; int margins_title_left; int margins_title_top; int margins_title_bottom; double margins_label_left; unsigned int margins_label_top; double margins_setting_left; int margins_dialog; int margins_slice; double icon_size; unsigned int font_size; } ;
typedef TYPE_2__ xmb_handle_t ;
struct TYPE_6__ {float menu_scale_factor; } ;
struct TYPE_8__ {TYPE_1__ floats; } ;
typedef TYPE_3__ settings_t ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 double* VAR_0 ;

__attribute__((used)) static void FUNC_2(xmb_handle_t *VAR_1, int VAR_2)
{
   unsigned VAR_3, VAR_4;
   settings_t *VAR_5 = FUNC_0();

   float VAR_6 =
      (VAR_5->floats.menu_scale_factor * (float)VAR_2) / 1920.0f;

   VAR_1->above_subitem_offset = 1.5;
   VAR_1->above_item_offset = -1.0;
   VAR_1->active_item_factor = 3.0;
   VAR_1->under_item_offset = 5.0;

   VAR_1->categories_active_zoom = 1.0;
   VAR_1->categories_passive_zoom = 0.5;
   VAR_1->items_active_zoom = 1.0;
   VAR_1->items_passive_zoom = 0.5;

   VAR_1->categories_active_alpha = 1.0;
   VAR_1->categories_passive_alpha = 0.85;
   VAR_1->items_active_alpha = 1.0;
   VAR_1->items_passive_alpha = 0.85;

   VAR_1->shadow_offset = 2.0;

   VAR_3 = 32.0 * VAR_6;
   VAR_1->font2_size = 24.0 * VAR_6;
   VAR_4 = 128.0 * VAR_6;

   VAR_1->thumbnail_width = 1024.0 * VAR_6;
   VAR_1->left_thumbnail_width = 1024.0 * VAR_6;
   VAR_1->savestate_thumbnail_width= 460.0 * VAR_6;
   VAR_1->cursor_size = 64.0 * VAR_6;

   VAR_1->icon_spacing_horizontal = 200.0 * VAR_6;
   VAR_1->icon_spacing_vertical = 64.0 * VAR_6;

   VAR_1->margins_screen_top = (256+32) * VAR_6;
   VAR_1->margins_screen_left = 336.0 * VAR_6;

   VAR_1->margins_title_left = 60 * VAR_6;
   VAR_1->margins_title_top = 60 * VAR_6 + VAR_3 / 3;
   VAR_1->margins_title_bottom = 60 * VAR_6 - VAR_3 / 3;

   VAR_1->margins_label_left = 85.0 * VAR_6;
   VAR_1->margins_label_top = VAR_3 / 3.0;

   VAR_1->margins_setting_left = 600.0 * VAR_6 * VAR_0[6];
   VAR_1->margins_dialog = 48 * VAR_6;

   VAR_1->margins_slice = 16;

   VAR_1->icon_size = 128.0 * VAR_6;
   VAR_1->font_size = VAR_3;

   FUNC_1(VAR_4);
}
