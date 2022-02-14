
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tL2C_RCB ;
struct TYPE_6__ {int handle; int link_state; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_7__ {int local_cid; int config_done; int remote_cid; int chnl_state; int * p_rcb; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (int ,int ,int ) ;
 int * FUNC_5 (int ) ;

UINT16 FUNC_6 (UINT16 VAR_5, UINT16 VAR_6, BD_ADDR VAR_7)
{
    tL2C_LCB *VAR_8;
    tL2C_CCB *VAR_9;
    tL2C_RCB *VAR_10;

    FUNC_1 ("L2CA_LocalLoopbackReq()  PSM: %d  Handle: 0x%04x", VAR_5, VAR_6);


    if (!FUNC_0()) {
        FUNC_2 ("L2CAP loop req - BTU not ready");
        return (0);
    }


    if ((VAR_10 = FUNC_5 (VAR_5)) == ((void*)0)) {
        FUNC_2 ("L2CAP - no RCB for L2CA_conn_req, PSM: %d", VAR_5);
        return (0);
    }

    if ((VAR_8 = FUNC_4 (VAR_7, VAR_3, VAR_0)) == ((void*)0)) {
        FUNC_2 ("L2CAP - no LCB for L2CA_conn_req");
        return (0);
    }

    VAR_8->link_state = VAR_4;
    VAR_8->handle = VAR_6;


    if ((VAR_9 = FUNC_3 (VAR_8, 0)) == ((void*)0)) {
        FUNC_2 ("L2CAP - no CCB for L2CA_conn_req");
        return (0);
    }


    VAR_9->p_rcb = VAR_10;
    VAR_9->chnl_state = VAR_2;
    VAR_9->remote_cid = VAR_9->local_cid;
    VAR_9->config_done = VAR_1;


    return (VAR_9->local_cid);
}
