
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mbx; int flags; int mb_width; void** mv; int * pred_mode_Y; int * top_pred_Y; void*** top_mv; } ;
typedef TYPE_1__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;

void FUNC_0(AVSContext *VAR_13)
{
    int VAR_14;


    for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
        VAR_13->mv[VAR_7 + VAR_14] = VAR_13->top_mv[0][VAR_13->mbx * 2 + VAR_14];
        VAR_13->mv[VAR_3 + VAR_14] = VAR_13->top_mv[1][VAR_13->mbx * 2 + VAR_14];
    }
    VAR_13->pred_mode_Y[1] = VAR_13->top_pred_Y[VAR_13->mbx * 2 + 0];
    VAR_13->pred_mode_Y[2] = VAR_13->top_pred_Y[VAR_13->mbx * 2 + 1];

    if (!(VAR_13->flags & VAR_0)) {
        VAR_13->mv[VAR_7] = VAR_12;
        VAR_13->mv[VAR_8] = VAR_12;
        VAR_13->mv[VAR_3] = VAR_12;
        VAR_13->mv[VAR_4] = VAR_12;
        VAR_13->pred_mode_Y[1] = VAR_13->pred_mode_Y[2] = VAR_11;
        VAR_13->flags &= ~(VAR_1 | VAR_2);
    } else if (VAR_13->mbx) {
        VAR_13->flags |= VAR_2;
    }
    if (VAR_13->mbx == VAR_13->mb_width - 1)
        VAR_13->flags &= ~VAR_1;

    if (!(VAR_13->flags & VAR_1)) {
        VAR_13->mv[VAR_9] = VAR_12;
        VAR_13->mv[VAR_5] = VAR_12;
    }

    if (!(VAR_13->flags & VAR_2)) {
        VAR_13->mv[VAR_10] = VAR_12;
        VAR_13->mv[VAR_6] = VAR_12;
    }
}
