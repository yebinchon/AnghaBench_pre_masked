
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* sps; TYPE_1__* pps; } ;
struct TYPE_11__ {int slice_qp; } ;
struct TYPE_15__ {int* qp_y_tab; TYPE_5__ ps; TYPE_3__ sh; TYPE_6__* HEVClc; } ;
struct TYPE_10__ {int is_cu_qp_delta_coded; } ;
struct TYPE_14__ {int first_qp_group; int qPy_pred; TYPE_2__ tu; } ;
struct TYPE_12__ {int log2_ctb_size; int min_cb_width; int log2_min_cb_size; int qp_bd_offset; } ;
struct TYPE_9__ {int diff_cu_qp_delta_depth; } ;
typedef TYPE_6__ HEVCLocalContext ;
typedef TYPE_7__ HEVCContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(HEVCContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    HEVCLocalContext *VAR_4 = VAR_0->HEVClc;
    int VAR_5 = (1 << VAR_0->ps.sps->log2_ctb_size) - 1;
    int VAR_6 = (1 << (VAR_0->ps.sps->log2_ctb_size -
                                      VAR_0->ps.pps->diff_cu_qp_delta_depth)) - 1;
    int VAR_7 = VAR_1 - (VAR_1 & VAR_6);
    int VAR_8 = VAR_2 - (VAR_2 & VAR_6);
    int VAR_9 = VAR_0->ps.sps->min_cb_width;
    int VAR_10 = VAR_7 >> VAR_0->ps.sps->log2_min_cb_size;
    int VAR_11 = VAR_8 >> VAR_0->ps.sps->log2_min_cb_size;
    int VAR_12 = (VAR_1 & VAR_5) &&
                               (VAR_7 & VAR_5);
    int VAR_13 = (VAR_2 & VAR_5) &&
                               (VAR_8 & VAR_5);
    int VAR_14, VAR_15, VAR_16;


    if (VAR_4->first_qp_group || (!VAR_7 && !VAR_8)) {
        VAR_4->first_qp_group = !VAR_4->tu.is_cu_qp_delta_coded;
        VAR_14 = VAR_0->sh.slice_qp;
    } else {
        VAR_14 = VAR_4->qPy_pred;
    }


    if (VAR_12 == 0)
        VAR_15 = VAR_14;
    else
        VAR_15 = VAR_0->qp_y_tab[(VAR_10 - 1) + VAR_11 * VAR_9];


    if (VAR_13 == 0)
        VAR_16 = VAR_14;
    else
        VAR_16 = VAR_0->qp_y_tab[VAR_10 + (VAR_11 - 1) * VAR_9];

    FUNC_0(VAR_15 >= -VAR_0->ps.sps->qp_bd_offset && VAR_15 < 52);
    FUNC_0(VAR_16 >= -VAR_0->ps.sps->qp_bd_offset && VAR_16 < 52);

    return (VAR_15 + VAR_16 + 1) >> 1;
}
