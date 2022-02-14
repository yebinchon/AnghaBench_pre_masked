
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_9__ ;
typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_2__ ;
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_18__ ;
typedef struct TYPE_34__ TYPE_17__ ;
typedef struct TYPE_33__ TYPE_16__ ;
typedef struct TYPE_32__ TYPE_15__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int write_char_data ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int notify_en ;
typedef int esp_gattc_descr_elem_t ;
struct TYPE_40__ {int uuid16; } ;
struct TYPE_41__ {TYPE_4__ uuid; int len; } ;
struct TYPE_34__ {int properties; int handle; TYPE_5__ uuid; int char_handle; } ;
typedef TYPE_17__ esp_gattc_char_elem_t ;
typedef int esp_gattc_cb_event_t ;
typedef int esp_gatt_status_t ;
typedef int esp_gatt_if_t ;
typedef int esp_err_t ;
struct TYPE_45__ {int reason; } ;
struct TYPE_44__ {int status; } ;
struct TYPE_43__ {int remote_bda; } ;
struct TYPE_42__ {int value_len; int value; int is_notify; } ;
struct TYPE_39__ {int handle; int status; } ;
struct TYPE_38__ {int conn_id; int searched_service_source; int status; } ;
struct TYPE_36__ {int uuid16; } ;
struct TYPE_32__ {TYPE_1__ uuid; int len; } ;
struct TYPE_33__ {TYPE_15__ uuid; int inst_id; } ;
struct TYPE_31__ {TYPE_16__ srvc_id; int end_handle; int start_handle; int is_primary; int conn_id; } ;
struct TYPE_30__ {int conn_id; int mtu; int status; } ;
struct TYPE_29__ {int conn_id; int status; } ;
struct TYPE_28__ {int status; } ;
struct TYPE_27__ {int conn_id; int remote_bda; } ;
struct TYPE_35__ {TYPE_9__ disconnect; TYPE_8__ write; TYPE_7__ srvc_chg; TYPE_6__ notify; TYPE_3__ reg_for_notify; TYPE_2__ search_cmpl; TYPE_14__ search_res; TYPE_13__ cfg_mtu; TYPE_12__ dis_srvc_cmpl; TYPE_11__ open; TYPE_10__ connect; } ;
typedef TYPE_18__ esp_ble_gattc_cb_param_t ;
typedef int esp_bd_addr_t ;
struct TYPE_37__ {int char_handle; int conn_id; int service_end_handle; int service_start_handle; int remote_bda; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_17__* VAR_15 ;
 int VAR_16 ;
 TYPE_17__* VAR_17 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,TYPE_17__*,int*) ;
 int FUNC_5 (int ,int ,int ,int ,TYPE_17__*,int*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int,int*,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int,int*,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (TYPE_17__*) ;
 int VAR_18 ;
 TYPE_20__* VAR_19 ;
 TYPE_17__* FUNC_13 (int) ;
 int FUNC_14 (int ,int ,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_15(esp_gattc_cb_event_t VAR_23, esp_gatt_if_t VAR_24, esp_ble_gattc_cb_param_t *VAR_25)
{
    esp_ble_gattc_cb_param_t *VAR_26 = (esp_ble_gattc_cb_param_t *)VAR_25;

    switch (VAR_23) {
    case 134:
        FUNC_1(VAR_10, "REG_EVT");
        esp_err_t VAR_27 = FUNC_2(&VAR_14);
        if (VAR_27){
            FUNC_0(VAR_10, "set scan params error, error code = %x", VAR_27);
        }
        break;
    case 139:{
        FUNC_1(VAR_10, "ESP_GATTC_CONNECT_EVT conn_id %d, if %d", VAR_26->connect.conn_id, VAR_24);
        VAR_19[VAR_12].conn_id = VAR_26->connect.conn_id;
        FUNC_14(VAR_19[VAR_12].remote_bda, VAR_26->connect.remote_bda, sizeof(esp_bd_addr_t));
        FUNC_1(VAR_10, "REMOTE BDA:");
        FUNC_11(VAR_10, VAR_19[VAR_12].remote_bda, sizeof(esp_bd_addr_t));
        esp_err_t VAR_28 = FUNC_8 (VAR_24, VAR_26->connect.conn_id);
        if (VAR_28){
            FUNC_0(VAR_10, "config MTU error, error code = %x", VAR_28);
        }
        break;
    }
    case 135:
        if (VAR_25->open.status != VAR_4){
            FUNC_0(VAR_10, "open failed, status %d", VAR_26->open.status);
            break;
        }
        FUNC_1(VAR_10, "open success");
        break;
    case 137:
        if (VAR_25->dis_srvc_cmpl.status != VAR_4){
            FUNC_0(VAR_10, "discover service failed, status %d", VAR_25->dis_srvc_cmpl.status);
            break;
        }
        FUNC_1(VAR_10, "discover service complete conn_id %d", VAR_25->dis_srvc_cmpl.conn_id);
        FUNC_7(VAR_24, VAR_25->cfg_mtu.conn_id, &VAR_22);
        break;
    case 140:
        if (VAR_25->cfg_mtu.status != VAR_4){
            FUNC_0(VAR_10,"config mtu failed, error status = %x", VAR_25->cfg_mtu.status);
        }
        FUNC_1(VAR_10, "ESP_GATTC_CFG_MTU_EVT, Status %d, MTU %d, conn_id %d", VAR_25->cfg_mtu.status, VAR_25->cfg_mtu.mtu, VAR_25->cfg_mtu.conn_id);
        break;
    case 131: {
        FUNC_1(VAR_10, "SEARCH RES: conn_id = %x is primary service %d", VAR_26->search_res.conn_id, VAR_26->search_res.is_primary);
        FUNC_1(VAR_10, "start handle %d end handle %d current handle value %d", VAR_26->search_res.start_handle, VAR_26->search_res.end_handle, VAR_26->search_res.srvc_id.inst_id);
        if (VAR_26->search_res.srvc_id.uuid.len == VAR_9 && VAR_26->search_res.srvc_id.uuid.uuid.uuid16 == VAR_13) {
            FUNC_1(VAR_10, "service found");
            VAR_18 = 1;
            VAR_19[VAR_12].service_start_handle = VAR_26->search_res.start_handle;
            VAR_19[VAR_12].service_end_handle = VAR_26->search_res.end_handle;
            FUNC_1(VAR_10, "UUID16: %x", VAR_26->search_res.srvc_id.uuid.uuid.uuid16);
        }
        break;
    }
    case 132:
        if (VAR_26->search_cmpl.status != VAR_4){
            FUNC_0(VAR_10, "search service failed, error status = %x", VAR_26->search_cmpl.status);
            break;
        }
        if(VAR_26->search_cmpl.searched_service_source == VAR_6) {
            FUNC_1(VAR_10, "Get service information from remote device");
        } else if (VAR_26->search_cmpl.searched_service_source == VAR_5) {
            FUNC_1(VAR_10, "Get service information from flash");
        } else {
            FUNC_1(VAR_10, "unknown service source");
        }
        FUNC_1(VAR_10, "ESP_GATTC_SEARCH_CMPL_EVT");
        if (VAR_18){
            uint16_t VAR_29 = 0;
            esp_gatt_status_t VAR_30 = FUNC_3( VAR_24,
                                                                     VAR_26->search_cmpl.conn_id,
                                                                     VAR_2,
                                                                     VAR_19[VAR_12].service_start_handle,
                                                                     VAR_19[VAR_12].service_end_handle,
                                                                     VAR_11,
                                                                     &VAR_29);
            if (VAR_30 != VAR_4){
                FUNC_0(VAR_10, "esp_ble_gattc_get_attr_count error");
            }

            if (VAR_29 > 0){
                VAR_15 = (esp_gattc_char_elem_t *)FUNC_13(sizeof(esp_gattc_char_elem_t) * VAR_29);
                if (!VAR_15){
                    FUNC_0(VAR_10, "gattc no mem");
                }else{
                    VAR_30 = FUNC_4( VAR_24,
                                                             VAR_26->search_cmpl.conn_id,
                                                             VAR_19[VAR_12].service_start_handle,
                                                             VAR_19[VAR_12].service_end_handle,
                                                             VAR_21,
                                                             VAR_15,
                                                             &VAR_29);
                    if (VAR_30 != VAR_4){
                        FUNC_0(VAR_10, "esp_ble_gattc_get_char_by_uuid error");
                    }


                    if (VAR_29 > 0 && (VAR_15[0].properties & VAR_1)){
                        VAR_19[VAR_12].char_handle = VAR_15[0].char_handle;
                        FUNC_6 (VAR_24, VAR_19[VAR_12].remote_bda, VAR_15[0].char_handle);
                    }
                }

                FUNC_12(VAR_15);
            }else{
                FUNC_0(VAR_10, "no char found");
            }
        }
         break;
    case 133: {
        FUNC_1(VAR_10, "ESP_GATTC_REG_FOR_NOTIFY_EVT");
        if (VAR_26->reg_for_notify.status != VAR_4){
            FUNC_0(VAR_10, "REG FOR NOTIFY failed: error status = %d", VAR_26->reg_for_notify.status);
        }else{
            uint16_t VAR_31 = 0;
            uint16_t VAR_32 = 1;
            esp_gatt_status_t VAR_33 = FUNC_3( VAR_24,
                                                                         VAR_19[VAR_12].conn_id,
                                                                         VAR_3,
                                                                         VAR_19[VAR_12].service_start_handle,
                                                                         VAR_19[VAR_12].service_end_handle,
                                                                         VAR_19[VAR_12].char_handle,
                                                                         &VAR_31);
            if (VAR_33 != VAR_4){
                FUNC_0(VAR_10, "esp_ble_gattc_get_attr_count error");
            }
            if (VAR_31 > 0){
                VAR_17 = FUNC_13(sizeof(esp_gattc_descr_elem_t) * VAR_31);
                if (!VAR_17){
                    FUNC_0(VAR_10, "malloc error, gattc no mem");
                }else{
                    VAR_33 = FUNC_5( VAR_24,
                                                                         VAR_19[VAR_12].conn_id,
                                                                         VAR_26->reg_for_notify.handle,
                                                                         VAR_20,
                                                                         VAR_17,
                                                                         &VAR_31);
                    if (VAR_33 != VAR_4){
                        FUNC_0(VAR_10, "esp_ble_gattc_get_descr_by_char_handle error");
                    }

                    if (VAR_31 > 0 && VAR_17[0].uuid.len == VAR_9 && VAR_17[0].uuid.uuid.uuid16 == VAR_7){
                        VAR_33 = FUNC_10( VAR_24,
                                                                     VAR_19[VAR_12].conn_id,
                                                                     VAR_17[0].handle,
                                                                     sizeof(VAR_32),
                                                                     (uint8_t *)&VAR_32,
                                                                     VAR_8,
                                                                     VAR_0);
                    }

                    if (VAR_33 != VAR_4){
                        FUNC_0(VAR_10, "esp_ble_gattc_write_char_descr error");
                    }


                    FUNC_12(VAR_17);
                }
            }
            else{
                FUNC_0(VAR_10, "decsr not found");
            }

        }
        break;
    }
    case 136:
        if (VAR_26->notify.is_notify){
            FUNC_1(VAR_10, "ESP_GATTC_NOTIFY_EVT, receive notify value:");
        }else{
            FUNC_1(VAR_10, "ESP_GATTC_NOTIFY_EVT, receive indicate value:");
        }
        FUNC_11(VAR_10, VAR_26->notify.value, VAR_26->notify.value_len);
        break;
    case 128:
        if (VAR_26->write.status != VAR_4){
            FUNC_0(VAR_10, "write descr failed, error status = %x", VAR_26->write.status);
            break;
        }
        FUNC_1(VAR_10, "write descr success ");
        uint8_t VAR_34[35];
        for (int VAR_35 = 0; VAR_35 < sizeof(VAR_34); ++VAR_35)
        {
            VAR_34[VAR_35] = VAR_35 % 256;
        }
        FUNC_9( VAR_24,
                                  VAR_19[VAR_12].conn_id,
                                  VAR_19[VAR_12].char_handle,
                                  sizeof(VAR_34),
                                  VAR_34,
                                  VAR_8,
                                  VAR_0);
        break;
    case 130: {
        esp_bd_addr_t VAR_36;
        FUNC_14(VAR_36, VAR_26->srvc_chg.remote_bda, sizeof(esp_bd_addr_t));
        FUNC_1(VAR_10, "ESP_GATTC_SRVC_CHG_EVT, bd_addr:");
        FUNC_11(VAR_10, VAR_36, sizeof(esp_bd_addr_t));
        break;
    }
    case 129:
        if (VAR_26->write.status != VAR_4){
            FUNC_0(VAR_10, "write char failed, error status = %x", VAR_26->write.status);
            break;
        }
        FUNC_1(VAR_10, "write char success ");
        break;
    case 138:
        VAR_16 = 0;
        VAR_18 = 0;
        FUNC_1(VAR_10, "ESP_GATTC_DISCONNECT_EVT, reason = %d", VAR_26->disconnect.reason);
        break;
    default:
        break;
    }
}
