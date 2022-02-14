
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int credits; int mps; int mtu; } ;
struct TYPE_5__ {int p_lcb; TYPE_1__ local_conn_cfg; int local_cid; int remote_id; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int * FUNC_4 (int ,int ,int ,int ) ;

void FUNC_5 (tL2C_CCB *VAR_6, UINT16 VAR_7)
{
    BT_HDR *VAR_8;
    UINT8 *VAR_9;

    FUNC_0 ("l2cu_send_peer_ble_credit_based_conn_res");
    if ((VAR_8 = FUNC_4(VAR_6->p_lcb, VAR_2,
                    VAR_1, VAR_6->remote_id)) == ((void*)0) )
    {
        FUNC_1 ("l2cu_send_peer_ble_credit_based_conn_res - no buffer");
        return;
    }

    VAR_9 = (UINT8 *)(VAR_8 + 1) + VAR_5 + VAR_0 +
                               VAR_4 + VAR_3;

    FUNC_2 (VAR_9, VAR_6->local_cid);
    FUNC_2 (VAR_9, VAR_6->local_conn_cfg.mtu);
    FUNC_2 (VAR_9, VAR_6->local_conn_cfg.mps);
    FUNC_2 (VAR_9, VAR_6->local_conn_cfg.credits);
    FUNC_2 (VAR_9, VAR_7);

    FUNC_3 (VAR_6->p_lcb, ((void*)0), VAR_8);
}
