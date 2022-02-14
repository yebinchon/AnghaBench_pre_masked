
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_30__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_29__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_10__ ;


struct TYPE_44__ {void* connect_tick_count; int wait_ack; } ;
struct TYPE_40__ {int mode; } ;
struct TYPE_47__ {TYPE_2__ fcr; void* qos_present; void* flush_to_present; void* mtu_present; } ;
struct TYPE_42__ {int mode; int rtrans_tout; int mon_tout; } ;
struct TYPE_43__ {TYPE_3__ fcr; } ;
struct TYPE_48__ {int local_cid; int config_done; void* chnl_state; TYPE_7__* p_rcb; TYPE_30__* p_lcb; int timer_entry; int xmit_hold_q; TYPE_5__ fcrb; TYPE_8__ peer_cfg; TYPE_4__ our_cfg; } ;
typedef TYPE_9__ tL2C_CCB ;
typedef int (* tL2CA_DISCONNECT_IND_CB ) (int,void*) ;
struct TYPE_37__ {int flags; int result; } ;
typedef TYPE_10__ tL2CAP_CFG_INFO ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_45__ {int (* pL2CA_DataInd_Cb ) (size_t,int *) ;int (* pL2CA_DisconnectInd_Cb ) (int,void*) ;int (* pL2CA_ConfigCfm_Cb ) (int,TYPE_10__*) ;int (* pL2CA_ConfigInd_Cb ) (int,TYPE_10__*) ;} ;
struct TYPE_46__ {TYPE_6__ api; } ;
struct TYPE_41__ {int remote_bd_addr; } ;
struct TYPE_39__ {TYPE_1__* fixed_reg; } ;
struct TYPE_38__ {int (* pL2CA_FixedData_Cb ) (size_t,int ,int *) ;} ;
typedef int BT_HDR ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_9__*,int *) ;
 int FUNC_8 (TYPE_9__*) ;
 void* FUNC_9 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_10 (TYPE_9__*) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_30__*,int *,int *) ;
 TYPE_29__ VAR_19 ;
 int FUNC_13 (TYPE_9__*) ;
 int FUNC_14 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_15 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_16 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_17 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_18 (TYPE_9__*) ;
 int FUNC_19 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_20 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_21 (TYPE_9__*) ;
 int FUNC_22 (void*) ;
 void* FUNC_23 () ;
 int FUNC_24 (int,void*) ;
 int FUNC_25 (int,void*) ;
 int FUNC_26 (int,TYPE_10__*) ;
 int FUNC_27 (int,void*) ;
 int FUNC_28 (int,TYPE_10__*) ;
 int FUNC_29 (int,TYPE_10__*) ;
 int FUNC_30 (int,void*) ;
 int FUNC_31 (int,void*) ;
 int FUNC_32 (size_t,int ,int *) ;
 int FUNC_33 (size_t,int *) ;

__attribute__((used)) static void FUNC_34 (tL2C_CCB *VAR_20, UINT16 VAR_21, void *VAR_22)
{
    tL2CAP_CFG_INFO *VAR_23 = (tL2CAP_CFG_INFO *)VAR_22;
    tL2CA_DISCONNECT_IND_CB *VAR_24 = &VAR_20->p_rcb->api.pL2CA_DisconnectInd_Cb;
    UINT16 VAR_25 = VAR_20->local_cid;
    UINT8 VAR_26;


    FUNC_1 ("L2CAP - LCID: 0x%04x  st: CONFIG  evt: %s", VAR_20->local_cid, FUNC_6 (VAR_21));




    switch (VAR_21) {
    case 129:
        FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed", VAR_20->local_cid);
        FUNC_18 (VAR_20);
        (*VAR_24)(VAR_25, VAR_4);
        break;

    case 139:

        if ((VAR_26 = FUNC_16 (VAR_20, VAR_23)) == VAR_15) {
            FUNC_1 ("L2CAP - Calling Config_Req_Cb(), CID: 0x%04x, C-bit %d",
                               VAR_20->local_cid, (VAR_23->flags & VAR_7));
            (*VAR_20->p_rcb->api.pL2CA_ConfigInd_Cb)(VAR_20->local_cid, VAR_23);
        } else if (VAR_26 == VAR_14) {

            FUNC_1 ("L2CAP - incompatible configurations disconnect");
            FUNC_13 (VAR_20);
        } else {
            FUNC_1 ("L2CAP - incompatible configurations trying reconfig");
            FUNC_20 (VAR_20, VAR_23);
        }
        break;

    case 138:
        FUNC_17 (VAR_20, VAR_23);

        if (VAR_23->result != VAR_8) {





            VAR_20->config_done |= VAR_16;

            if (VAR_20->config_done & VAR_5) {

                if (VAR_20->our_cfg.fcr.mode != VAR_20->peer_cfg.fcr.mode) {
                    FUNC_21 (VAR_20);
                    FUNC_2 ("L2CAP - Calling Disconnect_Ind_Cb(Incompatible CFG), CID: 0x%04x  No Conf Needed", VAR_20->local_cid);
                    FUNC_18 (VAR_20);
                    (*VAR_24)(VAR_25, VAR_4);
                    break;
                }

                VAR_20->config_done |= VAR_17;
                VAR_20->chnl_state = VAR_1;
                FUNC_11 ();
                FUNC_4 (&VAR_20->timer_entry);


                if (VAR_20->fcrb.wait_ack) {
                    FUNC_10(VAR_20);
                }





                if ((VAR_20->our_cfg.fcr.mode == VAR_11)
                        && ((VAR_20->our_cfg.fcr.mon_tout == 0) || (VAR_20->our_cfg.fcr.rtrans_tout))) {
                    FUNC_8 (VAR_20);
                }


                VAR_20->fcrb.connect_tick_count = FUNC_23();


                if (!FUNC_5(VAR_20->xmit_hold_q)) {
                    FUNC_12 (VAR_20->p_lcb, ((void*)0), ((void*)0));
                }
            }
        }

        FUNC_0 ("L2CAP - Calling Config_Rsp_Cb(), CID: 0x%04x", VAR_20->local_cid);
        (*VAR_20->p_rcb->api.pL2CA_ConfigCfm_Cb)(VAR_20->local_cid, VAR_23);
        break;

    case 137:

        FUNC_4 (&VAR_20->timer_entry);


        if (FUNC_9(VAR_20, VAR_23) == VAR_4) {
            FUNC_0 ("L2CAP - Calling Config_Rsp_Cb(), CID: 0x%04x, Failure: %d", VAR_20->local_cid, VAR_23->result);
            (*VAR_20->p_rcb->api.pL2CA_ConfigCfm_Cb)(VAR_20->local_cid, VAR_23);
        }
        break;

    case 135:
        FUNC_3 (&VAR_20->timer_entry, VAR_0, VAR_10);
        VAR_20->chnl_state = VAR_3;
        FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  Conf Needed", VAR_20->local_cid);
        (*VAR_20->p_rcb->api.pL2CA_DisconnectInd_Cb)(VAR_20->local_cid, VAR_18);
        break;

    case 134:
        FUNC_14 (VAR_20, VAR_23);
        FUNC_19 (VAR_20, VAR_23);
        FUNC_3 (&VAR_20->timer_entry, VAR_0, VAR_9);
        break;

    case 133:
        FUNC_15 (VAR_20, VAR_23);


        if ( (VAR_23->flags & VAR_7) || (VAR_23->result == VAR_8) ) {

            FUNC_20 (VAR_20, VAR_23);
            break;
        }


        VAR_20->peer_cfg.mtu_present = VAR_4;
        VAR_20->peer_cfg.flush_to_present = VAR_4;
        VAR_20->peer_cfg.qos_present = VAR_4;

        VAR_20->config_done |= VAR_5;

        if (VAR_20->config_done & VAR_16) {

            if (VAR_20->our_cfg.fcr.mode != VAR_20->peer_cfg.fcr.mode) {
                FUNC_21 (VAR_20);
                FUNC_2 ("L2CAP - Calling Disconnect_Ind_Cb(Incompatible CFG), CID: 0x%04x  No Conf Needed", VAR_20->local_cid);
                FUNC_18 (VAR_20);
                (*VAR_24)(VAR_25, VAR_4);
                break;
            }

            VAR_20->config_done |= VAR_17;
            VAR_20->chnl_state = VAR_1;
            FUNC_11 ();
            FUNC_4 (&VAR_20->timer_entry);
        }

        FUNC_20 (VAR_20, VAR_23);


        if (VAR_20->fcrb.wait_ack) {
            FUNC_10(VAR_20);
        }


        VAR_20->fcrb.connect_tick_count = FUNC_23();



        if ( (VAR_20->chnl_state == VAR_1) &&
             (!FUNC_5(VAR_20->xmit_hold_q))) {
            FUNC_12 (VAR_20->p_lcb, ((void*)0), ((void*)0));
        }
        break;

    case 132:
        FUNC_20 (VAR_20, VAR_23);
        FUNC_3 (&VAR_20->timer_entry, VAR_0, VAR_9);
        break;

    case 130:
        FUNC_21 (VAR_20);
        VAR_20->chnl_state = VAR_2;
        FUNC_3 (&VAR_20->timer_entry, VAR_0, VAR_10);
        break;

    case 136:
        FUNC_0 ("L2CAP - Calling DataInd_Cb(), CID: 0x%04x", VAR_20->local_cid);
        (*VAR_20->p_rcb->api.pL2CA_DataInd_Cb)(VAR_20->local_cid, (BT_HDR *)VAR_22);
        break;

    case 131:
        if (VAR_20->config_done & VAR_16) {
            FUNC_7 (VAR_20, (BT_HDR *)VAR_22);
        } else {
            FUNC_22 (VAR_22);
        }
        break;

    case 128:
        FUNC_21 (VAR_20);
        FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed",
                         VAR_20->local_cid);
        FUNC_18 (VAR_20);
        (*VAR_24)(VAR_25, VAR_4);
        break;
    }
}
