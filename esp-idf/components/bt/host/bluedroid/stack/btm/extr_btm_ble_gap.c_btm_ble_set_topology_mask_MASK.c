
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_BLE_STATE_MASK ;
struct TYPE_3__ {int cur_states; } ;
struct TYPE_4__ {TYPE_1__ ble_ctr_cb; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

BOOLEAN FUNC_0(tBTM_BLE_STATE_MASK VAR_3)
{
    VAR_3 &= VAR_0;
    VAR_2.ble_ctr_cb.cur_states |= (VAR_3 & VAR_0);
    return VAR_1;
}
