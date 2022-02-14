
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int list_text; int list_text_highlighted; int list_hint_text; int list_hint_text_highlighted; float landscape_border_shadow_opacity; float* landscape_border_shadow_left; float* landscape_border_shadow_right; int missing_thumbnail_icon; int surface_background; int scrollbar; int list_switch_off_background; int list_switch_off; int list_switch_on_background; int list_switch_on; int list_icon; int list_highlighted_background; } ;
struct TYPE_5__ {float transition_alpha; scalar_t__ landscape_entry_margin; float transition_x_offset; TYPE_1__ colors; } ;
typedef TYPE_2__ materialui_handle_t ;


 int FUNC_0 (int ,float) ;

__attribute__((used)) static void FUNC_1(materialui_handle_t *VAR_0)
{
   if (VAR_0->transition_alpha < 1.0f)
   {

      VAR_0->colors.list_text = (VAR_0->colors.list_text | 0xFF);
      VAR_0->colors.list_text_highlighted = (VAR_0->colors.list_text_highlighted | 0xFF);
      VAR_0->colors.list_hint_text = (VAR_0->colors.list_hint_text | 0xFF);
      VAR_0->colors.list_hint_text_highlighted = (VAR_0->colors.list_hint_text_highlighted | 0xFF);


      FUNC_0(VAR_0->colors.list_highlighted_background, 1.0f);
      FUNC_0(VAR_0->colors.list_icon, 1.0f);
      FUNC_0(VAR_0->colors.list_switch_on, 1.0f);
      FUNC_0(VAR_0->colors.list_switch_on_background, 1.0f);
      FUNC_0(VAR_0->colors.list_switch_off, 1.0f);
      FUNC_0(VAR_0->colors.list_switch_off_background, 1.0f);
      FUNC_0(VAR_0->colors.scrollbar, 1.0f);
      FUNC_0(VAR_0->colors.surface_background, 1.0f);
      FUNC_0(VAR_0->colors.missing_thumbnail_icon, 1.0f);




      if ((VAR_0->landscape_entry_margin != 0) &&
          (VAR_0->transition_x_offset != 0.0f))
      {
         float VAR_1 =
               VAR_0->colors.landscape_border_shadow_opacity;

         VAR_0->colors.landscape_border_shadow_left[7] = VAR_1;
         VAR_0->colors.landscape_border_shadow_left[15] = VAR_1;
         VAR_0->colors.landscape_border_shadow_right[3] = VAR_1;
         VAR_0->colors.landscape_border_shadow_right[11] = VAR_1;
      }
   }
}
