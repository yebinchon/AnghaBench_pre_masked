
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int on_sys_bar; int on_header; int list_text; int list_text_highlighted; int list_hint_text; int list_hint_text_highlighted; int sys_bar_background; int title_bar_background; int list_background; int list_highlighted_background; int nav_bar_background; int surface_background; int thumbnail_background; int list_icon; int list_switch_on; int list_switch_on_background; int list_switch_off; int list_switch_off_background; int nav_bar_icon_active; int nav_bar_icon_passive; int nav_bar_icon_disabled; int header_shadow; int landscape_border_shadow; int scrollbar; int divider; int screen_fade; float screen_fade_opacity; int missing_thumbnail_icon; int landscape_border_shadow_opacity; int header_shadow_opacity; } ;
typedef TYPE_2__ materialui_theme_t ;
struct TYPE_6__ {int sys_bar_text; int header_text; int list_text; int list_text_highlighted; int list_hint_text; int list_hint_text_highlighted; int landscape_border_shadow_opacity; int * landscape_border_shadow_right; int * landscape_border_shadow_left; int * header_shadow; int * missing_thumbnail_icon; int * screen_fade; int * divider; int * scrollbar; int * nav_bar_icon_disabled; int * nav_bar_icon_passive; int * nav_bar_icon_active; int * list_switch_off_background; int * list_switch_off; int * list_switch_on_background; int * list_switch_on; int * list_icon; int * header_icon; int * sys_bar_icon; int * thumbnail_background; int * surface_background; int * nav_bar_background; int * list_highlighted_background; int * list_background; int * title_bar_background; int * sys_bar_background; } ;
struct TYPE_8__ {TYPE_1__ colors; } ;
typedef TYPE_3__ materialui_handle_t ;
typedef enum materialui_color_theme { ____Placeholder_materialui_color_theme } materialui_color_theme ;


 int FUNC_0 (int,int *,float) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(
      materialui_handle_t *VAR_0, enum materialui_color_theme VAR_1)
{
   const materialui_theme_t *VAR_2 = FUNC_1(VAR_1);




   VAR_0->colors.sys_bar_text = (VAR_2->on_sys_bar << 8) | 0xFF;
   VAR_0->colors.header_text = (VAR_2->on_header << 8) | 0xFF;
   VAR_0->colors.list_text = (VAR_2->list_text << 8) | 0xFF;
   VAR_0->colors.list_text_highlighted = (VAR_2->list_text_highlighted << 8) | 0xFF;
   VAR_0->colors.list_hint_text = (VAR_2->list_hint_text << 8) | 0xFF;
   VAR_0->colors.list_hint_text_highlighted = (VAR_2->list_hint_text_highlighted << 8) | 0xFF;


   FUNC_0(
            VAR_2->sys_bar_background,
            VAR_0->colors.sys_bar_background, 1.0f);
   FUNC_0(
            VAR_2->title_bar_background,
            VAR_0->colors.title_bar_background, 1.0f);
   FUNC_0(
            VAR_2->list_background,
            VAR_0->colors.list_background, 1.0f);
   FUNC_0(
            VAR_2->list_highlighted_background,
            VAR_0->colors.list_highlighted_background, 1.0f);
   FUNC_0(
            VAR_2->nav_bar_background,
            VAR_0->colors.nav_bar_background, 1.0f);
   FUNC_0(
            VAR_2->surface_background,
            VAR_0->colors.surface_background, 1.0f);
   FUNC_0(
            VAR_2->thumbnail_background,
            VAR_0->colors.thumbnail_background, 1.0f);


   FUNC_0(
            VAR_2->on_sys_bar,
            VAR_0->colors.sys_bar_icon, 1.0f);
   FUNC_0(
            VAR_2->on_header,
            VAR_0->colors.header_icon, 1.0f);


   FUNC_0(
            VAR_2->list_icon,
            VAR_0->colors.list_icon, 1.0f);
   FUNC_0(
            VAR_2->list_switch_on,
            VAR_0->colors.list_switch_on, 1.0f);
   FUNC_0(
            VAR_2->list_switch_on_background,
            VAR_0->colors.list_switch_on_background, 1.0f);
   FUNC_0(
            VAR_2->list_switch_off,
            VAR_0->colors.list_switch_off, 1.0f);
   FUNC_0(
            VAR_2->list_switch_off_background,
            VAR_0->colors.list_switch_off_background, 1.0f);


   FUNC_0(
            VAR_2->nav_bar_icon_active,
            VAR_0->colors.nav_bar_icon_active, 1.0f);
   FUNC_0(
            VAR_2->nav_bar_icon_passive,
            VAR_0->colors.nav_bar_icon_passive, 1.0f);
   FUNC_0(
            VAR_2->nav_bar_icon_disabled,
            VAR_0->colors.nav_bar_icon_disabled, 1.0f);


   FUNC_0(
            VAR_2->header_shadow,
            VAR_0->colors.header_shadow, 0.0f);
   FUNC_0(
            VAR_2->landscape_border_shadow,
            VAR_0->colors.landscape_border_shadow_left, 0.0f);
   FUNC_0(
            VAR_2->landscape_border_shadow,
            VAR_0->colors.landscape_border_shadow_right, 0.0f);
   FUNC_0(
            VAR_2->scrollbar,
            VAR_0->colors.scrollbar, 1.0f);
   FUNC_0(
            VAR_2->divider,
            VAR_0->colors.divider, 1.0f);
   FUNC_0(
            VAR_2->screen_fade,
            VAR_0->colors.screen_fade, VAR_2->screen_fade_opacity);
   FUNC_0(
            VAR_2->missing_thumbnail_icon,
            VAR_0->colors.missing_thumbnail_icon, 1.0f);



   VAR_0->colors.header_shadow[11] = VAR_2->header_shadow_opacity;
   VAR_0->colors.header_shadow[15] = VAR_2->header_shadow_opacity;
   VAR_0->colors.landscape_border_shadow_left[7] = VAR_2->landscape_border_shadow_opacity;
   VAR_0->colors.landscape_border_shadow_left[15] = VAR_2->landscape_border_shadow_opacity;
   VAR_0->colors.landscape_border_shadow_right[3] = VAR_2->landscape_border_shadow_opacity;
   VAR_0->colors.landscape_border_shadow_right[11] = VAR_2->landscape_border_shadow_opacity;
   VAR_0->colors.landscape_border_shadow_opacity = VAR_2->landscape_border_shadow_opacity;
}
