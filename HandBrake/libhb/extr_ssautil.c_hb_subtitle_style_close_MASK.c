
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int styles_count; struct TYPE_4__* styles; struct TYPE_4__* font_name; struct TYPE_4__* name; } ;
typedef TYPE_1__ hb_subtitle_style_context_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(hb_subtitle_style_context_t ** VAR_0)
{
    if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
    {
        return;
    }
    hb_subtitle_style_context_t * VAR_1 = *VAR_0;

    if (VAR_1->styles != ((void*)0))
    {
        int VAR_2;

        for (VAR_2 = 0; VAR_2 < VAR_1->styles_count; VAR_2++)
        {
            FUNC_0(VAR_1->styles[VAR_2].name);
            FUNC_0(VAR_1->styles[VAR_2].font_name);
        }
    }
    FUNC_0(VAR_1->styles);
    FUNC_0(VAR_1);
    *VAR_0 = ((void*)0);
}
