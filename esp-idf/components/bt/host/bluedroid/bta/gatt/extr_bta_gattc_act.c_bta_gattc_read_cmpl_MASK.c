
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


struct TYPE_27__ {scalar_t__ status; int conn_id; int handle; TYPE_9__* p_value; } ;
struct TYPE_29__ {TYPE_7__ read; int p_value; int len; } ;
typedef TYPE_9__ tBTA_GATT_UNFMT ;
struct TYPE_19__ {scalar_t__ status; TYPE_2__* p_cmpl; } ;
typedef TYPE_10__ tBTA_GATTC_OP_CMPL ;
struct TYPE_20__ {TYPE_8__* p_rcb; int bta_conn_id; TYPE_6__* p_q_cmd; } ;
typedef TYPE_11__ tBTA_GATTC_CLCB ;
typedef TYPE_9__ tBTA_GATTC ;
typedef int UINT8 ;
struct TYPE_28__ {int (* p_cback ) (int ,TYPE_9__*) ;} ;
struct TYPE_25__ {int cmpl_evt; } ;
struct TYPE_24__ {int cmpl_evt; int handle; } ;
struct TYPE_23__ {scalar_t__ event; } ;
struct TYPE_26__ {TYPE_5__ api_read_multi; TYPE_4__ api_read; TYPE_3__ hdr; } ;
struct TYPE_21__ {int value; int len; int handle; } ;
struct TYPE_22__ {TYPE_1__ att_value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_11__*) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_9__*,int ,int) ;
 int FUNC_3 (int ,TYPE_9__*) ;

void FUNC_4(tBTA_GATTC_CLCB *VAR_2, tBTA_GATTC_OP_CMPL *VAR_3)
{
    UINT8 VAR_4;
    tBTA_GATTC VAR_5;
    tBTA_GATT_UNFMT VAR_6;

    FUNC_2(&VAR_5, 0, sizeof(tBTA_GATTC));
    FUNC_2(&VAR_6, 0, sizeof(tBTA_GATT_UNFMT));

    VAR_5.read.status = VAR_3->status;

    if (VAR_3->p_cmpl != ((void*)0) && VAR_3->status == VAR_1) {
        VAR_5.read.handle = VAR_3->p_cmpl->att_value.handle;

        VAR_6.len = VAR_3->p_cmpl->att_value.len;
        VAR_6.p_value = VAR_3->p_cmpl->att_value.value;
        VAR_5.read.p_value = &VAR_6;
    } else {
        VAR_5.read.handle = VAR_2->p_q_cmd->api_read.handle;
    }

    if (VAR_2->p_q_cmd->hdr.event != VAR_0) {
        VAR_4 = VAR_2->p_q_cmd->api_read.cmpl_evt;
    } else {
        VAR_4 = VAR_2->p_q_cmd->api_read_multi.cmpl_evt;
    }
    VAR_5.read.conn_id = VAR_2->bta_conn_id;

    FUNC_0(VAR_2);
    FUNC_1(VAR_2);

    ( *VAR_2->p_rcb->p_cback)(VAR_4, (tBTA_GATTC *)&VAR_5);

}
