
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
struct TYPE_6__ {int is_assoc; int assoc_addr; int src_addr; int gattc_if; } ;
struct TYPE_8__ {TYPE_1__ cache_assoc; } ;
typedef TYPE_3__ btc_ble_gattc_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ,int ,int) ;

esp_err_t FUNC_3(esp_gatt_if_t VAR_7, esp_bd_addr_t VAR_8, esp_bd_addr_t VAR_9, bool VAR_10)
{
    btc_msg_t VAR_11;
    btc_ble_gattc_args_t VAR_12;

    FUNC_0(VAR_4);

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;
    VAR_12.cache_assoc.is_assoc = VAR_10;
    VAR_12.cache_assoc.gattc_if = VAR_7;
    FUNC_2(VAR_12.cache_assoc.src_addr, VAR_8, sizeof(esp_bd_addr_t));
    FUNC_2(VAR_12.cache_assoc.assoc_addr, VAR_9, sizeof(esp_bd_addr_t));

    return (FUNC_1(&VAR_11, &VAR_12, sizeof(btc_ble_gattc_args_t), ((void*)0)) == VAR_3 ? VAR_6 : VAR_5);
}
