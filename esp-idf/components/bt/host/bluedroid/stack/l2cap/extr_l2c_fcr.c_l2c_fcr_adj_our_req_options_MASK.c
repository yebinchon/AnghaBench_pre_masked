
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ mode; scalar_t__ mps; } ;
struct TYPE_11__ {void* fcr_present; TYPE_4__ fcr; } ;
struct TYPE_10__ {scalar_t__ preferred_mode; int allowed_modes; } ;
struct TYPE_12__ {int config_done; scalar_t__ max_rx_mtu; TYPE_2__ our_cfg; TYPE_1__ ertm_info; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef TYPE_4__ tL2CAP_FCR_OPTS ;
struct TYPE_14__ {scalar_t__ mtu; void* ext_flow_spec_present; void* fcs_present; scalar_t__ mtu_present; void* fcr_present; TYPE_4__ fcr; } ;
typedef TYPE_5__ tL2CAP_CFG_INFO ;
typedef void* BOOLEAN ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

BOOLEAN FUNC_5 (tL2C_CCB *VAR_13, tL2CAP_CFG_INFO *VAR_14)
{
    FUNC_2(VAR_13 != ((void*)0));
    FUNC_2(VAR_14 != ((void*)0));

    tL2CAP_FCR_OPTS *VAR_15 = &VAR_14->fcr;

    if (VAR_15->mode != VAR_13->ertm_info.preferred_mode) {
        FUNC_1 ("l2c_fcr_adj_our_req_options - preferred_mode (%d), does not match mode (%d)",
                             VAR_13->ertm_info.preferred_mode, VAR_15->mode);


        VAR_15->mode = VAR_13->ertm_info.preferred_mode;
    }


    if (VAR_13->ertm_info.allowed_modes == VAR_3) {
        if (VAR_14->fcr_present && VAR_15->mode != VAR_2) {
            FUNC_1 ("l2c_fcr_adj_our_req_options (mode %d): ERROR: No FCR options set using BASIC mode", VAR_15->mode);
        }
        VAR_15->mode = VAR_2;
    }




    if (VAR_14->fcr_present && !(VAR_13->config_done & VAR_11)) {

        if (!FUNC_3(VAR_13)) {

            FUNC_4 (VAR_13);
            return (VAR_0);
        }


        else if (VAR_13->ertm_info.allowed_modes == VAR_3) {

            VAR_14->fcr_present = VAR_0;
            VAR_14->fcs_present = VAR_0;
            VAR_14->ext_flow_spec_present = VAR_0;
        }




        else {

            if (VAR_15->mode == VAR_7 && !(VAR_13->ertm_info.allowed_modes & VAR_5)) {
                FUNC_0 ("L2C CFG: mode is STREAM, but peer does not support; Try ERTM");
                VAR_15->mode = VAR_6;
            }


            if (VAR_15->mode == VAR_6 && !(VAR_13->ertm_info.allowed_modes & VAR_4)) {
                FUNC_0 ("L2C CFG: mode is ERTM, but peer does not support; Try BASIC");
                VAR_15->mode = VAR_2;
            }
        }

        if (VAR_15->mode != VAR_2) {

            if ( (VAR_14->mtu_present) && (VAR_14->mtu > VAR_13->max_rx_mtu) ) {
                FUNC_1 ("L2CAP - MTU: %u  larger than buf size: %u", VAR_14->mtu, VAR_13->max_rx_mtu);
                return (VAR_0);
            }


            if (VAR_15->mps == VAR_1) {
                VAR_15->mps = VAR_9;
            }

            else if (VAR_15->mps > VAR_13->max_rx_mtu) {
                FUNC_1 ("L2CAP - MPS  %u  invalid  MTU: %u", VAR_15->mps, VAR_13->max_rx_mtu);
                return (VAR_0);
            }


            if (VAR_15->mps > (VAR_10 - VAR_8)) {
                VAR_15->mps = VAR_10 - VAR_8;
            }
        } else {
            VAR_14->fcs_present = VAR_0;
            VAR_14->ext_flow_spec_present = VAR_0;
        }

        VAR_13->our_cfg.fcr = *VAR_15;
    } else {
        VAR_13->our_cfg.fcr_present = VAR_0;
    }

    return (VAR_12);
}
