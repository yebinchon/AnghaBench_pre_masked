
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {scalar_t__* addr; scalar_t__ addr_num; scalar_t__ net_idx; int conn_handle; } ;
struct TYPE_8__ {TYPE_1__ proxy_client_remove_filter_addr; int member_0; } ;
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
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int ) ;

esp_err_t FUNC_2(uint8_t VAR_9,
        uint16_t VAR_10, uint16_t *VAR_11, uint16_t VAR_12)
{
    btc_ble_mesh_prov_args_t VAR_13 = {0};
    btc_msg_t VAR_14 = {0};

    if (!VAR_11 || VAR_12 == 0) {
        return VAR_5;
    }

    FUNC_0(VAR_4);

    VAR_14.sig = VAR_2;
    VAR_14.pid = VAR_1;
    VAR_14.act = VAR_0;

    VAR_13.proxy_client_remove_filter_addr.conn_handle = VAR_9;
    VAR_13.proxy_client_remove_filter_addr.net_idx = VAR_10;
    VAR_13.proxy_client_remove_filter_addr.addr_num = VAR_12;
    VAR_13.proxy_client_remove_filter_addr.addr = VAR_11;

    return (FUNC_1(&VAR_14, &VAR_13, sizeof(btc_ble_mesh_prov_args_t), VAR_8)
            == VAR_3 ? VAR_7 : VAR_6);
}
