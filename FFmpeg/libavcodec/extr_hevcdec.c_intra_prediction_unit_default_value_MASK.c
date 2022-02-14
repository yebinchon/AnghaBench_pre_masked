
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


struct TYPE_11__ {TYPE_2__* sps; } ;
struct TYPE_15__ {int * tab_ipm; TYPE_3__ ps; TYPE_1__* ref; TYPE_6__* HEVClc; } ;
struct TYPE_12__ {scalar_t__ pred_mode; } ;
struct TYPE_14__ {TYPE_4__ cu; } ;
struct TYPE_13__ {int pred_flag; } ;
struct TYPE_10__ {int log2_min_pu_size; int min_pu_width; } ;
struct TYPE_9__ {TYPE_5__* tab_mvf; } ;
typedef TYPE_5__ MvField ;
typedef TYPE_6__ HEVCLocalContext ;
typedef TYPE_7__ HEVCContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(HEVCContext *VAR_3,
                                                int VAR_4, int VAR_5,
                                                int VAR_6)
{
    HEVCLocalContext *VAR_7 = VAR_3->HEVClc;
    int VAR_8 = 1 << VAR_6;
    int VAR_9 = VAR_8 >> VAR_3->ps.sps->log2_min_pu_size;
    int VAR_10 = VAR_3->ps.sps->min_pu_width;
    MvField *VAR_11 = VAR_3->ref->tab_mvf;
    int VAR_12 = VAR_4 >> VAR_3->ps.sps->log2_min_pu_size;
    int VAR_13 = VAR_5 >> VAR_3->ps.sps->log2_min_pu_size;
    int VAR_14, VAR_15;

    if (VAR_9 == 0)
        VAR_9 = 1;
    for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
        FUNC_0(&VAR_3->tab_ipm[(VAR_13 + VAR_14) * VAR_10 + VAR_12], VAR_0, VAR_9);
    if (VAR_7->cu.pred_mode == VAR_1)
        for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
            for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
                VAR_11[(VAR_13 + VAR_14) * VAR_10 + VAR_12 + VAR_15].pred_flag = VAR_2;
}
