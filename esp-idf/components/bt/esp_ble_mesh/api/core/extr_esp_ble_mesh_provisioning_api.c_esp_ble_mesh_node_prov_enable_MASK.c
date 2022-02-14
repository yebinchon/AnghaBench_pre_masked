
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_ble_mesh_prov_bearer_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int bearers; } ;
struct TYPE_8__ {TYPE_1__ node_prov_enable; int member_0; } ;
typedef TYPE_3__ btc_ble_mesh_prov_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;

esp_err_t FUNC_2(esp_ble_mesh_prov_bearer_t VAR_7)
{
    btc_ble_mesh_prov_args_t VAR_8 = {0};
    btc_msg_t VAR_9 = {0};

    FUNC_0(VAR_4);

    VAR_9.sig = VAR_2;
    VAR_9.pid = VAR_1;
    VAR_9.act = VAR_0;
    VAR_8.node_prov_enable.bearers = VAR_7;

    return (FUNC_1(&VAR_9, &VAR_8, sizeof(btc_ble_mesh_prov_args_t), ((void*)0))
            == VAR_3 ? VAR_6 : VAR_5);
}
