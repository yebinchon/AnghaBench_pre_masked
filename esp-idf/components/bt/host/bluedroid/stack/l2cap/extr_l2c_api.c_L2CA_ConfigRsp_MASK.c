
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* qos_present; void* flush_to_present; void* mtu_present; } ;
struct TYPE_9__ {TYPE_1__ peer_cfg; } ;
typedef TYPE_2__ tL2C_CCB ;
struct TYPE_10__ {scalar_t__ result; scalar_t__ qos_present; scalar_t__ flush_to_present; scalar_t__ mtu_present; void* fcr_present; int fcs_present; } ;
typedef TYPE_3__ tL2CAP_CFG_INFO ;
typedef int UINT16 ;
typedef void* BOOLEAN ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,scalar_t__,void*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int *,int ) ;

BOOLEAN FUNC_4 (UINT16 VAR_6, tL2CAP_CFG_INFO *VAR_7)
{
    tL2C_CCB *VAR_8;


    FUNC_0 ("L2CA_ConfigRsp()  CID: 0x%04x  Result: %d MTU present:%d Flush TO:%d FCR:%d FCS:%d",
                     VAR_6, VAR_7->result, VAR_7->mtu_present, VAR_7->flush_to_present, VAR_7->fcr_present, VAR_7->fcs_present);


    if ((VAR_8 = FUNC_3 (((void*)0), VAR_6)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no CCB for L2CA_cfg_rsp, CID: %d", VAR_6);
        return (VAR_0);
    }

    if ( (VAR_7->result == VAR_1) || (VAR_7->result == VAR_2) ) {
        FUNC_2 (VAR_8, VAR_3, VAR_7);
    } else {
        VAR_7->fcr_present = VAR_0;


        if (VAR_7->mtu_present) {
            VAR_8->peer_cfg.mtu_present = VAR_0;
        }
        if (VAR_7->flush_to_present) {
            VAR_8->peer_cfg.flush_to_present = VAR_0;
        }
        if (VAR_7->qos_present) {
            VAR_8->peer_cfg.qos_present = VAR_0;
        }

        FUNC_2 (VAR_8, VAR_4, VAR_7);
    }

    return (VAR_5);
}
