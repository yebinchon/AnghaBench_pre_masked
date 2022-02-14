
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_BLE_BATCH_SCAN_CB ;
typedef int tBTM_BLE_ADV_TRACK_CB ;
struct TYPE_5__ {int ** p_data; } ;
struct TYPE_6__ {TYPE_1__ main_rep_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_1 ;
 int * VAR_2 ;
 TYPE_2__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
    int VAR_5 = 0;
    FUNC_0 (" btm_ble_batchscan_cleanup");

    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if (((void*)0) != VAR_3.main_rep_q.p_data[VAR_5]) {
            FUNC_2(VAR_3.main_rep_q.p_data[VAR_5]);
            VAR_3.main_rep_q.p_data[VAR_5] = ((void*)0);
        }
    }

    FUNC_1(&VAR_3, 0, sizeof(tBTM_BLE_BATCH_SCAN_CB));
    FUNC_1(&VAR_1, 0, sizeof(tBTM_BLE_ADV_TRACK_CB));


    FUNC_2(VAR_4);
    FUNC_2(VAR_2);
    VAR_4 = ((void*)0);
    VAR_2 = ((void*)0);

}
