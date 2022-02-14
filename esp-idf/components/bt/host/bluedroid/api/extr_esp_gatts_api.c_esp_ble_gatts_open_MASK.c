
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_gatt_if_t ;
typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int is_direct; int remote_bda; int gatts_if; } ;
struct TYPE_8__ {TYPE_1__ open; } ;
typedef TYPE_3__ btc_ble_gatts_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (int *,int ,int) ;

esp_err_t FUNC_3(esp_gatt_if_t VAR_7, esp_bd_addr_t VAR_8, bool VAR_9)
{
    btc_msg_t VAR_10;
    btc_ble_gatts_args_t VAR_11;

    FUNC_0(VAR_4);

    VAR_10.sig = VAR_2;
    VAR_10.pid = VAR_1;
    VAR_10.act = VAR_0;
    VAR_11.open.gatts_if = VAR_7;
    VAR_11.open.is_direct = VAR_9;
    FUNC_2(&VAR_11.open.remote_bda, VAR_8, sizeof(esp_bd_addr_t));

    return (FUNC_1(&VAR_10, &VAR_11, sizeof(btc_ble_gatts_args_t), ((void*)0))
            == VAR_3 ? VAR_6 : VAR_5);
}
