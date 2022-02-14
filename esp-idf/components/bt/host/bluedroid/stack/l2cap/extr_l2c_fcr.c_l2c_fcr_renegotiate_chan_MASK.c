
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ mode; } ;
struct TYPE_18__ {TYPE_3__ fcr; void* ext_flow_spec_present; void* fcs_present; void* fcr_present; } ;
struct TYPE_14__ {int allowed_modes; } ;
struct TYPE_16__ {int config_done; scalar_t__ fcr_cfg_tries; TYPE_7__ our_cfg; int timer_entry; TYPE_2__ ertm_info; } ;
typedef TYPE_4__ tL2C_CCB ;
struct TYPE_13__ {void* mode; } ;
struct TYPE_17__ {scalar_t__ result; scalar_t__ mtu; scalar_t__ mtu_present; TYPE_1__ fcr; scalar_t__ fcr_present; } ;
typedef TYPE_5__ tL2CAP_CFG_INFO ;
typedef scalar_t__ UINT8 ;
typedef void* BOOLEAN ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 scalar_t__ VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_7__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_7__*) ;

BOOLEAN FUNC_7(tL2C_CCB *VAR_11, tL2CAP_CFG_INFO *VAR_12)
{
    FUNC_2(VAR_11 != ((void*)0));
    FUNC_2(VAR_12 != ((void*)0));

    UINT8 VAR_13 = VAR_11->our_cfg.fcr.mode;
    BOOLEAN VAR_14;


    if (!VAR_12->fcr_present || (VAR_11->config_done & VAR_9)) {
        return (VAR_1);
    }


    if (VAR_12->result == VAR_3) {
        VAR_13 = (VAR_12->fcr_present) ? VAR_12->fcr.mode : VAR_5;

        if (VAR_11->our_cfg.fcr.mode != VAR_13) {

            if ((--VAR_11->fcr_cfg_tries) == 0) {
                VAR_12->result = VAR_2;
                FUNC_1 ("l2c_fcr_renegotiate_chan (Max retries exceeded)");
            }

            VAR_14 = VAR_1;


            switch (VAR_11->our_cfg.fcr.mode) {

            case 128:

                if ( (VAR_13 == 129) && (VAR_11->ertm_info.allowed_modes & VAR_7) ) {
                    FUNC_0 ("l2c_fcr_renegotiate_chan(Trying ERTM)");
                    VAR_11->our_cfg.fcr.mode = 129;
                    VAR_14 = VAR_10;
                } else

                case 129: {

                if (VAR_11->ertm_info.allowed_modes & VAR_6) {
                    FUNC_0 ("l2c_fcr_renegotiate_chan(Trying Basic)");
                    VAR_14 = VAR_10;
                    VAR_11->our_cfg.fcr.mode = VAR_5;
                }
            }
            break;

            default:

                break;
            }

            if (VAR_14) {
                VAR_11->our_cfg.fcr_present = VAR_10;

                if (VAR_11->our_cfg.fcr.mode == VAR_5) {
                    VAR_11->our_cfg.fcs_present = VAR_1;
                    VAR_11->our_cfg.ext_flow_spec_present = VAR_1;


                    if ( (VAR_12->mtu_present) && (VAR_12->mtu > VAR_8) ) {
                        FUNC_1 ("L2CAP - adjust MTU: %u too large", VAR_12->mtu);
                        VAR_12->mtu = VAR_8;
                    }
                }

                FUNC_5 (VAR_11, &VAR_11->our_cfg);
                FUNC_6 (VAR_11, &VAR_11->our_cfg);
                FUNC_3 (&VAR_11->timer_entry, VAR_0, VAR_4);
                return (VAR_10);
            }
        }
    }


    if (VAR_11->our_cfg.fcr.mode != VAR_13) {
        FUNC_1 ("L2C CFG:  Channels incompatible (local %d, peer %d)",
                             VAR_11->our_cfg.fcr.mode, VAR_13);
        FUNC_4 (VAR_11);
    }

    return (VAR_1);
}
