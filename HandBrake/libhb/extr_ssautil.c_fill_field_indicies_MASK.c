
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* underline_index; void* italic_index; void* bold_index; void* bg_color_index; void* ol_color_index; void* alt_color_index; void* fg_color_index; void* font_size_index; void* font_name_index; void* style_name_index; } ;
typedef TYPE_1__ ssa_style_indicies_t ;


 void* FUNC_0 (char**,char*) ;

__attribute__((used)) static void FUNC_1(char **VAR_0, ssa_style_indicies_t * VAR_1)
{
    VAR_1->style_name_index = FUNC_0(VAR_0, "Name");
    VAR_1->font_name_index = FUNC_0(VAR_0, "Fontname");
    VAR_1->font_size_index = FUNC_0(VAR_0, "Fontsize");
    VAR_1->fg_color_index = FUNC_0(VAR_0, "PrimaryColour");
    VAR_1->alt_color_index = FUNC_0(VAR_0, "SecondaryColour");
    VAR_1->ol_color_index = FUNC_0(VAR_0, "OutlineColour");
    VAR_1->bg_color_index = FUNC_0(VAR_0, "BackColour");
    VAR_1->bold_index = FUNC_0(VAR_0, "Bold");
    VAR_1->italic_index = FUNC_0(VAR_0, "Italic");
    VAR_1->underline_index = FUNC_0(VAR_0, "Underline");
}
