
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* p_param; } ;
typedef TYPE_2__ tBTM_BLE_CONN_REQ ;
struct TYPE_5__ {int conn_pending_q; } ;
struct TYPE_7__ {TYPE_1__ ble_ctr_cb; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(void *VAR_2)
{
    tBTM_BLE_CONN_REQ *VAR_3 = (tBTM_BLE_CONN_REQ *)FUNC_1(sizeof(tBTM_BLE_CONN_REQ));

    VAR_3->p_param = VAR_2;

    FUNC_0(VAR_1.ble_ctr_cb.conn_pending_q, VAR_3, VAR_0);
}
