
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_22__ {TYPE_2__* pps; TYPE_5__* sps; } ;
struct TYPE_17__ {int disable_deblocking_filter_flag; } ;
struct TYPE_25__ {int* cbf_luma; TYPE_6__ ps; TYPE_1__ sh; TYPE_8__* HEVClc; } ;
struct TYPE_23__ {int max_trafo_depth; scalar_t__ pred_mode; scalar_t__ part_mode; scalar_t__ cu_transquant_bypass_flag; scalar_t__ intra_split_flag; } ;
struct TYPE_20__ {int * chroma_mode_c; int * intra_pred_mode_c; int * intra_pred_mode; } ;
struct TYPE_19__ {int chroma_mode_c; int intra_pred_mode_c; int intra_pred_mode; } ;
struct TYPE_24__ {TYPE_7__ cu; TYPE_4__ pu; TYPE_3__ tu; } ;
struct TYPE_21__ {int chroma_format_idc; int log2_max_trafo_size; int log2_min_tb_size; scalar_t__ max_transform_hierarchy_depth_inter; int min_tb_width; } ;
struct TYPE_18__ {scalar_t__ transquant_bypass_enable_flag; } ;
typedef TYPE_8__ HEVCLocalContext ;
typedef TYPE_9__ HEVCContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const,int const,int) ;
 int FUNC_1 (TYPE_9__*,int) ;
 int FUNC_2 (TYPE_9__*,int) ;
 int FUNC_3 (TYPE_9__*,int,int,int) ;
 int FUNC_4 (TYPE_9__*,int) ;
 int FUNC_5 (TYPE_9__*,int,int,int,int,int,int,int,int,int,int,int*,int*) ;
 int FUNC_6 (TYPE_9__*,int,int,int) ;

__attribute__((used)) static int FUNC_7(HEVCContext *VAR_3, int VAR_4, int VAR_5,
                              int VAR_6, int VAR_7, int VAR_8, int VAR_9,
                              int VAR_10, int VAR_11,
                              int VAR_12, int VAR_13,
                              const int *VAR_14, const int *VAR_15)
{
    HEVCLocalContext *VAR_16 = VAR_3->HEVClc;
    uint8_t VAR_17;
    int VAR_18[2];
    int VAR_19[2];
    int VAR_20;

    VAR_18[0] = VAR_14[0];
    VAR_18[1] = VAR_14[1];
    VAR_19[0] = VAR_15[0];
    VAR_19[1] = VAR_15[1];

    if (VAR_16->cu.intra_split_flag) {
        if (VAR_12 == 1) {
            VAR_16->tu.intra_pred_mode = VAR_16->pu.intra_pred_mode[VAR_13];
            if (VAR_3->ps.sps->chroma_format_idc == 3) {
                VAR_16->tu.intra_pred_mode_c = VAR_16->pu.intra_pred_mode_c[VAR_13];
                VAR_16->tu.chroma_mode_c = VAR_16->pu.chroma_mode_c[VAR_13];
            } else {
                VAR_16->tu.intra_pred_mode_c = VAR_16->pu.intra_pred_mode_c[0];
                VAR_16->tu.chroma_mode_c = VAR_16->pu.chroma_mode_c[0];
            }
        }
    } else {
        VAR_16->tu.intra_pred_mode = VAR_16->pu.intra_pred_mode[0];
        VAR_16->tu.intra_pred_mode_c = VAR_16->pu.intra_pred_mode_c[0];
        VAR_16->tu.chroma_mode_c = VAR_16->pu.chroma_mode_c[0];
    }

    if (VAR_11 <= VAR_3->ps.sps->log2_max_trafo_size &&
        VAR_11 > VAR_3->ps.sps->log2_min_tb_size &&
        VAR_12 < VAR_16->cu.max_trafo_depth &&
        !(VAR_16->cu.intra_split_flag && VAR_12 == 0)) {
        VAR_17 = FUNC_4(VAR_3, VAR_11);
    } else {
        int VAR_21 = VAR_3->ps.sps->max_transform_hierarchy_depth_inter == 0 &&
                          VAR_16->cu.pred_mode == VAR_0 &&
                          VAR_16->cu.part_mode != VAR_2 &&
                          VAR_12 == 0;

        VAR_17 = VAR_11 > VAR_3->ps.sps->log2_max_trafo_size ||
                               (VAR_16->cu.intra_split_flag && VAR_12 == 0) ||
                               VAR_21;
    }

    if (VAR_3->ps.sps->chroma_format_idc && (VAR_11 > 2 || VAR_3->ps.sps->chroma_format_idc == 3)) {
        if (VAR_12 == 0 || VAR_18[0]) {
            VAR_18[0] = FUNC_1(VAR_3, VAR_12);
            if (VAR_3->ps.sps->chroma_format_idc == 2 && (!VAR_17 || VAR_11 == 3)) {
                VAR_18[1] = FUNC_1(VAR_3, VAR_12);
            }
        }

        if (VAR_12 == 0 || VAR_19[0]) {
            VAR_19[0] = FUNC_1(VAR_3, VAR_12);
            if (VAR_3->ps.sps->chroma_format_idc == 2 && (!VAR_17 || VAR_11 == 3)) {
                VAR_19[1] = FUNC_1(VAR_3, VAR_12);
            }
        }
    }

    if (VAR_17) {
        const int VAR_22 = 1 << (VAR_11 - 1);
        const int VAR_23 = VAR_4 + VAR_22;
        const int VAR_24 = VAR_5 + VAR_22;
        do { VAR_20 = FUNC_7(VAR_3, VAR_4, VAR_5, VAR_4, VAR_5, VAR_8, VAR_9, VAR_10, VAR_11 - 1, VAR_12 + 1, 0, VAR_18, VAR_19); if (VAR_20 < 0) return VAR_20; } while (0);
        do { VAR_20 = FUNC_7(VAR_3, VAR_23, VAR_5, VAR_4, VAR_5, VAR_8, VAR_9, VAR_10, VAR_11 - 1, VAR_12 + 1, 1, VAR_18, VAR_19); if (VAR_20 < 0) return VAR_20; } while (0);
        do { VAR_20 = FUNC_7(VAR_3, VAR_4, VAR_24, VAR_4, VAR_5, VAR_8, VAR_9, VAR_10, VAR_11 - 1, VAR_12 + 1, 2, VAR_18, VAR_19); if (VAR_20 < 0) return VAR_20; } while (0);
        do { VAR_20 = FUNC_7(VAR_3, VAR_23, VAR_24, VAR_4, VAR_5, VAR_8, VAR_9, VAR_10, VAR_11 - 1, VAR_12 + 1, 3, VAR_18, VAR_19); if (VAR_20 < 0) return VAR_20; } while (0);


    } else {
        int VAR_25 = 1 << VAR_3->ps.sps->log2_min_tb_size;
        int VAR_26 = VAR_3->ps.sps->log2_min_tb_size;
        int VAR_27 = VAR_3->ps.sps->min_tb_width;
        int VAR_28 = 1;

        if (VAR_16->cu.pred_mode == VAR_1 || VAR_12 != 0 ||
            VAR_18[0] || VAR_19[0] ||
            (VAR_3->ps.sps->chroma_format_idc == 2 && (VAR_18[1] || VAR_19[1]))) {
            VAR_28 = FUNC_2(VAR_3, VAR_12);
        }

        VAR_20 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
                                 VAR_10, VAR_11,
                                 VAR_13, VAR_28, VAR_18, VAR_19);
        if (VAR_20 < 0)
            return VAR_20;

        if (VAR_28) {
            int VAR_29, VAR_30;
            for (VAR_29 = 0; VAR_29 < (1 << VAR_11); VAR_29 += VAR_25)
                for (VAR_30 = 0; VAR_30 < (1 << VAR_11); VAR_30 += VAR_25) {
                    int VAR_31 = (VAR_4 + VAR_30) >> VAR_26;
                    int VAR_32 = (VAR_5 + VAR_29) >> VAR_26;
                    VAR_3->cbf_luma[VAR_32 * VAR_27 + VAR_31] = 1;
                }
        }
        if (!VAR_3->sh.disable_deblocking_filter_flag) {
            FUNC_3(VAR_3, VAR_4, VAR_5, VAR_11);
            if (VAR_3->ps.pps->transquant_bypass_enable_flag &&
                VAR_16->cu.cu_transquant_bypass_flag)
                FUNC_6(VAR_3, VAR_4, VAR_5, VAR_11);
        }
    }
    return 0;
}
