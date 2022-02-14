
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_ble_mesh_elem_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int * element; } ;
struct TYPE_8__ {TYPE_1__ health_fault_update; int member_0; } ;
typedef TYPE_3__ btc_ble_mesh_health_server_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;

esp_err_t FUNC_2(esp_ble_mesh_elem_t *VAR_8)
{
    btc_ble_mesh_health_server_args_t VAR_9 = {0};
    btc_msg_t VAR_10 = {0};

    if (VAR_8 == ((void*)0)) {
        return VAR_5;
    }

    FUNC_0(VAR_4);

    VAR_10.sig = VAR_2;
    VAR_10.pid = VAR_1;
    VAR_10.act = VAR_0;
    VAR_9.health_fault_update.element = VAR_8;

    return (FUNC_1(&VAR_10, &VAR_9, sizeof(btc_ble_mesh_health_server_args_t), ((void*)0))
            == VAR_3 ? VAR_7 : VAR_6);
}
