
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int state; } ;
struct TYPE_16__ {TYPE_1__ ucd; scalar_t__ in_use; } ;
typedef TYPE_5__ tL2C_RCB ;
struct TYPE_17__ {TYPE_7__* p_lcb; TYPE_4__* p_rcb; } ;
typedef TYPE_6__ tL2C_CCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_19__ {TYPE_5__* rcb_pool; } ;
struct TYPE_18__ {int info_rx_bits; int peer_ext_fea; scalar_t__ w4_info_rsp; int ucd_mtu; int remote_bd_addr; } ;
struct TYPE_13__ {int (* pL2CA_UCD_Discover_Cb ) (int ,int ,int) ;} ;
struct TYPE_14__ {TYPE_2__ cb_info; } ;
struct TYPE_15__ {TYPE_3__ ucd; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (TYPE_7__*) ;
 TYPE_9__ VAR_10 ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_7__*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;

BOOLEAN FUNC_7(tL2C_CCB *VAR_11)
{
    tL2C_RCB *VAR_12 = &VAR_10.rcb_pool[0];
    UINT16 VAR_13;
    BOOLEAN VAR_14 = VAR_0;

    if (VAR_11 == ((void*)0)) {
        FUNC_0 ("L2CAP - NULL p_ccb in l2c_ucd_check_pending_info_req");
        return (VAR_0);
    }

    for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++, VAR_12++) {
        if (VAR_12->in_use) {

            if (VAR_12->ucd.state & VAR_7) {

                if ( VAR_11->p_lcb->info_rx_bits & (1 << VAR_2) ) {
                    if (!(VAR_11->p_lcb->peer_ext_fea & VAR_3)) {
                        FUNC_1 ("L2CAP - UCD is not supported by peer, l2c_ucd_check_pending_info_req");

                        FUNC_2(VAR_11->p_lcb);
                        FUNC_3 (VAR_11);
                    }

                    VAR_11->p_rcb->ucd.cb_info.pL2CA_UCD_Discover_Cb (VAR_11->p_lcb->remote_bd_addr,
                            VAR_5,
                            VAR_11->p_lcb->peer_ext_fea & VAR_3);
                } else {
                    VAR_14 = VAR_9;
                    if (VAR_11->p_lcb->w4_info_rsp == VAR_0) {
                        FUNC_4 (VAR_11->p_lcb, VAR_2);
                    }
                }
            }


            if (VAR_12->ucd.state & VAR_6) {

                if ( VAR_11->p_lcb->info_rx_bits & (1 << VAR_1)) {
                    VAR_11->p_rcb->ucd.cb_info.pL2CA_UCD_Discover_Cb (VAR_11->p_lcb->remote_bd_addr,
                            VAR_4,
                            VAR_11->p_lcb->ucd_mtu);
                } else {
                    VAR_14 = VAR_9;
                    if (VAR_11->p_lcb->w4_info_rsp == VAR_0) {
                        FUNC_4 (VAR_11->p_lcb, VAR_1);
                    }
                }
            }
        }
    }
    return (VAR_14);
}
