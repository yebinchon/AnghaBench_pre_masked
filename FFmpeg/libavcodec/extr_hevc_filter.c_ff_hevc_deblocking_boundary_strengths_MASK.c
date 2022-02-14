
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_21__ {int * refPicList; TYPE_5__* tab_mvf; } ;
struct TYPE_17__ {TYPE_3__* sps; TYPE_2__* pps; } ;
struct TYPE_14__ {int slice_loop_filter_across_slices_enabled_flag; } ;
struct TYPE_20__ {int* horizontal_bs; int bs_width; int* vertical_bs; TYPE_9__* ref; scalar_t__* cbf_luma; TYPE_4__ ps; TYPE_1__ sh; TYPE_6__* HEVClc; } ;
struct TYPE_19__ {int boundary_flags; } ;
struct TYPE_18__ {scalar_t__ pred_flag; } ;
struct TYPE_16__ {int log2_min_pu_size; int log2_min_tb_size; int min_pu_width; int min_tb_width; int log2_ctb_size; } ;
struct TYPE_15__ {int loop_filter_across_tiles_enabled_flag; } ;
typedef int RefPicList ;
typedef TYPE_5__ MvField ;
typedef TYPE_6__ HEVCLocalContext ;
typedef TYPE_7__ HEVCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_7__*,TYPE_5__*,TYPE_5__*,int *) ;
 int * FUNC_1 (TYPE_7__*,TYPE_9__*,int,int) ;

void FUNC_2(HEVCContext *VAR_5, int VAR_6, int VAR_7,
                                           int VAR_8)
{
    HEVCLocalContext *VAR_9 = VAR_5->HEVClc;
    MvField *VAR_10 = VAR_5->ref->tab_mvf;
    int VAR_11 = VAR_5->ps.sps->log2_min_pu_size;
    int VAR_12 = VAR_5->ps.sps->log2_min_tb_size;
    int VAR_13 = VAR_5->ps.sps->min_pu_width;
    int VAR_14 = VAR_5->ps.sps->min_tb_width;
    int VAR_15 = VAR_10[(VAR_7 >> VAR_11) * VAR_13 +
                           (VAR_6 >> VAR_11)].pred_flag == VAR_4;
    int VAR_16, VAR_17;
    int VAR_18, VAR_19, VAR_20;

    VAR_16 = VAR_7 > 0 && !(VAR_7 & 7);
    if (VAR_16 &&
        ((!VAR_5->sh.slice_loop_filter_across_slices_enabled_flag &&
          VAR_9->boundary_flags & VAR_2 &&
          (VAR_7 % (1 << VAR_5->ps.sps->log2_ctb_size)) == 0) ||
         (!VAR_5->ps.pps->loop_filter_across_tiles_enabled_flag &&
          VAR_9->boundary_flags & VAR_3 &&
          (VAR_7 % (1 << VAR_5->ps.sps->log2_ctb_size)) == 0)))
        VAR_16 = 0;

    if (VAR_16) {
        RefPicList *VAR_21 = (VAR_9->boundary_flags & VAR_2) ?
                              FUNC_1(VAR_5, VAR_5->ref, VAR_6, VAR_7 - 1) :
                              VAR_5->ref->refPicList;
        int VAR_22 = (VAR_7 - 1) >> VAR_11;
        int VAR_23 = VAR_7 >> VAR_11;
        int VAR_24 = (VAR_7 - 1) >> VAR_12;
        int VAR_25 = VAR_7 >> VAR_12;

            for (VAR_18 = 0; VAR_18 < (1 << VAR_8); VAR_18 += 4) {
                int VAR_26 = (VAR_6 + VAR_18) >> VAR_11;
                int VAR_27 = (VAR_6 + VAR_18) >> VAR_12;
                MvField *VAR_28 = &VAR_10[VAR_22 * VAR_13 + VAR_26];
                MvField *VAR_29 = &VAR_10[VAR_23 * VAR_13 + VAR_26];
                uint8_t VAR_30 = VAR_5->cbf_luma[VAR_24 * VAR_14 + VAR_27];
                uint8_t VAR_31 = VAR_5->cbf_luma[VAR_25 * VAR_14 + VAR_27];

                if (VAR_29->pred_flag == VAR_4 || VAR_28->pred_flag == VAR_4)
                    VAR_20 = 2;
                else if (VAR_31 || VAR_30)
                    VAR_20 = 1;
                else
                    VAR_20 = FUNC_0(VAR_5, VAR_29, VAR_28, VAR_21);
                VAR_5->horizontal_bs[((VAR_6 + VAR_18) + VAR_7 * VAR_5->bs_width) >> 2] = VAR_20;
            }
    }


    VAR_17 = VAR_6 > 0 && !(VAR_6 & 7);
    if (VAR_17 &&
        ((!VAR_5->sh.slice_loop_filter_across_slices_enabled_flag &&
          VAR_9->boundary_flags & VAR_0 &&
          (VAR_6 % (1 << VAR_5->ps.sps->log2_ctb_size)) == 0) ||
         (!VAR_5->ps.pps->loop_filter_across_tiles_enabled_flag &&
          VAR_9->boundary_flags & VAR_1 &&
          (VAR_6 % (1 << VAR_5->ps.sps->log2_ctb_size)) == 0)))
        VAR_17 = 0;

    if (VAR_17) {
        RefPicList *VAR_32 = (VAR_9->boundary_flags & VAR_0) ?
                               FUNC_1(VAR_5, VAR_5->ref, VAR_6 - 1, VAR_7) :
                               VAR_5->ref->refPicList;
        int VAR_33 = (VAR_6 - 1) >> VAR_11;
        int VAR_34 = VAR_6 >> VAR_11;
        int VAR_35 = (VAR_6 - 1) >> VAR_12;
        int VAR_36 = VAR_6 >> VAR_12;

            for (VAR_18 = 0; VAR_18 < (1 << VAR_8); VAR_18 += 4) {
                int VAR_37 = (VAR_7 + VAR_18) >> VAR_11;
                int VAR_38 = (VAR_7 + VAR_18) >> VAR_12;
                MvField *VAR_39 = &VAR_10[VAR_37 * VAR_13 + VAR_33];
                MvField *VAR_40 = &VAR_10[VAR_37 * VAR_13 + VAR_34];
                uint8_t VAR_41 = VAR_5->cbf_luma[VAR_38 * VAR_14 + VAR_35];
                uint8_t VAR_42 = VAR_5->cbf_luma[VAR_38 * VAR_14 + VAR_36];

                if (VAR_40->pred_flag == VAR_4 || VAR_39->pred_flag == VAR_4)
                    VAR_20 = 2;
                else if (VAR_42 || VAR_41)
                    VAR_20 = 1;
                else
                    VAR_20 = FUNC_0(VAR_5, VAR_40, VAR_39, VAR_32);
                VAR_5->vertical_bs[(VAR_6 + (VAR_7 + VAR_18) * VAR_5->bs_width) >> 2] = VAR_20;
            }
    }

    if (VAR_8 > VAR_11 && !VAR_15) {
        RefPicList *VAR_43 = VAR_5->ref->refPicList;


        for (VAR_19 = 8; VAR_19 < (1 << VAR_8); VAR_19 += 8) {
            int VAR_44 = (VAR_7 + VAR_19 - 1) >> VAR_11;
            int VAR_45 = (VAR_7 + VAR_19) >> VAR_11;

            for (VAR_18 = 0; VAR_18 < (1 << VAR_8); VAR_18 += 4) {
                int VAR_46 = (VAR_6 + VAR_18) >> VAR_11;
                MvField *VAR_47 = &VAR_10[VAR_44 * VAR_13 + VAR_46];
                MvField *VAR_48 = &VAR_10[VAR_45 * VAR_13 + VAR_46];

                VAR_20 = FUNC_0(VAR_5, VAR_48, VAR_47, VAR_43);
                VAR_5->horizontal_bs[((VAR_6 + VAR_18) + (VAR_7 + VAR_19) * VAR_5->bs_width) >> 2] = VAR_20;
            }
        }


        for (VAR_19 = 0; VAR_19 < (1 << VAR_8); VAR_19 += 4) {
            int VAR_49 = (VAR_7 + VAR_19) >> VAR_11;

            for (VAR_18 = 8; VAR_18 < (1 << VAR_8); VAR_18 += 8) {
                int VAR_50 = (VAR_6 + VAR_18 - 1) >> VAR_11;
                int VAR_51 = (VAR_6 + VAR_18) >> VAR_11;
                MvField *VAR_52 = &VAR_10[VAR_49 * VAR_13 + VAR_50];
                MvField *VAR_53 = &VAR_10[VAR_49 * VAR_13 + VAR_51];

                VAR_20 = FUNC_0(VAR_5, VAR_53, VAR_52, VAR_43);
                VAR_5->vertical_bs[((VAR_6 + VAR_18) + (VAR_7 + VAR_19) * VAR_5->bs_width) >> 2] = VAR_20;
            }
        }
    }
}
