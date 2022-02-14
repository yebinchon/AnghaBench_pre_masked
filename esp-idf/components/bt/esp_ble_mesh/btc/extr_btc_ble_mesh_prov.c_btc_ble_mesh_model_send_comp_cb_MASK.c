
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32_t ;
typedef int esp_ble_mesh_msg_ctx_t ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_4__ {int err_code; int * ctx; int * model; int opcode; } ;
struct TYPE_5__ {TYPE_1__ model_send_comp; int member_0; } ;
typedef TYPE_2__ esp_ble_mesh_model_cb_param_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(esp_ble_mesh_model_t *VAR_1, esp_ble_mesh_msg_ctx_t *VAR_2, u32_t VAR_3, int VAR_4)
{
    esp_ble_mesh_model_cb_param_t VAR_5 = {0};

    VAR_5.model_send_comp.err_code = VAR_4;
    VAR_5.model_send_comp.opcode = VAR_3;
    VAR_5.model_send_comp.model = VAR_1;
    VAR_5.model_send_comp.ctx = VAR_2;

    FUNC_0(&VAR_5, VAR_0);
    return;
}
