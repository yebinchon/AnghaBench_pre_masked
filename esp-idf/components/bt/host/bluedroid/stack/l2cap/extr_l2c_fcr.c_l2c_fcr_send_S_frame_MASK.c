
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_12__ {scalar_t__ in_use; } ;
struct TYPE_13__ {size_t next_seq_expected; size_t last_ack_sent; TYPE_11__ ack_timer; int wait_ack; int * s_frames_sent; } ;
struct TYPE_14__ {scalar_t__ chnl_state; size_t remote_cid; scalar_t__ bypass_fcs; int local_cid; TYPE_1__ fcrb; int p_lcb; int in_use; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef int UINT8 ;
typedef size_t UINT16 ;
struct TYPE_15__ {int offset; size_t len; int layer_specific; } ;
typedef TYPE_3__ BT_HDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (char*,size_t,...) ;
 int FUNC_2 (char*,size_t,...) ;
 int * VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 size_t FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ,int *,TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_11 (int ) ;

void FUNC_12 (tL2C_CCB *VAR_19, UINT16 VAR_20, UINT16 VAR_21)
{
    FUNC_4(VAR_19 != ((void*)0));
    BT_HDR *VAR_22;
    UINT8 *VAR_23;
    UINT16 VAR_24;
    UINT16 VAR_25;

    if ((!VAR_19->in_use) || (VAR_19->chnl_state != VAR_0)) {
        return;
    }


    VAR_19->fcrb.s_frames_sent[VAR_20]++;


    if (VAR_21 == VAR_7) {
        VAR_19->fcrb.wait_ack = VAR_18;

        FUNC_7 (VAR_19);
        FUNC_6 (VAR_19);
    }


    VAR_24 = (VAR_20 << VAR_12) | VAR_13;
    VAR_24 |= (VAR_19->fcrb.next_seq_expected << VAR_10);
    VAR_24 |= VAR_21;

    if ((VAR_22 = (BT_HDR *)FUNC_11(VAR_3)) != ((void*)0)) {
        VAR_22->offset = VAR_1;
        VAR_22->len = VAR_16 + VAR_6;


        VAR_23 = (UINT8 *)(VAR_22 + 1) + VAR_22->offset;


        FUNC_3 (VAR_23, VAR_6 + VAR_14);
        FUNC_3 (VAR_23, VAR_19->remote_cid);
        FUNC_3 (VAR_23, VAR_24);


        if (VAR_19->bypass_fcs != VAR_2) {
            VAR_25 = FUNC_8 (VAR_22);

            FUNC_3 (VAR_23, VAR_25);
            VAR_22->len += VAR_14;
        } else {
            VAR_23 -= 6;
            FUNC_3 (VAR_23, VAR_6);
        }


        VAR_22->layer_specific = VAR_15;
        FUNC_10 (VAR_22, VAR_19);


        if ((((VAR_24 & VAR_11) >> VAR_12) == 1)
                || (((VAR_24 & VAR_11) >> VAR_12) == 3)) {
            FUNC_2 ("L2CAP eRTM Tx S-frame  CID: 0x%04x  ctrlword: 0x%04x  Type: %s  ReqSeq: %u  P: %u  F: %u",
                                 VAR_19->local_cid, VAR_24,
                                 VAR_17[(VAR_24 & VAR_11) >> VAR_12],
                                 (VAR_24 & VAR_9) >> VAR_10,
                                 (VAR_24 & VAR_7) >> VAR_8,
                                 (VAR_24 & VAR_4) >> VAR_5);
            FUNC_2 ("                  Buf Len: %u", VAR_22->len);
        } else {
            FUNC_1 ("L2CAP eRTM Tx S-frame  CID: 0x%04x  ctrlword: 0x%04x  Type: %s  ReqSeq: %u  P: %u  F: %u",
                               VAR_19->local_cid, VAR_24,
                               VAR_17[(VAR_24 & VAR_11) >> VAR_12],
                               (VAR_24 & VAR_9) >> VAR_10,
                               (VAR_24 & VAR_7) >> VAR_8,
                               (VAR_24 & VAR_4) >> VAR_5);
            FUNC_1 ("                  Buf Len: %u", VAR_22->len);
        }


        FUNC_9 (VAR_19->p_lcb, ((void*)0), VAR_22);

        VAR_19->fcrb.last_ack_sent = VAR_19->fcrb.next_seq_expected;

        if (VAR_19->fcrb.ack_timer.in_use) {
            FUNC_5 (&VAR_19->fcrb.ack_timer);
        }
    } else {
        FUNC_0 ("l2c_fcr_send_S_frame(No Resources) cid 0x%04x, Type: 0x%4x",
                           VAR_19->local_cid, VAR_20);
    }
}
