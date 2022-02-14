
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {struct TYPE_14__* softap_passwd; struct TYPE_14__* softap_ssid; struct TYPE_14__* sta_passwd; struct TYPE_14__* sta_ssid; } ;
typedef TYPE_4__ uint8_t ;
typedef TYPE_4__ esp_blufi_extra_info_t ;
typedef TYPE_4__ esp_blufi_ap_record_t ;
struct TYPE_15__ {int act; scalar_t__ arg; } ;
typedef TYPE_7__ btc_msg_t ;
struct TYPE_13__ {TYPE_4__* data; } ;
struct TYPE_12__ {scalar_t__ list; } ;
struct TYPE_11__ {scalar_t__ extra_info; } ;
struct TYPE_16__ {TYPE_3__ custom_data; TYPE_2__ wifi_list; TYPE_1__ wifi_conn_report; } ;
typedef TYPE_8__ btc_blufi_args_t ;





 int FUNC_0 (TYPE_4__*) ;

void FUNC_1(btc_msg_t *VAR_0)
{
    btc_blufi_args_t *VAR_1 = (btc_blufi_args_t *)VAR_0->arg;

    switch (VAR_0->act) {
    case 130: {
        esp_blufi_extra_info_t *VAR_2 = (esp_blufi_extra_info_t *)VAR_1->wifi_conn_report.extra_info;

        if (VAR_2 == ((void*)0)) {
            return;
        }
        if (VAR_2->sta_ssid) {
            FUNC_0(VAR_2->sta_ssid);
        }
        if (VAR_2->sta_passwd) {
            FUNC_0(VAR_2->sta_passwd);
        }
        if (VAR_2->softap_ssid) {
            FUNC_0(VAR_2->softap_ssid);
        }
        if (VAR_2->softap_passwd) {
            FUNC_0(VAR_2->softap_passwd);
        }
        FUNC_0(VAR_2);
        break;
    }
    case 128:{
        esp_blufi_ap_record_t *VAR_3 = (esp_blufi_ap_record_t *)VAR_1->wifi_list.list;
        if (VAR_3){
            FUNC_0(VAR_3);
        }
        break;
    }
    case 129:{
        uint8_t *VAR_4 = VAR_1->custom_data.data;
        if(VAR_4) {
            FUNC_0(VAR_4);
        }
        break;
    }
    default:
        break;
    }
}
