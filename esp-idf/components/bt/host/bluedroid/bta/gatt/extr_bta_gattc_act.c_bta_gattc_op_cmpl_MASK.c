
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {int status; int op_code; } ;
struct TYPE_20__ {TYPE_7__ op_cmpl; } ;
typedef TYPE_4__ tBTA_GATTC_DATA ;
struct TYPE_21__ {scalar_t__ auto_update; TYPE_3__* p_srcb; TYPE_2__* p_q_cmd; } ;
typedef TYPE_5__ tBTA_GATTC_CLCB ;
typedef size_t UINT8 ;
struct TYPE_19__ {scalar_t__ srvc_hdl_chg; } ;
struct TYPE_17__ {size_t event; } ;
struct TYPE_18__ {TYPE_1__ hdr; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_7__*) ;
 size_t* VAR_12 ;
 size_t* VAR_13 ;
 int FUNC_4 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_5 (TYPE_5__*,int ,int *) ;
 int FUNC_6 (TYPE_5__*,TYPE_7__*) ;

void FUNC_7(tBTA_GATTC_CLCB *VAR_14, tBTA_GATTC_DATA *VAR_15)
{
    UINT8 VAR_16 = (UINT8)VAR_15->op_cmpl.op_code;
    UINT8 VAR_17 = 0;

    FUNC_0("bta_gattc_op_cmpl op = %d", VAR_16);

    if (VAR_16 == VAR_7 || VAR_16 == VAR_8) {
        FUNC_1("unexpected operation, ignored");
    } else if (VAR_16 >= VAR_9) {
        if (VAR_14->p_q_cmd == ((void*)0)) {
            FUNC_1("No pending command");
            return;
        }
        if (VAR_14->p_q_cmd->hdr.event != VAR_13[VAR_16 - VAR_9]) {
            if (VAR_14->p_q_cmd->hdr.event != VAR_1) {
                VAR_17 = VAR_14->p_q_cmd->hdr.event - VAR_0 + VAR_9;
                if ( VAR_17 > VAR_7) {
                    VAR_17 = 0;
                }


                FUNC_1("expect op:(%s :0x%04x), receive unexpected operation (%s).",
                                 VAR_12[VAR_17] , VAR_14->p_q_cmd->hdr.event,
                                 VAR_12[VAR_16]);




                return;
            }
        }


        if (VAR_14->auto_update == VAR_2 && VAR_14->p_srcb->srvc_hdl_chg) {
            FUNC_0("Discard all responses when service change indication is received.");
            VAR_15->op_cmpl.status = VAR_11;
        }


        if (VAR_16 == VAR_9) {
            FUNC_4(VAR_14, &VAR_15->op_cmpl);
        }

        else if (VAR_16 == VAR_10) {
            FUNC_6(VAR_14, &VAR_15->op_cmpl);
        }

        else if (VAR_16 == VAR_6) {
            FUNC_3(VAR_14, &VAR_15->op_cmpl);
        }

        else if (VAR_16 == VAR_5) {
            FUNC_2(VAR_14, &VAR_15->op_cmpl);
        }

        if (VAR_14->auto_update == VAR_2) {
            VAR_14->auto_update = VAR_4;
            FUNC_5(VAR_14, VAR_3, ((void*)0));
        }
    }
}
