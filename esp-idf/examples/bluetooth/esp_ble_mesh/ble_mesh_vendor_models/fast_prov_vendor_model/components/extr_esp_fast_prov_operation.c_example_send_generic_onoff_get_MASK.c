
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int role; int timeout; int dst; int app_idx; int net_idx; } ;
typedef TYPE_2__ example_msg_common_info_t ;
typedef int esp_err_t ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_10__ {int member_0; } ;
typedef TYPE_3__ esp_ble_mesh_generic_client_get_state_t ;
struct TYPE_8__ {int send_rel; scalar_t__ send_ttl; int addr; int app_idx; int net_idx; } ;
struct TYPE_11__ {int msg_role; int msg_timeout; TYPE_1__ ctx; int * model; int opcode; int member_0; } ;
typedef TYPE_4__ esp_ble_mesh_client_common_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;

esp_err_t FUNC_1(esp_ble_mesh_model_t *VAR_2,
        example_msg_common_info_t *VAR_3)
{
    esp_ble_mesh_generic_client_get_state_t VAR_4 = {0};
    esp_ble_mesh_client_common_param_t VAR_5 = {0};

    if (!VAR_2 || !VAR_3) {
        return VAR_1;
    }

    VAR_5.opcode = VAR_0;
    VAR_5.model = VAR_2;
    VAR_5.ctx.net_idx = VAR_3->net_idx;
    VAR_5.ctx.app_idx = VAR_3->app_idx;
    VAR_5.ctx.addr = VAR_3->dst;
    VAR_5.ctx.send_rel = 0;
    VAR_5.ctx.send_ttl = 0;
    VAR_5.msg_timeout = VAR_3->timeout;
    VAR_5.msg_role = VAR_3->role;

    return FUNC_0(&VAR_5, &VAR_4);
}
