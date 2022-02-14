
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* ref; } ;
struct TYPE_15__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_14__ {int pred_flag; size_t* ref_idx; TYPE_5__* mv; } ;
struct TYPE_13__ {scalar_t__* list; } ;
struct TYPE_12__ {TYPE_1__* refPicList; } ;
struct TYPE_11__ {scalar_t__* list; } ;
typedef TYPE_3__ RefPicList ;
typedef TYPE_4__ MvField ;
typedef TYPE_5__ Mv ;
typedef TYPE_6__ HEVCContext ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(HEVCContext *VAR_1, MvField *VAR_2, MvField *VAR_3,
                             RefPicList *VAR_4)
{
    if (VAR_2->pred_flag == VAR_0 && VAR_3->pred_flag == VAR_0) {

        if (VAR_1->ref->refPicList[0].list[VAR_2->ref_idx[0]] == VAR_4[0].list[VAR_3->ref_idx[0]] &&
            VAR_1->ref->refPicList[0].list[VAR_2->ref_idx[0]] == VAR_1->ref->refPicList[1].list[VAR_2->ref_idx[1]] &&
            VAR_4[0].list[VAR_3->ref_idx[0]] == VAR_4[1].list[VAR_3->ref_idx[1]]) {
            if ((FUNC_0(VAR_3->mv[0].x - VAR_2->mv[0].x) >= 4 || FUNC_0(VAR_3->mv[0].y - VAR_2->mv[0].y) >= 4 ||
                 FUNC_0(VAR_3->mv[1].x - VAR_2->mv[1].x) >= 4 || FUNC_0(VAR_3->mv[1].y - VAR_2->mv[1].y) >= 4) &&
                (FUNC_0(VAR_3->mv[1].x - VAR_2->mv[0].x) >= 4 || FUNC_0(VAR_3->mv[1].y - VAR_2->mv[0].y) >= 4 ||
                 FUNC_0(VAR_3->mv[0].x - VAR_2->mv[1].x) >= 4 || FUNC_0(VAR_3->mv[0].y - VAR_2->mv[1].y) >= 4))
                return 1;
            else
                return 0;
        } else if (VAR_4[0].list[VAR_3->ref_idx[0]] == VAR_1->ref->refPicList[0].list[VAR_2->ref_idx[0]] &&
                   VAR_4[1].list[VAR_3->ref_idx[1]] == VAR_1->ref->refPicList[1].list[VAR_2->ref_idx[1]]) {
            if (FUNC_0(VAR_3->mv[0].x - VAR_2->mv[0].x) >= 4 || FUNC_0(VAR_3->mv[0].y - VAR_2->mv[0].y) >= 4 ||
                FUNC_0(VAR_3->mv[1].x - VAR_2->mv[1].x) >= 4 || FUNC_0(VAR_3->mv[1].y - VAR_2->mv[1].y) >= 4)
                return 1;
            else
                return 0;
        } else if (VAR_4[1].list[VAR_3->ref_idx[1]] == VAR_1->ref->refPicList[0].list[VAR_2->ref_idx[0]] &&
                   VAR_4[0].list[VAR_3->ref_idx[0]] == VAR_1->ref->refPicList[1].list[VAR_2->ref_idx[1]]) {
            if (FUNC_0(VAR_3->mv[1].x - VAR_2->mv[0].x) >= 4 || FUNC_0(VAR_3->mv[1].y - VAR_2->mv[0].y) >= 4 ||
                FUNC_0(VAR_3->mv[0].x - VAR_2->mv[1].x) >= 4 || FUNC_0(VAR_3->mv[0].y - VAR_2->mv[1].y) >= 4)
                return 1;
            else
                return 0;
        } else {
            return 1;
        }
    } else if ((VAR_2->pred_flag != VAR_0) && (VAR_3->pred_flag != VAR_0)){
        Mv VAR_5, VAR_6;
        int VAR_7, VAR_8;

        if (VAR_2->pred_flag & 1) {
            VAR_5 = VAR_2->mv[0];
            VAR_7 = VAR_1->ref->refPicList[0].list[VAR_2->ref_idx[0]];
        } else {
            VAR_5 = VAR_2->mv[1];
            VAR_7 = VAR_1->ref->refPicList[1].list[VAR_2->ref_idx[1]];
        }

        if (VAR_3->pred_flag & 1) {
            VAR_6 = VAR_3->mv[0];
            VAR_8 = VAR_4[0].list[VAR_3->ref_idx[0]];
        } else {
            VAR_6 = VAR_3->mv[1];
            VAR_8 = VAR_4[1].list[VAR_3->ref_idx[1]];
        }

        if (VAR_7 == VAR_8) {
            if (FUNC_0(VAR_5.x - VAR_6.x) >= 4 || FUNC_0(VAR_5.y - VAR_6.y) >= 4)
                return 1;
            else
                return 0;
        } else
            return 1;
    }

    return 1;
}
