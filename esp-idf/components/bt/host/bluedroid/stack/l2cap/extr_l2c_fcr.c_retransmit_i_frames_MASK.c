
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_19__ {scalar_t__ num_tries; int waiting_for_ack_q; int retrans_q; int last_rx_ack; } ;
struct TYPE_17__ {scalar_t__ max_transmit; } ;
struct TYPE_18__ {TYPE_1__ fcr; } ;
struct TYPE_20__ {scalar_t__ local_cid; TYPE_3__ fcrb; TYPE_10__* p_lcb; TYPE_2__ peer_cfg; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int list_t ;
typedef int list_node_t ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_21__ {int offset; scalar_t__ layer_specific; scalar_t__ event; int len; } ;
struct TYPE_16__ {int * link_xmit_data_q; } ;
typedef TYPE_5__ BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (int,int*) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_5__*,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 TYPE_5__* FUNC_10 (TYPE_5__*,int,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_10__*,int *,int *) ;
 int FUNC_13 (TYPE_4__*) ;
 int * FUNC_14 (int *) ;
 int const* FUNC_15 (int *) ;
 int * FUNC_16 (int const*) ;
 scalar_t__ FUNC_17 (int const*) ;
 int FUNC_18 (int *,TYPE_5__*) ;
 int FUNC_19 (TYPE_5__*) ;

__attribute__((used)) static BOOLEAN FUNC_20 (tL2C_CCB *VAR_7, UINT8 VAR_8)
{
    FUNC_4(VAR_7 != ((void*)0));

    BT_HDR *VAR_9 = ((void*)0);
    UINT8 *VAR_10;
    UINT8 VAR_11;
    UINT16 VAR_12;

    if ( (!FUNC_8(VAR_7->fcrb.waiting_for_ack_q))
            && (VAR_7->peer_cfg.fcr.max_transmit != 0)
            && (VAR_7->fcrb.num_tries >= VAR_7->peer_cfg.fcr.max_transmit) ) {
        FUNC_2 ("Max Tries Exceeded:  (last_acq: %d  CID: 0x%04x  num_tries: %u (max: %u) ack_q_count: %u",
                           VAR_7->fcrb.last_rx_ack, VAR_7->local_cid, VAR_7->fcrb.num_tries, VAR_7->peer_cfg.fcr.max_transmit,
                FUNC_9(VAR_7->fcrb.waiting_for_ack_q));

        FUNC_13 (VAR_7);
        return (VAR_0);
    }


    list_t *VAR_13 = ((void*)0);
    const list_node_t *VAR_14 = ((void*)0);
    if (! FUNC_8(VAR_7->fcrb.waiting_for_ack_q)) {
        VAR_13 = FUNC_7(VAR_7->fcrb.waiting_for_ack_q);
        VAR_14 = FUNC_14(VAR_13);
    }
    if (VAR_8 != VAR_5) {


        if (VAR_13 != ((void*)0)) {
            for ( ; VAR_14 != FUNC_15(VAR_13); VAR_14 = FUNC_16(VAR_14)) {
                VAR_9 = (BT_HDR *)FUNC_17(VAR_14);

                VAR_10 = ((UINT8 *) (VAR_9+1)) + VAR_9->offset + VAR_4;

                FUNC_3 (VAR_12, VAR_10);

                VAR_11 = (VAR_12 & VAR_2) >> VAR_3;

                FUNC_0 ("retransmit_i_frames()   cur seq: %u  looking for: %u", VAR_11, VAR_8);

                if (VAR_8 == VAR_11) {
                    break;
    }
            }
        }

        if (!VAR_9) {
            FUNC_1 ("retransmit_i_frames() UNKNOWN seq: %u  q_count: %u",
                               VAR_8,
                               FUNC_9(VAR_7->fcrb.waiting_for_ack_q));
            return (VAR_6);
        }
    } else {


        for (const list_node_t *VAR_15 = FUNC_14(VAR_7->p_lcb->link_xmit_data_q);
                VAR_15 != FUNC_15(VAR_7->p_lcb->link_xmit_data_q);) {
            BT_HDR *VAR_16 = (BT_HDR *)FUNC_17(VAR_15);
            VAR_15 = FUNC_16(VAR_15);


            if ((VAR_16->layer_specific == 0) && (VAR_16->event == VAR_7->local_cid)) {
                FUNC_18(VAR_7->p_lcb->link_xmit_data_q, VAR_16);
                FUNC_19(VAR_16);
            }
        }


        while (!FUNC_8(VAR_7->fcrb.retrans_q)) {
            FUNC_19(FUNC_5(VAR_7->fcrb.retrans_q, 0));
  }

        if (VAR_13 != ((void*)0)) {
            VAR_14 = FUNC_14(VAR_13);
  }
    }

    if (VAR_13 != ((void*)0)) {
        while (VAR_14 != FUNC_15(VAR_13))
        {
            VAR_9 = (BT_HDR *)FUNC_17(VAR_14);
            VAR_14 = FUNC_16(VAR_14);

            BT_HDR *VAR_17 = FUNC_10(VAR_9, VAR_9->offset, VAR_9->len);
            if (VAR_17)
            {
                VAR_17->layer_specific = VAR_9->layer_specific;

                FUNC_6(VAR_7->fcrb.retrans_q, VAR_17, VAR_1);
            }

            if ( (VAR_8 != VAR_5) || (VAR_17 == ((void*)0)) ) {
                break;
   }
        }
    }

    FUNC_12 (VAR_7->p_lcb, ((void*)0), ((void*)0));

    if (FUNC_9(VAR_7->fcrb.waiting_for_ack_q))
    {
        VAR_7->fcrb.num_tries++;
        FUNC_11 (VAR_7);
    }

    return (VAR_6);
}
