
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int score_map; int map; int temp; int scratchpad; } ;
struct TYPE_5__ {int * obmc_scratchpad; int b_scratchpad; int rd_scratchpad; int edge_emu_buffer; } ;
struct TYPE_7__ {int * block; int ac_val_base; int dpcm_macroblock; int block32; int blocks; TYPE_2__ me; int dct_error_sum; TYPE_1__ sc; } ;
typedef TYPE_3__ MpegEncContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(MpegEncContext *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_0(&VAR_0->sc.edge_emu_buffer);
    FUNC_0(&VAR_0->me.scratchpad);
    VAR_0->me.temp =
    VAR_0->sc.rd_scratchpad =
    VAR_0->sc.b_scratchpad =
    *(VAR_0->sc.obmc_scratchpad = ((void*)0));

    FUNC_0(&VAR_0->dct_error_sum);
    FUNC_0(&VAR_0->me.map);
    FUNC_0(&VAR_0->me.score_map);
    FUNC_0(&VAR_0->blocks);
    FUNC_0(&VAR_0->block32);
    FUNC_0(&VAR_0->dpcm_macroblock);
    FUNC_0(&VAR_0->ac_val_base);
    VAR_0->block = ((void*)0);
}
