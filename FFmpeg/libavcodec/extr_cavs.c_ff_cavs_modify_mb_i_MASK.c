
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* pred_mode_Y; int* top_pred_Y; int mbx; int flags; } ;
typedef TYPE_1__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_1(AVSContext *VAR_6, int *VAR_7)
{

    VAR_6->pred_mode_Y[3] = VAR_6->pred_mode_Y[5];
    VAR_6->pred_mode_Y[6] = VAR_6->pred_mode_Y[8];
    VAR_6->top_pred_Y[VAR_6->mbx * 2 + 0] = VAR_6->pred_mode_Y[7];
    VAR_6->top_pred_Y[VAR_6->mbx * 2 + 1] = VAR_6->pred_mode_Y[8];


    if (!(VAR_6->flags & VAR_0)) {
        FUNC_0(VAR_3, &VAR_6->pred_mode_Y[4]);
        FUNC_0(VAR_3, &VAR_6->pred_mode_Y[7]);
        FUNC_0(VAR_2, VAR_7);
    }
    if (!(VAR_6->flags & VAR_1)) {
        FUNC_0(VAR_5, &VAR_6->pred_mode_Y[4]);
        FUNC_0(VAR_5, &VAR_6->pred_mode_Y[5]);
        FUNC_0(VAR_4, VAR_7);
    }
}
