
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {scalar_t__ in_use; } ;
struct TYPE_14__ {size_t next_tx_seq; size_t next_seq_expected; size_t last_ack_sent; TYPE_10__ ack_timer; scalar_t__ send_f_rsp; } ;
typedef TYPE_3__ tL2C_FCRB ;
struct TYPE_12__ {scalar_t__ mode; } ;
struct TYPE_13__ {TYPE_1__ fcr; } ;
struct TYPE_15__ {scalar_t__ bypass_fcs; TYPE_2__ peer_cfg; int local_cid; TYPE_3__ fcrb; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT8 ;
typedef size_t UINT16 ;
struct TYPE_16__ {int offset; size_t layer_specific; int len; } ;
typedef TYPE_5__ BT_HDR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*,int ,int,int ,size_t,size_t,size_t) ;
 int * VAR_15 ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_4__*) ;
 size_t FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_7 (tL2C_CCB *VAR_16, BT_HDR *VAR_17, BOOLEAN VAR_18)
{
    FUNC_3(VAR_16 != ((void*)0));
    FUNC_3(VAR_17 != ((void*)0));
    tL2C_FCRB *VAR_19 = &VAR_16->fcrb;
    UINT8 *VAR_20;
    UINT16 VAR_21;
    UINT16 VAR_22;
    BOOLEAN VAR_23 = VAR_19->send_f_rsp;

    VAR_19->send_f_rsp = VAR_0;

    if (VAR_18) {

        VAR_20 = ((UINT8 *) (VAR_17 + 1)) + VAR_17->offset + VAR_14;

        FUNC_1 (VAR_22, VAR_20);

        VAR_22 &= ~(VAR_5 + VAR_3);
    } else {
        VAR_22 = VAR_17->layer_specific & VAR_9;
        VAR_22 |= (VAR_19->next_tx_seq << VAR_12);

        VAR_19->next_tx_seq = (VAR_19->next_tx_seq + 1) & VAR_10;
    }


    if (VAR_16->peer_cfg.fcr.mode == VAR_2) {
        if (VAR_23) {
            VAR_22 |= VAR_3;
        }

        VAR_22 |= (VAR_19->next_seq_expected) << VAR_6;

        VAR_19->last_ack_sent = VAR_16->fcrb.next_seq_expected;

        if (VAR_16->fcrb.ack_timer.in_use) {
            FUNC_4 (&VAR_16->fcrb.ack_timer);
        }
    }


    VAR_20 = ((UINT8 *) (VAR_17 + 1)) + VAR_17->offset + VAR_14;

    FUNC_2 (VAR_20, VAR_22);


    if (VAR_16->bypass_fcs != VAR_1) {

        VAR_20 = ((UINT8 *) (VAR_17 + 1)) + VAR_17->offset;
        FUNC_2 (VAR_20, VAR_17->len + VAR_13 - VAR_14);


        VAR_21 = FUNC_6(VAR_17);


        VAR_20 = ((UINT8 *) (VAR_17 + 1)) + VAR_17->offset + VAR_17->len;

        FUNC_2 (VAR_20, VAR_21);

        VAR_17->len += VAR_13;
    }


    if (VAR_18) {
        FUNC_0 ("L2CAP eRTM ReTx I-frame  CID: 0x%04x  Len: %u  SAR: %s  TxSeq: %u  ReqSeq: %u  F: %u",
                           VAR_16->local_cid, VAR_17->len,
                           VAR_15[(VAR_22 & VAR_7) >> VAR_8],
                           (VAR_22 & VAR_11) >> VAR_12,
                           (VAR_22 & VAR_5) >> VAR_6,
                           (VAR_22 & VAR_3) >> VAR_4);
    } else {
        FUNC_0 ("L2CAP eRTM Tx I-frame CID: 0x%04x  Len: %u  SAR: %-12s  TxSeq: %u  ReqSeq: %u  F: %u",
                           VAR_16->local_cid, VAR_17->len,
                           VAR_15[(VAR_22 & VAR_7) >> VAR_8],
                           (VAR_22 & VAR_11) >> VAR_12,
                           (VAR_22 & VAR_5) >> VAR_6,
                           (VAR_22 & VAR_3) >> VAR_4);
    }



    if (VAR_16->peer_cfg.fcr.mode == VAR_2) {
        FUNC_5 (VAR_16);
    }
}
