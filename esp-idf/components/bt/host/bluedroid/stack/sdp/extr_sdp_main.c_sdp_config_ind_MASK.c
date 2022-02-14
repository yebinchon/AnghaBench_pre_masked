
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ mode; scalar_t__ tx_win_sz; } ;
struct TYPE_14__ {scalar_t__ mtu; scalar_t__ result; void* fcr_present; TYPE_3__ fcr; void* mtu_present; void* flush_to_present; } ;
typedef TYPE_4__ tL2CAP_CFG_INFO ;
struct TYPE_15__ {scalar_t__ rem_mtu_size; int con_flags; int timer_entry; int con_state; } ;
typedef TYPE_5__ tCONN_CB ;
typedef int UINT16 ;
struct TYPE_11__ {scalar_t__ mode; scalar_t__ tx_win_sz; } ;
struct TYPE_12__ {TYPE_1__ fcr; } ;
struct TYPE_16__ {TYPE_2__ l2cap_my_cfg; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_9__ VAR_12 ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_5__* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7 (UINT16 VAR_13, tL2CAP_CFG_INFO *VAR_14)
{
    tCONN_CB *VAR_15;


    if ((VAR_15 = FUNC_6 (VAR_13)) == ((void*)0)) {
        FUNC_3 ("SDP - Rcvd L2CAP cfg ind, unknown CID: 0x%x\n", VAR_13);
        return;
    }


    if (!VAR_14->mtu_present) {

        VAR_15->rem_mtu_size = (VAR_4 > VAR_10) ? VAR_10 : VAR_4;
    } else {
        if (VAR_14->mtu > VAR_10) {
            VAR_15->rem_mtu_size = VAR_10;
        } else {
            VAR_15->rem_mtu_size = VAR_14->mtu;
        }
    }


    VAR_14->flush_to_present = VAR_1;
    VAR_14->mtu_present = VAR_1;
    VAR_14->result = VAR_2;


    if (VAR_14->fcr_present) {

        if (VAR_14->fcr.mode != VAR_5) {
            if (VAR_12.l2cap_my_cfg.fcr.mode != VAR_5
                    && VAR_14->fcr.tx_win_sz > VAR_12.l2cap_my_cfg.fcr.tx_win_sz) {
                VAR_14->fcr.tx_win_sz = VAR_12.l2cap_my_cfg.fcr.tx_win_sz;
                VAR_14->result = VAR_3;
                FUNC_1("sdp_config_ind(CONFIG) -> Please try again with SMALLER TX WINDOW\n");
            }


            if (VAR_12.l2cap_my_cfg.fcr.mode == VAR_5) {

                VAR_14->fcr.mode = VAR_5;
                VAR_14->result = VAR_3;
                FUNC_1("sdp_config_ind(CONFIG) -> Please try again with BASIC mode\n");
            }

            if (VAR_14->result != VAR_2) {
                FUNC_3 ("SDP - Rcvd cfg ind, Unacceptable Parameters sent cfg cfm, CID: 0x%x\n", VAR_13);
                FUNC_0 (VAR_13, VAR_14);
                return;
            }
        } else {
            VAR_14->fcr_present = VAR_1;
        }
    }

    FUNC_0 (VAR_13, VAR_14);

    FUNC_2 ("SDP - Rcvd cfg ind, sent cfg cfm, CID: 0x%x\n", VAR_13);

    VAR_15->con_flags |= VAR_6;

    if (VAR_15->con_flags & VAR_8) {
        VAR_15->con_state = VAR_11;

        if (VAR_15->con_flags & VAR_7) {
            FUNC_5 (VAR_15);
        } else

        {
            FUNC_4 (&VAR_15->timer_entry, VAR_0, VAR_9);
        }
    }

}
