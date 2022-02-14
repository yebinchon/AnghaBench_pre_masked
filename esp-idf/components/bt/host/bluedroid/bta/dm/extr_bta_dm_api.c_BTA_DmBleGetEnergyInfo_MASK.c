
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_energy_info_cback; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_ENERGY_INFO ;
typedef int tBTA_BLE_ENERGY_INFO_CBACK ;
typedef int tBLE_BD_ADDR ;
typedef int UINT16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(tBTA_BLE_ENERGY_INFO_CBACK *VAR_1)
{
    tBTA_DM_API_ENERGY_INFO *VAR_2;
    FUNC_0 ("BTA_DmBleGetEnergyInfo");

    UINT16 VAR_3 = sizeof(tBTA_DM_API_ENERGY_INFO) + sizeof(tBLE_BD_ADDR);

    if ((VAR_2 = (tBTA_DM_API_ENERGY_INFO *) FUNC_3(VAR_3)) != ((void*)0)) {
        FUNC_2 (VAR_2, 0, VAR_3);
        VAR_2->hdr.event = VAR_0;
        VAR_2->p_energy_info_cback = VAR_1;
        FUNC_1(VAR_2);
    }
}
