
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;


typedef void* tL2C_CHNL_STATE ;
struct TYPE_24__ {int mode; } ;
struct TYPE_25__ {TYPE_3__ fcr; } ;
struct TYPE_26__ {scalar_t__ local_cid; TYPE_4__ peer_cfg; int timer_entry; int config_done; void* chnl_state; TYPE_15__* p_lcb; TYPE_2__* p_rcb; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int tL2CAP_CFG_INFO ;
struct TYPE_27__ {void* mode; } ;
typedef TYPE_6__ tBTM_PM_PWR_MD ;
typedef int settings ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_22__ {int (* pL2CA_DataInd_Cb ) (scalar_t__,int *) ;int (* pL2CA_DisconnectInd_Cb ) (scalar_t__,int ) ;int (* pL2CA_ConfigInd_Cb ) (scalar_t__,int *) ;int (* pL2CA_QoSViolationInd_Cb ) (int ) ;} ;
struct TYPE_23__ {TYPE_1__ api; } ;
struct TYPE_21__ {int remote_bd_addr; } ;
typedef int BT_HDR ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int VAR_14 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_15__*,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_5__*,scalar_t__,void*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*,int *) ;
 int FUNC_13 (TYPE_5__*,int *) ;
 int FUNC_14 (TYPE_5__*) ;
 int FUNC_15 (TYPE_5__*,int *) ;
 int FUNC_16 (TYPE_5__*,int *) ;
 int FUNC_17 (TYPE_5__*) ;
 int FUNC_18 (void*,int ,int) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (scalar_t__,int *) ;
 int FUNC_22 (scalar_t__,int ) ;
 int FUNC_23 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_24 (tL2C_CCB *VAR_15, UINT16 VAR_16, void *VAR_17)
{
    UINT16 VAR_18 = VAR_15->local_cid;
    tL2CAP_CFG_INFO *VAR_19;
    tL2C_CHNL_STATE VAR_20;
    UINT8 VAR_21;
    UINT8 VAR_22;


    FUNC_2 ("L2CAP - LCID: 0x%04x  st: OPEN  evt: %s",
                       VAR_15->local_cid, FUNC_5 (VAR_16));





    if ( VAR_18 == VAR_10 ) {

        if ( FUNC_10 (VAR_15, VAR_16, VAR_17) ) {

            return;
        }
    }


    switch (VAR_16) {
    case 130:
        FUNC_1 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed",
                         VAR_15->local_cid);
        FUNC_14 (VAR_15);
        if (VAR_15->p_rcb) {
            (*VAR_15->p_rcb->api.pL2CA_DisconnectInd_Cb)(VAR_18, VAR_7);
        }
        break;

    case 129:

        if (VAR_15->p_rcb->api.pL2CA_QoSViolationInd_Cb) {
            (*VAR_15->p_rcb->api.pL2CA_QoSViolationInd_Cb)(VAR_15->p_lcb->remote_bd_addr);
        }
        break;

    case 136:
        VAR_19 = (tL2CAP_CFG_INFO *)VAR_17;

        VAR_20 = VAR_15->chnl_state;
        VAR_21 = VAR_15->config_done;
        VAR_15->chnl_state = VAR_4;
        VAR_15->config_done &= ~VAR_3;

        FUNC_3 (&VAR_15->timer_entry, VAR_2, VAR_8);

        if ((VAR_22 = FUNC_13 (VAR_15, VAR_19)) == VAR_12) {
            (*VAR_15->p_rcb->api.pL2CA_ConfigInd_Cb)(VAR_15->local_cid, VAR_19);
        }


        else if (VAR_22 == VAR_13) {
            FUNC_4(&VAR_15->timer_entry);
            VAR_15->chnl_state = VAR_20;
            VAR_15->config_done = VAR_21;
            FUNC_16 (VAR_15, VAR_19);
        } else {




            FUNC_11 (VAR_15);
        }
        break;

    case 134:


    {
        tBTM_PM_PWR_MD VAR_23;
        FUNC_18((void *)&VAR_23, 0, sizeof(VAR_23));
        VAR_23.mode = VAR_0;
        FUNC_0 (VAR_1, VAR_15->p_lcb->remote_bd_addr, &VAR_23);
    }


    VAR_15->chnl_state = VAR_6;
    FUNC_3 (&VAR_15->timer_entry, VAR_2, VAR_9);
    FUNC_1 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  Conf Needed", VAR_15->local_cid);
    (*VAR_15->p_rcb->api.pL2CA_DisconnectInd_Cb)(VAR_15->local_cid, VAR_14);
    break;

    case 135:
        if ((VAR_15->p_rcb) && (VAR_15->p_rcb->api.pL2CA_DataInd_Cb)) {
            (*VAR_15->p_rcb->api.pL2CA_DataInd_Cb)(VAR_15->local_cid, (BT_HDR *)VAR_17);
        }
        break;

    case 131:

    {
        tBTM_PM_PWR_MD VAR_24;
        FUNC_18((void *)&VAR_24, 0, sizeof(VAR_24));
        VAR_24.mode = VAR_0;
        FUNC_0 (VAR_1, VAR_15->p_lcb->remote_bd_addr, &VAR_24);
    }

    FUNC_17 (VAR_15);
    VAR_15->chnl_state = VAR_5;
    FUNC_3 (&VAR_15->timer_entry, VAR_2, VAR_9);
    break;

    case 132:
        FUNC_6 (VAR_15, (BT_HDR *)VAR_17);
        FUNC_9 (VAR_15->p_lcb, ((void*)0), ((void*)0));
        break;

    case 133:
        VAR_15->chnl_state = VAR_4;
        VAR_15->config_done &= ~VAR_3;
        FUNC_12 (VAR_15, (tL2CAP_CFG_INFO *)VAR_17);
        FUNC_15 (VAR_15, (tL2CAP_CFG_INFO *)VAR_17);
        FUNC_3 (&VAR_15->timer_entry, VAR_2, VAR_8);
        break;

    case 128:

        if (VAR_15->peer_cfg.fcr.mode == VAR_11) {
            FUNC_8 (VAR_15);
        }
        break;

    case 137:
        FUNC_7 (VAR_15);
        break;
    }
}
