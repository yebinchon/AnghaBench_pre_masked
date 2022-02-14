
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_4__* sps; TYPE_3__* pps; } ;
struct TYPE_12__ {scalar_t__ cu_chroma_qp_offset_enabled_flag; } ;
struct TYPE_18__ {TYPE_5__ ps; TYPE_1__ sh; TYPE_6__* HEVClc; } ;
struct TYPE_13__ {scalar_t__ is_cu_chroma_qp_offset_coded; scalar_t__ cu_qp_delta; scalar_t__ is_cu_qp_delta_coded; } ;
struct TYPE_17__ {int ct_depth; int qp_y; int qPy_pred; TYPE_2__ tu; } ;
struct TYPE_15__ {int width; int height; int log2_min_cb_size; int log2_ctb_size; } ;
struct TYPE_14__ {int diff_cu_qp_delta_depth; int diff_cu_chroma_qp_offset_depth; scalar_t__ cu_qp_delta_enabled_flag; } ;
typedef TYPE_6__ HEVCLocalContext ;
typedef TYPE_7__ HEVCContext ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*,int,int,int) ;
 int FUNC_2 (TYPE_7__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(HEVCContext *VAR_0, int VAR_1, int VAR_2,
                               int VAR_3, int VAR_4)
{
    HEVCLocalContext *VAR_5 = VAR_0->HEVClc;
    const int VAR_6 = 1 << VAR_3;
    int VAR_7;
    int VAR_8;

    VAR_5->ct_depth = VAR_4;
    if (VAR_1 + VAR_6 <= VAR_0->ps.sps->width &&
        VAR_2 + VAR_6 <= VAR_0->ps.sps->height &&
        VAR_3 > VAR_0->ps.sps->log2_min_cb_size) {
        VAR_8 = FUNC_1(VAR_0, VAR_4, VAR_1, VAR_2);
    } else {
        VAR_8 = (VAR_3 > VAR_0->ps.sps->log2_min_cb_size);
    }
    if (VAR_0->ps.pps->cu_qp_delta_enabled_flag &&
        VAR_3 >= VAR_0->ps.sps->log2_ctb_size - VAR_0->ps.pps->diff_cu_qp_delta_depth) {
        VAR_5->tu.is_cu_qp_delta_coded = 0;
        VAR_5->tu.cu_qp_delta = 0;
    }

    if (VAR_0->sh.cu_chroma_qp_offset_enabled_flag &&
        VAR_3 >= VAR_0->ps.sps->log2_ctb_size - VAR_0->ps.pps->diff_cu_chroma_qp_offset_depth) {
        VAR_5->tu.is_cu_chroma_qp_offset_coded = 0;
    }

    if (VAR_8) {
        int VAR_9 = (1<<(VAR_0->ps.sps->log2_ctb_size - VAR_0->ps.pps->diff_cu_qp_delta_depth)) - 1;
        const int VAR_10 = VAR_6 >> 1;
        const int VAR_11 = VAR_1 + VAR_10;
        const int VAR_12 = VAR_2 + VAR_10;

        int VAR_13 = 0;

        VAR_13 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3 - 1, VAR_4 + 1);
        if (VAR_13 < 0)
            return VAR_13;

        if (VAR_13 && VAR_11 < VAR_0->ps.sps->width) {
            VAR_13 = FUNC_3(VAR_0, VAR_11, VAR_2, VAR_3 - 1, VAR_4 + 1);
            if (VAR_13 < 0)
                return VAR_13;
        }
        if (VAR_13 && VAR_12 < VAR_0->ps.sps->height) {
            VAR_13 = FUNC_3(VAR_0, VAR_1, VAR_12, VAR_3 - 1, VAR_4 + 1);
            if (VAR_13 < 0)
                return VAR_13;
        }
        if (VAR_13 && VAR_11 < VAR_0->ps.sps->width &&
            VAR_12 < VAR_0->ps.sps->height) {
            VAR_13 = FUNC_3(VAR_0, VAR_11, VAR_12, VAR_3 - 1, VAR_4 + 1);
            if (VAR_13 < 0)
                return VAR_13;
        }

        if(((VAR_1 + (1<<VAR_3)) & VAR_9) == 0 &&
            ((VAR_2 + (1<<VAR_3)) & VAR_9) == 0)
            VAR_5->qPy_pred = VAR_5->qp_y;

        if (VAR_13)
            return ((VAR_11 + VAR_10) < VAR_0->ps.sps->width ||
                    (VAR_12 + VAR_10) < VAR_0->ps.sps->height);
        else
            return 0;
    } else {
        VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
        if (VAR_7 < 0)
            return VAR_7;
        if ((!((VAR_1 + VAR_6) %
               (1 << (VAR_0->ps.sps->log2_ctb_size))) ||
             (VAR_1 + VAR_6 >= VAR_0->ps.sps->width)) &&
            (!((VAR_2 + VAR_6) %
               (1 << (VAR_0->ps.sps->log2_ctb_size))) ||
             (VAR_2 + VAR_6 >= VAR_0->ps.sps->height))) {
            int VAR_14 = FUNC_0(VAR_0);
            return !VAR_14;
        } else {
            return 1;
        }
    }

    return 0;
}
