
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_ble_mesh_server_state_value_t ;
typedef scalar_t__ esp_ble_mesh_server_state_type_t ;
typedef int esp_ble_mesh_model_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int * value; scalar_t__ type; int * model; } ;
struct TYPE_8__ {TYPE_1__ model_update_state; int member_0; } ;
typedef TYPE_3__ btc_ble_mesh_model_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int ) ;

esp_err_t FUNC_2(esp_ble_mesh_model_t *VAR_10,
        esp_ble_mesh_server_state_type_t VAR_11,
        esp_ble_mesh_server_state_value_t *VAR_12)
{
    btc_ble_mesh_model_args_t VAR_13 = {0};
    btc_msg_t VAR_14 = {0};

    if (!VAR_10 || !VAR_12 || VAR_11 >= VAR_5) {
        return VAR_6;
    }

    FUNC_0(VAR_4);

    VAR_13.model_update_state.model = VAR_10;
    VAR_13.model_update_state.type = VAR_11;
    VAR_13.model_update_state.value = VAR_12;

    VAR_14.sig = VAR_2;
    VAR_14.pid = VAR_1;
    VAR_14.act = VAR_0;

    return (FUNC_1(&VAR_14, &VAR_13, sizeof(btc_ble_mesh_model_args_t), VAR_9)
            == VAR_3 ? VAR_8 : VAR_7);
}
