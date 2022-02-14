
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tBTM_BLE_CONN_ST ;
struct TYPE_3__ {scalar_t__ conn_state; } ;
struct TYPE_4__ {TYPE_1__ ble_ctr_cb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_3 ;

void FUNC_2(tBTM_BLE_CONN_ST VAR_4)
{
    VAR_3.ble_ctr_cb.conn_state = VAR_4;

    if (VAR_4 == VAR_0 || VAR_4 == VAR_1) {
        FUNC_1(VAR_2);
    } else {
        FUNC_0(VAR_2);
    }
}
