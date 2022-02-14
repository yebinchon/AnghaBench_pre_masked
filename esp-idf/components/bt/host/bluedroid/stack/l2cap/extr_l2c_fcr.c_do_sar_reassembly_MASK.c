
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ rx_sdu_len; TYPE_6__* p_rx_sdu; } ;
typedef TYPE_4__ tL2C_FCRB ;
struct TYPE_14__ {int user_rx_buf_size; } ;
struct TYPE_18__ {scalar_t__ max_rx_mtu; scalar_t__ local_cid; TYPE_3__* p_lcb; TYPE_1__ ertm_info; TYPE_4__ fcrb; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_20__ {TYPE_2__* fixed_reg; } ;
struct TYPE_19__ {scalar_t__ len; int offset; } ;
struct TYPE_16__ {int remote_bd_addr; } ;
struct TYPE_15__ {int (* pL2CA_FixedData_Cb ) (scalar_t__,int ,TYPE_6__*) ;} ;
typedef TYPE_6__ BT_HDR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*,int ,TYPE_6__*) ;
 TYPE_9__ VAR_12 ;
 int FUNC_5 (int *,int *,scalar_t__) ;
 int FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,int ,TYPE_6__*) ;

__attribute__((used)) static BOOLEAN FUNC_9 (tL2C_CCB *VAR_13, BT_HDR *VAR_14, UINT16 VAR_15)
{
    FUNC_3(VAR_13 != ((void*)0));
    FUNC_3(VAR_14 != ((void*)0));

    tL2C_FCRB *VAR_16 = &VAR_13->fcrb;
    UINT16 VAR_17 = VAR_15 & VAR_3;
    BOOLEAN VAR_18 = VAR_11;
    UINT8 *VAR_19;


    if ((VAR_17 == VAR_5) || (VAR_17 == VAR_4)) {
        if (VAR_16->p_rx_sdu != ((void*)0)) {
            FUNC_1 ("SAR - got unexpected unsegmented or start SDU  Expected len: %u  Got so far: %u",
                                 VAR_16->rx_sdu_len, VAR_16->p_rx_sdu->len);

            VAR_18 = VAR_0;
        }

        if ( (VAR_17 == VAR_4) && (VAR_14->len < VAR_9) ) {
            FUNC_1 ("SAR start packet too short: %u", VAR_14->len);
            VAR_18 = VAR_0;
        }
    } else {
        if (VAR_16->p_rx_sdu == ((void*)0)) {
            FUNC_1 ("SAR - got unexpected cont or end SDU");
            VAR_18 = VAR_0;
        }
    }

    if ( (VAR_18) && (VAR_17 != VAR_5) ) {
        VAR_19 = ((UINT8 *)(VAR_14 + 1)) + VAR_14->offset;


        if (VAR_17 == VAR_4) {

            FUNC_2 (VAR_16->rx_sdu_len, VAR_19);
            VAR_14->offset += 2;
            VAR_14->len -= 2;

            if (VAR_16->rx_sdu_len > VAR_13->max_rx_mtu) {
                FUNC_1 ("SAR - SDU len: %u  larger than MTU: %u", VAR_16->rx_sdu_len, VAR_16->rx_sdu_len);
                VAR_18 = VAR_0;
            } else if ((VAR_16->p_rx_sdu = (BT_HDR *)FUNC_7(VAR_8)) == ((void*)0)) {
                FUNC_0 ("SAR - no buffer for SDU start user_rx_buf_size:%d", VAR_13->ertm_info.user_rx_buf_size);
                VAR_18 = VAR_0;
            } else {
                VAR_16->p_rx_sdu->offset = 4;
                VAR_16->p_rx_sdu->len = 0;
            }
        }

        if (VAR_18) {
            if ((VAR_16->p_rx_sdu->len + VAR_14->len) > VAR_16->rx_sdu_len) {
                FUNC_0 ("SAR - SDU len exceeded  Type: %u   Lengths: %u %u %u",
                                   VAR_17, VAR_16->p_rx_sdu->len, VAR_14->len, VAR_16->rx_sdu_len);
                VAR_18 = VAR_0;
            } else if ( (VAR_17 == VAR_2) && ((VAR_16->p_rx_sdu->len + VAR_14->len) != VAR_16->rx_sdu_len) ) {
                FUNC_1 ("SAR - SDU end rcvd but SDU incomplete: %u %u %u",
                                     VAR_16->p_rx_sdu->len, VAR_14->len, VAR_16->rx_sdu_len);
                VAR_18 = VAR_0;
            } else {
                FUNC_5 (((UINT8 *) (VAR_16->p_rx_sdu + 1)) + VAR_16->p_rx_sdu->offset + VAR_16->p_rx_sdu->len, VAR_19, VAR_14->len);

                VAR_16->p_rx_sdu->len += VAR_14->len;

                FUNC_6 (VAR_14);
                VAR_14 = ((void*)0);

                if (VAR_17 == VAR_2) {
                    VAR_14 = VAR_16->p_rx_sdu;
                    VAR_16->p_rx_sdu = ((void*)0);
                }
            }
        }
    }

    if (VAR_18 == VAR_0) {
        FUNC_6 (VAR_14);
    } else if (VAR_14 != ((void*)0)) {
        {
            FUNC_4 (VAR_13, VAR_10, VAR_14);
        }
    }

    return (VAR_18);
}
