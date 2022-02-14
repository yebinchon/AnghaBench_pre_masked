
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ transport; int link_xmit_quota; int sent_not_acked; scalar_t__ link_state; int timer_entry; int link_xmit_data_q; int acl_priority; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT16 ;
struct TYPE_4__ {int num_lm_ble_bufs; scalar_t__ num_ble_links_active; int controller_le_xmit_window; int ble_round_robin_quota; int ble_round_robin_unacked; int round_robin_unacked; TYPE_1__* lcb_pool; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int,...) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__ VAR_7 ;
 int FUNC_2 (int ) ;

void FUNC_3 (void)
{
    UINT16 VAR_8, VAR_9, VAR_10;
    tL2C_LCB *VAR_11;
    UINT16 VAR_12, VAR_13;
    UINT16 VAR_14 = 0;
    UINT16 VAR_15 = 0;
    UINT16 VAR_16 = VAR_7.num_lm_ble_bufs;
    UINT16 VAR_17 = VAR_2;


    if (VAR_7.num_ble_links_active == 0) {
        VAR_7.controller_le_xmit_window = VAR_7.num_lm_ble_bufs;
        VAR_7.ble_round_robin_quota = VAR_7.ble_round_robin_unacked = 0;
        return;
    }


    for (VAR_9 = 0, VAR_11 = &VAR_7.lcb_pool[0]; VAR_9 < VAR_6; VAR_9++, VAR_11++) {
        if (VAR_11->in_use && VAR_11->transport == VAR_1) {
            if (VAR_11->acl_priority == VAR_4) {
                VAR_15++;
            } else {
                VAR_14++;
            }
        }
    }


    VAR_13 = VAR_14 ? 1 : 0;
    while ( (VAR_15 * VAR_17 + VAR_13) > VAR_16 ) {
        VAR_17--;
    }



    VAR_12 = VAR_15 * VAR_17;
    VAR_13 = (VAR_12 < VAR_16) ? VAR_16 - VAR_12 : 1;




    if (VAR_14 > VAR_13) {
        VAR_7.ble_round_robin_quota = VAR_13;
        VAR_8 = VAR_10 = 0;
    }

    else if (VAR_14 > 0) {
        VAR_7.ble_round_robin_quota = 0;
        VAR_7.ble_round_robin_unacked = 0;
        VAR_8 = VAR_13 / VAR_14;
        VAR_10 = VAR_13 % VAR_14;
    }

    else {
        VAR_7.ble_round_robin_quota = 0;
        VAR_7.ble_round_robin_unacked = 0;
        VAR_8 = VAR_10 = 0;
    }
    FUNC_0 ("l2c_ble_link_adjust_allocation  num_hipri: %u  num_lowpri: %u  low_quota: %u  round_robin_quota: %u  qq: %u",
                       VAR_15, VAR_14, VAR_13,
                       VAR_7.ble_round_robin_quota, VAR_8);


    for (VAR_9 = 0, VAR_11 = &VAR_7.lcb_pool[0]; VAR_9 < VAR_6; VAR_9++, VAR_11++) {
        if (VAR_11->in_use && VAR_11->transport == VAR_1) {
            if (VAR_11->acl_priority == VAR_4) {
                VAR_11->link_xmit_quota = VAR_17;
            } else {



                if (( VAR_11->link_xmit_quota > 0 ) && ( VAR_8 == 0 )) {
                    VAR_7.ble_round_robin_unacked += VAR_11->sent_not_acked;
                }

                VAR_11->link_xmit_quota = VAR_8;
                if (VAR_10 > 0) {
                    VAR_11->link_xmit_quota++;
                    VAR_10--;
                }
            }

            FUNC_0("l2c_ble_link_adjust_allocation LCB %d   Priority: %d  XmitQuota: %d",
                              VAR_9, VAR_11->acl_priority, VAR_11->link_xmit_quota);

            FUNC_0("        SentNotAcked: %d  RRUnacked: %d",
                              VAR_11->sent_not_acked, VAR_7.round_robin_unacked);




            if ( (VAR_11->link_state == VAR_5)
                    && (!FUNC_2(VAR_11->link_xmit_data_q))
                    && (VAR_11->sent_not_acked < VAR_11->link_xmit_quota) ) {
                FUNC_1 (&VAR_11->timer_entry, VAR_0, VAR_3);
            }
        }
    }
}
