
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_buf_simple {int data; int len; } ;
struct bt_mesh_msg_ctx {int recv_op; } ;
struct bt_mesh_model {int dummy; } ;
typedef int esp_ble_mesh_msg_ctx_t ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_4__ {int msg; int length; int * ctx; int * model; int opcode; } ;
struct TYPE_5__ {TYPE_1__ model_operation; int member_0; } ;
typedef TYPE_2__ esp_ble_mesh_model_cb_param_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(struct bt_mesh_model *VAR_1,
        struct bt_mesh_msg_ctx *VAR_2,
        struct net_buf_simple *VAR_3)
{
    esp_ble_mesh_model_cb_param_t VAR_4 = {0};

    VAR_4.model_operation.opcode = VAR_2->recv_op;
    VAR_4.model_operation.model = (esp_ble_mesh_model_t *)VAR_1;
    VAR_4.model_operation.ctx = (esp_ble_mesh_msg_ctx_t *)VAR_2;
    VAR_4.model_operation.length = VAR_3->len;
    VAR_4.model_operation.msg = VAR_3->data;

    FUNC_0(&VAR_4, VAR_0);
    return;
}
