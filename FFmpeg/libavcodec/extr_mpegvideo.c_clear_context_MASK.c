
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * er_temp_buffer; int * error_status_table; } ;
struct TYPE_7__ {int * obmc_scratchpad; int b_scratchpad; int rd_scratchpad; int * edge_emu_buffer; } ;
struct TYPE_6__ {int temp; int * scratchpad; int * score_map; int * map; } ;
struct TYPE_9__ {int * bits_tab; int * cplx_tab; int * lambda_table; int * mb_index2xy; TYPE_3__ er; int * mbskip_table; int * pred_dir_table; int * cbp_table; int * mbintra_table; int * coded_block_base; int * dc_val_base; int ** p_field_select_table; int *** p_field_mv_table; int *** p_field_mv_table_base; int *** b_field_select_table; int **** b_field_mv_table; int **** b_field_mv_table_base; int * b_direct_mv_table; int * b_bidir_back_mv_table; int * b_bidir_forw_mv_table; int * b_back_mv_table; int * b_forw_mv_table; int * p_mv_table; int * b_direct_mv_table_base; int * b_bidir_back_mv_table_base; int * b_bidir_forw_mv_table_base; int * b_back_mv_table_base; int * b_forw_mv_table_base; int * p_mv_table_base; int * mb_type; int * picture; scalar_t__ allocated_bitstream_buffer_size; int * bitstream_buffer; TYPE_2__ sc; TYPE_1__ me; int ** ac_val; int * ac_val_base; int * dpcm_macroblock; scalar_t__ dpcm_direction; int * pblocks; int * block32; int * blocks; int * block; int * dct_error_sum; int * thread_context; int new_picture; int current_picture; int last_picture; int next_picture; } ;
typedef TYPE_4__ MpegEncContext ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(MpegEncContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;

    FUNC_0(&VAR_0->next_picture, 0, sizeof(VAR_0->next_picture));
    FUNC_0(&VAR_0->last_picture, 0, sizeof(VAR_0->last_picture));
    FUNC_0(&VAR_0->current_picture, 0, sizeof(VAR_0->current_picture));
    FUNC_0(&VAR_0->new_picture, 0, sizeof(VAR_0->new_picture));

    FUNC_0(VAR_0->thread_context, 0, sizeof(VAR_0->thread_context));

    VAR_0->me.map = ((void*)0);
    VAR_0->me.score_map = ((void*)0);
    VAR_0->dct_error_sum = ((void*)0);
    VAR_0->block = ((void*)0);
    VAR_0->blocks = ((void*)0);
    VAR_0->block32 = ((void*)0);
    FUNC_0(VAR_0->pblocks, 0, sizeof(VAR_0->pblocks));
    VAR_0->dpcm_direction = 0;
    VAR_0->dpcm_macroblock = ((void*)0);
    VAR_0->ac_val_base = ((void*)0);
    VAR_0->ac_val[0] =
    VAR_0->ac_val[1] =
    VAR_0->ac_val[2] =((void*)0);
    VAR_0->sc.edge_emu_buffer = ((void*)0);
    VAR_0->me.scratchpad = ((void*)0);
    VAR_0->me.temp =
    VAR_0->sc.rd_scratchpad =
    VAR_0->sc.b_scratchpad =
    *(VAR_0->sc.obmc_scratchpad = ((void*)0));


    VAR_0->bitstream_buffer = ((void*)0);
    VAR_0->allocated_bitstream_buffer_size = 0;
    VAR_0->picture = ((void*)0);
    VAR_0->mb_type = ((void*)0);
    VAR_0->p_mv_table_base = ((void*)0);
    VAR_0->b_forw_mv_table_base = ((void*)0);
    VAR_0->b_back_mv_table_base = ((void*)0);
    VAR_0->b_bidir_forw_mv_table_base = ((void*)0);
    VAR_0->b_bidir_back_mv_table_base = ((void*)0);
    VAR_0->b_direct_mv_table_base = ((void*)0);
    VAR_0->p_mv_table = ((void*)0);
    VAR_0->b_forw_mv_table = ((void*)0);
    VAR_0->b_back_mv_table = ((void*)0);
    VAR_0->b_bidir_forw_mv_table = ((void*)0);
    VAR_0->b_bidir_back_mv_table = ((void*)0);
    VAR_0->b_direct_mv_table = ((void*)0);
    for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
        for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
            for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
                VAR_0->b_field_mv_table_base[VAR_1][VAR_2][VAR_3] = ((void*)0);
                VAR_0->b_field_mv_table[VAR_1][VAR_2][VAR_3] = ((void*)0);
            }
            VAR_0->b_field_select_table[VAR_1][VAR_2] = ((void*)0);
            VAR_0->p_field_mv_table_base[VAR_1][VAR_2] = ((void*)0);
            VAR_0->p_field_mv_table[VAR_1][VAR_2] = ((void*)0);
        }
        VAR_0->p_field_select_table[VAR_1] = ((void*)0);
    }

    VAR_0->dc_val_base = ((void*)0);
    VAR_0->coded_block_base = ((void*)0);
    VAR_0->mbintra_table = ((void*)0);
    VAR_0->cbp_table = ((void*)0);
    VAR_0->pred_dir_table = ((void*)0);

    VAR_0->mbskip_table = ((void*)0);

    VAR_0->er.error_status_table = ((void*)0);
    VAR_0->er.er_temp_buffer = ((void*)0);
    VAR_0->mb_index2xy = ((void*)0);
    VAR_0->lambda_table = ((void*)0);

    VAR_0->cplx_tab = ((void*)0);
    VAR_0->bits_tab = ((void*)0);
}
