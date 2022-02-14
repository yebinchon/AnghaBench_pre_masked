
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_4__ {scalar_t__ energy_support; } ;
typedef TYPE_1__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_ENERGY_INFO_CBACK ;
struct TYPE_5__ {int * p_ener_cback; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;

tBTM_STATUS FUNC_4(tBTM_BLE_ENERGY_INFO_CBACK *VAR_6)
{
    tBTM_STATUS VAR_7 = VAR_2;
    tBTM_BLE_VSC_CB VAR_8;

    FUNC_0(&VAR_8);

    FUNC_2("BTM_BleGetEnergyInfo\n");

    if (0 == VAR_8.energy_support) {
        FUNC_1("Controller does not support get energy info\n");
        return VAR_1;
    }

    VAR_4.p_ener_cback = VAR_6;
    if ((VAR_7 = FUNC_3 (VAR_3, 0, ((void*)0),
                  VAR_5)) != VAR_0) {
        FUNC_1("BTM_BleGetEnergyInfo status: %d", VAR_7);
        return VAR_2;
    }

    return VAR_7;
}
