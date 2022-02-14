
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_BLE_CTRL_FEATURES_CBACK ;
struct TYPE_3__ {scalar_t__ values_read; } ;
struct TYPE_4__ {TYPE_1__ cmn_ble_vsc_cb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int * VAR_5 ;

extern void FUNC_4(tBTM_BLE_CTRL_FEATURES_CBACK *VAR_6)
{
    if (VAR_2 == VAR_4.cmn_ble_vsc_cb.values_read) {
        return;
    }


    FUNC_0("BTM_BleReadControllerFeatures");

    VAR_5 = VAR_6;
    if ( FUNC_2 (VAR_1,
                                    0,
                                    ((void*)0),
                                    VAR_3)
            != VAR_0) {
        FUNC_1("LE Get_Vendor Capabilities Command Failed.");
    }



    return ;
}
