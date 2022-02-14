
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ slice_temporal_mvp_enabled_flag; } ;
struct TYPE_19__ {TYPE_3__* sps; } ;
struct TYPE_24__ {TYPE_5__ sh; TYPE_4__ ps; TYPE_1__* ref; TYPE_8__* HEVClc; } ;
struct TYPE_17__ {int cand_bottom_left; int cand_left; int cand_up_left; int cand_up; int cand_up_right_sap; } ;
struct TYPE_23__ {TYPE_2__ na; } ;
struct TYPE_22__ {scalar_t__ x; scalar_t__ y; int member_0; } ;
struct TYPE_21__ {int* ref_idx; TYPE_7__* mv; } ;
struct TYPE_18__ {int min_pu_width; int height; int width; } ;
struct TYPE_16__ {TYPE_6__* tab_mvf; } ;
typedef TYPE_6__ MvField ;
typedef TYPE_7__ Mv ;
typedef TYPE_8__ HEVCLocalContext ;
typedef TYPE_9__ HEVCContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int,TYPE_7__) ;
 int FUNC_2 (int ,int,TYPE_7__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*,int,int,int,int,int,TYPE_7__*,int) ;

void FUNC_5(HEVCContext *VAR_5, int VAR_6, int VAR_7, int VAR_8,
                              int VAR_9, int VAR_10, int VAR_11,
                              int VAR_12, MvField *VAR_13,
                              int VAR_14, int VAR_15)
{
    HEVCLocalContext *VAR_16 = VAR_5->HEVClc;
    MvField *VAR_17 = VAR_5->ref->tab_mvf;
    int VAR_18 = 0;
    int VAR_19 = 1;
    int VAR_20 = 1;
    int VAR_21 = 0;
    int VAR_22 = VAR_5->ps.sps->min_pu_width;

    int VAR_23, VAR_24;
    int VAR_25;
    int VAR_26, VAR_27;
    int VAR_28;
    int VAR_29, VAR_30;
    int VAR_31;
    int VAR_32, VAR_33;
    int VAR_34;
    int VAR_35, VAR_36;
    int VAR_37;

    Mv VAR_38[2] = { { 0 } };
    Mv VAR_39;
    Mv VAR_40;
    int VAR_41;
    int VAR_42 = 0;
    int VAR_43;
    int VAR_44;

    const int VAR_45 = VAR_16->na.cand_bottom_left;
    const int VAR_46 = VAR_16->na.cand_left;
    const int VAR_47 = VAR_16->na.cand_up_left;
    const int VAR_48 = VAR_16->na.cand_up;
    const int VAR_49 = VAR_16->na.cand_up_right_sap;
    VAR_41 = VAR_15;
    VAR_42 = VAR_13->ref_idx[VAR_15];
    VAR_43 = VAR_15;
    VAR_44 = !VAR_15;


    VAR_23 = VAR_6 - 1;
    VAR_24 = VAR_7 + VAR_9;

    VAR_25 = FUNC_0(VAR_45, VAR_0) &&
                      VAR_24 < VAR_5->ps.sps->height &&
                      FUNC_3(VAR_0);


    VAR_26 = VAR_6 - 1;
    VAR_27 = VAR_7 + VAR_9 - 1;

    VAR_28 = FUNC_0(VAR_46, VAR_1);
    if (VAR_25 || VAR_28)
        VAR_18 = 1;

    if (VAR_25) {
        if (FUNC_1(VAR_0, VAR_43, VAR_39)) {
            goto b_candidates;
        }
        if (FUNC_1(VAR_0, VAR_44, VAR_39)) {
            goto b_candidates;
        }
    }

    if (VAR_28) {
        if (FUNC_1(VAR_1, VAR_43, VAR_39)) {
            goto b_candidates;
        }
        if (FUNC_1(VAR_1, VAR_44, VAR_39)) {
            goto b_candidates;
        }
    }

    if (VAR_25) {
        if (FUNC_2(VAR_0, VAR_43, VAR_39)) {
            goto b_candidates;
        }
        if (FUNC_2(VAR_0, VAR_44, VAR_39)) {
            goto b_candidates;
        }
    }

    if (VAR_28) {
        if (FUNC_2(VAR_1, VAR_43, VAR_39)) {
            goto b_candidates;
        }
        if (FUNC_2(VAR_1, VAR_44, VAR_39)) {
            goto b_candidates;
        }
    }
    VAR_19 = 0;

b_candidates:


    VAR_29 = VAR_6 + VAR_8;
    VAR_30 = VAR_7 - 1;

    VAR_31 = FUNC_0(VAR_49, VAR_2) &&
                       VAR_29 < VAR_5->ps.sps->width &&
                       FUNC_3(VAR_2);


    VAR_32 = VAR_6 + VAR_8 - 1;
    VAR_33 = VAR_7 - 1;
    VAR_34 = FUNC_0(VAR_48, VAR_3);


    VAR_35 = VAR_6 - 1;
    VAR_36 = VAR_7 - 1;
    VAR_37 = FUNC_0(VAR_47, VAR_4);


    if (VAR_31) {
        if (FUNC_1(VAR_2, VAR_43, VAR_40)) {
            goto scalef;
        }
        if (FUNC_1(VAR_2, VAR_44, VAR_40)) {
            goto scalef;
        }
    }


    if (VAR_34) {
        if (FUNC_1(VAR_3, VAR_43, VAR_40)) {
            goto scalef;
        }
        if (FUNC_1(VAR_3, VAR_44, VAR_40)) {
            goto scalef;
        }
    }


    if (VAR_37) {
        if (FUNC_1(VAR_4, VAR_43, VAR_40)) {
            goto scalef;
        }
        if (FUNC_1(VAR_4, VAR_44, VAR_40)) {
            goto scalef;
        }
    }
    VAR_20 = 0;

scalef:
    if (!VAR_18) {
        if (VAR_20) {
            VAR_19 = 1;
            VAR_39 = VAR_40;
        }
        VAR_20 = 0;


        if (VAR_31) {
            VAR_20 = FUNC_2(VAR_2, VAR_43, VAR_40);
            if (!VAR_20)
                VAR_20 = FUNC_2(VAR_2, VAR_44, VAR_40);
        }

        if (VAR_34 && !VAR_20) {
            VAR_20 = FUNC_2(VAR_3, VAR_43, VAR_40);
            if (!VAR_20)
                VAR_20 = FUNC_2(VAR_3, VAR_44, VAR_40);
        }

        if (VAR_37 && !VAR_20) {
            VAR_20 = FUNC_2(VAR_4, VAR_43, VAR_40);
            if (!VAR_20)
                VAR_20 = FUNC_2(VAR_4, VAR_44, VAR_40);
        }
    }

    if (VAR_19)
        VAR_38[VAR_21++] = VAR_39;

    if (VAR_20 && (!VAR_19 || VAR_39.x != VAR_40.x || VAR_39.y != VAR_40.y))
        VAR_38[VAR_21++] = VAR_40;


    if (VAR_21 < 2 && VAR_5->sh.slice_temporal_mvp_enabled_flag &&
        VAR_14 == VAR_21) {
        Mv VAR_50;
        int VAR_51 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8,
                                                        VAR_9, VAR_42,
                                                        &VAR_50, VAR_15);
        if (VAR_51)
            VAR_38[VAR_21++] = VAR_50;
    }

    VAR_13->mv[VAR_15] = VAR_38[VAR_14];
}
