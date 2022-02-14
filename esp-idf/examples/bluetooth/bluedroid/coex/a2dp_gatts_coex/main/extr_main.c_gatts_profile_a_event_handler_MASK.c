
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_28__ ;
typedef struct TYPE_42__ TYPE_27__ ;
typedef struct TYPE_41__ TYPE_26__ ;
typedef struct TYPE_40__ TYPE_21__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_19__ ;
typedef struct TYPE_37__ TYPE_18__ ;
typedef struct TYPE_36__ TYPE_17__ ;
typedef struct TYPE_35__ TYPE_16__ ;
typedef struct TYPE_34__ TYPE_15__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_12__ ;
typedef struct TYPE_30__ TYPE_11__ ;
typedef struct TYPE_29__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int notify_data ;
typedef int indicate_data ;
typedef int esp_gatts_cb_event_t ;
struct TYPE_33__ {int len; int* value; int handle; } ;
struct TYPE_36__ {TYPE_14__ attr_value; } ;
typedef TYPE_17__ esp_gatt_rsp_t ;
typedef int esp_gatt_if_t ;
typedef int esp_err_t ;
struct TYPE_51__ {int status; int* value; int len; } ;
struct TYPE_50__ {int remote_bda; } ;
struct TYPE_49__ {int service_handle; int status; } ;
struct TYPE_48__ {int service_handle; int attr_handle; int status; } ;
struct TYPE_46__ {int attr_handle; int service_handle; int status; } ;
struct TYPE_44__ {int service_handle; int status; } ;
struct TYPE_39__ {int mtu; } ;
struct TYPE_35__ {int len; int* value; int trans_id; int conn_id; int handle; int is_prep; } ;
struct TYPE_34__ {int trans_id; int conn_id; int handle; } ;
struct TYPE_29__ {int app_id; int status; } ;
struct TYPE_37__ {TYPE_9__ conf; TYPE_8__ connect; TYPE_7__ start; TYPE_6__ add_char_descr; TYPE_4__ add_char; TYPE_2__ create; TYPE_1__ mtu; TYPE_16__ write; TYPE_15__ read; TYPE_10__ reg; } ;
typedef TYPE_18__ esp_ble_gatts_cb_param_t ;
struct TYPE_38__ {int bda; int member_0; } ;
typedef TYPE_19__ esp_ble_conn_update_params_t ;
typedef int esp_bd_addr_t ;
struct TYPE_47__ {int uuid16; } ;
struct TYPE_45__ {int uuid16; } ;
struct TYPE_43__ {TYPE_3__ uuid; void* len; } ;
struct TYPE_42__ {TYPE_5__ uuid; void* len; } ;
struct TYPE_30__ {int uuid16; } ;
struct TYPE_31__ {TYPE_11__ uuid; void* len; } ;
struct TYPE_32__ {int inst_id; TYPE_12__ uuid; } ;
struct TYPE_41__ {int is_primary; TYPE_13__ id; } ;
struct TYPE_40__ {int descr_handle; TYPE_27__ descr_uuid; int service_handle; int char_handle; TYPE_28__ char_uuid; TYPE_26__ service_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_28__*,int,int,int *,int *) ;
 int FUNC_6 (int ,TYPE_27__*,int,int *,int *) ;
 int FUNC_7 (int ,TYPE_26__*,int ) ;
 int FUNC_8 (int ,int ,int ,int,int*,int) ;
 int FUNC_9 (int ,int ,int ,int,TYPE_17__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int*,int) ;
 int FUNC_12 (int *,TYPE_18__*) ;
 int FUNC_13 (int ,int *,TYPE_18__*) ;
 int VAR_18 ;
 TYPE_21__* VAR_19 ;
 int FUNC_14 (int ,int ,int) ;
 int FUNC_15 (TYPE_17__*,int ,int) ;

__attribute__((used)) static void FUNC_16(esp_gatts_cb_event_t VAR_20, esp_gatt_if_t VAR_21, esp_ble_gatts_cb_param_t *VAR_22) {
    switch (VAR_20) {
    case 132:
        FUNC_1(VAR_1, "REGISTER_APP_EVT, status %d, app_id %d\n", VAR_22->reg.status, VAR_22->reg.app_id);
        FUNC_3(1);
        VAR_19[VAR_14].service_id.is_primary = 1;
        VAR_19[VAR_14].service_id.id.inst_id = 0x00;
        VAR_19[VAR_14].service_id.id.uuid.len = VAR_10;
        VAR_19[VAR_14].service_id.id.uuid.uuid.uuid16 = VAR_13;

        FUNC_2(VAR_0);
        FUNC_7(VAR_21, &VAR_19[VAR_14].service_id, VAR_12);
        break;
    case 133: {
        FUNC_1(VAR_1, "GATT_READ_EVT, conn_id %d, trans_id %d, handle %d\n", VAR_22->read.conn_id, VAR_22->read.trans_id, VAR_22->read.handle);
        esp_gatt_rsp_t VAR_23;
        FUNC_15(&VAR_23, 0, sizeof(esp_gatt_rsp_t));
        VAR_23.attr_value.handle = VAR_22->read.handle;
        VAR_23.attr_value.len = 4;
        VAR_23.attr_value.value[0] = 0xde;
        VAR_23.attr_value.value[1] = 0xed;
        VAR_23.attr_value.value[2] = 0xbe;
        VAR_23.attr_value.value[3] = 0xef;
        FUNC_9(VAR_21, VAR_22->read.conn_id, VAR_22->read.trans_id,
                                    VAR_6, &VAR_23);
        break;
    }
    case 128: {
        FUNC_1(VAR_1, "GATT_WRITE_EVT, conn_id %d, trans_id %d, handle %d", VAR_22->write.conn_id, VAR_22->write.trans_id, VAR_22->write.handle);
        if (!VAR_22->write.is_prep){
            FUNC_1(VAR_1, "GATT_WRITE_EVT, value len %d, value :", VAR_22->write.len);
            FUNC_11(VAR_1, VAR_22->write.value, VAR_22->write.len);
            if (VAR_19[VAR_14].descr_handle == VAR_22->write.handle && VAR_22->write.len == 2){
                uint16_t VAR_24 = VAR_22->write.value[1]<<8 | VAR_22->write.value[0];
                if (VAR_24 == 0x0001){
                    if (VAR_16 & VAR_3){
                        FUNC_1(VAR_1, "notify enable");
                        uint8_t VAR_25[15];
                        for (int VAR_26 = 0; VAR_26 < sizeof(VAR_25); ++VAR_26)
                        {
                            VAR_25[VAR_26] = VAR_26%0xff;
                        }

                        FUNC_8(VAR_21, VAR_22->write.conn_id, VAR_19[VAR_14].char_handle,
                                                sizeof(VAR_25), VAR_25, 0);
                    }
                }else if (VAR_24 == 0x0002){
                    if (VAR_16 & VAR_2){
                        FUNC_1(VAR_1, "indicate enable");
                        uint8_t VAR_27[15];
                        for (int VAR_28 = 0; VAR_28 < sizeof(VAR_27); ++VAR_28)
                        {
                            VAR_27[VAR_28] = VAR_28%0xff;
                        }

                        FUNC_8(VAR_21, VAR_22->write.conn_id, VAR_19[VAR_14].char_handle,
                                                sizeof(VAR_27), VAR_27, 1);
                    }
                }
                else if (VAR_24 == 0x0000){
                    FUNC_1(VAR_1, "notify/indicate disable ");
                }else{
                    FUNC_0(VAR_1, "unknown descr value");
                    FUNC_11(VAR_1, VAR_22->write.value, VAR_22->write.len);
                }

            }
        }
        FUNC_13(VAR_21, &VAR_15, VAR_22);
        break;
    }
    case 137:
        FUNC_1(VAR_1,"ESP_GATTS_EXEC_WRITE_EVT");
        FUNC_9(VAR_21, VAR_22->write.conn_id, VAR_22->write.trans_id, VAR_6, ((void*)0));
        FUNC_12(&VAR_15, VAR_22);
        break;
    case 135:
        FUNC_1(VAR_1, "ESP_GATTS_MTU_EVT, MTU %d", VAR_22->mtu.mtu);
        break;
    case 129:
        break;
    case 140:
        FUNC_1(VAR_1, "CREATE_SERVICE_EVT, status %d,  service_handle %d\n", VAR_22->create.status, VAR_22->create.service_handle);
        VAR_19[VAR_14].service_handle = VAR_22->create.service_handle;
        VAR_19[VAR_14].char_uuid.len = VAR_10;
        VAR_19[VAR_14].char_uuid.uuid.uuid16 = VAR_11;

        FUNC_10(VAR_19[VAR_14].service_handle);
        VAR_16 = VAR_4 | VAR_5 | VAR_3;
        esp_err_t VAR_29 = FUNC_5(VAR_19[VAR_14].service_handle, &VAR_19[VAR_14].char_uuid,
                                                        VAR_7 | VAR_8,
                                                        VAR_16,
                                                        &VAR_18, ((void*)0));
        if (VAR_29){
            FUNC_0(VAR_1, "add char failed, error code = 0x%x",VAR_29);
        }
        break;
    case 146:
        break;
    case 147: {
        FUNC_1(VAR_1, "ADD_CHAR_EVT, status %d,  attr_handle %d, service_handle %d\n",
                VAR_22->add_char.status, VAR_22->add_char.attr_handle, VAR_22->add_char.service_handle);
        VAR_19[VAR_14].char_handle = VAR_22->add_char.attr_handle;
        VAR_19[VAR_14].descr_uuid.len = VAR_10;
        VAR_19[VAR_14].descr_uuid.uuid.uuid16 = VAR_9;
        esp_err_t VAR_30 = FUNC_6(VAR_19[VAR_14].service_handle, &VAR_19[VAR_14].descr_uuid,
                                                                VAR_7 | VAR_8, ((void*)0), ((void*)0));
        if (VAR_30){
            FUNC_0(VAR_1, "add char descr failed, error code = 0x%x", VAR_30);
        }
        break;
    }
    case 148:
        VAR_19[VAR_14].descr_handle = VAR_22->add_char_descr.attr_handle;
        FUNC_1(VAR_1, "ADD_DESCR_EVT, status %d, attr_handle %d, service_handle %d\n",
                 VAR_22->add_char_descr.status, VAR_22->add_char_descr.attr_handle, VAR_22->add_char_descr.service_handle);
        break;
    case 139:
        break;
    case 131:
        FUNC_1(VAR_1, "SERVICE_START_EVT, status %d, service_handle %d\n",
                 VAR_22->start.status, VAR_22->start.service_handle);
        break;
    case 130:
        break;
    case 141: {
        esp_ble_conn_update_params_t VAR_31 = {0};
        FUNC_14(VAR_31.bda, VAR_22->connect.remote_bda, sizeof(esp_bd_addr_t));
        break;
    }
    case 138:
        FUNC_1(VAR_1, "ESP_GATTS_DISCONNECT_EVT");
        FUNC_4(&VAR_17);
        break;
    case 143:
        FUNC_1(VAR_1, "ESP_GATTS_CONF_EVT, status %d", VAR_22->conf.status);
        if (VAR_22->conf.status != VAR_6){
            FUNC_11(VAR_1, VAR_22->conf.value, VAR_22->conf.len);
        }
        break;
    case 134:
    case 145:
    case 144:
    case 136:
    case 142:
    default:
        break;
    }
}
