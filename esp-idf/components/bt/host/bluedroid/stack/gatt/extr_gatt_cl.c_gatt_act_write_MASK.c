
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int value; scalar_t__ len; int handle; } ;
typedef TYPE_1__ tGATT_VALUE ;
struct TYPE_10__ {scalar_t__ payload_size; } ;
typedef TYPE_2__ tGATT_TCB ;
struct TYPE_11__ {int op_subtype; int clcb_idx; int s_handle; scalar_t__ p_attr_buf; TYPE_2__* p_tcb; } ;
typedef TYPE_3__ tGATT_CLCB ;
typedef scalar_t__ UINT8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,scalar_t__,...) ;



 int FUNC_1 (TYPE_3__*,scalar_t__,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,scalar_t__,int ,scalar_t__,int ,int ) ;

void FUNC_4 (tGATT_CLCB *VAR_9, UINT8 VAR_10)
{
    tGATT_TCB *VAR_11 = VAR_9->p_tcb;
    UINT8 VAR_12 = VAR_8, VAR_13 = 0;
    tGATT_VALUE *VAR_14 = (tGATT_VALUE *)VAR_9->p_attr_buf;

    if (VAR_14) {
        switch (VAR_9->op_subtype) {
        case 129:
            VAR_9->s_handle = VAR_14->handle;
            VAR_13 = (VAR_10 == VAR_6) ? VAR_7 : VAR_1;
            VAR_12 = FUNC_3(VAR_11,
                                     VAR_9->clcb_idx,
                                     VAR_13,
                                     VAR_14->handle,
                                     VAR_14->len,
                                     0,
                                     VAR_14->value);
            break;

        case 130:
            if (VAR_14->len <= (VAR_11->payload_size - VAR_3)) {
                VAR_9->s_handle = VAR_14->handle;

                VAR_12 = FUNC_3(VAR_11,
                                         VAR_9->clcb_idx,
                                         VAR_5,
                                         VAR_14->handle,
                                         VAR_14->len,
                                         0,
                                         VAR_14->value);
            } else {
                FUNC_2(VAR_11, VAR_9);
            }
            break;

        case 128:
            FUNC_2(VAR_11, VAR_9);
            break;

        default:
            VAR_12 = VAR_4;
            FUNC_0("Unknown write type: %d", VAR_9->op_subtype);
            break;
        }
    } else {
        VAR_12 = VAR_4;
    }

    if ((VAR_12 != VAR_8 && VAR_12 != VAR_0 && VAR_12 != VAR_2)
            || (VAR_12 != VAR_0 && VAR_9->op_subtype == 129)) {
        if (VAR_12 != VAR_8) {
            FUNC_0("gatt_act_write() failed op_code=0x%x rt=%d", VAR_13, VAR_12);
        }
        FUNC_1(VAR_9, VAR_12, ((void*)0));
    }
}
