
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ local_cid; TYPE_2__* p_rcb; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int (* tL2CA_DISCONNECT_IND_CB ) (scalar_t__,int ) ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {int (* pL2CA_DisconnectInd_Cb ) (scalar_t__,int ) ;} ;
struct TYPE_8__ {TYPE_1__ api; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (scalar_t__,int ) ;

void FUNC_5 (tL2C_CCB *VAR_2)
{
    UINT16 VAR_3 = VAR_2->local_cid;

    if (VAR_3 >= VAR_1) {
        tL2CA_DISCONNECT_IND_CB *VAR_4 = &VAR_2->p_rcb->api.pL2CA_DisconnectInd_Cb;

        FUNC_1 ("L2CAP - disconnect_chnl CID: 0x%04x", VAR_3);

        FUNC_3 (VAR_2);

        FUNC_2 (VAR_2);

        (*VAR_4)(VAR_3, VAR_0);
    } else {

        FUNC_0 ("L2CAP - disconnect_chnl CID: 0x%04x Ignored", VAR_3);
    }
}
