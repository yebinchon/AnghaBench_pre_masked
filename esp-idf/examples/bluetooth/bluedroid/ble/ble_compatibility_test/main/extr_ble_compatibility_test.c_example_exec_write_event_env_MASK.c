
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_7__ {scalar_t__* prepare_buf; int prepare_len; } ;
typedef TYPE_2__ prepare_type_env_t ;
struct TYPE_6__ {scalar_t__ exec_write_flag; } ;
struct TYPE_8__ {TYPE_1__ exec_write; } ;
typedef TYPE_3__ esp_ble_gatts_cb_param_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* VAR_2 ;

void FUNC_2(prepare_type_env_t *VAR_3, esp_ble_gatts_cb_param_t *VAR_4){
    if (VAR_4->exec_write.exec_write_flag == VAR_0 && VAR_3->prepare_buf){
        if(VAR_3->prepare_len == 256) {
            bool VAR_5 = 1;
            for(uint16_t VAR_6 = 0; VAR_6 < VAR_3->prepare_len; VAR_6 ++) {
                if(VAR_3->prepare_buf[VAR_6] != VAR_2[VAR_6%16]) {
                    VAR_5 = 0;
                    break;
                }
            }
            if(VAR_5) {
                FUNC_0(VAR_1, "(4) ***** long write success ***** \n");
            }
        }
    }else{
        FUNC_0(VAR_1,"ESP_GATT_PREP_WRITE_CANCEL");
    }
    if (VAR_3->prepare_buf) {
        FUNC_1(VAR_3->prepare_buf);
        VAR_3->prepare_buf = ((void*)0);
    }
    VAR_3->prepare_len = 0;
}
