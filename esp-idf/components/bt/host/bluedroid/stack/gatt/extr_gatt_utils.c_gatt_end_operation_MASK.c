
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int handle; scalar_t__ len; int value; } ;
typedef TYPE_4__ tGATT_VALUE ;
typedef int tGATT_STATUS ;
typedef int (* tGATT_DISC_CMPL_CB ) (int ,scalar_t__,int ) ;
typedef int (* tGATT_CMPL_CBACK ) (int ,scalar_t__,int ,TYPE_5__*) ;
struct TYPE_17__ {int mtu; TYPE_4__ att_value; int handle; } ;
typedef TYPE_5__ tGATT_CL_COMPLETE ;
struct TYPE_18__ {scalar_t__ operation; scalar_t__ op_subtype; int rsp_timer_ent; int conn_id; scalar_t__ p_attr_buf; TYPE_3__* p_tcb; int s_handle; scalar_t__ counter; TYPE_2__* p_reg; } ;
typedef TYPE_7__ tGATT_CLCB ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_15__ {int payload_size; } ;
struct TYPE_13__ {int (* p_disc_cmpl_cb ) (int ,scalar_t__,int ) ;int (* p_cmpl_cb ) (int ,scalar_t__,int ,TYPE_5__*) ;} ;
struct TYPE_14__ {TYPE_1__ app_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,scalar_t__,int (*) (int ,scalar_t__,int ),int (*) (int ,scalar_t__,int ,TYPE_5__*)) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ,void*,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ,scalar_t__,int ,TYPE_5__*) ;

void FUNC_9(tGATT_CLCB *VAR_6, tGATT_STATUS VAR_7, void *VAR_8)
{
    tGATT_CL_COMPLETE VAR_9;
    tGATT_CMPL_CBACK *VAR_10 = (VAR_6->p_reg) ? VAR_6->p_reg->app_cb.p_cmpl_cb : ((void*)0);
    UINT8 VAR_11 = VAR_6->operation, VAR_12 = VAR_4;
    tGATT_DISC_CMPL_CB *VAR_13 = (VAR_6->p_reg) ? VAR_6->p_reg->app_cb.p_disc_cmpl_cb : ((void*)0);
    UINT16 VAR_14;

    UINT8 VAR_15;


    FUNC_0 ("gatt_end_operation status=%d op=%d subtype=%d",
                      VAR_7, VAR_6->operation, VAR_6->op_subtype);
    FUNC_5(&VAR_9.att_value, 0, sizeof(tGATT_VALUE));

    if (VAR_10 != ((void*)0) && VAR_6->operation != 0) {
        if (VAR_6->operation == VAR_2) {
            VAR_9.att_value.handle = VAR_6->s_handle;
            VAR_9.att_value.len = VAR_6->counter;

            if (VAR_8 && VAR_6->counter) {
                FUNC_4 (VAR_9.att_value.value, VAR_8, VAR_9.att_value.len);
            }
        }

        if (VAR_6->operation == VAR_3) {
            FUNC_5(&VAR_9.att_value, 0, sizeof(tGATT_VALUE));
            VAR_9.handle =
                VAR_9.att_value.handle = VAR_6->s_handle;
            if (VAR_6->op_subtype == VAR_5) {
                if (VAR_8) {
                    VAR_9.att_value = *((tGATT_VALUE *) VAR_8);
                } else {
                    FUNC_0("Rcv Prepare write rsp but no data");
                }
            }
        }

        if (VAR_6->operation == VAR_0) {
            VAR_9.mtu = VAR_6->p_tcb->payload_size;
        }

        if (VAR_6->operation == VAR_1) {
            VAR_12 = VAR_6->op_subtype;
        }
    }

    if (VAR_6->p_attr_buf) {
        FUNC_6(VAR_6->p_attr_buf);
    }


    VAR_15 = VAR_6->operation;


    VAR_14 = VAR_6->conn_id;
    FUNC_2(&VAR_6->rsp_timer_ent);

    FUNC_3(VAR_6);

    if (VAR_13 && (VAR_11 == VAR_1)) {
        (*VAR_13)(VAR_14, VAR_12, VAR_7);
    } else if (VAR_10 && VAR_11) {
        (*VAR_10)(VAR_14, VAR_11, VAR_7, &VAR_9);
    } else {
        FUNC_1 ("gatt_end_operation not sent out op=%d p_disc_cmpl_cb:%p p_cmpl_cb:%p",
                            VAR_15, *VAR_13, *VAR_10);
    }
}
