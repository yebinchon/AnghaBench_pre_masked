
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ mode; } ;
struct TYPE_12__ {scalar_t__ mtu; scalar_t__ mtu_present; void* ext_flow_spec_present; void* fcs_present; TYPE_1__ fcr; int fcr_present; } ;
struct TYPE_11__ {TYPE_3__ our_cfg; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef TYPE_3__ tL2CAP_CFG_INFO ;
typedef scalar_t__ UINT16 ;
typedef void* BOOLEAN ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 TYPE_2__* FUNC_4 (int *,scalar_t__) ;

BOOLEAN FUNC_5 (UINT16 VAR_5, tL2CAP_CFG_INFO *VAR_6)
{
    tL2C_CCB *VAR_7;


    FUNC_0 ("L2CA_ConfigReq()  CID 0x%04x: fcr_present:%d (mode %d) mtu_present:%d (%d)",
                     VAR_5, VAR_6->fcr_present, VAR_6->fcr.mode, VAR_6->mtu_present, VAR_6->mtu);


    if ((VAR_7 = FUNC_4 (((void*)0), VAR_5)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no CCB for L2CA_cfg_req, CID: %d", VAR_5);
        return (VAR_0);
    }


    if (!FUNC_3(VAR_7, VAR_6)) {
        return (VAR_0);
    }


    if ((!VAR_6->fcr_present) || (VAR_6->fcr.mode == VAR_1)) {

        VAR_6->fcs_present = VAR_0;
        VAR_6->ext_flow_spec_present = VAR_0;

        if ( (VAR_6->mtu_present) && (VAR_6->mtu > VAR_2) ) {
            FUNC_1 ("L2CAP - adjust MTU: %u too large", VAR_6->mtu);
            VAR_6->mtu = VAR_2;
        }
    }


    VAR_7->our_cfg = *VAR_6;

    FUNC_2 (VAR_7, VAR_3, VAR_6);

    return (VAR_4);
}
