
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ state; } ;
struct TYPE_15__ {TYPE_1__ ucd; } ;
typedef TYPE_2__ tL2C_RCB ;
struct TYPE_16__ {scalar_t__ ucd_mtu; int ucd_out_sec_pending_q; int handle; } ;
typedef TYPE_3__ tL2C_LCB ;
struct TYPE_17__ {scalar_t__ cong_sent; int buff_quota; int xmit_hold_q; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_18__ {scalar_t__ offset; scalar_t__ len; int layer_specific; } ;
typedef TYPE_5__ BT_HDR ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (char*,int ,scalar_t__,int ) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int*) ;
 TYPE_4__* FUNC_7 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_8 (int*,int ) ;
 TYPE_2__* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_5__*) ;

UINT16 FUNC_11 (UINT16 VAR_9, BD_ADDR VAR_10, BT_HDR *VAR_11, UINT16 VAR_12)
{
    tL2C_LCB *VAR_13;
    tL2C_CCB *VAR_14;
    tL2C_RCB *VAR_15;
    UINT8 *VAR_16;

    FUNC_0 ("L2CA_UcdDataWrite()  PSM: 0x%04x  BDA: %08x%04x", VAR_9,
                     (VAR_10[0] << 24) + (VAR_10[1] << 16) + (VAR_10[2] << 8) + VAR_10[3],
                     (VAR_10[4] << 8) + VAR_10[5]);


    if (((VAR_15 = FUNC_9 (VAR_9)) == ((void*)0))
            || ( VAR_15->ucd.state == VAR_8 )) {
        FUNC_2 ("L2CAP - no RCB for L2CA_UcdDataWrite, PSM: 0x%04x", VAR_9);
        FUNC_10 (VAR_11);
        return (VAR_4);
    }



    if (((VAR_13 = FUNC_8 (VAR_10, VAR_0)) == ((void*)0))
            || ((VAR_14 = FUNC_7 (VAR_13, VAR_2)) == ((void*)0))) {
        if ( FUNC_6 (VAR_10) == VAR_1 ) {
            FUNC_10 (VAR_11);
            return (VAR_4);
        }


        if (((VAR_13 = FUNC_8 (VAR_10, VAR_0)) == ((void*)0))
                || ((VAR_14 = FUNC_7 (VAR_13, VAR_2)) == ((void*)0))) {
            FUNC_10 (VAR_11);
            return (VAR_4);
        }
    }


    VAR_11->offset -= VAR_6;
    VAR_11->len += VAR_6;
    VAR_16 = (UINT8 *)(VAR_11 + 1) + VAR_11->offset;

    FUNC_3 (VAR_16, VAR_9);


    if ((VAR_13->ucd_mtu) && (VAR_11->len > VAR_13->ucd_mtu)) {
        FUNC_2 ("L2CAP - Handle: 0x%04x  UCD bigger than peer's UCD mtu size cannot be sent", VAR_13->handle);
        FUNC_10 (VAR_11);
        return (VAR_4);
    }


    if (VAR_14->cong_sent) {
        FUNC_1 ("L2CAP - Handle: 0x%04x UCD cannot be sent, already congested count: %u  buff_quota: %u",
                           VAR_13->handle,
                           (FUNC_4(VAR_14->xmit_hold_q) +
                            FUNC_4(VAR_13->ucd_out_sec_pending_q)),
                           VAR_14->buff_quota);

        FUNC_10 (VAR_11);
        return (VAR_4);
    }


    VAR_11->layer_specific = VAR_12;

    FUNC_5 (VAR_14, VAR_7, VAR_11);

    if (VAR_14->cong_sent) {
        return (VAR_3);
    } else {
        return (VAR_5);
    }
}
