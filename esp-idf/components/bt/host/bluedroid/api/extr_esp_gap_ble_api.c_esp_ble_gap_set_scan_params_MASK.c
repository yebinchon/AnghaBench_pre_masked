
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_ble_scan_params_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int scan_params; } ;
struct TYPE_8__ {TYPE_1__ set_scan_param; } ;
typedef TYPE_3__ btc_ble_gap_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (int *,int *,int) ;

esp_err_t FUNC_3(esp_ble_scan_params_t *VAR_8)
{
    btc_msg_t VAR_9;
    btc_ble_gap_args_t VAR_10;

    FUNC_0(VAR_4);

    if (VAR_8 == ((void*)0)) {
        return VAR_5;
    }

    VAR_9.sig = VAR_2;
    VAR_9.pid = VAR_1;
    VAR_9.act = VAR_0;
    FUNC_2(&VAR_10.set_scan_param.scan_params, VAR_8, sizeof(esp_ble_scan_params_t));

    return (FUNC_1(&VAR_9, &VAR_10, sizeof(btc_ble_gap_args_t), ((void*)0)) == VAR_3 ? VAR_7 : VAR_6);
}
