
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_dir_bda; void* adv_int_max; void* adv_int_min; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_ADV_PARAMS ;
typedef int tBLE_BD_ADDR ;
typedef void* UINT16 ;


 int FUNC_0 (char*,void*,void*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5 (UINT16 VAR_1, UINT16 VAR_2,
                            tBLE_BD_ADDR *VAR_3)
{

    tBTA_DM_API_BLE_ADV_PARAMS *VAR_4;

    FUNC_0 ("BTA_DmSetBleAdvParam: %d, %d\n", VAR_1, VAR_2);

    if ((VAR_4 = (tBTA_DM_API_BLE_ADV_PARAMS *) FUNC_4(sizeof(tBTA_DM_API_BLE_ADV_PARAMS)
                 + sizeof(tBLE_BD_ADDR))) != ((void*)0)) {
        FUNC_3(VAR_4, 0, sizeof(tBTA_DM_API_BLE_ADV_PARAMS) + sizeof(tBLE_BD_ADDR));

        VAR_4->hdr.event = VAR_0;

        VAR_4->adv_int_min = VAR_1;
        VAR_4->adv_int_max = VAR_2;

        if (VAR_3 != ((void*)0)) {
            VAR_4->p_dir_bda = (tBLE_BD_ADDR *)(VAR_4 + 1);
            FUNC_2(VAR_4->p_dir_bda, VAR_3, sizeof(tBLE_BD_ADDR));
        }

        FUNC_1(VAR_4);
    }

}
