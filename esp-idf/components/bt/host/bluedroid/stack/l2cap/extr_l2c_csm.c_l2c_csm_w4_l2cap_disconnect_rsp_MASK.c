
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int local_cid; int remote_cid; int remote_id; int p_lcb; TYPE_1__* p_rcb; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int (* tL2CA_DISCONNECT_CFM_CB ) (int,int ) ;
typedef int UINT16 ;
struct TYPE_7__ {int (* pL2CA_DisconnectCfm_Cb ) (int,int ) ;} ;
struct TYPE_6__ {TYPE_2__ api; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,...) ;






 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9 (tL2C_CCB *VAR_2, UINT16 VAR_3, void *VAR_4)
{
    tL2CA_DISCONNECT_CFM_CB *VAR_5 = &VAR_2->p_rcb->api.pL2CA_DisconnectCfm_Cb;
    UINT16 VAR_6 = VAR_2->local_cid;


    FUNC_1 ("L2CAP - LCID: 0x%04x  st: W4_L2CAP_DISC_RSP  evt: %s", VAR_2->local_cid, FUNC_2 (VAR_3));




    switch (VAR_3) {
    case 131:
        FUNC_3 (VAR_2);
        if (VAR_5) {
            FUNC_0 ("L2CAP - Calling DisconnectCfm_Cb(), CID: 0x%04x", VAR_6);
            (*VAR_5)(VAR_6, VAR_0);
        }
        break;

    case 132:
        FUNC_4 (VAR_2->p_lcb, VAR_2->remote_id, VAR_2->local_cid, VAR_2->remote_cid);
        FUNC_3 (VAR_2);
        if (VAR_5) {
            FUNC_0 ("L2CAP - Calling DisconnectCfm_Cb(), CID: 0x%04x", VAR_6);
            (*VAR_5)(VAR_6, VAR_0);
        }
        break;

    case 129:
    case 128:
        FUNC_3 (VAR_2);
        if (VAR_5) {
            FUNC_0 ("L2CAP - Calling DisconnectCfm_Cb(), CID: 0x%04x", VAR_6);
            (*VAR_5)(VAR_6, VAR_1);
        }
        break;

    case 133:
    case 130:
        FUNC_5 (VAR_4);
        break;
    }
}
