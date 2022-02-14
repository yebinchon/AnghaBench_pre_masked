
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_27__ ;
typedef struct TYPE_40__ TYPE_26__ ;
typedef struct TYPE_39__ TYPE_25__ ;
typedef struct TYPE_38__ TYPE_20__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_18__ ;
typedef struct TYPE_35__ TYPE_17__ ;
typedef struct TYPE_34__ TYPE_16__ ;
typedef struct TYPE_33__ TYPE_15__ ;
typedef struct TYPE_32__ TYPE_14__ ;
typedef struct TYPE_31__ TYPE_13__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int notify_data ;
typedef int indicate_data ;
typedef int esp_gatts_cb_event_t ;
struct TYPE_32__ {int len; int* value; int handle; } ;
struct TYPE_35__ {TYPE_14__ attr_value; } ;
typedef TYPE_17__ esp_gatt_rsp_t ;
typedef int esp_gatt_if_t ;
typedef int esp_err_t ;
struct TYPE_49__ {int status; int* value; int len; } ;
struct TYPE_48__ {int conn_id; int * remote_bda; } ;
struct TYPE_47__ {int service_handle; int status; } ;
struct TYPE_46__ {int service_handle; int attr_handle; int status; } ;
struct TYPE_44__ {int attr_handle; int service_handle; int status; } ;
struct TYPE_42__ {int service_handle; int status; } ;
struct TYPE_37__ {int mtu; } ;
struct TYPE_34__ {int len; int* value; int trans_id; int conn_id; int handle; int is_prep; } ;
struct TYPE_33__ {int trans_id; int conn_id; int handle; } ;
struct TYPE_28__ {int app_id; int status; } ;
struct TYPE_36__ {TYPE_9__ conf; TYPE_8__ connect; TYPE_7__ start; TYPE_6__ add_char_descr; TYPE_4__ add_char; TYPE_2__ create; TYPE_1__ mtu; TYPE_16__ write; TYPE_15__ read; TYPE_10__ reg; } ;
typedef TYPE_18__ esp_ble_gatts_cb_param_t ;
struct TYPE_45__ {int uuid16; } ;
struct TYPE_43__ {int uuid16; } ;
struct TYPE_41__ {TYPE_3__ uuid; void* len; } ;
struct TYPE_40__ {TYPE_5__ uuid; void* len; } ;
struct TYPE_29__ {int uuid16; } ;
struct TYPE_30__ {TYPE_11__ uuid; void* len; } ;
struct TYPE_31__ {int inst_id; TYPE_12__ uuid; } ;
struct TYPE_39__ {int is_primary; TYPE_13__ id; } ;
struct TYPE_38__ {int conn_id; int descr_handle; TYPE_26__ descr_uuid; int service_handle; int char_handle; TYPE_27__ char_uuid; TYPE_25__ service_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,TYPE_27__*,int,int,int *,int *) ;
 int FUNC_3 (int ,TYPE_26__*,int,int *,int *) ;
 int FUNC_4 (int ,TYPE_25__*,int ) ;
 int FUNC_5 (int ,int ,int ,int,int*,int) ;
 int FUNC_6 (int ,int ,int ,int,TYPE_17__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int*,int) ;
 int FUNC_9 (int *,TYPE_18__*) ;
 int FUNC_10 (int ,int *,TYPE_18__*) ;
 TYPE_20__* VAR_16 ;
 int FUNC_11 (TYPE_17__*,int ,int) ;

__attribute__((used)) static void FUNC_12(esp_gatts_cb_event_t VAR_17, esp_gatt_if_t VAR_18, esp_ble_gatts_cb_param_t *VAR_19) {
    switch (VAR_17) {
    case 132:
        FUNC_1(VAR_0, "REGISTER_APP_EVT, status %d, app_id %d\n", VAR_19->reg.status, VAR_19->reg.app_id);
        VAR_16[VAR_13].service_id.is_primary = 1;
        VAR_16[VAR_13].service_id.id.inst_id = 0x00;
        VAR_16[VAR_13].service_id.id.uuid.len = VAR_9;
        VAR_16[VAR_13].service_id.id.uuid.uuid.uuid16 = VAR_12;

        FUNC_4(VAR_18, &VAR_16[VAR_13].service_id, VAR_11);
        break;
    case 133: {
        FUNC_1(VAR_0, "GATT_READ_EVT, conn_id %d, trans_id %d, handle %d\n", VAR_19->read.conn_id, VAR_19->read.trans_id, VAR_19->read.handle);
        esp_gatt_rsp_t VAR_20;
        FUNC_11(&VAR_20, 0, sizeof(esp_gatt_rsp_t));
        VAR_20.attr_value.handle = VAR_19->read.handle;
        VAR_20.attr_value.len = 4;
        VAR_20.attr_value.value[0] = 0xde;
        VAR_20.attr_value.value[1] = 0xed;
        VAR_20.attr_value.value[2] = 0xbe;
        VAR_20.attr_value.value[3] = 0xef;
        FUNC_6(VAR_18, VAR_19->read.conn_id, VAR_19->read.trans_id,
                                    VAR_5, &VAR_20);
        break;
    }
    case 128: {
        FUNC_1(VAR_0, "GATT_WRITE_EVT, conn_id %d, trans_id %d, handle %d\n", VAR_19->write.conn_id, VAR_19->write.trans_id, VAR_19->write.handle);
        if (!VAR_19->write.is_prep){
            FUNC_1(VAR_0, "GATT_WRITE_EVT, value len %d, value :", VAR_19->write.len);
            FUNC_8(VAR_0, VAR_19->write.value, VAR_19->write.len);
            if (VAR_16[VAR_13].descr_handle == VAR_19->write.handle && VAR_19->write.len == 2){
                uint16_t VAR_21= VAR_19->write.value[1]<<8 | VAR_19->write.value[0];
                if (VAR_21 == 0x0001){
                    if (VAR_15 & VAR_2){
                        FUNC_1(VAR_0, "notify enable");
                        uint8_t VAR_22[15];
                        for (int VAR_23 = 0; VAR_23 < sizeof(VAR_22); ++VAR_23)
                        {
                            VAR_22[VAR_23] = VAR_23%0xff;
                        }

                        FUNC_5(VAR_18, VAR_19->write.conn_id, VAR_16[VAR_13].char_handle,
                                                sizeof(VAR_22), VAR_22, 0);
                    }
                }else if (VAR_21 == 0x0002){
                    if (VAR_15 & VAR_1){
                        FUNC_1(VAR_0, "indicate enable");
                        uint8_t VAR_24[15];
                        for (int VAR_25 = 0; VAR_25 < sizeof(VAR_24); ++VAR_25)
                        {
                            VAR_24[VAR_25] = VAR_25%0xff;
                        }

                        FUNC_5(VAR_18, VAR_19->write.conn_id, VAR_16[VAR_13].char_handle,
                                                sizeof(VAR_24), VAR_24, 1);
                    }
                }
                else if (VAR_21 == 0x0000){
                    FUNC_1(VAR_0, "notify/indicate disable ");
                }else{
                    FUNC_0(VAR_0, "unknown value");
                }

            }
        }
        FUNC_10(VAR_18, &VAR_14, VAR_19);
        break;
    }
    case 137:
        FUNC_1(VAR_0,"ESP_GATTS_EXEC_WRITE_EVT");
        FUNC_6(VAR_18, VAR_19->write.conn_id, VAR_19->write.trans_id, VAR_5, ((void*)0));
        FUNC_9(&VAR_14, VAR_19);
        break;
    case 135:
        FUNC_1(VAR_0, "ESP_GATTS_MTU_EVT, MTU %d", VAR_19->mtu.mtu);
        break;
    case 129:
        break;
    case 140:
        FUNC_1(VAR_0, "CREATE_SERVICE_EVT, status %d,  service_handle %d\n", VAR_19->create.status, VAR_19->create.service_handle);
        VAR_16[VAR_13].service_handle = VAR_19->create.service_handle;
        VAR_16[VAR_13].char_uuid.len = VAR_9;
        VAR_16[VAR_13].char_uuid.uuid.uuid16 = VAR_10;

        FUNC_7(VAR_16[VAR_13].service_handle);
        VAR_15 = VAR_3 | VAR_4 | VAR_2;
        esp_err_t VAR_26 =FUNC_2( VAR_16[VAR_13].service_handle, &VAR_16[VAR_13].char_uuid,
                                                        VAR_6 | VAR_7,
                                                        VAR_15,
                                                        ((void*)0), ((void*)0));
        if (VAR_26){
            FUNC_0(VAR_0, "add char failed, error code = 0x%x",VAR_26);
        }
        break;
    case 146:
        break;
    case 147:
        FUNC_1(VAR_0, "ADD_CHAR_EVT, status %d,  attr_handle %d, service_handle %d\n",
                 VAR_19->add_char.status, VAR_19->add_char.attr_handle, VAR_19->add_char.service_handle);

        VAR_16[VAR_13].char_handle = VAR_19->add_char.attr_handle;
        VAR_16[VAR_13].descr_uuid.len = VAR_9;
        VAR_16[VAR_13].descr_uuid.uuid.uuid16 = VAR_8;
        FUNC_3(VAR_16[VAR_13].service_handle, &VAR_16[VAR_13].descr_uuid,
                                     VAR_6 | VAR_7,
                                     ((void*)0), ((void*)0));
        break;
    case 148:
        VAR_16[VAR_13].descr_handle = VAR_19->add_char_descr.attr_handle;
        FUNC_1(VAR_0, "ADD_DESCR_EVT, status %d, attr_handle %d, service_handle %d\n",
                 VAR_19->add_char_descr.status, VAR_19->add_char_descr.attr_handle, VAR_19->add_char_descr.service_handle);
        break;
    case 139:
        break;
    case 131:
        FUNC_1(VAR_0, "SERVICE_START_EVT, status %d, service_handle %d\n",
                 VAR_19->start.status, VAR_19->start.service_handle);
        break;
    case 130:
        break;
    case 141:
        FUNC_1(VAR_0, "CONNECT_EVT, conn_id %d, remote %02x:%02x:%02x:%02x:%02x:%02x:",
                 VAR_19->connect.conn_id,
                 VAR_19->connect.remote_bda[0], VAR_19->connect.remote_bda[1], VAR_19->connect.remote_bda[2],
                 VAR_19->connect.remote_bda[3], VAR_19->connect.remote_bda[4], VAR_19->connect.remote_bda[5]);
        VAR_16[VAR_13].conn_id = VAR_19->connect.conn_id;
        break;
    case 143:
        FUNC_1(VAR_0, "ESP_GATTS_CONF_EVT status %d", VAR_19->conf.status);
        if (VAR_19->conf.status != VAR_5){
            FUNC_8(VAR_0, VAR_19->conf.value, VAR_19->conf.len);
        }
    break;
    case 138:
    case 134:
    case 145:
    case 144:
    case 136:
    case 142:
    default:
        break;
    }
}
