
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int esp_err_t ;
typedef int esp_ble_mesh_bd_addr_t ;
typedef scalar_t__ esp_ble_mesh_addr_type_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int net_idx; scalar_t__ addr_type; int addr; } ;
struct TYPE_8__ {TYPE_1__ proxy_client_connect; int member_0; } ;
typedef TYPE_3__ btc_ble_mesh_prov_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ,int ,int ) ;

esp_err_t FUNC_3(esp_ble_mesh_bd_addr_t VAR_10,
        esp_ble_mesh_addr_type_t VAR_11, uint16_t VAR_12)
{
    btc_ble_mesh_prov_args_t VAR_13 = {0};
    btc_msg_t VAR_14 = {0};

    if (!VAR_10 || VAR_11 > VAR_6) {
        return VAR_7;
    }

    FUNC_0(VAR_5);

    VAR_14.sig = VAR_3;
    VAR_14.pid = VAR_2;
    VAR_14.act = VAR_1;

    FUNC_2(VAR_13.proxy_client_connect.addr, VAR_10, VAR_0);
    VAR_13.proxy_client_connect.addr_type = VAR_11;
    VAR_13.proxy_client_connect.net_idx = VAR_12;

    return (FUNC_1(&VAR_14, &VAR_13, sizeof(btc_ble_mesh_prov_args_t), ((void*)0))
            == VAR_4 ? VAR_9 : VAR_8);
}
