
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_28__ {scalar_t__ status; TYPE_3__* p_cmpl; } ;
typedef TYPE_8__ tBTA_GATTC_OP_CMPL ;
struct TYPE_29__ {scalar_t__ svc_change_descr_handle; int write_remote_svc_change_ccc_done; } ;
typedef TYPE_9__ tBTA_GATTC_CONN ;
struct TYPE_19__ {TYPE_7__* p_rcb; int bta_conn_id; TYPE_5__* p_q_cmd; int bda; } ;
typedef TYPE_10__ tBTA_GATTC_CLCB ;
struct TYPE_26__ {scalar_t__ status; scalar_t__ handle; int conn_id; } ;
struct TYPE_20__ {TYPE_6__ write; int member_0; } ;
typedef TYPE_11__ tBTA_GATTC ;
typedef int UINT8 ;
struct TYPE_27__ {int (* p_cback ) (int ,TYPE_11__*) ;} ;
struct TYPE_21__ {scalar_t__ event; } ;
struct TYPE_24__ {scalar_t__ write_type; int cmpl_evt; int p_value; TYPE_1__ hdr; } ;
struct TYPE_25__ {TYPE_4__ api_write; } ;
struct TYPE_22__ {scalar_t__ handle; int len; int value; } ;
struct TYPE_23__ {TYPE_2__ att_value; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_9__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_10__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_11__*,int ,int) ;
 int FUNC_6 (int ,TYPE_11__*) ;

void FUNC_7(tBTA_GATTC_CLCB *VAR_6, tBTA_GATTC_OP_CMPL *VAR_7)
{
    tBTA_GATTC VAR_8 = {0};
    UINT8 VAR_9;
    tBTA_GATTC_CONN *VAR_10 = FUNC_1(VAR_6->bda);

    FUNC_5(&VAR_8, 0, sizeof(tBTA_GATTC));

    VAR_8.write.status = VAR_7->status;
    VAR_8.write.handle = VAR_7->p_cmpl->att_value.handle;
    if (VAR_6->p_q_cmd->api_write.hdr.event == VAR_0 &&
        VAR_6->p_q_cmd->api_write.write_type == VAR_2) {

        if (FUNC_4(VAR_6->p_q_cmd->api_write.p_value, VAR_7->p_cmpl->att_value.value,
                   VAR_7->p_cmpl->att_value.len) != 0) {
            VAR_8.write.status = VAR_3;
        }

        VAR_9 = VAR_1;
    } else {
        VAR_9 = VAR_6->p_q_cmd->api_write.cmpl_evt;
    }

    FUNC_2(VAR_6);
    FUNC_3(VAR_6);
    VAR_8.write.conn_id = VAR_6->bta_conn_id;
    if (VAR_10 && VAR_10->svc_change_descr_handle == VAR_8.write.handle) {
        if(VAR_8.write.status != VAR_4) {
            VAR_10->write_remote_svc_change_ccc_done = VAR_5;
            FUNC_0("service change write ccc failed");
        }
        return;
    }

    ( *VAR_6->p_rcb->p_cback)(VAR_9, (tBTA_GATTC *)&VAR_8);

}
