
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int flags; scalar_t__ fg_rgb; scalar_t__ fg_alpha; } ;
struct TYPE_7__ {int style_start; scalar_t__ flush; TYPE_3__ out_style; TYPE_1__* in_style; } ;
typedef TYPE_2__ hb_tx3g_style_context_t ;
typedef TYPE_3__ hb_subtitle_style_t ;
struct TYPE_6__ {TYPE_3__ current; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_1(hb_tx3g_style_context_t *VAR_1, int VAR_2)
{
    hb_subtitle_style_t * VAR_3 = &VAR_1->in_style->current;


    if (((VAR_1->out_style.flags ^ VAR_3->flags) & VAR_0) ||
          VAR_1->out_style.fg_rgb != VAR_3->fg_rgb ||
          VAR_1->out_style.fg_alpha != VAR_3->fg_alpha ||
          VAR_1->flush)
    {
        if (VAR_1->style_start < VAR_2)
        {
            if (!FUNC_0(VAR_1, VAR_2 - 1))
            {
                return 0;
            }
            VAR_1->style_start = VAR_2;
        }
        VAR_1->out_style = *VAR_3;
        VAR_1->flush = 0;
    }

    return 1;
}
