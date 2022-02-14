
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ collocated_list; } ;
struct TYPE_13__ {scalar_t__ poc; TYPE_2__ sh; TYPE_1__* ref; } ;
struct TYPE_12__ {int pred_flag; } ;
struct TYPE_11__ {int nb_refs; scalar_t__* list; } ;
struct TYPE_9__ {TYPE_3__* refPicList; } ;
typedef TYPE_3__ RefPicList ;
typedef TYPE_4__ MvField ;
typedef int Mv ;
typedef TYPE_5__ HEVCContext ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(HEVCContext *VAR_4, MvField VAR_5,
                                         int VAR_6, Mv *VAR_7, int VAR_8,
                                         int VAR_9, RefPicList *VAR_10)
{
    RefPicList *VAR_11 = VAR_4->ref->refPicList;

    if (VAR_5.pred_flag == VAR_2)
        return 0;

    if (!(VAR_5.pred_flag & VAR_3))
        return FUNC_0(1);
    else if (VAR_5.pred_flag == VAR_3)
        return FUNC_0(0);
    else if (VAR_5.pred_flag == VAR_1) {
        int VAR_12 = 0;
        int VAR_13, VAR_14;
        for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
            for (VAR_13 = 0; VAR_13 < VAR_11[VAR_14].nb_refs; VAR_13++) {
                if (VAR_11[VAR_14].list[VAR_13] > VAR_4->poc) {
                    VAR_12++;
                    break;
                }
            }
        }
        if (!VAR_12) {
            if (VAR_8==0)
                return FUNC_0(0);
            else
                return FUNC_0(1);
        } else {
            if (VAR_4->sh.collocated_list == VAR_0)
                return FUNC_0(0);
            else
                return FUNC_0(1);
        }
    }

    return 0;
}
