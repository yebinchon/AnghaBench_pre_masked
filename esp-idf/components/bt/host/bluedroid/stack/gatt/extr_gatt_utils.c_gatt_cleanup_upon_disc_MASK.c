
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_16__ {int * multi_rsp_q; } ;
struct TYPE_18__ {int tcb_idx; TYPE_1__ sr_cmd; int conf_timer_ent; int ind_ack_timer_ent; } ;
typedef TYPE_3__ tGATT_TCB ;
struct TYPE_17__ {int (* p_conn_cb ) (int ,int ,int ,int ,int ,int ) ;} ;
struct TYPE_19__ {int gatt_if; TYPE_2__ app_cb; scalar_t__ in_use; } ;
typedef TYPE_4__ tGATT_REG ;
struct TYPE_20__ {scalar_t__ operation; int clcb_idx; int conn_id; int rsp_timer_ent; TYPE_3__* p_tcb; scalar_t__ in_use; } ;
typedef TYPE_5__ tGATT_CLCB ;
typedef int tBT_TRANSPORT ;
typedef size_t UINT8 ;
typedef int UINT16 ;
struct TYPE_15__ {TYPE_4__* cl_rcb; TYPE_5__* clcb; } ;
typedef int BD_ADDR ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 TYPE_14__ VAR_6 ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_5__*,int ,int *) ;
 TYPE_3__* FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*,int ,int) ;
 int VAR_7 ;
 int FUNC_15 (int ,int ,int ,int ,int ,int ) ;

void FUNC_16(BD_ADDR VAR_8, UINT16 VAR_9, tBT_TRANSPORT VAR_10)
{
    tGATT_TCB *VAR_11 = ((void*)0);
    tGATT_CLCB *VAR_12;
    UINT8 VAR_13;
    UINT16 VAR_14;
    tGATT_REG *VAR_15 = ((void*)0);


    FUNC_2 ("gatt_cleanup_upon_disc ");

    if ((VAR_11 = FUNC_9(VAR_8, VAR_10)) != ((void*)0)) {
        FUNC_2 ("found p_tcb ");
        FUNC_13(VAR_11, VAR_2);
        for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13 ++) {
            VAR_12 = &VAR_6.clcb[VAR_13];
            if (VAR_12->in_use && VAR_12->p_tcb == VAR_11) {
                FUNC_4(&VAR_12->rsp_timer_ent);
                FUNC_2 ("found p_clcb conn_id=%d clcb_idx=%d", VAR_12->conn_id, VAR_12->clcb_idx);
                if (VAR_12->operation != VAR_1) {
                    FUNC_8(VAR_12, VAR_4, ((void*)0));
                }

                FUNC_6(VAR_12);

            }
        }

        FUNC_3 (&VAR_11->ind_ack_timer_ent);
        FUNC_3 (&VAR_11->conf_timer_ent);
        FUNC_11(VAR_11);
        FUNC_10(VAR_11);
        FUNC_12(VAR_11);




        for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13 ++) {
            VAR_15 = &VAR_6.cl_rcb[VAR_13];
            if (VAR_15->in_use && VAR_15->app_cb.p_conn_cb) {
                VAR_14 = FUNC_1(VAR_11->tcb_idx, VAR_15->gatt_if);
                FUNC_2 ("found p_reg tcb_idx=%d gatt_if=%d  conn_id=0x%x", VAR_11->tcb_idx, VAR_15->gatt_if, VAR_14);
                (*VAR_15->app_cb.p_conn_cb)(VAR_15->gatt_if, VAR_8, VAR_14, VAR_0, VAR_9, VAR_10);
            }
        }
        FUNC_14(VAR_11, 0, sizeof(tGATT_TCB));

    } else {
        FUNC_2 ("exit gatt_cleanup_upon_disc ");
        FUNC_0();
    }
    FUNC_7(VAR_8);
}
