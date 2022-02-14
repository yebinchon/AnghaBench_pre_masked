
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int * ertm_byte_counts; int * ertm_pkt_counts; int waiting_for_ack_q; int pkts_retransmitted; int retrans_q; } ;
struct TYPE_13__ {scalar_t__ mode; } ;
struct TYPE_14__ {TYPE_1__ fcr; } ;
struct TYPE_16__ {scalar_t__ tx_mps; scalar_t__ local_cid; scalar_t__ remote_cid; scalar_t__ bypass_fcs; TYPE_3__ fcrb; TYPE_2__ peer_cfg; int xmit_hold_q; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_17__ {scalar_t__ event; int len; scalar_t__ offset; int layer_specific; } ;
typedef TYPE_5__ BT_HDR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_5__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_5__* FUNC_7 (TYPE_5__*,scalar_t__,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_4__*,TYPE_5__*,scalar_t__) ;

BT_HDR *FUNC_10 (tL2C_CCB *VAR_17, UINT16 VAR_18)
{
    FUNC_3(VAR_17 != ((void*)0));

    BOOLEAN VAR_19 = VAR_0,
                VAR_20 = VAR_0,
                VAR_21 = VAR_0;
    UINT16 VAR_22 = 0;
    BT_HDR *VAR_23, *VAR_24;
    UINT8 *VAR_25;
    UINT16 VAR_26 = VAR_17->tx_mps ;



    VAR_23 = (BT_HDR *)FUNC_4(VAR_17->fcrb.retrans_q, 0);
    if (VAR_23 != ((void*)0)) {

        FUNC_9 (VAR_17, VAR_23, VAR_16);

        VAR_23->event = VAR_17->local_cid;


        VAR_17->fcrb.pkts_retransmitted++;
        VAR_17->fcrb.ertm_pkt_counts[0]++;
        VAR_17->fcrb.ertm_byte_counts[0] += (VAR_23->len - 8);

        return (VAR_23);
    }



    if ( (VAR_18 > VAR_11)
            && (VAR_26 + VAR_11 > VAR_18) ) {
        VAR_26 = VAR_18 - VAR_11;
    }

    VAR_23 = (BT_HDR *)FUNC_6(VAR_17->xmit_hold_q);


    if (VAR_23->len > VAR_26) {

        if (VAR_23->event == 0) {
            VAR_19 = VAR_16;
            VAR_22 = VAR_23->len;
        } else {
            VAR_20 = VAR_16;
        }


        VAR_24 = FUNC_7 (VAR_23, VAR_12 + VAR_14,
                                    VAR_26);

        if (VAR_24 != ((void*)0)) {
            VAR_23->event = VAR_17->local_cid;
            VAR_24->event = VAR_17->local_cid;

            VAR_23->len -= VAR_26;
            VAR_23->offset += VAR_26;


            VAR_24->layer_specific = VAR_23->layer_specific;
        } else {
            FUNC_0 ("L2CAP - cannot get buffer for segmentation, max_pdu: %u", VAR_26);
            return (((void*)0));
        }
    } else {
        VAR_24 = (BT_HDR *)FUNC_4(VAR_17->xmit_hold_q, 0);

        if (VAR_24->event != 0) {
            VAR_21 = VAR_16;
        }

        VAR_24->event = VAR_17->local_cid;
    }


    VAR_24->offset -= (VAR_13 + VAR_7);
    VAR_24->len += VAR_13 + VAR_7;

    if (VAR_19) {
        VAR_24->offset -= VAR_15;
        VAR_24->len += VAR_15;
    }


    VAR_25 = (UINT8 *)(VAR_24 + 1) + VAR_24->offset;




    FUNC_1 (VAR_25, VAR_24->len - VAR_13);

    FUNC_1 (VAR_25, VAR_17->remote_cid);

    if (VAR_19) {

        VAR_25 += 2;
        FUNC_1 (VAR_25, VAR_22);



        VAR_24->layer_specific |= VAR_8;

        VAR_19 = VAR_0;
    } else if (VAR_20) {
        VAR_24->layer_specific |= VAR_4;
    } else if (VAR_21) {
        VAR_24->layer_specific |= VAR_5;
    } else {
        VAR_24->layer_specific |= VAR_9;
    }

    FUNC_9 (VAR_17, VAR_24, VAR_0);

    if (VAR_17->peer_cfg.fcr.mode == VAR_6) {
        BT_HDR *VAR_27 = FUNC_7 (VAR_24, VAR_2, VAR_24->len);

        if (!VAR_27) {
            FUNC_0("L2CAP - no buffer for xmit cloning, CID: 0x%04x  Length: %u",
                              VAR_17->local_cid, VAR_24->len);


            if (VAR_17->bypass_fcs != VAR_3) {
                VAR_24->len -= VAR_10;
            }


            FUNC_5(VAR_17->fcrb.waiting_for_ack_q, VAR_24, VAR_1);
            return (((void*)0));
        } else {


            VAR_25 = ((UINT8 *) (VAR_27 + 1)) + VAR_27->offset + VAR_27->len;
            FUNC_2 (VAR_25, FUNC_8());


            if (VAR_17->bypass_fcs != VAR_3) {
                VAR_27->len -= VAR_10;
            }

            VAR_27->layer_specific = VAR_24->layer_specific;
            FUNC_5(VAR_17->fcrb.waiting_for_ack_q, VAR_27, VAR_1);
        }


        VAR_17->fcrb.ertm_pkt_counts[0]++;
        VAR_17->fcrb.ertm_byte_counts[0] += (VAR_24->len - 8);


    }

    return (VAR_24);
}
