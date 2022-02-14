
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int l2cap_result; int remote_cid; } ;
typedef TYPE_3__ tL2C_CONN_INFO ;
struct TYPE_13__ {int local_cid; int flags; int timer_entry; int chnl_state; int remote_cid; TYPE_2__* p_rcb; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int (* tL2CA_DISCONNECT_IND_CB ) (int,int ) ;
typedef int (* tL2CA_CONNECT_CFM_CB ) (int,int ) ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_10__ {int (* pL2CA_ConnectPnd_Cb ) (int) ;int (* pL2CA_ConnectCfm_Cb ) (int,int ) ;int (* pL2CA_DisconnectInd_Cb ) (int,int ) ;} ;
struct TYPE_11__ {TYPE_1__ api; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_13 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;

__attribute__((used)) static void FUNC_15 (tL2C_CCB *VAR_14, UINT16 VAR_15, void *VAR_16)
{
    tL2C_CONN_INFO *VAR_17 = (tL2C_CONN_INFO *)VAR_16;
    tL2CA_DISCONNECT_IND_CB *VAR_18 = &VAR_14->p_rcb->api.pL2CA_DisconnectInd_Cb;
    tL2CA_CONNECT_CFM_CB *VAR_19 = &VAR_14->p_rcb->api.pL2CA_ConnectCfm_Cb;
    UINT16 VAR_20 = VAR_14->local_cid;


    FUNC_1 ("L2CAP - LCID: 0x%04x  st: W4_L2CAP_CON_RSP  evt: %s", VAR_14->local_cid, FUNC_3 (VAR_15));




    switch (VAR_15) {
    case 129:


        VAR_14->chnl_state = VAR_2;
        if ((VAR_14->flags & VAR_1) || !VAR_16 || (*((UINT8 *)VAR_16) != VAR_6)) {
            FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed",
                             VAR_14->local_cid);
            FUNC_5 (VAR_14);
            (*VAR_18)(VAR_20, VAR_5);
        }
        VAR_14->flags |= VAR_1;
        break;

    case 136:
        VAR_14->remote_cid = VAR_17->remote_cid;
        VAR_14->chnl_state = VAR_3;
        FUNC_2 (&VAR_14->timer_entry, VAR_0, VAR_7);
        FUNC_0 ("L2CAP - Calling Connect_Cfm_Cb(), CID: 0x%04x, Success", VAR_14->local_cid);

        (*VAR_14->p_rcb->api.pL2CA_ConnectCfm_Cb)(VAR_20, VAR_12);
        break;

    case 134:
        VAR_14->remote_cid = VAR_17->remote_cid;
        FUNC_2 (&VAR_14->timer_entry, VAR_0, VAR_9);
        if (VAR_14->p_rcb->api.pL2CA_ConnectPnd_Cb) {
            FUNC_0 ("L2CAP - Calling Connect_Pnd_Cb(), CID: 0x%04x", VAR_14->local_cid);
            (*VAR_14->p_rcb->api.pL2CA_ConnectPnd_Cb)(VAR_14->local_cid);
        }
        break;

    case 135:
        FUNC_0 ("L2CAP - Calling Connect_Cfm_Cb(), CID: 0x%04x, Failure Code: %d", VAR_14->local_cid, VAR_17->l2cap_result);
        FUNC_5 (VAR_14);
        (*VAR_19)(VAR_20, VAR_17->l2cap_result);
        break;

    case 128:
        FUNC_0 ("L2CAP - Calling Connect_Cfm_Cb(), CID: 0x%04x, Timeout", VAR_14->local_cid);
        FUNC_5 (VAR_14);
        (*VAR_19)(VAR_20, VAR_13);
        break;

    case 130:

        if (VAR_14->remote_cid != 0) {
            FUNC_7 (VAR_14);
            VAR_14->chnl_state = VAR_4;
            FUNC_2 (&VAR_14->timer_entry, VAR_0, VAR_10);
        } else {
            FUNC_5 (VAR_14);
        }
        break;

    case 131:
    case 133:
        FUNC_8 (VAR_16);
        break;

    case 132:

        if (!FUNC_4(VAR_14)) {
            FUNC_5 (VAR_14);
            (*VAR_19)(VAR_20, VAR_11);
        } else {

            FUNC_2 (&VAR_14->timer_entry, VAR_0, VAR_8);
            FUNC_6 (VAR_14);
        }
        break;
    }
}
