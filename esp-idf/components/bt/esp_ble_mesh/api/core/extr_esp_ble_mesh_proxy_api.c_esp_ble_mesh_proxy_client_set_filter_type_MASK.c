
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int esp_err_t ;
typedef scalar_t__ esp_ble_mesh_proxy_filter_type_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {scalar_t__ filter_type; int net_idx; int conn_handle; } ;
struct TYPE_8__ {TYPE_1__ proxy_client_set_filter_type; int member_0; } ;
typedef TYPE_3__ btc_ble_mesh_prov_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;

esp_err_t FUNC_2(uint8_t VAR_9,
        uint16_t VAR_10, esp_ble_mesh_proxy_filter_type_t VAR_11)
{
    btc_ble_mesh_prov_args_t VAR_12 = {0};
    btc_msg_t VAR_13 = {0};

    if (VAR_11 > VAR_8) {
        return VAR_5;
    }

    FUNC_0(VAR_4);

    VAR_13.sig = VAR_2;
    VAR_13.pid = VAR_1;
    VAR_13.act = VAR_0;

    VAR_12.proxy_client_set_filter_type.conn_handle = VAR_9;
    VAR_12.proxy_client_set_filter_type.net_idx = VAR_10;
    VAR_12.proxy_client_set_filter_type.filter_type = VAR_11;

    return (FUNC_1(&VAR_13, &VAR_12, sizeof(btc_ble_mesh_prov_args_t), ((void*)0))
            == VAR_3 ? VAR_7 : VAR_6);
}
