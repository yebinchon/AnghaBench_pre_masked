
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ id; } ;
typedef TYPE_3__ tL2C_LCB ;
struct TYPE_9__ {int credits; int mps; int mtu; } ;
struct TYPE_12__ {int local_cid; TYPE_2__* p_rcb; TYPE_1__ local_conn_cfg; TYPE_3__* p_lcb; scalar_t__ local_id; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_10__ {int real_psm; } ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int *) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int * FUNC_5 (TYPE_3__*,int ,int ,scalar_t__) ;

void FUNC_6 (tL2C_CCB *VAR_7)
{
    BT_HDR *VAR_8;
    UINT8 *VAR_9;
    tL2C_LCB *VAR_10 = ((void*)0);
    UINT16 VAR_11;
    UINT16 VAR_12;
    UINT16 VAR_13;

    if (!VAR_7) {
        return;
    }
    VAR_10 = VAR_7->p_lcb;


    VAR_7->p_lcb->id++;
    FUNC_4(VAR_7->p_lcb, VAR_1);

    VAR_7->local_id = VAR_7->p_lcb->id;

    if ((VAR_8 = FUNC_5 (VAR_10, VAR_3,
                    VAR_2, VAR_10->id)) == ((void*)0) )
    {
        FUNC_1 ("l2cu_send_peer_ble_credit_based_conn_req - no buffer");
        return;
    }

    VAR_9 = (UINT8 *)(VAR_8 + 1) + VAR_6 + VAR_0 +
                               VAR_5 + VAR_4;

    VAR_11 = VAR_7->local_conn_cfg.mtu;
    VAR_12 = VAR_7->local_conn_cfg.mps;
    VAR_13 = VAR_7->local_conn_cfg.credits;

    FUNC_0 ("l2cu_send_peer_ble_credit_based_conn_req PSM:0x%04x local_cid:%d                mtu:%d mps:%d initial_credit:%d", VAR_7->p_rcb->real_psm, VAR_7->local_cid, VAR_11, VAR_12, VAR_13);



    FUNC_2 (VAR_9, VAR_7->p_rcb->real_psm);
    FUNC_2 (VAR_9, VAR_7->local_cid);
    FUNC_2 (VAR_9, VAR_11);
    FUNC_2 (VAR_9, VAR_12);
    FUNC_2 (VAR_9, VAR_13);

    FUNC_3 (VAR_10, ((void*)0), VAR_8);
}
