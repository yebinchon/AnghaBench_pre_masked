
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nb_slice_ctx; TYPE_2__* slice_ctx; int ref_index_pool; int motion_val_pool; int mb_type_pool; int qscale_table_pool; int mb2br_xy; int mb2b_xy; int list_counts; int * slice_table; int slice_table_base; int non_zero_count; int direct_table; int * mvd_table; int cbp_table; int chroma_pred_mode_table; int intra4x4_pred_mode; } ;
struct TYPE_5__ {int er_temp_buffer; int error_status_table; int mb_index2xy; } ;
struct TYPE_6__ {scalar_t__* top_borders_allocated; scalar_t__ edge_emu_buffer_allocated; scalar_t__ bipred_scratchpad_allocated; int * top_borders; int edge_emu_buffer; int bipred_scratchpad; TYPE_1__ er; int dc_val_base; } ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H264Context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(H264Context *VAR_0)
{
    int VAR_1;

    FUNC_1(&VAR_0->intra4x4_pred_mode);
    FUNC_1(&VAR_0->chroma_pred_mode_table);
    FUNC_1(&VAR_0->cbp_table);
    FUNC_1(&VAR_0->mvd_table[0]);
    FUNC_1(&VAR_0->mvd_table[1]);
    FUNC_1(&VAR_0->direct_table);
    FUNC_1(&VAR_0->non_zero_count);
    FUNC_1(&VAR_0->slice_table_base);
    VAR_0->slice_table = ((void*)0);
    FUNC_1(&VAR_0->list_counts);

    FUNC_1(&VAR_0->mb2b_xy);
    FUNC_1(&VAR_0->mb2br_xy);

    FUNC_0(&VAR_0->qscale_table_pool);
    FUNC_0(&VAR_0->mb_type_pool);
    FUNC_0(&VAR_0->motion_val_pool);
    FUNC_0(&VAR_0->ref_index_pool);

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_slice_ctx; VAR_1++) {
        H264SliceContext *VAR_2 = &VAR_0->slice_ctx[VAR_1];

        FUNC_1(&VAR_2->dc_val_base);
        FUNC_1(&VAR_2->er.mb_index2xy);
        FUNC_1(&VAR_2->er.error_status_table);
        FUNC_1(&VAR_2->er.er_temp_buffer);

        FUNC_1(&VAR_2->bipred_scratchpad);
        FUNC_1(&VAR_2->edge_emu_buffer);
        FUNC_1(&VAR_2->top_borders[0]);
        FUNC_1(&VAR_2->top_borders[1]);

        VAR_2->bipred_scratchpad_allocated = 0;
        VAR_2->edge_emu_buffer_allocated = 0;
        VAR_2->top_borders_allocated[0] = 0;
        VAR_2->top_borders_allocated[1] = 0;
    }
}
