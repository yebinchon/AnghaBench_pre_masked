
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int prepare_len; int * prepare_buf; } ;
typedef TYPE_3__ prepare_type_env_t ;
typedef scalar_t__ esp_gatt_status_t ;
struct TYPE_10__ {int len; int offset; int * value; int auth_req; int handle; } ;
struct TYPE_13__ {TYPE_1__ attr_value; } ;
typedef TYPE_4__ esp_gatt_rsp_t ;
typedef int esp_gatt_if_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_11__ {int offset; int len; int trans_id; int conn_id; int value; int handle; scalar_t__ is_prep; scalar_t__ need_rsp; } ;
struct TYPE_14__ {TYPE_2__ write; } ;
typedef TYPE_5__ esp_ble_gatts_cb_param_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int ,scalar_t__,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;

void FUNC_5(esp_gatt_if_t VAR_8, prepare_type_env_t *VAR_9, esp_ble_gatts_cb_param_t *VAR_10){
    esp_gatt_status_t VAR_11 = VAR_4;
    if (VAR_10->write.need_rsp) {
        if (VAR_10->write.is_prep) {
            if (VAR_9->prepare_buf == ((void*)0)) {
                VAR_9->prepare_buf = (uint8_t *)FUNC_3(VAR_7 * sizeof(uint8_t));
                VAR_9->prepare_len = 0;
                if (VAR_9->prepare_buf == ((void*)0)) {
                    FUNC_0(VAR_6, "Gatt_server prep no mem\n");
                    VAR_11 = VAR_3;
                }
            } else {
                if(VAR_10->write.offset > VAR_7 ||
                    VAR_9->prepare_len > VAR_10->write.offset) {
                    VAR_11 = VAR_2;
                } else if ((VAR_10->write.offset + VAR_10->write.len) > VAR_7) {
                    VAR_11 = VAR_1;
                }
            }

            esp_gatt_rsp_t *VAR_12 = (esp_gatt_rsp_t *)FUNC_3(sizeof(esp_gatt_rsp_t));
            VAR_12->attr_value.len = VAR_10->write.len;
            VAR_12->attr_value.handle = VAR_10->write.handle;
            VAR_12->attr_value.offset = VAR_10->write.offset;
            VAR_12->attr_value.auth_req = VAR_0;
            FUNC_4(VAR_12->attr_value.value, VAR_10->write.value, VAR_10->write.len);
            esp_err_t VAR_13 = FUNC_1(VAR_8, VAR_10->write.conn_id, VAR_10->write.trans_id, VAR_11, VAR_12);

            if (VAR_13 != VAR_5) {
               FUNC_0(VAR_6, "Send response error\n");
            }
            FUNC_2(VAR_12);
            if (VAR_11 != VAR_4) {
                return;
            }
            FUNC_4(VAR_9->prepare_buf + VAR_10->write.offset,
                   VAR_10->write.value,
                   VAR_10->write.len);
            VAR_9->prepare_len += VAR_10->write.len;

        }else {
            FUNC_1(VAR_8, VAR_10->write.conn_id, VAR_10->write.trans_id, VAR_11, ((void*)0));
        }
    }
}
