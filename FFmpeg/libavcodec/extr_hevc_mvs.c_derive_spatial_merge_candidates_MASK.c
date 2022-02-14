
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct MvField {int pred_flag; size_t* ref_idx; void** mv; } ;
struct TYPE_14__ {scalar_t__ slice_type; int* nb_refs; int max_num_merge_cand; scalar_t__ slice_temporal_mvp_enabled_flag; } ;
struct TYPE_17__ {TYPE_4__* sps; } ;
struct TYPE_21__ {TYPE_2__ sh; TYPE_5__ ps; TYPE_3__* ref; TYPE_8__* HEVClc; } ;
struct TYPE_13__ {scalar_t__ part_mode; } ;
struct TYPE_18__ {int cand_bottom_left; int cand_left; int cand_up_left; int cand_up; int cand_up_right_sap; } ;
struct TYPE_20__ {TYPE_1__ cu; TYPE_6__ na; } ;
struct TYPE_19__ {scalar_t__* list; } ;
struct TYPE_16__ {int min_pu_width; int const width; int const height; } ;
struct TYPE_15__ {struct MvField* tab_mvf; TYPE_7__* refPicList; } ;
typedef TYPE_7__ RefPicList ;
typedef struct MvField MvField ;
typedef void* Mv ;
typedef TYPE_8__ HEVCLocalContext ;
typedef TYPE_9__ HEVCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int ) ;
 int FUNC_1 (void**,void**) ;
 scalar_t__ FUNC_2 (void**) ;
 int FUNC_3 (size_t*) ;
 int FUNC_4 (void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_7 (int ) ;
 struct MvField FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_9__*,int const,int const,int,int) ;
 int** VAR_16 ;
 int FUNC_10 (TYPE_9__*,int,int,int,int,int ,void**,int) ;

__attribute__((used)) static void FUNC_11(HEVCContext *VAR_17, int VAR_18, int VAR_19,
                                            int VAR_20, int VAR_21,
                                            int VAR_22,
                                            int VAR_23, int VAR_24,
                                            int VAR_25,
                                            struct MvField VAR_26[])
{
    HEVCLocalContext *VAR_27 = VAR_17->HEVClc;
    RefPicList *VAR_28 = VAR_17->ref->refPicList;
    MvField *VAR_29 = VAR_17->ref->tab_mvf;

    const int VAR_30 = VAR_17->ps.sps->min_pu_width;

    const int VAR_31 = VAR_27->na.cand_bottom_left;
    const int VAR_32 = VAR_27->na.cand_left;
    const int VAR_33 = VAR_27->na.cand_up_left;
    const int VAR_34 = VAR_27->na.cand_up;
    const int VAR_35 = VAR_27->na.cand_up_right_sap;

    const int VAR_36 = VAR_18 - 1;
    const int VAR_37 = VAR_19 + VAR_21 - 1;

    const int VAR_38 = VAR_18 + VAR_20 - 1;
    const int VAR_39 = VAR_19 - 1;

    const int VAR_40 = VAR_18 + VAR_20;
    const int VAR_41 = VAR_19 - 1;

    const int VAR_42 = VAR_18 - 1;
    const int VAR_43 = VAR_19 + VAR_21;

    const int VAR_44 = VAR_18 - 1;
    const int VAR_45 = VAR_19 - 1;

    const int VAR_46 = (VAR_17->sh.slice_type == VAR_6) ?
                        VAR_17->sh.nb_refs[0] : FUNC_6(VAR_17->sh.nb_refs[0], VAR_17->sh.nb_refs[1]);

    int VAR_47 = 0;

    int VAR_48 = 0;
    int VAR_49 = 0;

    int VAR_50;
    int VAR_51;
    int VAR_52;
    int VAR_53;
    int VAR_54;


    if (!VAR_23 && VAR_24 == 1 &&
        (VAR_27->cu.part_mode == VAR_10 ||
         VAR_27->cu.part_mode == VAR_11 ||
         VAR_27->cu.part_mode == VAR_12) ||
        FUNC_9(VAR_17, VAR_36, VAR_37, VAR_18, VAR_19)) {
        VAR_51 = 0;
    } else {
        VAR_51 = FUNC_0(VAR_32, VAR_1);
        if (VAR_51) {
            VAR_26[VAR_48] = FUNC_8(VAR_1);
            if (VAR_25 == 0)
                return;
            VAR_48++;
        }
    }

    if (!VAR_23 && VAR_24 == 1 &&
        (VAR_27->cu.part_mode == VAR_7 ||
         VAR_27->cu.part_mode == VAR_9 ||
         VAR_27->cu.part_mode == VAR_8) ||
        FUNC_9(VAR_17, VAR_38, VAR_39, VAR_18, VAR_19)) {
        VAR_53 = 0;
    } else {
        VAR_53 = FUNC_0(VAR_34, VAR_3);
        if (VAR_53 &&
            !(VAR_51 && FUNC_5(VAR_3, VAR_1))) {
            VAR_26[VAR_48] = FUNC_8(VAR_3);
            if (VAR_25 == VAR_48)
                return;
            VAR_48++;
        }
    }


    VAR_52 = FUNC_0(VAR_35, VAR_2) &&
                      VAR_40 < VAR_17->ps.sps->width &&
                      FUNC_7(VAR_2) &&
                      !FUNC_9(VAR_17, VAR_40, VAR_41, VAR_18, VAR_19);

    if (VAR_52 &&
        !(VAR_53 && FUNC_5(VAR_2, VAR_3))) {
        VAR_26[VAR_48] = FUNC_8(VAR_2);
        if (VAR_25 == VAR_48)
            return;
        VAR_48++;
    }


    VAR_50 = FUNC_0(VAR_31, VAR_0) &&
                      VAR_43 < VAR_17->ps.sps->height &&
                      FUNC_7(VAR_0) &&
                      !FUNC_9(VAR_17, VAR_42, VAR_43, VAR_18, VAR_19);

    if (VAR_50 &&
        !(VAR_51 && FUNC_5(VAR_0, VAR_1))) {
        VAR_26[VAR_48] = FUNC_8(VAR_0);
        if (VAR_25 == VAR_48)
            return;
        VAR_48++;
    }


    VAR_54 = FUNC_0(VAR_33, VAR_4) &&
                      !FUNC_9(VAR_17, VAR_44, VAR_45, VAR_18, VAR_19);

    if (VAR_54 &&
        !(VAR_51 && FUNC_5(VAR_4, VAR_1)) &&
        !(VAR_53 && FUNC_5(VAR_4, VAR_3)) &&
        VAR_48 != 4) {
        VAR_26[VAR_48] = FUNC_8(VAR_4);
        if (VAR_25 == VAR_48)
            return;
        VAR_48++;
    }


    if (VAR_17->sh.slice_temporal_mvp_enabled_flag &&
        VAR_48 < VAR_17->sh.max_num_merge_cand) {
        Mv VAR_55 = { 0 }, VAR_56 = { 0 };
        int VAR_57 = FUNC_10(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21,
                                                       0, &VAR_55, 0);
        int VAR_58 = (VAR_17->sh.slice_type == VAR_5) ?
                           FUNC_10(VAR_17, VAR_18, VAR_19, VAR_20, VAR_21,
                                                       0, &VAR_56, 1) : 0;

        if (VAR_57 || VAR_58) {
            VAR_26[VAR_48].pred_flag = VAR_57 + (VAR_58 << 1);
            FUNC_3(VAR_26[VAR_48].ref_idx);
            VAR_26[VAR_48].mv[0] = VAR_55;
            VAR_26[VAR_48].mv[1] = VAR_56;

            if (VAR_25 == VAR_48)
                return;
            VAR_48++;
        }
    }

    VAR_49 = VAR_48;


    if (VAR_17->sh.slice_type == VAR_5 && VAR_49 > 1 &&
        VAR_49 < VAR_17->sh.max_num_merge_cand) {
        int VAR_59 = 0;

        for (VAR_59 = 0; VAR_48 < VAR_17->sh.max_num_merge_cand &&
                           VAR_59 < VAR_49 * (VAR_49 - 1); VAR_59++) {
            int VAR_60 = VAR_16[VAR_59][0];
            int VAR_61 = VAR_16[VAR_59][1];
            MvField VAR_62 = VAR_26[VAR_60];
            MvField VAR_63 = VAR_26[VAR_61];

            if ((VAR_62.pred_flag & VAR_14) && (VAR_63.pred_flag & VAR_15) &&
                (VAR_28[0].list[VAR_62.ref_idx[0]] !=
                 VAR_28[1].list[VAR_63.ref_idx[1]] ||
                 FUNC_2(&VAR_62.mv[0]) != FUNC_2(&VAR_63.mv[1]))) {
                VAR_26[VAR_48].ref_idx[0] = VAR_62.ref_idx[0];
                VAR_26[VAR_48].ref_idx[1] = VAR_63.ref_idx[1];
                VAR_26[VAR_48].pred_flag = VAR_13;
                FUNC_1(&VAR_26[VAR_48].mv[0], &VAR_62.mv[0]);
                FUNC_1(&VAR_26[VAR_48].mv[1], &VAR_63.mv[1]);
                if (VAR_25 == VAR_48)
                    return;
                VAR_48++;
            }
        }
    }


    while (VAR_48 < VAR_17->sh.max_num_merge_cand) {
        VAR_26[VAR_48].pred_flag = VAR_14 + ((VAR_17->sh.slice_type == VAR_5) << 1);
        FUNC_4(VAR_26[VAR_48].mv + 0);
        FUNC_4(VAR_26[VAR_48].mv + 1);
        VAR_26[VAR_48].ref_idx[0] = VAR_47 < VAR_46 ? VAR_47 : 0;
        VAR_26[VAR_48].ref_idx[1] = VAR_47 < VAR_46 ? VAR_47 : 0;

        if (VAR_25 == VAR_48)
            return;
        VAR_48++;
        VAR_47++;
    }
}
