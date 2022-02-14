
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_13__ {int * p_first_ccb; } ;
struct TYPE_14__ {scalar_t__ transport; scalar_t__ sent_not_acked; scalar_t__ link_state; scalar_t__ completed_packets; int * le_sec_pending_q; int remote_bd_addr; int (* p_echo_rsp_cb ) (int ) ;int * link_xmit_data_q; TYPE_1__ ccb_queue; TYPE_3__* p_hcit_rcv_acl; int upda_con_timer; int info_timer_entry; int timer_entry; void* is_bonding; void* in_use; } ;
typedef TYPE_2__ tL2C_LCB ;
typedef int tL2C_CCB ;
typedef int (* tL2CA_ECHO_RSP_CB ) (int ) ;
struct TYPE_15__ {int p_ref_data; int (* p_callback ) (int ,scalar_t__,int ,int ) ;} ;
typedef TYPE_3__ tL2CAP_SEC_DATA ;
struct TYPE_12__ {scalar_t__ controller_le_xmit_window; scalar_t__ num_lm_ble_bufs; scalar_t__ controller_xmit_window; scalar_t__ num_lm_acl_bufs; int num_ble_links_active; int num_links_active; void* is_ble_connecting; int ble_connecting_bda; } ;
typedef int TIMER_LIST_ENT ;
typedef TYPE_3__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_10__ VAR_9 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_3__* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int *,int ,int) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,scalar_t__,int ,int ) ;

void FUNC_20 (tL2C_LCB *VAR_10)
{
    tL2C_CCB *VAR_11;

    VAR_10->in_use = VAR_4;
    VAR_10->is_bonding = VAR_4;


    FUNC_2 (&VAR_10->timer_entry);
    FUNC_16(&VAR_10->timer_entry, 0, sizeof(TIMER_LIST_ENT));
    FUNC_2 (&VAR_10->info_timer_entry);
    FUNC_16(&VAR_10->info_timer_entry, 0, sizeof(TIMER_LIST_ENT));
    FUNC_2(&VAR_10->upda_con_timer);
    FUNC_16(&VAR_10->upda_con_timer, 0, sizeof(TIMER_LIST_ENT));


    if (VAR_10->p_hcit_rcv_acl) {
        FUNC_17(VAR_10->p_hcit_rcv_acl);
        VAR_10->p_hcit_rcv_acl = ((void*)0);
    }



    if (VAR_10->transport == VAR_2)

    {

        FUNC_1(VAR_10->remote_bd_addr);
    }


    if (VAR_10->sent_not_acked > 0) {

        if (VAR_10->transport == VAR_3) {
            VAR_9.controller_le_xmit_window += VAR_10->sent_not_acked;
            if (VAR_9.controller_le_xmit_window > VAR_9.num_lm_ble_bufs) {
                VAR_9.controller_le_xmit_window = VAR_9.num_lm_ble_bufs;
            }
        } else

        {
            VAR_9.controller_xmit_window += VAR_10->sent_not_acked;
            if (VAR_9.controller_xmit_window > VAR_9.num_lm_acl_bufs) {
                VAR_9.controller_xmit_window = VAR_9.num_lm_acl_bufs;
            }
        }
    }



    if (!FUNC_15(VAR_9.ble_connecting_bda, VAR_10->remote_bd_addr, VAR_0)) {
        VAR_9.is_ble_connecting = VAR_4;
    }







    for (VAR_11 = VAR_10->ccb_queue.p_first_ccb; VAR_11; VAR_11 = VAR_10->ccb_queue.p_first_ccb) {
        FUNC_10 (VAR_11);
    }


    if ((VAR_10->link_state == VAR_7) || (VAR_10->link_state == VAR_8)) {

        FUNC_0 (VAR_10->remote_bd_addr, VAR_10->transport);



    }


    if (VAR_10->link_xmit_data_q) {
        while (!FUNC_13(VAR_10->link_xmit_data_q)) {
            BT_HDR *VAR_12 = FUNC_12(VAR_10->link_xmit_data_q);
            FUNC_14(VAR_10->link_xmit_data_q, VAR_12);
            FUNC_17(VAR_12);
        }
        FUNC_11(VAR_10->link_xmit_data_q);
        VAR_10->link_xmit_data_q = ((void*)0);
    }



    FUNC_8(VAR_10);




    if (VAR_10->transport == VAR_3) {
        if (VAR_9.num_ble_links_active >= 1) {
            VAR_9.num_ble_links_active--;
        }

        FUNC_6();
    } else

    {
        if (VAR_9.num_links_active >= 1) {
            VAR_9.num_links_active--;
        }

        FUNC_7();
    }


    if (VAR_10->p_echo_rsp_cb) {
        tL2CA_ECHO_RSP_CB *VAR_13 = &VAR_10->p_echo_rsp_cb;


        VAR_10->p_echo_rsp_cb = ((void*)0);

        (*VAR_13) (VAR_6);
    }



    if (VAR_10->le_sec_pending_q)
    {
        while (!FUNC_5(VAR_10->le_sec_pending_q))
        {
            tL2CAP_SEC_DATA *VAR_14 = (tL2CAP_SEC_DATA*) FUNC_3(VAR_10->le_sec_pending_q, VAR_5);
            if (VAR_14->p_callback) {
                VAR_14->p_callback(VAR_10->remote_bd_addr, VAR_10->transport, VAR_14->p_ref_data, VAR_1);
            }
            FUNC_17(VAR_14);
        }
        FUNC_4(VAR_10->le_sec_pending_q, ((void*)0));
        VAR_10->le_sec_pending_q = ((void*)0);
    }



    VAR_10->completed_packets = 0;


}
