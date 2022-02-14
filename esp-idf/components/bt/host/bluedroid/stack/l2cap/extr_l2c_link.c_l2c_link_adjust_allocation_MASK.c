
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_xmit_quota; int sent_not_acked; scalar_t__ link_state; int timer_entry; int link_xmit_data_q; int acl_priority; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT16 ;
struct TYPE_4__ {int num_lm_acl_bufs; scalar_t__ num_links_active; int controller_xmit_window; int round_robin_quota; int round_robin_unacked; TYPE_1__* lcb_pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,int,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (int ) ;

void FUNC_3 (void)
{
    UINT16 VAR_7, VAR_8, VAR_9;
    tL2C_LCB *VAR_10;
    UINT16 VAR_11, VAR_12;
    UINT16 VAR_13 = 0;
    UINT16 VAR_14 = 0;
    UINT16 VAR_15 = VAR_6.num_lm_acl_bufs;
    UINT16 VAR_16 = VAR_1;


    if (VAR_6.num_links_active == 0) {
        VAR_6.controller_xmit_window = VAR_6.num_lm_acl_bufs;
        VAR_6.round_robin_quota = VAR_6.round_robin_unacked = 0;
        return;
    }


    for (VAR_8 = 0, VAR_10 = &VAR_6.lcb_pool[0]; VAR_8 < VAR_5; VAR_8++, VAR_10++) {
        if (VAR_10->in_use) {
            if (VAR_10->acl_priority == VAR_3) {
                VAR_14++;
            } else {
                VAR_13++;
            }
        }
    }


    VAR_12 = VAR_13 ? 1 : 0;
    while ( (VAR_14 * VAR_16 + VAR_12) > VAR_15 ) {
        VAR_16--;
    }


    VAR_11 = VAR_14 * VAR_16;
    VAR_12 = (VAR_11 < VAR_15) ? VAR_15 - VAR_11 : 1;




    if (VAR_13 > VAR_12) {
        VAR_6.round_robin_quota = VAR_12;
        VAR_7 = VAR_9 = 1;
    }

    else if (VAR_13 > 0) {
        VAR_6.round_robin_quota = 0;
        VAR_6.round_robin_unacked = 0;
        VAR_7 = VAR_12 / VAR_13;
        VAR_9 = VAR_12 % VAR_13;
    }

    else {
        VAR_6.round_robin_quota = 0;
        VAR_6.round_robin_unacked = 0;
        VAR_7 = VAR_9 = 1;
    }

    FUNC_0 ("l2c_link_adjust_allocation  num_hipri: %u  num_lowpri: %u  low_quota: %u  round_robin_quota: %u  qq: %u\n",
                       VAR_14, VAR_13, VAR_12,
                       VAR_6.round_robin_quota, VAR_7);


    for (VAR_8 = 0, VAR_10 = &VAR_6.lcb_pool[0]; VAR_8 < VAR_5; VAR_8++, VAR_10++) {
        if (VAR_10->in_use) {
            if (VAR_10->acl_priority == VAR_3) {
                VAR_10->link_xmit_quota = VAR_16;
            } else {



                if (( VAR_10->link_xmit_quota > 0 ) && ( VAR_7 == 0 )) {
                    VAR_6.round_robin_unacked += VAR_10->sent_not_acked;
                }

                VAR_10->link_xmit_quota = VAR_7;
                if (VAR_9 > 0) {
                    VAR_10->link_xmit_quota++;
                    VAR_9--;
                }
            }

            FUNC_0 ("l2c_link_adjust_allocation LCB %d   Priority: %d  XmitQuota: %d\n",
                               VAR_8, VAR_10->acl_priority, VAR_10->link_xmit_quota);

            FUNC_0 ("        SentNotAcked: %d  RRUnacked: %d\n",
                               VAR_10->sent_not_acked, VAR_6.round_robin_unacked);




            if ( (VAR_10->link_state == VAR_4)
                    && (!FUNC_2(VAR_10->link_xmit_data_q))
                    && (VAR_10->sent_not_acked < VAR_10->link_xmit_quota) ) {
                FUNC_1 (&VAR_10->timer_entry, VAR_0, VAR_2);
            }
        }
    }

}
