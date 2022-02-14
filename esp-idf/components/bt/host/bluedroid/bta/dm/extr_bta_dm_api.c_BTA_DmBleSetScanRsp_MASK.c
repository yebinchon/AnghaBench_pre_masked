
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SET_ADV_DATA_CMPL_CBACK ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int * p_adv_cfg; int * p_adv_data_cback; int data_mask; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SET_ADV_CONFIG ;
typedef int tBTA_BLE_AD_MASK ;
typedef int tBTA_BLE_ADV_DATA ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

extern void FUNC_2 (tBTA_BLE_AD_MASK VAR_1, tBTA_BLE_ADV_DATA *VAR_2,
                                 tBTA_SET_ADV_DATA_CMPL_CBACK *VAR_3)
{
    tBTA_DM_API_SET_ADV_CONFIG *VAR_4;

    if ((VAR_4 = (tBTA_DM_API_SET_ADV_CONFIG *)
                 FUNC_1(sizeof(tBTA_DM_API_SET_ADV_CONFIG))) != ((void*)0)) {
        VAR_4->hdr.event = VAR_0;
        VAR_4->data_mask = VAR_1;
        VAR_4->p_adv_data_cback = VAR_3;
        VAR_4->p_adv_cfg = VAR_2;

        FUNC_0(VAR_4);
    }
}
