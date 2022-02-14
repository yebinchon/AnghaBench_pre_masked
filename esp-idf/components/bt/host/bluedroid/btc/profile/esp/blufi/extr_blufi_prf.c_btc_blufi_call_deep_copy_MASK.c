
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int sta_ssid_len; int sta_passwd_len; int softap_ssid_len; int softap_passwd_len; int softap_channel; int softap_channel_set; int softap_max_conn_num; int softap_max_conn_num_set; int softap_authmode; int softap_authmode_set; int * softap_passwd; int * softap_ssid; int * sta_passwd; int * sta_ssid; int sta_bssid_set; int * sta_bssid; } ;
typedef TYPE_4__ esp_blufi_extra_info_t ;
typedef int esp_blufi_ap_record_t ;
struct TYPE_13__ {int act; } ;
typedef TYPE_5__ btc_msg_t ;
struct TYPE_10__ {int data_len; int * data; } ;
struct TYPE_9__ {int apCount; int * list; } ;
struct TYPE_11__ {int extra_info_len; TYPE_4__* extra_info; } ;
struct TYPE_14__ {TYPE_2__ custom_data; TYPE_1__ wifi_list; TYPE_3__ wifi_conn_report; } ;
typedef TYPE_6__ btc_blufi_args_t ;





 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int) ;
 TYPE_4__* FUNC_2 (int) ;
 void* FUNC_3 (int) ;

void FUNC_4(btc_msg_t *VAR_0, void *VAR_1, void *VAR_2)
{
    btc_blufi_args_t *VAR_3 = (btc_blufi_args_t *) VAR_1;
    btc_blufi_args_t *VAR_4 = (btc_blufi_args_t *) VAR_2;

    switch (VAR_0->act) {
    case 130: {
        esp_blufi_extra_info_t *VAR_5 = VAR_4->wifi_conn_report.extra_info;
        VAR_3->wifi_conn_report.extra_info_len = 0;
        VAR_3->wifi_conn_report.extra_info = ((void*)0);

        if (VAR_5 == ((void*)0)) {
            return;
        }

        VAR_3->wifi_conn_report.extra_info = FUNC_2(sizeof(esp_blufi_extra_info_t));
        if (VAR_3->wifi_conn_report.extra_info == ((void*)0)) {
            return;
        }

        if (VAR_5->sta_bssid_set) {
            FUNC_1(VAR_3->wifi_conn_report.extra_info->sta_bssid, VAR_5->sta_bssid, 6);
            VAR_3->wifi_conn_report.extra_info->sta_bssid_set = VAR_5->sta_bssid_set;
            VAR_3->wifi_conn_report.extra_info_len += (6 + 2);
        }
        if (VAR_5->sta_ssid) {
            VAR_3->wifi_conn_report.extra_info->sta_ssid = FUNC_3(VAR_5->sta_ssid_len);
            if (VAR_3->wifi_conn_report.extra_info->sta_ssid) {
                FUNC_1(VAR_3->wifi_conn_report.extra_info->sta_ssid, VAR_5->sta_ssid, VAR_5->sta_ssid_len);
                VAR_3->wifi_conn_report.extra_info->sta_ssid_len = VAR_5->sta_ssid_len;
                VAR_3->wifi_conn_report.extra_info_len += (VAR_3->wifi_conn_report.extra_info->sta_ssid_len + 2);
            }
        }
        if (VAR_5->sta_passwd) {
            VAR_3->wifi_conn_report.extra_info->sta_passwd = FUNC_3(VAR_5->sta_passwd_len);
            if (VAR_3->wifi_conn_report.extra_info->sta_passwd) {
                FUNC_1(VAR_3->wifi_conn_report.extra_info->sta_passwd, VAR_5->sta_passwd, VAR_5->sta_passwd_len);
                VAR_3->wifi_conn_report.extra_info->sta_passwd_len = VAR_5->sta_passwd_len;
                VAR_3->wifi_conn_report.extra_info_len += (VAR_3->wifi_conn_report.extra_info->sta_passwd_len + 2);
            }
        }
        if (VAR_5->softap_ssid) {
            VAR_3->wifi_conn_report.extra_info->softap_ssid = FUNC_3(VAR_5->softap_ssid_len);
            if (VAR_3->wifi_conn_report.extra_info->softap_ssid) {
                FUNC_1(VAR_3->wifi_conn_report.extra_info->softap_ssid, VAR_5->softap_ssid, VAR_5->softap_ssid_len);
                VAR_3->wifi_conn_report.extra_info->softap_ssid_len = VAR_5->softap_ssid_len;
                VAR_3->wifi_conn_report.extra_info_len += (VAR_3->wifi_conn_report.extra_info->softap_ssid_len + 2);
            }
        }
        if (VAR_5->softap_passwd) {
            VAR_3->wifi_conn_report.extra_info->softap_passwd = FUNC_3(VAR_5->softap_passwd_len);
            if (VAR_3->wifi_conn_report.extra_info->softap_passwd) {
                FUNC_1(VAR_3->wifi_conn_report.extra_info->softap_passwd, VAR_5->softap_passwd, VAR_5->softap_passwd_len);
                VAR_3->wifi_conn_report.extra_info->softap_passwd_len = VAR_5->softap_passwd_len;
                VAR_3->wifi_conn_report.extra_info_len += (VAR_3->wifi_conn_report.extra_info->softap_passwd_len + 2);
            }
        }
        if (VAR_5->softap_authmode_set) {
            VAR_3->wifi_conn_report.extra_info->softap_authmode_set = VAR_5->softap_authmode_set;
            VAR_3->wifi_conn_report.extra_info->softap_authmode = VAR_5->softap_authmode;
            VAR_3->wifi_conn_report.extra_info_len += (1 + 2);
        }
        if (VAR_5->softap_max_conn_num_set) {
            VAR_3->wifi_conn_report.extra_info->softap_max_conn_num_set = VAR_5->softap_max_conn_num_set;
            VAR_3->wifi_conn_report.extra_info->softap_max_conn_num = VAR_5->softap_max_conn_num;
            VAR_3->wifi_conn_report.extra_info_len += (1 + 2);
        }
        if (VAR_5->softap_channel_set) {
            VAR_3->wifi_conn_report.extra_info->softap_channel_set = VAR_5->softap_channel_set;
            VAR_3->wifi_conn_report.extra_info->softap_channel = VAR_5->softap_channel;
            VAR_3->wifi_conn_report.extra_info_len += (1 + 2);
        }
        break;
    }
    case 128:{
        esp_blufi_ap_record_t *VAR_6 = VAR_4->wifi_list.list;
        VAR_4->wifi_list.list = ((void*)0);
        if (VAR_6 == ((void*)0) || VAR_4->wifi_list.apCount <= 0) {
            break;
        }
        VAR_3->wifi_list.list = (esp_blufi_ap_record_t *)FUNC_3(sizeof(esp_blufi_ap_record_t) * VAR_4->wifi_list.apCount);
        if (VAR_3->wifi_list.list == ((void*)0)) {
            break;
        }
        FUNC_1(VAR_3->wifi_list.list, VAR_6, sizeof(esp_blufi_ap_record_t) * VAR_4->wifi_list.apCount);
        break;
    }
    case 129:{
        uint8_t *VAR_7 = VAR_4->custom_data.data;
        if(VAR_7 == ((void*)0)) {
            FUNC_0("custom data is NULL\n");
            break;
        }
        VAR_3->custom_data.data = FUNC_3(VAR_4->custom_data.data_len);
        if(VAR_3->custom_data.data == ((void*)0)) {
            FUNC_0("custom data malloc error\n");
            break;
        }
        FUNC_1(VAR_3->custom_data.data, VAR_4->custom_data.data, VAR_4->custom_data.data_len);
        break;
    }
    default:
        break;
    }
}
