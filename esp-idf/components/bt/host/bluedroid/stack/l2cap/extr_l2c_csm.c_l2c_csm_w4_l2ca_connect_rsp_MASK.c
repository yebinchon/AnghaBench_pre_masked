
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int l2cap_status; int l2cap_result; } ;
typedef TYPE_4__ tL2C_CONN_INFO ;
struct TYPE_14__ {int local_cid; int remote_id; TYPE_3__* p_rcb; TYPE_2__* p_lcb; int timer_entry; int chnl_state; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int (* tL2CA_DISCONNECT_IND_CB ) (int,int ) ;
typedef int UINT16 ;
struct TYPE_10__ {int (* pL2CA_ConnectInd_Cb ) (int ,int,int ,int ) ;int (* pL2CA_DisconnectInd_Cb ) (int,int ) ;} ;
struct TYPE_12__ {int psm; TYPE_1__ api; } ;
struct TYPE_11__ {int remote_bd_addr; } ;


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
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_11 (tL2C_CCB *VAR_10, UINT16 VAR_11, void *VAR_12)
{
    tL2C_CONN_INFO *VAR_13;
    tL2CA_DISCONNECT_IND_CB *VAR_14 = &VAR_10->p_rcb->api.pL2CA_DisconnectInd_Cb;
    UINT16 VAR_15 = VAR_10->local_cid;


    FUNC_1 ("L2CAP - LCID: 0x%04x  st: W4_L2CA_CON_RSP  evt: %s", VAR_10->local_cid, FUNC_3 (VAR_11));




    switch (VAR_11) {
    case 129:
        FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed", VAR_10->local_cid);
        FUNC_4 (VAR_10);
        (*VAR_14)(VAR_15, VAR_3);
        break;

    case 133:
        VAR_13 = (tL2C_CONN_INFO *)VAR_12;


        if ((!VAR_13) || (VAR_13->l2cap_result == VAR_9)) {
            FUNC_5 (VAR_10, VAR_9, 0);
            VAR_10->chnl_state = VAR_1;
            FUNC_2 (&VAR_10->timer_entry, VAR_0, VAR_4);
        } else {

            FUNC_5 (VAR_10, VAR_13->l2cap_result, VAR_13->l2cap_status);
            FUNC_2 (&VAR_10->timer_entry, VAR_0, VAR_6);
        }
        break;

    case 132:
        VAR_13 = (tL2C_CONN_INFO *)VAR_12;
        FUNC_5 (VAR_10, VAR_13->l2cap_result, VAR_13->l2cap_status);
        FUNC_4 (VAR_10);
        break;

    case 128:
        FUNC_5 (VAR_10, VAR_8, 0);
        FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed", VAR_10->local_cid);
        FUNC_4 (VAR_10);
        (*VAR_14)(VAR_15, VAR_3);
        break;

    case 131:
    case 135:
        FUNC_7 (VAR_12);
        break;

    case 130:
        FUNC_6 (VAR_10);
        VAR_10->chnl_state = VAR_2;
        FUNC_2 (&VAR_10->timer_entry, VAR_0, VAR_7);
        break;

    case 134:

        FUNC_2 (&VAR_10->timer_entry, VAR_0, VAR_5);
        FUNC_0 ("L2CAP - Calling Connect_Ind_Cb(), CID: 0x%04x", VAR_10->local_cid);

        (*VAR_10->p_rcb->api.pL2CA_ConnectInd_Cb) (VAR_10->p_lcb->remote_bd_addr,
                VAR_10->local_cid,
                VAR_10->p_rcb->psm,
                VAR_10->remote_id);
        break;
    }
}
