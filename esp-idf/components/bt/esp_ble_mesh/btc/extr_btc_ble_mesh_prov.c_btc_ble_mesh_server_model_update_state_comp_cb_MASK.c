
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_ble_mesh_server_state_type_t ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_4__ {int err_code; int type; int * model; } ;
struct TYPE_5__ {TYPE_1__ server_model_update_state; int member_0; } ;
typedef TYPE_2__ esp_ble_mesh_model_cb_param_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(esp_ble_mesh_model_t *VAR_1,
        esp_ble_mesh_server_state_type_t VAR_2, int VAR_3)
{
    esp_ble_mesh_model_cb_param_t VAR_4 = {0};

    VAR_4.server_model_update_state.err_code = VAR_3;
    VAR_4.server_model_update_state.model = VAR_1;
    VAR_4.server_model_update_state.type = VAR_2;

    FUNC_0(&VAR_4, VAR_0);
    return;
}
