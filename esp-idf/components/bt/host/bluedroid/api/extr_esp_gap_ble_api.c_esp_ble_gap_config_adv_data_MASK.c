
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_10__ {int service_uuid_len; } ;
typedef TYPE_2__ esp_ble_adv_data_t ;
struct TYPE_11__ {int act; int pid; int sig; } ;
typedef TYPE_3__ btc_msg_t ;
struct TYPE_9__ {int adv_data; } ;
struct TYPE_12__ {TYPE_1__ cfg_adv_data; } ;
typedef TYPE_4__ btc_ble_gap_args_t ;


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
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*,int,int ) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;

esp_err_t FUNC_3(esp_ble_adv_data_t *VAR_9)
{
    btc_msg_t VAR_10;
    btc_ble_gap_args_t VAR_11;

    FUNC_0(VAR_4);

    if (VAR_9 == ((void*)0)) {
        return VAR_5;
    }

    if (VAR_9->service_uuid_len & 0xf) {
        return VAR_5;
    }

    VAR_10.sig = VAR_2;
    VAR_10.pid = VAR_1;
    VAR_10.act = VAR_0;
    FUNC_2(&VAR_11.cfg_adv_data.adv_data, VAR_9, sizeof(esp_ble_adv_data_t));

    return (FUNC_1(&VAR_10, &VAR_11, sizeof(btc_ble_gap_args_t), VAR_8) == VAR_3 ? VAR_7 : VAR_6);

}
