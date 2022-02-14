
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int esp_gatt_status_t ;
typedef int esp_gatt_rsp_t ;
typedef int esp_gatt_if_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int * rsp; int status; int trans_id; int conn_id; } ;
struct TYPE_8__ {TYPE_1__ send_rsp; } ;
typedef TYPE_3__ btc_ble_gatts_args_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_3__*,int,int ) ;

esp_err_t FUNC_3(esp_gatt_if_t VAR_8, uint16_t VAR_9, uint32_t VAR_10,
                                      esp_gatt_status_t VAR_11, esp_gatt_rsp_t *VAR_12)
{
    btc_msg_t VAR_13;
    btc_ble_gatts_args_t VAR_14;

    FUNC_1(VAR_4);

    VAR_13.sig = VAR_2;
    VAR_13.pid = VAR_1;
    VAR_13.act = VAR_0;
    VAR_14.send_rsp.conn_id = FUNC_0(VAR_8, VAR_9);
    VAR_14.send_rsp.trans_id = VAR_10;
    VAR_14.send_rsp.status = VAR_11;
    VAR_14.send_rsp.rsp = VAR_12;

    return (FUNC_2(&VAR_13, &VAR_14, sizeof(btc_ble_gatts_args_t),
                                 VAR_7) == VAR_3 ? VAR_6 : VAR_5);
}
