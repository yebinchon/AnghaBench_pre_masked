
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_START_STOP_ADV_CMPL_CBACK ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_stop_adv_cback; scalar_t__ start; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_OBSERVE ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

extern void FUNC_4 (BOOLEAN VAR_2, tBTA_START_STOP_ADV_CMPL_CBACK *VAR_3)
{
    tBTA_DM_API_BLE_OBSERVE *VAR_4;

    FUNC_0("BTA_DmBleBroadcast: start = %d \n", VAR_2);

    if ((VAR_4 = (tBTA_DM_API_BLE_OBSERVE *) FUNC_3(sizeof(tBTA_DM_API_BLE_OBSERVE))) != ((void*)0)) {
        FUNC_2(VAR_4, 0, sizeof(tBTA_DM_API_BLE_OBSERVE));

        VAR_4->hdr.event = VAR_0;
        VAR_4->start = VAR_2;
        if (VAR_2 == VAR_1){
            VAR_4->p_stop_adv_cback= VAR_3;
        }

        FUNC_1(VAR_4);
    }
}
