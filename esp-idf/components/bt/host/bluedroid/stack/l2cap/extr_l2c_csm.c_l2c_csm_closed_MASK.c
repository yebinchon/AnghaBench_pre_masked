
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int status; } ;
typedef TYPE_4__ tL2C_CONN_INFO ;
struct TYPE_19__ {scalar_t__ local_cid; TYPE_3__* p_lcb; TYPE_2__* p_rcb; void* chnl_state; int timer_entry; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int (* tL2CA_DISCONNECT_IND_CB ) (scalar_t__,int ) ;
typedef int (* tL2CA_CONNECT_CFM_CB ) (scalar_t__,int ) ;
struct TYPE_20__ {void* mode; } ;
typedef TYPE_6__ tBTM_PM_PWR_MD ;
typedef int settings ;
typedef scalar_t__ UINT16 ;
struct TYPE_17__ {int handle; int remote_bd_addr; int timer_entry; int w4_info_rsp; } ;
struct TYPE_15__ {int (* pL2CA_ConnectCfm_Cb ) (scalar_t__,int ) ;int (* pL2CA_DisconnectInd_Cb ) (scalar_t__,int ) ;} ;
struct TYPE_16__ {int psm; TYPE_1__ api; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_6__*) ;
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
 int VAR_14 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int *,TYPE_5__*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_16 ;
 scalar_t__ FUNC_10 (TYPE_5__*,scalar_t__,void*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*,int ,int ) ;
 int FUNC_14 (void*,int ,int) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (scalar_t__,int ) ;
 int FUNC_19 (scalar_t__,int ) ;
 int FUNC_20 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_21 (tL2C_CCB *VAR_17, UINT16 VAR_18, void *VAR_19)
{
    tL2C_CONN_INFO *VAR_20 = (tL2C_CONN_INFO *)VAR_19;
    UINT16 VAR_21 = VAR_17->local_cid;
    tL2CA_DISCONNECT_IND_CB *VAR_22;
    tL2CA_CONNECT_CFM_CB *VAR_23;

    if (VAR_17->p_rcb == ((void*)0)) {

        FUNC_2 ("L2CAP - LCID: 0x%04x  st: CLOSED  evt: %s p_rcb == NULL", VAR_17->local_cid, FUNC_8 (VAR_18));



        return;
    }


    if ( VAR_21 == VAR_10 ) {

        if ( FUNC_10 (VAR_17, VAR_18, VAR_19) ) {

            return;
        }
    }


    VAR_22 = &VAR_17->p_rcb->api.pL2CA_DisconnectInd_Cb;
    VAR_23 = &VAR_17->p_rcb->api.pL2CA_ConnectCfm_Cb;


    FUNC_3 ("L2CAP - LCID: 0x%04x  st: CLOSED  evt: %s", VAR_17->local_cid, FUNC_8 (VAR_18));




    switch (VAR_18) {
    case 131:
        FUNC_1 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed", VAR_17->local_cid);
        FUNC_11 (VAR_17);
        (*VAR_22)(VAR_21, VAR_7);
        break;

    case 133:
        VAR_17->chnl_state = VAR_4;
        FUNC_5 (VAR_17->p_lcb->remote_bd_addr, VAR_17->p_rcb->psm,
                                  VAR_17->p_lcb->handle, VAR_15, &VAR_16, VAR_17);
        break;

    case 132:

        if (VAR_20->status != VAR_8
                || !FUNC_4(VAR_17->p_lcb->remote_bd_addr)) {
            FUNC_1 ("L2CAP - Calling ConnectCfm_Cb(), CID: 0x%04x  Status: %d", VAR_17->local_cid, VAR_20->status);
            FUNC_11 (VAR_17);
            (*VAR_23)(VAR_21, VAR_20->status);
        }
        break;

    case 136:

    {
        tBTM_PM_PWR_MD VAR_24;

        FUNC_14((void *)&VAR_24, 0, sizeof(VAR_24));

        VAR_24.mode = VAR_1;







        FUNC_0 (VAR_2, VAR_17->p_lcb->remote_bd_addr, &VAR_24);
    }


    if (FUNC_5 (VAR_17->p_lcb->remote_bd_addr, VAR_17->p_rcb->psm,
                                  VAR_17->p_lcb->handle, VAR_15, &VAR_16, VAR_17) == VAR_0) {
        VAR_17->chnl_state = VAR_4;
    }
    break;

    case 130:
        VAR_17->chnl_state = VAR_6;


        if (!VAR_17->p_lcb->w4_info_rsp) {

            if (!FUNC_9(VAR_17)) {
                FUNC_11 (VAR_17);
                (*VAR_17->p_rcb->api.pL2CA_ConnectCfm_Cb)(VAR_21, VAR_11);
            } else {
                FUNC_12 (VAR_17);
                FUNC_6 (&VAR_17->timer_entry, VAR_3, VAR_9);
            }
        }
        break;

    case 129:
        FUNC_1 ("L2CAP - Calling ConnectCfm_Cb(), CID: 0x%04x  Status: %d", VAR_17->local_cid, VAR_14);
        FUNC_11 (VAR_17);
        (*VAR_23)(VAR_21, VAR_13);
        break;

    case 138:

        FUNC_7 (&VAR_17->p_lcb->timer_entry);


        {
            tBTM_PM_PWR_MD VAR_25;

            FUNC_14((void *)&VAR_25, 0, sizeof(VAR_25));

            VAR_25.mode = VAR_1;







            FUNC_0 (VAR_2, VAR_17->p_lcb->remote_bd_addr, &VAR_25);
        }

        VAR_17->chnl_state = VAR_5;
        if (FUNC_5 (VAR_17->p_lcb->remote_bd_addr, VAR_17->p_rcb->psm,
                                      VAR_17->p_lcb->handle, VAR_7, &VAR_16, VAR_17) == VAR_0) {

            FUNC_13(VAR_17, VAR_12, 0);
        }
        break;

    case 128:
        FUNC_1 ("L2CAP - Calling ConnectCfm_Cb(), CID: 0x%04x  Status: %d", VAR_17->local_cid, VAR_14);
        FUNC_11 (VAR_17);
        (*VAR_23)(VAR_21, VAR_14);
        break;

    case 137:
    case 135:
        FUNC_15 (VAR_19);
        break;

    case 134:
        FUNC_11 (VAR_17);
        break;
    }
}
