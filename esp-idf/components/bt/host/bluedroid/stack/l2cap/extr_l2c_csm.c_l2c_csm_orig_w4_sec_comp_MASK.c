
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ local_cid; TYPE_4__* p_lcb; int timer_entry; int chnl_state; TYPE_2__* p_rcb; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int (* tL2CA_DISCONNECT_IND_CB ) (scalar_t__,int ) ;
typedef int (* tL2CA_CONNECT_CFM_CB ) (scalar_t__,int ) ;
typedef scalar_t__ UINT16 ;
struct TYPE_14__ {TYPE_5__* p_last_ccb; TYPE_5__* p_first_ccb; } ;
struct TYPE_15__ {int remote_bd_addr; int idle_timeout; TYPE_3__ ccb_queue; int w4_info_rsp; int handle; } ;
struct TYPE_12__ {int (* pL2CA_ConnectCfm_Cb ) (scalar_t__,int ) ;int (* pL2CA_DisconnectInd_Cb ) (scalar_t__,int ) ;} ;
struct TYPE_13__ {int psm; TYPE_1__ api; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *,TYPE_5__*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (TYPE_5__*,scalar_t__,void*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_14 (tL2C_CCB *VAR_9, UINT16 VAR_10, void *VAR_11)
{
    tL2CA_DISCONNECT_IND_CB *VAR_12 = &VAR_9->p_rcb->api.pL2CA_DisconnectInd_Cb;
    tL2CA_CONNECT_CFM_CB *VAR_13 = &VAR_9->p_rcb->api.pL2CA_ConnectCfm_Cb;
    UINT16 VAR_14 = VAR_9->local_cid;


    FUNC_1 ("L2CAP - LCID: 0x%04x  st: ORIG_W4_SEC_COMP  evt: %s", VAR_9->local_cid, FUNC_5 (VAR_10));





    if ( VAR_14 == VAR_5 ) {

        if ( FUNC_7 (VAR_9, VAR_10, VAR_11) ) {

            return;
        }
    }


    switch (VAR_10) {
    case 131:
        FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed", VAR_9->local_cid);
        FUNC_8 (VAR_9);
        (*VAR_12)(VAR_14, VAR_2);
        break;

    case 128:
    case 132:
        FUNC_3 (VAR_9->p_lcb->remote_bd_addr, VAR_9->p_rcb->psm,
                                  VAR_9->p_lcb->handle, VAR_7, &VAR_8, VAR_9);
        break;

    case 130:

        VAR_9->chnl_state = VAR_1;
        if (!VAR_9->p_lcb->w4_info_rsp) {

            if (!FUNC_6(VAR_9)) {
                FUNC_8 (VAR_9);
                (*VAR_13)(VAR_14, VAR_6);
            } else {
                FUNC_4 (&VAR_9->timer_entry, VAR_0, VAR_4);
                FUNC_9 (VAR_9);
            }
        }
        break;

    case 129:
        FUNC_0 ("L2CAP - Calling ConnectCfm_Cb(), CID: 0x%04x  Status: %d", VAR_9->local_cid, VAR_3);



        if ( (VAR_9 == VAR_9->p_lcb->ccb_queue.p_first_ccb) && (VAR_9 == VAR_9->p_lcb->ccb_queue.p_last_ccb) ) {
            VAR_9->p_lcb->idle_timeout = 0;
        }

        FUNC_8 (VAR_9);
        (*VAR_13)(VAR_14, VAR_3);
        break;

    case 134:
    case 135:
        FUNC_10 (VAR_11);
        break;

    case 133:

        FUNC_2 (VAR_9->p_lcb->remote_bd_addr);

        FUNC_8 (VAR_9);
        break;
    }
}
