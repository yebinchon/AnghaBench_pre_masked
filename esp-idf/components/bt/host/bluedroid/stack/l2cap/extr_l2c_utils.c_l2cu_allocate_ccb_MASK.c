
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tL2C_LCB ;
struct TYPE_11__ {int delay_variation; int latency; int peak_bandwidth; int token_bucket_size; int token_rate; int service_type; } ;
struct TYPE_14__ {scalar_t__ in_use; void* param; int user_tx_buf_size; int user_rx_buf_size; void* fcr_tx_buf_size; int fcr_rx_buf_size; int allowed_modes; int preferred_mode; TYPE_1__ qos; int mtu; int flush_to; } ;
struct TYPE_12__ {void* waiting_for_ack_q; void* retrans_q; void* srej_rcv_hold_q; TYPE_4__ mon_retrans_timer; TYPE_4__ ack_timer; } ;
struct TYPE_13__ {int should_free_rcb; int buff_quota; TYPE_4__ timer_entry; void* is_flushable; void* rx_data_rate; void* tx_data_rate; scalar_t__ flags; int chnl_state; scalar_t__ config_done; void* cong_sent; TYPE_2__ fcrb; void* xmit_hold_q; void* tx_mps; int max_rx_mtu; TYPE_4__ ertm_info; int fcr_cfg_tries; void* peer_cfg_already_rejected; scalar_t__ bypass_fcs; TYPE_4__ peer_cfg; TYPE_4__ our_cfg; scalar_t__ peer_cfg_bits; int ccb_priority; int * p_rcb; int * p_lcb; scalar_t__ local_cid; int in_use; int * p_prev_ccb; struct TYPE_13__* p_next_ccb; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int tL2CAP_ERTM_INFO ;
typedef int tL2CAP_CFG_INFO ;
typedef scalar_t__ UINT16 ;
struct TYPE_15__ {TYPE_3__* ccb_pool; TYPE_3__* p_free_ccb_last; TYPE_3__* p_free_ccb_first; } ;
typedef void* TIMER_PARAM_TYPE ;
typedef int TIMER_LIST_ENT ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 TYPE_7__ VAR_23 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,int ,int) ;

tL2C_CCB *FUNC_9 (tL2C_LCB *VAR_24, UINT16 VAR_25)
{
    tL2C_CCB *VAR_26;
    tL2C_CCB *VAR_27;

    FUNC_0 ("l2cu_allocate_ccb: cid 0x%04x", VAR_25);

    if (!VAR_23.p_free_ccb_first) {
        return (((void*)0));
    }


    if (VAR_25 == 0) {
        VAR_26 = VAR_23.p_free_ccb_first;
        VAR_23.p_free_ccb_first = VAR_26->p_next_ccb;
    } else {
        VAR_27 = ((void*)0);

        VAR_26 = &VAR_23.ccb_pool[VAR_25 - VAR_2];

        if (VAR_26 == VAR_23.p_free_ccb_first) {
            VAR_23.p_free_ccb_first = VAR_26->p_next_ccb;
        } else {
            for (VAR_27 = VAR_23.p_free_ccb_first; VAR_27 != ((void*)0); VAR_27 = VAR_27->p_next_ccb) {
                if (VAR_27->p_next_ccb == VAR_26) {
                    VAR_27->p_next_ccb = VAR_26->p_next_ccb;

                    if (VAR_26 == VAR_23.p_free_ccb_last) {
                        VAR_23.p_free_ccb_last = VAR_27;
                    }

                    break;
                }
            }
            if (VAR_27 == ((void*)0)) {
                FUNC_1 ("l2cu_allocate_ccb: could not find CCB for CID 0x%04x in the free list", VAR_25);
                return ((void*)0);
            }
        }
    }

    VAR_26->p_next_ccb = VAR_26->p_prev_ccb = ((void*)0);

    VAR_26->in_use = VAR_22;


    VAR_26->local_cid = VAR_2 + (UINT16)(VAR_26 - VAR_23.ccb_pool);

    VAR_26->p_lcb = VAR_24;
    VAR_26->p_rcb = ((void*)0);
    VAR_26->should_free_rcb = 0;


    VAR_26->ccb_priority = VAR_4;

    if (VAR_24) {
        FUNC_7 (VAR_26);
    }


    VAR_26->peer_cfg_bits = 0;


    FUNC_8 (&VAR_26->our_cfg, 0, sizeof(tL2CAP_CFG_INFO));
    FUNC_8 (&VAR_26->peer_cfg, 0, sizeof(tL2CAP_CFG_INFO));


    VAR_26->our_cfg.flush_to = VAR_26->peer_cfg.flush_to = VAR_7;
    VAR_26->our_cfg.mtu = VAR_26->peer_cfg.mtu = VAR_9;
    VAR_26->our_cfg.qos.service_type = VAR_26->peer_cfg.qos.service_type = VAR_11;
    VAR_26->our_cfg.qos.token_rate = VAR_26->peer_cfg.qos.token_rate = VAR_12;
    VAR_26->our_cfg.qos.token_bucket_size = VAR_26->peer_cfg.qos.token_bucket_size = VAR_5;
    VAR_26->our_cfg.qos.peak_bandwidth = VAR_26->peer_cfg.qos.peak_bandwidth = VAR_10;
    VAR_26->our_cfg.qos.latency = VAR_26->peer_cfg.qos.latency = VAR_8;
    VAR_26->our_cfg.qos.delay_variation = VAR_26->peer_cfg.qos.delay_variation = VAR_6;

    VAR_26->bypass_fcs = 0;
    FUNC_8 (&VAR_26->ertm_info, 0, sizeof(tL2CAP_ERTM_INFO));
    VAR_26->peer_cfg_already_rejected = VAR_1;
    VAR_26->fcr_cfg_tries = VAR_17;


    FUNC_2(&VAR_26->fcrb.ack_timer);
    FUNC_8(&VAR_26->fcrb.ack_timer, 0, sizeof(TIMER_LIST_ENT));
    VAR_26->fcrb.ack_timer.param = (TIMER_PARAM_TYPE)VAR_26;

    FUNC_2(&VAR_26->fcrb.mon_retrans_timer);
    FUNC_8(&VAR_26->fcrb.mon_retrans_timer, 0, sizeof(TIMER_LIST_ENT));
    VAR_26->fcrb.mon_retrans_timer.param = (TIMER_PARAM_TYPE)VAR_26;
    FUNC_5 (VAR_26);

    VAR_26->ertm_info.preferred_mode = VAR_13;
    VAR_26->ertm_info.allowed_modes = VAR_14;
    VAR_26->ertm_info.fcr_rx_buf_size = VAR_15;
    VAR_26->ertm_info.fcr_tx_buf_size = VAR_16;
    VAR_26->ertm_info.user_rx_buf_size = VAR_19;
    VAR_26->ertm_info.user_tx_buf_size = VAR_20;
    VAR_26->max_rx_mtu = VAR_18;
    VAR_26->tx_mps = VAR_16 - 32;

    VAR_26->xmit_hold_q = FUNC_4(VAR_21);

    VAR_26->fcrb.srej_rcv_hold_q = FUNC_4(VAR_21);
    VAR_26->fcrb.retrans_q = FUNC_4(VAR_21);
    VAR_26->fcrb.waiting_for_ack_q = FUNC_4(VAR_21);


    VAR_26->cong_sent = VAR_1;
    VAR_26->buff_quota = 2;


    if (VAR_25 == 0) {
        VAR_26->config_done = 0;
    } else {
        FUNC_0 ("l2cu_allocate_ccb: cid 0x%04x config_done:0x%x", VAR_25, VAR_26->config_done);
    }

    VAR_26->chnl_state = VAR_0;
    VAR_26->flags = 0;
    VAR_26->tx_data_rate = VAR_3;
    VAR_26->rx_data_rate = VAR_3;


    VAR_26->is_flushable = VAR_1;


    FUNC_3(&VAR_26->timer_entry);
    FUNC_8(&VAR_26->timer_entry, 0, sizeof(TIMER_LIST_ENT));
    VAR_26->timer_entry.param = (TIMER_PARAM_TYPE)VAR_26;
    VAR_26->timer_entry.in_use = 0;

    FUNC_6 ();

    return (VAR_26);
}
