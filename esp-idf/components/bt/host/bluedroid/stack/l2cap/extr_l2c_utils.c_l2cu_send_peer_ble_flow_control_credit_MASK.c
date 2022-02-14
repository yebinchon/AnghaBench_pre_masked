
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ id; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_8__ {int local_cid; TYPE_1__* p_lcb; scalar_t__ local_id; } ;
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
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (TYPE_1__*,int ,int ,scalar_t__) ;

void FUNC_5(tL2C_CCB *VAR_7, UINT16 VAR_8)
{
    BT_HDR *VAR_9;
    UINT8 *VAR_10;
    tL2C_LCB *VAR_11 = ((void*)0);

    if (!VAR_7) {
        return;
    }
    VAR_11 = VAR_7->p_lcb;


    VAR_7->p_lcb->id++;
    FUNC_3(VAR_7->p_lcb, VAR_1);

    VAR_7->local_id = VAR_7->p_lcb->id;

    if ((VAR_9 = FUNC_4 (VAR_11, VAR_3,
                    VAR_2, VAR_11->id)) == ((void*)0) )
    {
        FUNC_0 ("l2cu_send_peer_ble_credit_based_conn_req - no buffer");
        return;
    }

    VAR_10 = (UINT8 *)(VAR_9 + 1) + VAR_6 + VAR_0 +
                               VAR_5 + VAR_4;

    FUNC_1 (VAR_10, VAR_7->local_cid);
    FUNC_1 (VAR_10, VAR_8);

    FUNC_2 (VAR_11, ((void*)0), VAR_9);
}
