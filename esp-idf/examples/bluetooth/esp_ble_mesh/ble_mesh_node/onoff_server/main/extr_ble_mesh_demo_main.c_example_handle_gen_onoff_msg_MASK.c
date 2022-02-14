
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int op_en; int onoff; } ;
typedef TYPE_2__ esp_ble_mesh_server_recv_gen_onoff_set_t ;
struct TYPE_16__ {int recv_op; } ;
typedef TYPE_3__ esp_ble_mesh_msg_ctx_t ;
struct TYPE_17__ {TYPE_5__* user_data; } ;
typedef TYPE_4__ esp_ble_mesh_model_t ;
struct TYPE_14__ {int onoff; } ;
struct TYPE_18__ {TYPE_1__ state; } ;
typedef TYPE_5__ esp_ble_mesh_gen_onoff_srv_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,int,int *,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ,int,int *) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_3(esp_ble_mesh_model_t *VAR_2,
                                         esp_ble_mesh_msg_ctx_t *VAR_3,
                                         esp_ble_mesh_server_recv_gen_onoff_set_t *VAR_4)
{
    esp_ble_mesh_gen_onoff_srv_t *VAR_5 = VAR_2->user_data;

    switch (VAR_3->recv_op) {
    case 130:
        FUNC_1(VAR_2, VAR_3,
            VAR_0, sizeof(VAR_5->state.onoff), &VAR_5->state.onoff);
        break;
    case 129:
    case 128:
        if (VAR_4->op_en == 0) {
            VAR_5->state.onoff = VAR_4->onoff;
        } else {

            VAR_5->state.onoff = VAR_4->onoff;
        }
        if (VAR_3->recv_op == 129) {
            FUNC_1(VAR_2, VAR_3,
                VAR_0, sizeof(VAR_5->state.onoff), &VAR_5->state.onoff);
        }
        FUNC_0(VAR_2, VAR_0,
            sizeof(VAR_5->state.onoff), &VAR_5->state.onoff, VAR_1);
        FUNC_2(VAR_2, VAR_3, VAR_5->state.onoff);
        break;
    default:
        break;
    }
}
