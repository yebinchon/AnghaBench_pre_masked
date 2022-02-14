
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tL2C_LCB ;
struct TYPE_5__ {scalar_t__ p_param; } ;
typedef TYPE_2__ tBTM_BLE_CONN_REQ ;
struct TYPE_4__ {int conn_pending_q; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;

BOOLEAN FUNC_3(void)
{
    tBTM_BLE_CONN_REQ *VAR_2;
    BOOLEAN VAR_3 = VAR_0;

    VAR_2 = (tBTM_BLE_CONN_REQ*)FUNC_0(VAR_1.ble_ctr_cb.conn_pending_q, 0);
    if (VAR_2 != ((void*)0)) {
        VAR_3 = FUNC_1((tL2C_LCB *)(VAR_2->p_param));

        FUNC_2((void *)VAR_2);
    }

    return VAR_3;
}
