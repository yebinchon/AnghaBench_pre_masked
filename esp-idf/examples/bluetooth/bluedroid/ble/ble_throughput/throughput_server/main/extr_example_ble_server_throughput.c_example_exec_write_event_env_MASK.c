
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ prepare_len; int * prepare_buf; } ;
typedef TYPE_2__ prepare_type_env_t ;
struct TYPE_6__ {scalar_t__ exec_write_flag; } ;
struct TYPE_8__ {TYPE_1__ exec_write; } ;
typedef TYPE_3__ esp_ble_gatts_cb_param_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(prepare_type_env_t *VAR_2, esp_ble_gatts_cb_param_t *VAR_3){
    if (VAR_3->exec_write.exec_write_flag == VAR_0){
        FUNC_1(VAR_1, VAR_2->prepare_buf, VAR_2->prepare_len);
    }else{
        FUNC_0(VAR_1,"ESP_GATT_PREP_WRITE_CANCEL");
    }
    if (VAR_2->prepare_buf) {
        FUNC_2(VAR_2->prepare_buf);
        VAR_2->prepare_buf = ((void*)0);
    }
    VAR_2->prepare_len = 0;
}
