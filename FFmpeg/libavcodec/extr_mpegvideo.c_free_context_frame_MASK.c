
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int er_temp_buffer; int error_status_table; } ;
struct TYPE_5__ {scalar_t__ uvlinesize; scalar_t__ linesize; int bits_tab; int cplx_tab; int lambda_table; int mb_index2xy; TYPE_1__ er; int mbskip_table; int pred_dir_table; int cbp_table; int mbintra_table; int coded_block_base; int dc_val_base; int * p_field_select_table; int *** p_field_mv_table; int ** p_field_mv_table_base; int ** b_field_select_table; int **** b_field_mv_table; int *** b_field_mv_table_base; int * b_direct_mv_table; int * b_bidir_back_mv_table; int * b_bidir_forw_mv_table; int * b_back_mv_table; int * b_forw_mv_table; int * p_mv_table; int b_direct_mv_table_base; int b_bidir_back_mv_table_base; int b_bidir_forw_mv_table_base; int b_back_mv_table_base; int b_forw_mv_table_base; int p_mv_table_base; int mb_type; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(MpegEncContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;

    FUNC_0(&VAR_0->mb_type);
    FUNC_0(&VAR_0->p_mv_table_base);
    FUNC_0(&VAR_0->b_forw_mv_table_base);
    FUNC_0(&VAR_0->b_back_mv_table_base);
    FUNC_0(&VAR_0->b_bidir_forw_mv_table_base);
    FUNC_0(&VAR_0->b_bidir_back_mv_table_base);
    FUNC_0(&VAR_0->b_direct_mv_table_base);
    VAR_0->p_mv_table = ((void*)0);
    VAR_0->b_forw_mv_table = ((void*)0);
    VAR_0->b_back_mv_table = ((void*)0);
    VAR_0->b_bidir_forw_mv_table = ((void*)0);
    VAR_0->b_bidir_back_mv_table = ((void*)0);
    VAR_0->b_direct_mv_table = ((void*)0);
    for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
        for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
            for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
                FUNC_0(&VAR_0->b_field_mv_table_base[VAR_1][VAR_2][VAR_3]);
                VAR_0->b_field_mv_table[VAR_1][VAR_2][VAR_3] = ((void*)0);
            }
            FUNC_0(&VAR_0->b_field_select_table[VAR_1][VAR_2]);
            FUNC_0(&VAR_0->p_field_mv_table_base[VAR_1][VAR_2]);
            VAR_0->p_field_mv_table[VAR_1][VAR_2] = ((void*)0);
        }
        FUNC_0(&VAR_0->p_field_select_table[VAR_1]);
    }

    FUNC_0(&VAR_0->dc_val_base);
    FUNC_0(&VAR_0->coded_block_base);
    FUNC_0(&VAR_0->mbintra_table);
    FUNC_0(&VAR_0->cbp_table);
    FUNC_0(&VAR_0->pred_dir_table);

    FUNC_0(&VAR_0->mbskip_table);

    FUNC_0(&VAR_0->er.error_status_table);
    FUNC_0(&VAR_0->er.er_temp_buffer);
    FUNC_0(&VAR_0->mb_index2xy);
    FUNC_0(&VAR_0->lambda_table);

    FUNC_0(&VAR_0->cplx_tab);
    FUNC_0(&VAR_0->bits_tab);

    VAR_0->linesize = VAR_0->uvlinesize = 0;
}
