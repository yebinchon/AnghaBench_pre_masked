
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stream_revision; int mbx; void** top_pred_Y; void** pred_mode_Y; } ;
typedef TYPE_1__ AVSContext ;


 void* VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static inline void FUNC_0(AVSContext *VAR_2)
{
    if (VAR_2->stream_revision > 0) {
        VAR_2->pred_mode_Y[3] = VAR_2->pred_mode_Y[6] = VAR_1;
        VAR_2->top_pred_Y[VAR_2->mbx * 2 + 0] = VAR_2->top_pred_Y[VAR_2->mbx * 2 + 1] = VAR_1;
    } else {
        VAR_2->pred_mode_Y[3] = VAR_2->pred_mode_Y[6] = VAR_0;
        VAR_2->top_pred_Y[VAR_2->mbx * 2 + 0] = VAR_2->top_pred_Y[VAR_2->mbx * 2 + 1] = VAR_0;
    }
}
