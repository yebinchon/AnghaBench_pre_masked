
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int pred_flag; size_t* ref_idx; int * mv; } ;
struct TYPE_10__ {TYPE_1__* sps; } ;
struct TYPE_13__ {TYPE_3__* ref; TYPE_2__ ps; } ;
struct TYPE_12__ {int* isLongTerm; } ;
struct TYPE_11__ {TYPE_4__* refPicList; int * tab_mvf; } ;
struct TYPE_9__ {int min_pu_width; } ;
typedef TYPE_4__ RefPicList ;
typedef int MvField ;
typedef int Mv ;
typedef TYPE_5__ HEVCContext ;


 TYPE_8__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*,int *,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(HEVCContext *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                            Mv *VAR_4, int VAR_5, int VAR_6)
{
    MvField *VAR_7 = VAR_0->ref->tab_mvf;
    int VAR_8 = VAR_0->ps.sps->min_pu_width;

    RefPicList *VAR_9 = VAR_0->ref->refPicList;

    if ((FUNC_0(VAR_1, VAR_2).pred_flag) & (1 << VAR_3)) {
        int VAR_10 = VAR_9[VAR_5].isLongTerm[VAR_6];

        int VAR_11 =
            VAR_9[VAR_3].isLongTerm[(FUNC_0(VAR_1, VAR_2).ref_idx[VAR_3])];

        if (VAR_11 == VAR_10) {
            *VAR_4 = FUNC_0(VAR_1, VAR_2).mv[VAR_3];
            if (!VAR_10)
                FUNC_1(VAR_0, VAR_4, VAR_8, VAR_1, VAR_2,
                           VAR_3, VAR_5, VAR_6);
            return 1;
        }
    }
    return 0;
}
