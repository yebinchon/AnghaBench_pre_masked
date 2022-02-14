
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int mode; scalar_t__ rtrans_tout; scalar_t__ mon_tout; scalar_t__ mps; scalar_t__ tx_win_sz; scalar_t__ max_transmit; } ;
struct TYPE_15__ {scalar_t__ fcs; scalar_t__ mtu; TYPE_6__ fcr; } ;
struct TYPE_14__ {int preferred_mode; int allowed_modes; int fcr_tx_buf_size; } ;
struct TYPE_12__ {int mode; scalar_t__ mps; scalar_t__ mon_tout; scalar_t__ rtrans_tout; scalar_t__ max_transmit; scalar_t__ tx_win_sz; } ;
struct TYPE_13__ {TYPE_2__ fcr; } ;
struct TYPE_17__ {void* peer_cfg_already_rejected; int peer_cfg_bits; TYPE_5__ peer_cfg; void* out_cfg_fcr_present; TYPE_4__ ertm_info; int bypass_fcs; TYPE_3__ our_cfg; TYPE_1__* p_lcb; } ;
typedef TYPE_7__ tL2C_CCB ;
struct TYPE_18__ {scalar_t__ fcs; scalar_t__ fcr_present; TYPE_6__ fcr; scalar_t__ fcs_present; } ;
typedef TYPE_8__ tL2CAP_CFG_INFO ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_11__ {void* w4_info_rsp; } ;
typedef int BT_HDR ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,int,int,int,int) ;
 void* VAR_17 ;
 int FUNC_2 (int ) ;

UINT8 FUNC_3(tL2C_CCB *VAR_18, tL2CAP_CFG_INFO *VAR_19)
{
    FUNC_2(VAR_18 != ((void*)0));
    FUNC_2(VAR_19 != ((void*)0));

    UINT16 VAR_20;
    UINT8 VAR_21 = VAR_14;

    VAR_18->p_lcb->w4_info_rsp = VAR_0;

    FUNC_1 ("l2c_fcr_process_peer_cfg_req() CFG fcr_present:%d fcr.mode:%d CCB FCR mode:%d preferred: %u allowed:%u",
                       VAR_19->fcr_present, VAR_19->fcr.mode, VAR_18->our_cfg.fcr.mode, VAR_18->ertm_info.preferred_mode,
                       VAR_18->ertm_info.allowed_modes);


    if (VAR_19->fcr.mode == VAR_5) {

        if ( !(VAR_18->ertm_info.allowed_modes & VAR_7) ) {
            VAR_21 = VAR_13;
        }
    }


    else if (VAR_19->fcr.mode != VAR_18->ertm_info.preferred_mode) {





        if ( (((1 << VAR_19->fcr.mode) & VAR_6) == 0)
                || (VAR_18->ertm_info.preferred_mode == VAR_9) ) {
            VAR_19->fcr.mode = VAR_18->our_cfg.fcr.mode;
            VAR_19->fcr.tx_win_sz = VAR_18->our_cfg.fcr.tx_win_sz;
            VAR_19->fcr.max_transmit = VAR_18->our_cfg.fcr.max_transmit;
            VAR_21 = VAR_15;
        }


        else if (VAR_18->ertm_info.preferred_mode == VAR_5) {
            VAR_19->fcr.mode = VAR_5;
            VAR_19->fcr.max_transmit = VAR_19->fcr.tx_win_sz = 0;
            VAR_19->fcr.rtrans_tout = VAR_19->fcr.mon_tout = VAR_19->fcr.mps = 0;
            VAR_18->our_cfg.fcr.rtrans_tout = VAR_18->our_cfg.fcr.mon_tout = VAR_18->our_cfg.fcr.mps = 0;
            VAR_21 = VAR_15;
        }



        else if ( (VAR_19->fcr.mode != VAR_9)
                  || !(VAR_18->ertm_info.allowed_modes & VAR_8) ) {
            VAR_21 = VAR_13;
        }
    }


    if (VAR_21 == VAR_14) {

        VAR_18->out_cfg_fcr_present = VAR_0;


        if (VAR_19->fcr_present && VAR_19->fcr.mode != VAR_5) {

            if (VAR_19->fcs_present) {
                VAR_18->peer_cfg.fcs = VAR_19->fcs;
                VAR_18->peer_cfg_bits |= VAR_4;
                if ( VAR_19->fcs == VAR_1) {
                    VAR_18->bypass_fcs |= VAR_2;
                }
            }

            VAR_20 = VAR_18->ertm_info.fcr_tx_buf_size - sizeof(BT_HDR)
                               - VAR_12 - VAR_16 - VAR_11;


            if ( (VAR_19->fcr.mps == 0) || (VAR_19->fcr.mps > VAR_18->peer_cfg.mtu) ) {
                VAR_19->fcr.mps = VAR_18->peer_cfg.mtu;
                VAR_18->out_cfg_fcr_present = VAR_17;
            }


            if (VAR_19->fcr.mps > VAR_20) {
                FUNC_0("CFG: Overriding MPS to %d (orig %d)", VAR_20, VAR_19->fcr.mps);

                VAR_19->fcr.mps = VAR_20;
                VAR_18->out_cfg_fcr_present = VAR_17;
            }

            if (VAR_19->fcr.mode == VAR_9 || VAR_19->fcr.mode == VAR_10) {

                VAR_18->out_cfg_fcr_present = VAR_17;
            }
        }


        VAR_18->peer_cfg.fcr = VAR_19->fcr;

        if (VAR_19->fcr_present) {
            VAR_18->peer_cfg_bits |= VAR_3;
        }
    } else if (VAR_21 == VAR_15) {

        if (VAR_18->peer_cfg_already_rejected) {
            VAR_21 = VAR_13;
        } else {
            VAR_18->peer_cfg_already_rejected = VAR_17;
        }
    }

    return (VAR_21);
}
