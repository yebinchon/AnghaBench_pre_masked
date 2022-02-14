
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef enum InterPredIdc { ____Placeholder_InterPredIdc } InterPredIdc ;
struct TYPE_18__ {scalar_t__ slice_type; int mvd_l1_zero_flag; scalar_t__* nb_refs; } ;
struct TYPE_23__ {TYPE_1__ sh; TYPE_5__* HEVClc; } ;
struct TYPE_17__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_20__ {TYPE_16__ mvd; } ;
struct TYPE_22__ {TYPE_3__ pu; } ;
struct TYPE_21__ {TYPE_2__* mv; scalar_t__ pred_flag; void** ref_idx; } ;
struct TYPE_19__ {int y; int x; } ;
typedef TYPE_4__ MvField ;
typedef TYPE_5__ HEVCLocalContext ;
typedef TYPE_6__ HEVCContext ;


 int FUNC_0 (TYPE_16__*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_6__*,int,int,int) ;
 int FUNC_2 (TYPE_6__*,int,int) ;
 int FUNC_3 (TYPE_6__*,int,int,int,int,int,int,int,TYPE_4__*,int,int) ;
 int FUNC_4 (TYPE_6__*) ;
 void* FUNC_5 (TYPE_6__*,scalar_t__) ;
 int FUNC_6 (TYPE_6__*,int,int,int,int) ;

__attribute__((used)) static void FUNC_7(HEVCContext *VAR_8, int VAR_9, int VAR_10, int VAR_11,
                                  int VAR_12, int VAR_13, int VAR_14,
                                  int VAR_15, MvField *VAR_16)
{
    HEVCLocalContext *VAR_17 = VAR_8->HEVClc;
    enum InterPredIdc VAR_18 = VAR_6;
    int VAR_19;

    FUNC_6(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
    VAR_16->pred_flag = 0;
    if (VAR_8->sh.slice_type == VAR_0)
        VAR_18 = FUNC_2(VAR_8, VAR_11, VAR_12);

    if (VAR_18 != VAR_7) {
        if (VAR_8->sh.nb_refs[VAR_1])
            VAR_16->ref_idx[0]= FUNC_5(VAR_8, VAR_8->sh.nb_refs[VAR_1]);

        VAR_16->pred_flag = VAR_3;
        FUNC_1(VAR_8, VAR_9, VAR_10, 0);
        VAR_19 = FUNC_4(VAR_8);
        FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
                                 VAR_14, VAR_15, VAR_16, VAR_19, 0);
        VAR_16->mv[0].x += VAR_17->pu.mvd.x;
        VAR_16->mv[0].y += VAR_17->pu.mvd.y;
    }

    if (VAR_18 != VAR_6) {
        if (VAR_8->sh.nb_refs[VAR_2])
            VAR_16->ref_idx[1]= FUNC_5(VAR_8, VAR_8->sh.nb_refs[VAR_2]);

        if (VAR_8->sh.mvd_l1_zero_flag == 1 && VAR_18 == VAR_5) {
            FUNC_0(&VAR_17->pu.mvd);
        } else {
            FUNC_1(VAR_8, VAR_9, VAR_10, 1);
        }

        VAR_16->pred_flag += VAR_4;
        VAR_19 = FUNC_4(VAR_8);
        FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
                                 VAR_14, VAR_15, VAR_16, VAR_19, 1);
        VAR_16->mv[1].x += VAR_17->pu.mvd.x;
        VAR_16->mv[1].y += VAR_17->pu.mvd.y;
    }
}
