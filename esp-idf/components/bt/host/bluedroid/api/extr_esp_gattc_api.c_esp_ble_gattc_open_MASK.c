
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_gatt_if_t ;
typedef int esp_err_t ;
typedef int esp_ble_addr_type_t ;
typedef int esp_bd_addr_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int is_direct; int remote_addr_type; int remote_bda; int gattc_if; } ;
struct TYPE_8__ {TYPE_1__ open; } ;
typedef TYPE_3__ btc_ble_gattc_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ,int ,int ) ;

esp_err_t FUNC_3(esp_gatt_if_t VAR_8, esp_bd_addr_t VAR_9, esp_ble_addr_type_t VAR_10, bool VAR_11)
{
    btc_msg_t VAR_12;
    btc_ble_gattc_args_t VAR_13;

    FUNC_0(VAR_5);

    VAR_12.sig = VAR_2;
    VAR_12.pid = VAR_1;
    VAR_12.act = VAR_0;
    VAR_13.open.gattc_if = VAR_8;
    FUNC_2(VAR_13.open.remote_bda, VAR_9, VAR_4);
    VAR_13.open.remote_addr_type = VAR_10;
    VAR_13.open.is_direct = VAR_11;

    return (FUNC_1(&VAR_12, &VAR_13, sizeof(btc_ble_gattc_args_t), ((void*)0)) == VAR_3 ? VAR_7 : VAR_6);
}
