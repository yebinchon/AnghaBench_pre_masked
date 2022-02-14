
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int onoff; } ;
struct TYPE_8__ {TYPE_1__ onoff_set; } ;
struct TYPE_9__ {TYPE_2__ state_change; } ;
struct TYPE_10__ {int recv_op; int recv_dst; int addr; } ;
struct TYPE_11__ {TYPE_3__ value; TYPE_4__ ctx; } ;
typedef TYPE_5__ esp_ble_mesh_generic_server_cb_param_t ;
typedef int esp_ble_mesh_generic_server_cb_event_t ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(esp_ble_mesh_generic_server_cb_event_t VAR_3,
                                               esp_ble_mesh_generic_server_cb_param_t *VAR_4)
{
    FUNC_0(VAR_2, "event 0x%02x, opcode 0x%04x, src 0x%04x, dst 0x%04x",
        VAR_3, VAR_4->ctx.recv_op, VAR_4->ctx.addr, VAR_4->ctx.recv_dst);

    switch (VAR_3) {
    case 128:
        FUNC_0(VAR_2, "ESP_BLE_MESH_GENERIC_SERVER_STATE_CHANGE_EVT");
        if (VAR_4->ctx.recv_op == VAR_0 ||
            VAR_4->ctx.recv_op == VAR_1) {
            FUNC_0(VAR_2, "onoff 0x%02x", VAR_4->value.state_change.onoff_set.onoff);
            FUNC_2(VAR_4->value.state_change.onoff_set.onoff);
        }
        break;
    default:
        FUNC_1(VAR_2, "Unknown Generic Server event 0x%02x", VAR_3);
        break;
    }
}
