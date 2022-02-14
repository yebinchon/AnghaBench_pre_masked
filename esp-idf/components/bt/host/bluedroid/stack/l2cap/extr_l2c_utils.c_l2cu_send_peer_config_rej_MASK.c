
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int remote_cid; TYPE_4__* p_lcb; int remote_id; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_8__ {int handle; } ;
struct TYPE_7__ {int offset; int len; } ;
typedef TYPE_2__ BT_HDR ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
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
 int VAR_12 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int ) ;
 int FUNC_7 (TYPE_4__*,int *,TYPE_2__*) ;
 int FUNC_8 (int*,int*,int) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10 (tL2C_CCB *VAR_13, UINT8 *VAR_14, UINT16 VAR_15, UINT16 VAR_16)
{
    BT_HDR *VAR_17;
    UINT16 VAR_18, VAR_19, VAR_20, VAR_21;
    UINT8 *VAR_22, *VAR_23, *VAR_24;
    UINT8 VAR_25;

    FUNC_2("l2cu_send_peer_config_rej: data_len=%d, rej_len=%d", VAR_15, VAR_16);


    VAR_18 = VAR_0 + VAR_1 + VAR_7 + VAR_5 + VAR_6;
    VAR_21 = 0xFFFF - VAR_18;
    if (VAR_16 > VAR_21) {
        FUNC_3 ("L2CAP - cfg_rej pkt size exceeds buffer design max limit.");
        return;
    }

    VAR_17 = (BT_HDR *)FUNC_9 (VAR_18 + VAR_16);

    if (!VAR_17) {
        FUNC_3 ("L2CAP - no buffer for cfg_rej");
        return;
    }

    VAR_17->offset = VAR_11;
    VAR_22 = (UINT8 *)(VAR_17 + 1) + VAR_11;



    if (FUNC_1(FUNC_0 ())) {
        FUNC_5 (VAR_22, (VAR_13->p_lcb->handle | (VAR_9 << VAR_10)));
    } else

    {
        FUNC_5 (VAR_22, (VAR_13->p_lcb->handle | (VAR_8 << VAR_10)));
    }


    VAR_23 = VAR_22;
    VAR_22 += 2;


    FUNC_5 (VAR_22, VAR_5 + VAR_6 + VAR_16);
    FUNC_5 (VAR_22, VAR_12);


    FUNC_6 (VAR_22, VAR_4);
    FUNC_6 (VAR_22, VAR_13->remote_id);

    FUNC_5 (VAR_22, VAR_6 + VAR_16);

    FUNC_5 (VAR_22, VAR_13->remote_cid);
    FUNC_5 (VAR_22, 0);
    FUNC_5 (VAR_22, VAR_3);

    VAR_20 = VAR_16;


    VAR_24 = VAR_14 + VAR_15;
    while (VAR_14 < VAR_24) {
        VAR_25 = *VAR_14;
        VAR_19 = *(VAR_14 + 1);

        switch (VAR_25 & 0x7F) {

        case 129:
        case 130:
        case 128:
            VAR_14 += VAR_19 + VAR_2;
            break;


        default:

            if ((VAR_19 + VAR_2) <= VAR_15) {
                if ((VAR_25 & 0x80) == 0) {
                    if (VAR_20 >= (VAR_19 + VAR_2)) {
                        FUNC_8(VAR_22, VAR_14, VAR_19 + VAR_2);
                        VAR_22 += VAR_19 + VAR_2;
                        VAR_20 -= (VAR_19 + VAR_2);
                    } else {
                        FUNC_4("L2CAP - cfg_rej exceeds allocated buffer");
                        VAR_14 = VAR_24;
                        break;
                    }
                }
                VAR_14 += VAR_19 + VAR_2;
            }

            else {
                VAR_14 = VAR_24;
            }
            break;
        }
    }

    VAR_18 = (UINT16) (VAR_22 - VAR_23 - 2);
    FUNC_5 (VAR_23, VAR_18);

    VAR_17->len = VAR_18 + 4;

    FUNC_2 ("L2CAP - cfg_rej pkt hci_len=%d, l2cap_len=%d",
                       VAR_18, (VAR_5 + VAR_6 + VAR_16));

    FUNC_7 (VAR_13->p_lcb, ((void*)0), VAR_17);
}
