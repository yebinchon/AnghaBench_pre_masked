
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int esp_err_t ;
struct TYPE_8__ {int unicast; } ;
typedef TYPE_2__ esp_ble_mesh_node_info_t ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_7__ {int send_rel; int send_ttl; int addr; int app_idx; int net_idx; } ;
struct TYPE_9__ {int msg_role; int msg_timeout; TYPE_1__ ctx; int * model; int opcode; } ;
typedef TYPE_3__ esp_ble_mesh_client_common_param_t ;
struct TYPE_10__ {int app_idx; int net_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;

__attribute__((used)) static esp_err_t FUNC_0(esp_ble_mesh_client_common_param_t *VAR_7,
                                                 esp_ble_mesh_node_info_t *VAR_8,
                                                 esp_ble_mesh_model_t *VAR_9, uint32_t VAR_10)
{
    if (!VAR_7 || !VAR_8 || !VAR_9) {
        return VAR_0;
    }

    VAR_7->opcode = VAR_10;
    VAR_7->model = VAR_9;
    VAR_7->ctx.net_idx = VAR_6.net_idx;
    VAR_7->ctx.app_idx = VAR_6.app_idx;
    VAR_7->ctx.addr = VAR_8->unicast;
    VAR_7->ctx.send_ttl = VAR_4;
    VAR_7->ctx.send_rel = VAR_3;
    VAR_7->msg_timeout = VAR_5;
    VAR_7->msg_role = VAR_2;

    return VAR_1;
}
