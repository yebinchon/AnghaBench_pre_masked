
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wifi_mode_t ;
typedef int uint8_t ;
typedef int esp_err_t ;
typedef int esp_blufi_sta_conn_state_t ;
typedef int esp_blufi_extra_info_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int * extra_info; int softap_conn_num; int sta_conn_state; int opmode; } ;
struct TYPE_8__ {TYPE_1__ wifi_conn_report; } ;
typedef TYPE_3__ btc_blufi_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(wifi_mode_t VAR_9, esp_blufi_sta_conn_state_t VAR_10, uint8_t VAR_11, esp_blufi_extra_info_t *VAR_12)
{
    btc_msg_t VAR_13;
    btc_blufi_args_t VAR_14;

    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }

    VAR_13.sig = VAR_2;
    VAR_13.pid = VAR_1;
    VAR_13.act = VAR_0;
    VAR_14.wifi_conn_report.opmode = VAR_9;
    VAR_14.wifi_conn_report.sta_conn_state = VAR_10;
    VAR_14.wifi_conn_report.softap_conn_num = VAR_11;
    VAR_14.wifi_conn_report.extra_info = VAR_12;

    return (FUNC_0(&VAR_13, &VAR_14, sizeof(btc_blufi_args_t), VAR_8) == VAR_3 ? VAR_7 : VAR_6);
}
