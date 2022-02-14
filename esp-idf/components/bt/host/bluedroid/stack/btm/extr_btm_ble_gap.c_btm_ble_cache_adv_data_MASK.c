
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t adv_data_len; size_t scan_rsp_len; } ;
typedef TYPE_2__ tBTM_INQ_RESULTS ;
struct TYPE_8__ {size_t adv_len; scalar_t__* adv_data_cache; scalar_t__* adv_addr; } ;
typedef TYPE_3__ tBTM_BLE_INQ_CB ;
typedef scalar_t__ UINT8 ;
struct TYPE_6__ {TYPE_3__ inq_var; } ;
struct TYPE_9__ {TYPE_1__ ble_ctr_cb; } ;
typedef scalar_t__* BD_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;
 TYPE_4__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__) ;

void FUNC_4(BD_ADDR VAR_4, tBTM_INQ_RESULTS *VAR_5, UINT8 VAR_6, UINT8 *VAR_7, UINT8 VAR_8)
{
    tBTM_BLE_INQ_CB *VAR_9 = &VAR_3.ble_ctr_cb.inq_var;
    UINT8 *VAR_10;
    UINT8 VAR_11;


    if (VAR_8 != VAR_2) {
        VAR_9->adv_len = 0;
        FUNC_3(VAR_9->adv_data_cache, 0, VAR_1);
        VAR_5->adv_data_len = 0;
        VAR_5->scan_rsp_len = 0;
    }


    if(FUNC_1(VAR_4, VAR_9->adv_addr, VAR_0) != 0) {
        VAR_9->adv_len = 0;
        FUNC_2(VAR_9->adv_addr, VAR_4, VAR_0);
        FUNC_3(VAR_9->adv_data_cache, 0, VAR_1);
        VAR_5->adv_data_len = 0;
        VAR_5->scan_rsp_len = 0;
    }

    if (VAR_6 > 0) {
        VAR_10 = &VAR_9->adv_data_cache[VAR_9->adv_len];
        FUNC_0(VAR_11, VAR_7);
        while ( VAR_11 && ((VAR_9->adv_len + VAR_11 + 1) <= VAR_1)) {

            FUNC_2(VAR_10, VAR_7 - 1, VAR_11 + 1);

            VAR_10 += VAR_11 + 1;

            VAR_9->adv_len += VAR_11 + 1;

            VAR_7 += VAR_11;
            FUNC_0(VAR_11, VAR_7);
        }
    }

    if (VAR_8 != VAR_2) {
        VAR_5->adv_data_len = VAR_9->adv_len;
    }
    else {
        VAR_5->scan_rsp_len = VAR_9->adv_len - VAR_5->adv_data_len;
    }



}
