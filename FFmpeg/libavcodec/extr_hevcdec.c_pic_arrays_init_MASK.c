
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int bs_width; int bs_height; void* rpl_tab_pool; void* tab_mvf_pool; void* vertical_bs; void* horizontal_bs; void* tab_slice_address; void* filter_slice_edges; void* qp_y_tab; void* is_pcm; void* cbf_luma; void* tab_ipm; void* tab_ct_depth; void* skip_flag; void* deblock; void* sao; } ;
struct TYPE_6__ {int log2_min_cb_size; int width; int height; int ctb_width; int ctb_height; int min_pu_width; int min_pu_height; int min_cb_height; int min_cb_width; int min_tb_width; int min_tb_height; } ;
typedef int RefPicListTab ;
typedef int MvField ;
typedef TYPE_1__ HEVCSPS ;
typedef TYPE_2__ HEVCContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int ) ;
 void* FUNC_2 (int,int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(HEVCContext *VAR_2, const HEVCSPS *VAR_3)
{
    int VAR_4 = VAR_3->log2_min_cb_size;
    int VAR_5 = VAR_3->width;
    int VAR_6 = VAR_3->height;
    int VAR_7 = ((VAR_5 >> VAR_4) + 1) *
                           ((VAR_6 >> VAR_4) + 1);
    int VAR_8 = VAR_3->ctb_width * VAR_3->ctb_height;
    int VAR_9 = VAR_3->min_pu_width * VAR_3->min_pu_height;

    VAR_2->bs_width = (VAR_5 >> 2) + 1;
    VAR_2->bs_height = (VAR_6 >> 2) + 1;

    VAR_2->sao = FUNC_4(VAR_8, sizeof(*VAR_2->sao));
    VAR_2->deblock = FUNC_4(VAR_8, sizeof(*VAR_2->deblock));
    if (!VAR_2->sao || !VAR_2->deblock)
        goto fail;

    VAR_2->skip_flag = FUNC_2(VAR_3->min_cb_height, VAR_3->min_cb_width);
    VAR_2->tab_ct_depth = FUNC_2(VAR_3->min_cb_height, VAR_3->min_cb_width);
    if (!VAR_2->skip_flag || !VAR_2->tab_ct_depth)
        goto fail;

    VAR_2->cbf_luma = FUNC_2(VAR_3->min_tb_width, VAR_3->min_tb_height);
    VAR_2->tab_ipm = FUNC_3(VAR_9);
    VAR_2->is_pcm = FUNC_2(VAR_3->min_pu_width + 1, VAR_3->min_pu_height + 1);
    if (!VAR_2->tab_ipm || !VAR_2->cbf_luma || !VAR_2->is_pcm)
        goto fail;

    VAR_2->filter_slice_edges = FUNC_3(VAR_8);
    VAR_2->tab_slice_address = FUNC_2(VAR_7,
                                      sizeof(*VAR_2->tab_slice_address));
    VAR_2->qp_y_tab = FUNC_2(VAR_7,
                                      sizeof(*VAR_2->qp_y_tab));
    if (!VAR_2->qp_y_tab || !VAR_2->filter_slice_edges || !VAR_2->tab_slice_address)
        goto fail;

    VAR_2->horizontal_bs = FUNC_4(VAR_2->bs_width, VAR_2->bs_height);
    VAR_2->vertical_bs = FUNC_4(VAR_2->bs_width, VAR_2->bs_height);
    if (!VAR_2->horizontal_bs || !VAR_2->vertical_bs)
        goto fail;

    VAR_2->tab_mvf_pool = FUNC_1(VAR_9 * sizeof(MvField),
                                          VAR_1);
    VAR_2->rpl_tab_pool = FUNC_1(VAR_8 * sizeof(RefPicListTab),
                                          VAR_1);
    if (!VAR_2->tab_mvf_pool || !VAR_2->rpl_tab_pool)
        goto fail;

    return 0;

fail:
    FUNC_5(VAR_2);
    return FUNC_0(VAR_0);
}
