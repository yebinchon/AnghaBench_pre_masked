
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int len; int value; int handle; } ;
struct TYPE_11__ {TYPE_1__ att_value; int handle; } ;
typedef TYPE_3__ tGATT_CL_COMPLETE ;
struct TYPE_12__ {int conn_id; int value; int bda; int len; int is_notify; } ;
typedef TYPE_4__ tBTA_GATTC_NOTIFY ;
struct TYPE_13__ {TYPE_2__* p_rcb; int bta_conn_id; int bda; } ;
typedef TYPE_5__ tBTA_GATTC_CLCB ;
typedef int tBTA_GATTC ;
typedef scalar_t__ UINT8 ;
struct TYPE_10__ {int (* p_cback ) (int ,int *) ;} ;


 int FUNC_0 (char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(tBTA_GATTC_CLCB *VAR_4, UINT8 VAR_5,
                                     tGATT_CL_COMPLETE *VAR_6,
                                     tBTA_GATTC_NOTIFY *VAR_7)
{
    FUNC_0("bta_gattc_proc_other_indication check p_data->att_value.handle=%d p_data->handle=%d",
                       VAR_6->att_value.handle, VAR_6->handle);
    FUNC_0("is_notify %d", VAR_7->is_notify);

    VAR_7->is_notify = (VAR_5 == VAR_2) ? VAR_1 : VAR_3;
    VAR_7->len = VAR_6->att_value.len;
    FUNC_1(VAR_7->bda, VAR_4->bda);
    FUNC_2(VAR_7->value, VAR_6->att_value.value, VAR_6->att_value.len);
    VAR_7->conn_id = VAR_4->bta_conn_id;

    if (VAR_4->p_rcb->p_cback) {
        (*VAR_4->p_rcb->p_cback)(VAR_0, (tBTA_GATTC *)VAR_7);
    }

}
