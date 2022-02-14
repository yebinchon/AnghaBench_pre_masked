
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ alloc; scalar_t__ size; int * buf; } ;
struct TYPE_7__ {int height; int flush; TYPE_4__* in_style; int out_style; scalar_t__ style_start; scalar_t__ style_atom_count; TYPE_1__ style_atoms; } ;
typedef TYPE_2__ hb_tx3g_style_context_t ;
struct TYPE_8__ {int current; } ;


 TYPE_2__* FUNC_0 (int,int) ;
 TYPE_4__* FUNC_1 (char const*) ;

hb_tx3g_style_context_t *
FUNC_2(int VAR_0, const char * VAR_1)
{
    hb_tx3g_style_context_t * VAR_2;

    VAR_2 = FUNC_0(1, sizeof(*VAR_2));
    if (VAR_2 == ((void*)0))
    {
        return ((void*)0);
    }
    VAR_2->in_style = FUNC_1(VAR_1);
    VAR_2->height = VAR_0;
    VAR_2->style_atoms.buf = ((void*)0);
    VAR_2->style_atoms.size = 0;
    VAR_2->style_atoms.alloc = 0;
    VAR_2->style_atom_count = 0;
    VAR_2->style_start = 0;
    VAR_2->out_style = VAR_2->in_style->current;
    VAR_2->flush = 1;

    return VAR_2;
}
