
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_BLE_VSC_CB ;
struct TYPE_2__ {int cmn_ble_vsc_cb; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;

extern void FUNC_1(tBTM_BLE_VSC_CB *VAR_1)
{
    FUNC_0("BTM_BleGetVendorCapabilities");

    if (((void*)0) != VAR_1) {
        *VAR_1 = VAR_0.cmn_ble_vsc_cb;
    }
}
