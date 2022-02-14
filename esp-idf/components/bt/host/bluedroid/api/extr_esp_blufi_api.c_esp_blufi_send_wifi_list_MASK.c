
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
typedef int esp_err_t ;
typedef int esp_blufi_ap_record_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int * list; int apCount; } ;
struct TYPE_8__ {TYPE_1__ wifi_list; } ;
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

esp_err_t FUNC_2(uint16_t VAR_9, esp_blufi_ap_record_t *VAR_10)
{
    btc_msg_t VAR_11;
    btc_blufi_args_t VAR_12;

    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;
    VAR_12.wifi_list.apCount = VAR_9;
    VAR_12.wifi_list.list = VAR_10;

    return (FUNC_0(&VAR_11, &VAR_12, sizeof(btc_blufi_args_t), VAR_8) == VAR_3 ? VAR_7 : VAR_6);
}
