
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int font_size; int fg_rgb; int alt_rgb; int ol_rgb; int bg_rgb; int fg_alpha; int alt_alpha; int ol_alpha; int bg_alpha; scalar_t__ flags; int font_name; } ;
struct TYPE_5__ {scalar_t__ style_default; scalar_t__ styles_count; size_t event_style_default; TYPE_1__ current; TYPE_1__* styles; } ;
typedef TYPE_2__ hb_subtitle_style_context_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(hb_subtitle_style_context_t * VAR_1)
{
    if (VAR_1->styles != ((void*)0) && VAR_1->style_default < VAR_1->styles_count)
    {
        VAR_1->current = VAR_1->styles[VAR_1->event_style_default];
    }
    else
    {
        VAR_1->current.font_name = VAR_0;
        VAR_1->current.font_size = 72;
        VAR_1->current.flags = 0;
        VAR_1->current.fg_rgb = 0x00FFFFFF;
        VAR_1->current.alt_rgb = 0x00FFFFFF;
        VAR_1->current.ol_rgb = 0x000F0F0F;
        VAR_1->current.bg_rgb = 0x000F0F0F;

        VAR_1->current.fg_alpha = 0xFF;
        VAR_1->current.alt_alpha = 0xFF;
        VAR_1->current.ol_alpha = 0xFF;
        VAR_1->current.bg_alpha = 0xFF;
    }
}
