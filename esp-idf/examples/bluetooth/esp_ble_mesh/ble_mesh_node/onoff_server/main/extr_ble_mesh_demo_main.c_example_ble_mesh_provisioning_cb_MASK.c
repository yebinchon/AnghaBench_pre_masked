
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {char* err_code; } ;
struct TYPE_12__ {int iv_index; int flags; int addr; int net_idx; } ;
struct TYPE_11__ {int bearer; } ;
struct TYPE_10__ {int bearer; } ;
struct TYPE_9__ {char* err_code; } ;
struct TYPE_14__ {char* err_code; } ;
struct TYPE_15__ {TYPE_5__ node_set_unprov_dev_name_comp; TYPE_4__ node_prov_complete; TYPE_3__ node_prov_link_close; TYPE_2__ node_prov_link_open; TYPE_1__ node_prov_enable_comp; TYPE_6__ prov_register_comp; } ;
typedef TYPE_7__ esp_ble_mesh_prov_cb_param_t ;
typedef int esp_ble_mesh_prov_cb_event_t ;
 int VAR_0 ;

 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(esp_ble_mesh_prov_cb_event_t VAR_2,
                                             esp_ble_mesh_prov_cb_param_t *VAR_3)
{
    switch (VAR_2) {
    case 128:
        FUNC_0(VAR_1, "ESP_BLE_MESH_PROV_REGISTER_COMP_EVT, err_code %d", VAR_3->prov_register_comp.err_code);
        break;
    case 133:
        FUNC_0(VAR_1, "ESP_BLE_MESH_NODE_PROV_ENABLE_COMP_EVT, err_code %d", VAR_3->node_prov_enable_comp.err_code);
        break;
    case 131:
        FUNC_0(VAR_1, "ESP_BLE_MESH_NODE_PROV_LINK_OPEN_EVT, bearer %s",
            VAR_3->node_prov_link_open.bearer == VAR_0 ? "PB-ADV" : "PB-GATT");
        break;
    case 132:
        FUNC_0(VAR_1, "ESP_BLE_MESH_NODE_PROV_LINK_CLOSE_EVT, bearer %s",
            VAR_3->node_prov_link_close.bearer == VAR_0 ? "PB-ADV" : "PB-GATT");
        break;
    case 134:
        FUNC_0(VAR_1, "ESP_BLE_MESH_NODE_PROV_COMPLETE_EVT");
        FUNC_1(VAR_3->node_prov_complete.net_idx, VAR_3->node_prov_complete.addr,
            VAR_3->node_prov_complete.flags, VAR_3->node_prov_complete.iv_index);
        break;
    case 130:
        FUNC_0(VAR_1, "ESP_BLE_MESH_NODE_PROV_RESET_EVT");
        break;
    case 129:
        FUNC_0(VAR_1, "ESP_BLE_MESH_NODE_SET_UNPROV_DEV_NAME_COMP_EVT, err_code %d", VAR_3->node_set_unprov_dev_name_comp.err_code);
        break;
    default:
        break;
    }
}
