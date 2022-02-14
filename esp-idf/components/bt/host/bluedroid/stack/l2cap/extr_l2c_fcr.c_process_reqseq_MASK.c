
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int last_rx_ack; int waiting_for_ack_q; int wait_ack; scalar_t__ num_tries; } ;
typedef TYPE_3__ tL2C_FCRB ;
struct TYPE_15__ {int local_cid; TYPE_2__* p_rcb; int xmit_hold_q; TYPE_3__ fcrb; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_16__ {int layer_specific; } ;
struct TYPE_12__ {int (* pL2CA_TxComplete_Cb ) (int ,int) ;} ;
struct TYPE_13__ {TYPE_1__ api; } ;
typedef TYPE_5__ BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static BOOLEAN FUNC_11 (tL2C_CCB *VAR_13, UINT16 VAR_14)
{
    FUNC_1(VAR_13 != ((void*)0));
    tL2C_FCRB *VAR_15 = &VAR_13->fcrb;
    UINT8 VAR_16, VAR_17, VAR_18;
    UINT16 VAR_19;
    UINT16 VAR_20;


    if ( (VAR_14 & VAR_10)
            && ((VAR_14 & VAR_7) == (VAR_9 << VAR_8))
            && ((VAR_14 & VAR_2) == 0) ) {

        if (!FUNC_3(VAR_15->waiting_for_ack_q)) {
            FUNC_6(VAR_13);
  }

        return (VAR_12);
    }


    VAR_16 = (VAR_14 & VAR_3) >> VAR_4;

    VAR_17 = (VAR_16 - VAR_15->last_rx_ack) & VAR_6;


    if (VAR_17 > FUNC_4(VAR_15->waiting_for_ack_q)) {

        FUNC_0 ("L2CAP eRTM Frame BAD Req_Seq - ctrl_word: 0x%04x  req_seq 0x%02x  last_rx_ack: 0x%02x  QCount: %u",
                             VAR_14, VAR_16, VAR_15->last_rx_ack,
                             FUNC_4(VAR_15->waiting_for_ack_q));

        FUNC_8 (VAR_13);
        return (VAR_0);
    }

    VAR_15->last_rx_ack = VAR_16;


    if (VAR_17 != 0) {
        VAR_15->num_tries = 0;
        VAR_20 = 0;


        FUNC_5 (VAR_13, VAR_17);


        for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
            BT_HDR *VAR_21 = (BT_HDR *)FUNC_2(VAR_15->waiting_for_ack_q, 0);
            VAR_19 = VAR_21->layer_specific & VAR_5;

            if ( (VAR_19 == VAR_11) || (VAR_19 == VAR_1) ) {
                VAR_20++;
            }
            FUNC_9(VAR_21);
        }


        if (!VAR_13->fcrb.wait_ack) {
            FUNC_7 (VAR_13);
        }


        if ( (VAR_13->p_rcb) && (VAR_13->p_rcb->api.pL2CA_TxComplete_Cb) && (VAR_20) ) {

            if (FUNC_3(VAR_15->waiting_for_ack_q) &&
                FUNC_3(VAR_13->xmit_hold_q)) {
                VAR_20 = 0xFFFF;
            }

            (*VAR_13->p_rcb->api.pL2CA_TxComplete_Cb)(VAR_13->local_cid, VAR_20);
        }
    }


    if (!FUNC_3(VAR_15->waiting_for_ack_q)) {
        FUNC_6 (VAR_13);
    }

    return (VAR_12);
}
