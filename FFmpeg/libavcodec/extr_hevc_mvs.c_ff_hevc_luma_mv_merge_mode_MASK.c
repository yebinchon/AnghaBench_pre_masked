
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* pps; } ;
struct TYPE_17__ {TYPE_2__ ps; TYPE_5__* HEVClc; } ;
struct TYPE_14__ {int x; int y; } ;
struct TYPE_16__ {TYPE_3__ cu; } ;
struct TYPE_15__ {scalar_t__ pred_flag; } ;
struct TYPE_12__ {int log2_parallel_merge_level; } ;
typedef TYPE_4__ MvField ;
typedef TYPE_5__ HEVCLocalContext ;
typedef TYPE_6__ HEVCContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*,int,int,int,int,int,int,int,int,TYPE_4__*) ;
 int FUNC_1 (TYPE_6__*,int,int,int,int) ;

void FUNC_2(HEVCContext *VAR_3, int VAR_4, int VAR_5, int VAR_6,
                                int VAR_7, int VAR_8, int VAR_9,
                                int VAR_10, MvField *VAR_11)
{
    int VAR_12 = 0;
    int VAR_13 = 1 << VAR_8;
    MvField VAR_14[VAR_0];
    int VAR_15 = VAR_6;
    int VAR_16 = VAR_7;
    HEVCLocalContext *VAR_17 = VAR_3->HEVClc;

    if (VAR_3->ps.pps->log2_parallel_merge_level > 2 && VAR_13 == 8) {
        VAR_12 = 1;
        VAR_4 = VAR_17->cu.x;
        VAR_5 = VAR_17->cu.y;
        VAR_6 = VAR_13;
        VAR_7 = VAR_13;
        VAR_9 = 0;
    }

    FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
    FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
                                    VAR_12, VAR_9,
                                    VAR_10, VAR_14);

    if (VAR_14[VAR_10].pred_flag == VAR_1 &&
        (VAR_15 + VAR_16) == 12) {
        VAR_14[VAR_10].pred_flag = VAR_2;
    }

    *VAR_11 = VAR_14[VAR_10];
}
