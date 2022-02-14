
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_11__ {int role; int timeout; int dst; int app_idx; int net_idx; } ;
typedef TYPE_3__ example_msg_common_info_t ;
typedef int esp_err_t ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_9__ {int op_en; void* tid; void* onoff; } ;
struct TYPE_12__ {TYPE_1__ onoff_set; int member_0; } ;
typedef TYPE_4__ esp_ble_mesh_generic_client_set_state_t ;
struct TYPE_10__ {int send_rel; scalar_t__ send_ttl; int addr; int app_idx; int net_idx; } ;
struct TYPE_13__ {int msg_role; int msg_timeout; TYPE_2__ ctx; int * model; int opcode; int member_0; } ;
typedef TYPE_5__ esp_ble_mesh_client_common_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;

esp_err_t FUNC_1(esp_ble_mesh_model_t *VAR_3,
        example_msg_common_info_t *VAR_4,
        uint8_t VAR_5, uint8_t VAR_6, bool VAR_7)
{
    esp_ble_mesh_generic_client_set_state_t VAR_8 = {0};
    esp_ble_mesh_client_common_param_t VAR_9 = {0};

    if (!VAR_3 || !VAR_4) {
        return VAR_2;
    }

    VAR_8.onoff_set.onoff = VAR_5;
    VAR_8.onoff_set.tid = VAR_6;
    VAR_8.onoff_set.op_en = 0;

    if (VAR_7) {
        VAR_9.opcode = VAR_0;
    } else {
        VAR_9.opcode = VAR_1;
    }
    VAR_9.model = VAR_3;
    VAR_9.ctx.net_idx = VAR_4->net_idx;
    VAR_9.ctx.app_idx = VAR_4->app_idx;
    VAR_9.ctx.addr = VAR_4->dst;
    VAR_9.ctx.send_rel = 0;
    VAR_9.ctx.send_ttl = 0;
    VAR_9.msg_timeout = VAR_4->timeout;
    VAR_9.msg_role = VAR_4->role;

    return FUNC_0(&VAR_9, &VAR_8);
}
