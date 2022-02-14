
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int esp_gatts_attr_db_t ;
typedef int esp_gatt_if_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int * gatts_attr_db; void* srvc_inst_id; void* max_nb_attr; int gatts_if; } ;
struct TYPE_8__ {TYPE_1__ create_attr_tab; } ;
typedef TYPE_3__ btc_ble_gatts_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int ) ;

esp_err_t FUNC_2(const esp_gatts_attr_db_t *VAR_8,
                                        esp_gatt_if_t VAR_9,
                                        uint8_t VAR_10,
                                        uint8_t VAR_11)
{
    btc_msg_t VAR_12;
    btc_ble_gatts_args_t VAR_13;

    FUNC_0(VAR_4);

    VAR_12.sig = VAR_2;
    VAR_12.pid = VAR_1;
    VAR_12.act = VAR_0;
    VAR_13.create_attr_tab.gatts_if = VAR_9;
    VAR_13.create_attr_tab.max_nb_attr = VAR_10;
    VAR_13.create_attr_tab.srvc_inst_id = VAR_11;
    VAR_13.create_attr_tab.gatts_attr_db = (esp_gatts_attr_db_t *)VAR_8;

    return (FUNC_1(&VAR_12, &VAR_13, sizeof(btc_ble_gatts_args_t), VAR_7)
            == VAR_3 ? VAR_6 : VAR_5);
}
