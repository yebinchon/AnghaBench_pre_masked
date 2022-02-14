
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_BLE_TX_TIME_MS ;
typedef int tBTM_BLE_RX_TIME_MS ;
typedef int tBTM_BLE_IDLE_TIME_MS ;
typedef int tBTM_BLE_ENERGY_USED ;
typedef scalar_t__ tBTA_STATUS ;
typedef int tBTA_DM_CONTRL_STATE ;
struct TYPE_2__ {int (* p_energy_info_cback ) (int ,int ,int ,int ,int ,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(tBTM_BLE_TX_TIME_MS VAR_4,
                                     tBTM_BLE_RX_TIME_MS VAR_5,
                                     tBTM_BLE_IDLE_TIME_MS VAR_6,
                                     tBTM_BLE_ENERGY_USED VAR_7,
                                     tBTM_STATUS VAR_8)
{
    tBTA_STATUS VAR_9 = (VAR_8 == VAR_2) ? VAR_1 : VAR_0;
    tBTA_DM_CONTRL_STATE VAR_10 = 0;





    if (VAR_3.p_energy_info_cback) {
        VAR_3.p_energy_info_cback(VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_9);
    }
}
