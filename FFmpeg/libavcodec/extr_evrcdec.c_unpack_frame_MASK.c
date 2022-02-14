
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* energy_gain; void** lsp; void** fcb_gain; void*** fcb_shape; void** acb_gain; void* pitch_delay; void* tty; void* delay_diff; void* lpc_flag; } ;
struct TYPE_4__ {int bitrate; int gb; TYPE_2__ frame; } ;
typedef int GetBitContext ;
typedef TYPE_1__ EVRCContext ;
typedef TYPE_2__ EVRCAFrame ;





 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(EVRCContext *VAR_0)
{
    EVRCAFrame *VAR_1 = &VAR_0->frame;
    GetBitContext *VAR_2 = &VAR_0->gb;

    switch (VAR_0->bitrate) {
    case 130:
        VAR_1->lpc_flag = FUNC_1(VAR_2);
        VAR_1->lsp[0] = FUNC_0(VAR_2, 6);
        VAR_1->lsp[1] = FUNC_0(VAR_2, 6);
        VAR_1->lsp[2] = FUNC_0(VAR_2, 9);
        VAR_1->lsp[3] = FUNC_0(VAR_2, 7);
        VAR_1->pitch_delay = FUNC_0(VAR_2, 7);
        VAR_1->delay_diff = FUNC_0(VAR_2, 5);
        VAR_1->acb_gain[0] = FUNC_0(VAR_2, 3);
        VAR_1->fcb_shape[0][0] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[0][1] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[0][2] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[0][3] = FUNC_0(VAR_2, 11);
        VAR_1->fcb_gain[0] = FUNC_0(VAR_2, 5);
        VAR_1->acb_gain[1] = FUNC_0(VAR_2, 3);
        VAR_1->fcb_shape[1][0] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[1][1] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[1][2] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[1][3] = FUNC_0(VAR_2, 11);
        VAR_1->fcb_gain [1] = FUNC_0(VAR_2, 5);
        VAR_1->acb_gain [2] = FUNC_0(VAR_2, 3);
        VAR_1->fcb_shape[2][0] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[2][1] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[2][2] = FUNC_0(VAR_2, 8);
        VAR_1->fcb_shape[2][3] = FUNC_0(VAR_2, 11);
        VAR_1->fcb_gain [2] = FUNC_0(VAR_2, 5);
        VAR_1->tty = FUNC_1(VAR_2);
        break;
    case 129:
        VAR_1->lsp [0] = FUNC_0(VAR_2, 7);
        VAR_1->lsp [1] = FUNC_0(VAR_2, 7);
        VAR_1->lsp [2] = FUNC_0(VAR_2, 8);
        VAR_1->pitch_delay = FUNC_0(VAR_2, 7);
        VAR_1->acb_gain [0] = FUNC_0(VAR_2, 3);
        VAR_1->fcb_shape[0][0] = FUNC_0(VAR_2, 10);
        VAR_1->fcb_gain [0] = FUNC_0(VAR_2, 4);
        VAR_1->acb_gain [1] = FUNC_0(VAR_2, 3);
        VAR_1->fcb_shape[1][0] = FUNC_0(VAR_2, 10);
        VAR_1->fcb_gain [1] = FUNC_0(VAR_2, 4);
        VAR_1->acb_gain [2] = FUNC_0(VAR_2, 3);
        VAR_1->fcb_shape[2][0] = FUNC_0(VAR_2, 10);
        VAR_1->fcb_gain [2] = FUNC_0(VAR_2, 4);
        break;
    case 128:
        VAR_1->lsp [0] = FUNC_0(VAR_2, 4);
        VAR_1->lsp [1] = FUNC_0(VAR_2, 4);
        VAR_1->energy_gain = FUNC_0(VAR_2, 8);
        break;
    }
}
