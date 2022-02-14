
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int esp_gatt_if_t ;
typedef int esp_err_t ;
typedef int esp_bt_uuid_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int filter_uuid_enable; int filter_uuid; int conn_id; } ;
struct TYPE_8__ {TYPE_1__ search_srvc; } ;
typedef TYPE_3__ btc_ble_gattc_args_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_3 (int *,int *,int) ;

esp_err_t FUNC_4(esp_gatt_if_t VAR_7, uint16_t VAR_8, esp_bt_uuid_t *VAR_9)
{
    btc_msg_t VAR_10;
    btc_ble_gattc_args_t VAR_11;

    FUNC_1(VAR_4);

    VAR_10.sig = VAR_2;
    VAR_10.pid = VAR_1;
    VAR_10.act = VAR_0;
    VAR_11.search_srvc.conn_id = FUNC_0(VAR_7, VAR_8);

    if (VAR_9) {
        VAR_11.search_srvc.filter_uuid_enable = 1;
        FUNC_3(&VAR_11.search_srvc.filter_uuid, VAR_9, sizeof(esp_bt_uuid_t));
    } else {
        VAR_11.search_srvc.filter_uuid_enable = 0;
    }

    return (FUNC_2(&VAR_10, &VAR_11, sizeof(btc_ble_gattc_args_t), ((void*)0)) == VAR_3 ? VAR_6 : VAR_5);
}
