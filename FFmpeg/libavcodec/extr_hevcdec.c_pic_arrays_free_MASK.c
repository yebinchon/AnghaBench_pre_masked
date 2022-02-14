
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; int size; int entry_point_offset; } ;
struct TYPE_5__ {int rpl_tab_pool; int tab_mvf_pool; TYPE_1__ sh; int vertical_bs; int horizontal_bs; int filter_slice_edges; int tab_slice_address; int qp_y_tab; int is_pcm; int cbf_luma; int tab_ipm; int tab_ct_depth; int skip_flag; int deblock; int sao; } ;
typedef TYPE_2__ HEVCContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(HEVCContext *VAR_0)
{
    FUNC_1(&VAR_0->sao);
    FUNC_1(&VAR_0->deblock);

    FUNC_1(&VAR_0->skip_flag);
    FUNC_1(&VAR_0->tab_ct_depth);

    FUNC_1(&VAR_0->tab_ipm);
    FUNC_1(&VAR_0->cbf_luma);
    FUNC_1(&VAR_0->is_pcm);

    FUNC_1(&VAR_0->qp_y_tab);
    FUNC_1(&VAR_0->tab_slice_address);
    FUNC_1(&VAR_0->filter_slice_edges);

    FUNC_1(&VAR_0->horizontal_bs);
    FUNC_1(&VAR_0->vertical_bs);

    FUNC_1(&VAR_0->sh.entry_point_offset);
    FUNC_1(&VAR_0->sh.size);
    FUNC_1(&VAR_0->sh.offset);

    FUNC_0(&VAR_0->tab_mvf_pool);
    FUNC_0(&VAR_0->rpl_tab_pool);
}
