
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;


struct TYPE_21__ {int in_use; } ;
struct TYPE_25__ {int next_seq_expected; int last_ack_sent; int max_held_acks; scalar_t__ local_busy; int srej_rcv_hold_q; TYPE_19__ ack_timer; void* srej_sent; void* rej_sent; void* rej_after_srej; int * ertm_byte_counts; int * ertm_pkt_counts; } ;
typedef TYPE_4__ tL2C_FCRB ;
struct TYPE_23__ {int tx_win_sz; } ;
struct TYPE_24__ {TYPE_2__ fcr; } ;
struct TYPE_22__ {scalar_t__ fcr_rx_buf_size; } ;
struct TYPE_26__ {int local_cid; scalar_t__ chnl_state; TYPE_4__ fcrb; int xmit_hold_q; scalar_t__ in_use; TYPE_3__ our_cfg; TYPE_1__ ertm_info; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_27__ {int layer_specific; scalar_t__ len; int offset; } ;
typedef TYPE_6__ BT_HDR ;
typedef void* BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int,int,int,void*) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_19__*,int ,int) ;
 int FUNC_5 (TYPE_19__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_7 (int ,TYPE_6__*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 TYPE_6__* FUNC_11 (TYPE_6__*,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int ,int ) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_6__*) ;
 int FUNC_16 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_17 (tL2C_CCB *VAR_18, BT_HDR *VAR_19, UINT16 VAR_20, BOOLEAN VAR_21)
{
    FUNC_3(VAR_18 != ((void*)0));
    FUNC_3(VAR_19 != ((void*)0));

    tL2C_FCRB *VAR_22 = &VAR_18->fcrb;
    UINT8 VAR_23, VAR_24, VAR_25, VAR_26;


    if (VAR_20 & VAR_5) {
        if (!FUNC_16 (VAR_18, VAR_15)) {
            FUNC_15(VAR_19);
            return;
        }
    }


    VAR_18->fcrb.ertm_pkt_counts[1]++;
    VAR_18->fcrb.ertm_byte_counts[1] += VAR_19->len;



    VAR_23 = (VAR_20 & VAR_13) >> VAR_14;


    if ( (VAR_23 != VAR_22->next_seq_expected) && (VAR_22->local_busy) ) {
        FUNC_2 ("Dropping bad I-Frame since we flowed off, tx_seq:%u", VAR_23);
        FUNC_13 (VAR_18, VAR_10, 0);
        FUNC_15(VAR_19);
        return;
    }


    if (VAR_23 != VAR_22->next_seq_expected) {
        VAR_24 = (VAR_23 - VAR_22->next_seq_expected) & VAR_8;


        if (VAR_24 >= VAR_18->our_cfg.fcr.tx_win_sz) {

            FUNC_2 ("process_i_frame() Dropping Duplicate Frame tx_seq:%u  ExpectedTxSeq %u", VAR_23, VAR_22->next_seq_expected);
            FUNC_15(VAR_19);
        } else {
            FUNC_2 ("process_i_frame() CID: 0x%04x  Lost: %u  tx_seq:%u  ExpTxSeq %u  Rej: %u  SRej: %u",
                                 VAR_18->local_cid, VAR_24, VAR_23, VAR_22->next_seq_expected, VAR_22->rej_sent, VAR_22->srej_sent);

            if (VAR_22->srej_sent) {

                VAR_26 = (((BT_HDR *)FUNC_10(VAR_22->srej_rcv_hold_q))->layer_specific + 1) & VAR_8;

                if ( (VAR_23 == VAR_26) && (FUNC_9(VAR_22->srej_rcv_hold_q) < VAR_18->our_cfg.fcr.tx_win_sz) ) {


                    if (VAR_18->ertm_info.fcr_rx_buf_size != VAR_7) {
                        BT_HDR *VAR_27;


                        VAR_19->offset -= VAR_6;
                        VAR_19->len += VAR_6;

                        VAR_27 = FUNC_11 (VAR_19, VAR_19->offset, VAR_19->len);

                        if (VAR_27) {
                            FUNC_15 (VAR_19);
                            VAR_19 = VAR_27;
                        }
                        VAR_19->offset += VAR_6;
                        VAR_19->len -= VAR_6;
                    }
                    FUNC_0 ("process_i_frame() Lost: %u  tx_seq:%u  ExpTxSeq %u  Rej: %u  SRej1",
                                       VAR_24, VAR_23, VAR_22->next_seq_expected, VAR_22->rej_sent);

                    VAR_19->layer_specific = VAR_23;
                    FUNC_7(VAR_22->srej_rcv_hold_q, VAR_19, VAR_3);
                } else {
                    FUNC_2 ("process_i_frame() CID: 0x%04x  frame dropped in Srej Sent next_srej:%u  hold_q.count:%u  win_sz:%u",
                                         VAR_18->local_cid, VAR_26, FUNC_9(VAR_22->srej_rcv_hold_q), VAR_18->our_cfg.fcr.tx_win_sz);

                    VAR_22->rej_after_srej = VAR_17;
                    FUNC_15 (VAR_19);
                }
            } else if (VAR_22->rej_sent) {
                FUNC_2 ("process_i_frame() CID: 0x%04x  Lost: %u  tx_seq:%u  ExpTxSeq %u  Rej: 1  SRej: %u",
                                     VAR_18->local_cid, VAR_24, VAR_23, VAR_22->next_seq_expected, VAR_22->srej_sent);


                FUNC_15 (VAR_19);
            } else {
                FUNC_0 ("process_i_frame() CID: 0x%04x  tx_seq:%u  ExpTxSeq %u  Rej: %u",
                                   VAR_18->local_cid, VAR_23, VAR_22->next_seq_expected, VAR_22->rej_sent);


                if (VAR_24 > 1) {
                    FUNC_15 (VAR_19);
                    VAR_22->rej_sent = VAR_17;
                    FUNC_13 (VAR_18, VAR_9, 0);
                } else {
                    if (!FUNC_8(VAR_22->srej_rcv_hold_q)) {
                        FUNC_1 ("process_i_frame() CID: 0x%04x  sending SREJ tx_seq:%d hold_q.count:%u",
                                             VAR_18->local_cid, VAR_23, FUNC_9(VAR_22->srej_rcv_hold_q));
                    }
                    VAR_19->layer_specific = VAR_23;
                    FUNC_7(VAR_22->srej_rcv_hold_q, VAR_19, VAR_3);
                    VAR_22->srej_sent = VAR_17;
                    FUNC_13 (VAR_18, VAR_12, 0);
                }
                FUNC_5 (&VAR_18->fcrb.ack_timer);
            }
        }
        return;
    }


    VAR_22->rej_sent = VAR_22->srej_sent = VAR_2;



    VAR_22->next_seq_expected = (VAR_23 + 1) & VAR_8;


    if (!FUNC_6 (VAR_18, VAR_19, VAR_20)) {
        FUNC_2 ("process_i_frame() CID: 0x%04x  reassembly failed", VAR_18->local_cid);
        FUNC_14 (VAR_18);
        return;
    }


    VAR_25 = (VAR_22->next_seq_expected - VAR_22->last_ack_sent) & VAR_8;

    if ( (VAR_25 < VAR_18->fcrb.max_held_acks) && (!VAR_22->local_busy) ) {
        VAR_21 = VAR_17;
    }


    if ((VAR_25 != 0) && VAR_18->in_use && (VAR_18->chnl_state == VAR_1)) {

        if (VAR_21) {

            if (!VAR_18->fcrb.ack_timer.in_use) {
                FUNC_4 (&VAR_18->fcrb.ack_timer, VAR_0,
                                       (VAR_4 * VAR_16) / 1000);
            }
        } else if ((FUNC_8(VAR_18->xmit_hold_q) ||
                  FUNC_12(VAR_18))
                 && FUNC_8(VAR_18->fcrb.srej_rcv_hold_q)) {
            if (VAR_22->local_busy) {
                FUNC_13 (VAR_18, VAR_10, 0);
            } else {
                FUNC_13 (VAR_18, VAR_11, 0);
            }
        }
    }
}
