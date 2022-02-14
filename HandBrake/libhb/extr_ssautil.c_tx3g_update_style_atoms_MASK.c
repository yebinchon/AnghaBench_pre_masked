
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int flags; int fg_rgb; int fg_alpha; } ;
struct TYPE_7__ {int* buf; } ;
struct TYPE_6__ {int style_atom_count; int style_start; double height; TYPE_1__ out_style; TYPE_4__ style_atoms; } ;
typedef TYPE_2__ hb_tx3g_style_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_1(hb_tx3g_style_context_t *VAR_3, int VAR_4)
{
    uint8_t * VAR_5;
    uint8_t VAR_6 = 0;
    int VAR_7;
    int VAR_8 = 10 + (12 * VAR_3->style_atom_count);
    int VAR_9 = 10 + (12 * (VAR_3->style_atom_count + 1));

    if (!FUNC_0(&VAR_3->style_atoms, VAR_9))
    {
        return 0;
    }
    VAR_5 = VAR_3->style_atoms.buf + VAR_8;

    if (VAR_3->out_style.flags & VAR_0)
        VAR_6 |= 1;
    if (VAR_3->out_style.flags & VAR_1)
        VAR_6 |= 2;
    if (VAR_3->out_style.flags & VAR_2)
        VAR_6 |= 4;

    VAR_5[0] = (VAR_3->style_start >> 8) & 0xff;
    VAR_5[1] = VAR_3->style_start & 0xff;
    VAR_5[2] = (VAR_4 >> 8) & 0xff;
    VAR_5[3] = VAR_4 & 0xff;
    VAR_5[4] = 0;
    VAR_5[5] = 1;
    VAR_5[6] = VAR_6;
    VAR_7 = 0.05 * VAR_3->height;
    if (VAR_7 < 12)
    {
        VAR_7 = 12;
    }
    else if (VAR_7 > 255)
    {
        VAR_7 = 255;
    }
    VAR_5[7] = VAR_7;
    VAR_5[8] = (VAR_3->out_style.fg_rgb >> 16) & 0xff;
    VAR_5[9] = (VAR_3->out_style.fg_rgb >> 8) & 0xff;
    VAR_5[10] = (VAR_3->out_style.fg_rgb) & 0xff;
    VAR_5[11] = VAR_3->out_style.fg_alpha;

    VAR_3->style_atom_count++;

    return 1;
}
