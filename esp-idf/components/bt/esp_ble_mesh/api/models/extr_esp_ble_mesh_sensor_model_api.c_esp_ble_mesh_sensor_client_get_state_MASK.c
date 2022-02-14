
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_ble_mesh_sensor_client_get_state_t ;
struct TYPE_10__ {int addr; } ;
struct TYPE_11__ {TYPE_2__ ctx; int model; } ;
typedef TYPE_3__ esp_ble_mesh_client_common_param_t ;
struct TYPE_12__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_4__ btc_msg_t ;
struct TYPE_9__ {int * get_state; TYPE_3__* params; } ;
struct TYPE_13__ {TYPE_1__ sensor_client_get_state; int member_0; } ;
typedef TYPE_5__ btc_ble_mesh_sensor_client_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_5__*,int,int ) ;

esp_err_t FUNC_2(esp_ble_mesh_client_common_param_t *VAR_9,
        esp_ble_mesh_sensor_client_get_state_t *VAR_10)
{
    btc_ble_mesh_sensor_client_args_t VAR_11 = {0};
    btc_msg_t VAR_12 = {0};

    if (!VAR_9 || !VAR_9->model || !VAR_9->ctx.addr || !VAR_10) {
        return VAR_5;
    }

    FUNC_0(VAR_4);

    VAR_12.sig = VAR_2;
    VAR_12.pid = VAR_1;
    VAR_12.act = VAR_0;
    VAR_11.sensor_client_get_state.params = VAR_9;
    VAR_11.sensor_client_get_state.get_state = VAR_10;

    return (FUNC_1(&VAR_12, &VAR_11, sizeof(btc_ble_mesh_sensor_client_args_t), VAR_8)
            == VAR_3 ? VAR_7 : VAR_6);
}
