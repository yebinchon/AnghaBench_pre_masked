
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int underline_index; int italic_index; int bold_index; int bg_color_index; int ol_color_index; int alt_color_index; int fg_color_index; int font_size_index; int font_name_index; int style_name_index; } ;
typedef TYPE_1__ ssa_style_indicies_t ;
typedef int hb_subtitle_style_t ;
struct TYPE_7__ {int styles_count; int styles_size; int style_default; int event_style_default; TYPE_3__* styles; } ;
typedef TYPE_2__ hb_subtitle_style_context_t ;
struct TYPE_8__ {int font_size; int fg_rgb; int fg_alpha; int alt_rgb; int alt_alpha; int ol_rgb; int ol_alpha; int bg_rgb; int bg_alpha; int flags; void* font_name; void* name; } ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (char**,int ) ;
 void* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (char const*,char*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_7(hb_subtitle_style_context_t *VAR_4,
                      char ** VAR_5, ssa_style_indicies_t *VAR_6)
{
    const char * VAR_7;
    const char * VAR_8;
    int VAR_9;
    uint32_t VAR_10;
    uint32_t VAR_11;
    uint32_t VAR_12;
    int VAR_13;

    if (VAR_5 == ((void*)0))
    {
        return 0;
    }
    if (VAR_4->styles_count + 1 > VAR_4->styles_size)
    {
        void * VAR_14;
        VAR_4->styles_size = (VAR_4->styles_count + 1) * 2;

        VAR_14 = FUNC_2(VAR_4->styles, VAR_4->styles_size *
                      sizeof(hb_subtitle_style_t));
        if (VAR_14 == ((void*)0))
        {
            return 1;
        }
        VAR_4->styles = VAR_14;
    }
    VAR_13 = VAR_4->styles_count;

    VAR_7 = FUNC_1(VAR_5, VAR_6->style_name_index);
    if (VAR_7 == ((void*)0))
    {
        VAR_7 = "Default";
    }
    if (!FUNC_3(VAR_7, "Default"))
    {
        VAR_4->style_default = VAR_13;
        VAR_4->event_style_default = VAR_4->style_default;
    }
    VAR_4->styles[VAR_13].name = FUNC_4(VAR_7);

    VAR_8 = FUNC_1(VAR_5, VAR_6->font_name_index);
    if (VAR_8 == ((void*)0))
    {
        VAR_8 = VAR_0;
    }
    VAR_4->styles[VAR_13].font_name = FUNC_4(VAR_8);

    VAR_8 = FUNC_1(VAR_5, VAR_6->font_size_index);
    if (VAR_8 == ((void*)0))
    {
        VAR_9 = 72;
    }
    else
    {
        VAR_9 = FUNC_6(VAR_8, ((void*)0), 0);
    }
    VAR_4->styles[VAR_13].font_size = VAR_9;

    VAR_8 = FUNC_1(VAR_5, VAR_6->fg_color_index);
    if (VAR_8 == ((void*)0) || FUNC_5(VAR_8) < 3)
    {
        VAR_10 = 0x00ffffff;
        VAR_11 = 0xff;
    }
    else
    {
        int VAR_15 = FUNC_6(VAR_8+2, ((void*)0), 16);
        VAR_10 = FUNC_0(VAR_15);
        VAR_11 = VAR_15 >> 24;
    }
    VAR_4->styles[VAR_13].fg_rgb = VAR_10;

    VAR_4->styles[VAR_13].fg_alpha = 255 - VAR_11;

    VAR_8 = FUNC_1(VAR_5, VAR_6->alt_color_index);
    if (VAR_8 == ((void*)0) || FUNC_5(VAR_8) < 3)
    {
        VAR_10 = 0x00ffffff;
        VAR_11 = 0xff;
    }
    else
    {
        int VAR_16 = FUNC_6(VAR_8+2, ((void*)0), 16);
        VAR_10 = FUNC_0(VAR_16);
        VAR_11 = VAR_16 >> 24;
    }
    VAR_4->styles[VAR_13].alt_rgb = VAR_10;
    VAR_4->styles[VAR_13].alt_alpha = VAR_11;

    VAR_8 = FUNC_1(VAR_5, VAR_6->ol_color_index);
    if (VAR_8 == ((void*)0) || FUNC_5(VAR_8) < 3)
    {
        VAR_10 = 0x000f0f0f;
        VAR_11 = 0xff;
    }
    else
    {
        int VAR_17 = FUNC_6(VAR_8+2, ((void*)0), 16);
        VAR_10 = FUNC_0(VAR_17);
        VAR_11 = VAR_17 >> 24;
    }
    VAR_4->styles[VAR_13].ol_rgb = VAR_10;
    VAR_4->styles[VAR_13].ol_alpha = VAR_11;

    VAR_8 = FUNC_1(VAR_5, VAR_6->bg_color_index);
    if (VAR_8 == ((void*)0) || FUNC_5(VAR_8) < 3)
    {
        VAR_10 = 0x000f0f0f;
        VAR_11 = 0xff;
    }
    else
    {
        int VAR_18 = FUNC_6(VAR_8+2, ((void*)0), 16);
        VAR_10 = FUNC_0(VAR_18);
        VAR_11 = VAR_18 >> 24;
    }
    VAR_4->styles[VAR_13].bg_rgb = VAR_10;
    VAR_4->styles[VAR_13].bg_alpha = VAR_11;

    VAR_4->styles[VAR_13].flags = 0;

    VAR_8 = FUNC_1(VAR_5, VAR_6->bold_index);
    if (VAR_8 == ((void*)0))
    {
        VAR_12 = VAR_1;
    }
    else
    {
        VAR_12 = FUNC_6(VAR_8, ((void*)0), 0) ? VAR_1 : 0;
    }
    VAR_4->styles[VAR_13].flags |= VAR_12;

    VAR_8 = FUNC_1(VAR_5, VAR_6->italic_index);
    if (VAR_8 == ((void*)0))
    {
        VAR_12 = VAR_2;
    }
    else
    {
        VAR_12 = FUNC_6(VAR_8, ((void*)0), 0) ? VAR_2 : 0;
    }
    VAR_4->styles[VAR_13].flags |= VAR_12;

    VAR_8 = FUNC_1(VAR_5, VAR_6->underline_index);
    if (VAR_8 == ((void*)0))
    {
        VAR_12 = VAR_3;
    }
    else
    {
        VAR_12 = FUNC_6(VAR_8, ((void*)0), 0) ? VAR_3 : 0;
    }
    VAR_4->styles[VAR_13].flags |= VAR_12;

    VAR_4->styles_count = VAR_13 + 1;

    return 0;
}
