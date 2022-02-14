
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int local_cid; int remote_cid; int remote_id; int p_lcb; TYPE_2__* p_rcb; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int (* tL2CA_DISCONNECT_IND_CB ) (int,int ) ;
typedef int UINT16 ;
struct TYPE_6__ {int (* pL2CA_DisconnectInd_Cb ) (int,int ) ;} ;
struct TYPE_7__ {TYPE_1__ api; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,...) ;






 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static void FUNC_8 (tL2C_CCB *VAR_1, UINT16 VAR_2, void *VAR_3)
{
    tL2CA_DISCONNECT_IND_CB *VAR_4 = &VAR_1->p_rcb->api.pL2CA_DisconnectInd_Cb;
    UINT16 VAR_5 = VAR_1->local_cid;


    FUNC_1 ("L2CAP - LCID: 0x%04x  st: W4_L2CA_DISC_RSP  evt: %s", VAR_1->local_cid, FUNC_2 (VAR_2));




    switch (VAR_2) {
    case 129:
        FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed", VAR_1->local_cid);
        FUNC_3 (VAR_1);
        (*VAR_4)(VAR_5, VAR_0);
        break;

    case 128:
        FUNC_4 (VAR_1->p_lcb, VAR_1->remote_id, VAR_1->local_cid, VAR_1->remote_cid);
        FUNC_0 ("L2CAP - Calling Disconnect_Ind_Cb(), CID: 0x%04x  No Conf Needed", VAR_1->local_cid);
        FUNC_3 (VAR_1);
        (*VAR_4)(VAR_5, VAR_0);
        break;

    case 131:
    case 130:
        FUNC_4 (VAR_1->p_lcb, VAR_1->remote_id, VAR_1->local_cid, VAR_1->remote_cid);
        FUNC_3 (VAR_1);
        break;

    case 133:
    case 132:
        FUNC_5 (VAR_3);
        break;
    }
}
