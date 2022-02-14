
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ alloc; scalar_t__ size; int * buf; } ;
struct TYPE_7__ {int flush; TYPE_1__* in_style; int out_style; scalar_t__ style_start; scalar_t__ style_atom_count; TYPE_2__ style_atoms; } ;
typedef TYPE_3__ hb_tx3g_style_context_t ;
struct TYPE_5__ {int current; } ;



void FUNC_0(hb_tx3g_style_context_t * VAR_0)
{
    VAR_0->style_atoms.buf = ((void*)0);
    VAR_0->style_atoms.size = 0;
    VAR_0->style_atoms.alloc = 0;
    VAR_0->style_atom_count = 0;
    VAR_0->style_start = 0;
    VAR_0->out_style = VAR_0->in_style->current;
    VAR_0->flush = 1;
}
