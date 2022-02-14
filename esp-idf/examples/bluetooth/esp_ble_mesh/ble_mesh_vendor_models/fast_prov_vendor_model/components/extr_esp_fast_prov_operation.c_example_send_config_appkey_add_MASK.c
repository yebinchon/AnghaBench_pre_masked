
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int role; int timeout; int dst; int net_idx; int app_idx; } ;
typedef TYPE_3__ example_msg_common_info_t ;
typedef int esp_err_t ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_12__ {int app_idx; int send_rel; scalar_t__ send_ttl; int addr; int net_idx; } ;
struct TYPE_14__ {int msg_role; int msg_timeout; TYPE_2__ ctx; int * model; int opcode; int member_0; } ;
typedef TYPE_4__ esp_ble_mesh_client_common_param_t ;
struct TYPE_11__ {int app_key; int app_idx; int net_idx; } ;
struct TYPE_15__ {TYPE_1__ app_key_add; int member_0; } ;
typedef TYPE_5__ esp_ble_mesh_cfg_client_set_state_t ;
struct TYPE_16__ {int const* app_key; int app_idx; int net_idx; } ;
typedef TYPE_6__ esp_ble_mesh_cfg_app_key_add_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int const*,int) ;

esp_err_t FUNC_3(esp_ble_mesh_model_t *VAR_3,
        example_msg_common_info_t *VAR_4,
        esp_ble_mesh_cfg_app_key_add_t *VAR_5)
{
    esp_ble_mesh_client_common_param_t VAR_6 = {0};
    esp_ble_mesh_cfg_client_set_state_t VAR_7 = {0};
    const uint8_t *VAR_8 = ((void*)0);

    if (!VAR_3 || !VAR_4) {
        return VAR_1;
    }

    if (VAR_5) {
        VAR_7.app_key_add.net_idx = VAR_5->net_idx;
        VAR_7.app_key_add.app_idx = VAR_5->app_idx;
        FUNC_2(VAR_7.app_key_add.app_key, VAR_5->app_key, 16);
    } else {



        if (!VAR_8) {
            return VAR_2;
        }
        VAR_7.app_key_add.net_idx = VAR_4->net_idx;
        VAR_7.app_key_add.app_idx = VAR_4->app_idx;
        FUNC_2(VAR_7.app_key_add.app_key, VAR_8, 16);
    }

    VAR_6.opcode = VAR_0;
    VAR_6.model = VAR_3;
    VAR_6.ctx.net_idx = VAR_4->net_idx;
    VAR_6.ctx.app_idx = 0x0000;
    VAR_6.ctx.addr = VAR_4->dst;
    VAR_6.ctx.send_rel = 0;
    VAR_6.ctx.send_ttl = 0;
    VAR_6.msg_timeout = VAR_4->timeout;
    VAR_6.msg_role = VAR_4->role;

    return FUNC_0(&VAR_6, &VAR_7);
}
