
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint16_t ;
typedef int esp_gatt_perm_t ;
typedef scalar_t__ esp_err_t ;
typedef int esp_bt_uuid_t ;
struct TYPE_18__ {int attr_value; int attr_len; int attr_max_len; } ;
typedef TYPE_4__ esp_attr_value_t ;
struct TYPE_19__ {int auto_rsp; } ;
typedef TYPE_5__ esp_attr_control_t ;
struct TYPE_20__ {int act; int pid; int sig; } ;
typedef TYPE_6__ btc_msg_t ;
struct TYPE_16__ {int auto_rsp; } ;
struct TYPE_15__ {int attr_value; int attr_len; int attr_max_len; } ;
struct TYPE_17__ {int descr_uuid; TYPE_2__ attr_control; TYPE_1__ descr_val; int perm; int service_handle; } ;
struct TYPE_21__ {TYPE_3__ add_descr; } ;
typedef TYPE_7__ btc_ble_gatts_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_7__*,int,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_7__*,int ,int) ;

esp_err_t FUNC_5 (uint16_t VAR_8,
                                        esp_bt_uuid_t *VAR_9,
                                        esp_gatt_perm_t VAR_10, esp_attr_value_t *VAR_11,
                                        esp_attr_control_t *VAR_12)
{
    btc_msg_t VAR_13;
    btc_ble_gatts_args_t VAR_14;
    esp_err_t VAR_15;

    FUNC_0(VAR_4);


    VAR_15 = FUNC_2(VAR_11, VAR_12);
    if (VAR_15 != VAR_6){
        return VAR_15;
    }

    FUNC_4(&VAR_14, 0, sizeof(btc_ble_gatts_args_t));
    VAR_13.sig = VAR_2;
    VAR_13.pid = VAR_1;
    VAR_13.act = VAR_0;
    VAR_14.add_descr.service_handle = VAR_8;
    VAR_14.add_descr.perm = VAR_10;

    if (VAR_11 != ((void*)0)) {
        VAR_14.add_descr.descr_val.attr_max_len = VAR_11->attr_max_len;
        VAR_14.add_descr.descr_val.attr_len = VAR_11->attr_len;
        VAR_14.add_descr.descr_val.attr_value = VAR_11->attr_value;
    }

    if (VAR_12 != ((void*)0)) {
        VAR_14.add_descr.attr_control.auto_rsp = VAR_12->auto_rsp;
    }
    FUNC_3(&VAR_14.add_descr.descr_uuid, VAR_9, sizeof(esp_bt_uuid_t));

    return (FUNC_1(&VAR_13, &VAR_14, sizeof(btc_ble_gatts_args_t), VAR_7) == VAR_3 ? VAR_6 : VAR_5);
}
