
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ op_code; scalar_t__ trans_id; int status; int handle; } ;
struct TYPE_4__ {scalar_t__ trans_id; TYPE_2__ sr_cmd; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef TYPE_2__ tGATT_SR_CMD ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

UINT32 FUNC_0 (tGATT_TCB *VAR_6, UINT8 VAR_7, UINT16 VAR_8)
{
    tGATT_SR_CMD *VAR_9 = &VAR_6->sr_cmd;
    UINT32 VAR_10 = 0;

    if ( (VAR_9->op_code == 0) ||
            (VAR_7 == VAR_1)) {
        if (VAR_7 == VAR_0 ||
                VAR_7 == VAR_4 ||
                VAR_7 == VAR_3 ||
                VAR_7 == VAR_1) {
            VAR_10 = ++VAR_6->trans_id;
        } else {
            VAR_9->trans_id = ++VAR_6->trans_id;
            VAR_9->op_code = VAR_7;
            VAR_9->handle = VAR_8;
            VAR_9->status = VAR_2;
            VAR_6->trans_id %= VAR_5;
            VAR_10 = VAR_9->trans_id;
        }
    }

    return VAR_10;
}
