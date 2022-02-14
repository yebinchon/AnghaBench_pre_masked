
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_blocks; int use_frame_exp_strategy; int fbw_channels; int** exp_strategy; int* frame_exp_strategy; int cpl_on; } ;
typedef TYPE_1__ AC3EncodeContext ;


 int****** VAR_0 ;

void FUNC_0(AC3EncodeContext *VAR_1)
{
    int VAR_2;

    if (VAR_1->num_blocks < 6) {
        VAR_1->use_frame_exp_strategy = 0;
        return;
    }

    VAR_1->use_frame_exp_strategy = 1;
    for (VAR_2 = !VAR_1->cpl_on; VAR_2 <= VAR_1->fbw_channels; VAR_2++) {
        int VAR_3 = VAR_0[VAR_1->exp_strategy[VAR_2][0]-1]
                                                [VAR_1->exp_strategy[VAR_2][1]]
                                                [VAR_1->exp_strategy[VAR_2][2]]
                                                [VAR_1->exp_strategy[VAR_2][3]]
                                                [VAR_1->exp_strategy[VAR_2][4]]
                                                [VAR_1->exp_strategy[VAR_2][5]];
        if (VAR_3 < 0) {
            VAR_1->use_frame_exp_strategy = 0;
            break;
        }
        VAR_1->frame_exp_strategy[VAR_2] = VAR_3;
    }
}
