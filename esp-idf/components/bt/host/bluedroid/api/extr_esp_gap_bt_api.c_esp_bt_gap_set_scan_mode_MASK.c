
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_bt_discovery_mode_t ;
typedef int esp_bt_connection_mode_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int d_mode; int c_mode; } ;
struct TYPE_8__ {TYPE_1__ set_scan_mode; } ;
typedef TYPE_3__ btc_gap_bt_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(esp_bt_connection_mode_t VAR_8, esp_bt_discovery_mode_t VAR_9)
{
    btc_msg_t VAR_10;
    btc_gap_bt_args_t VAR_11;

    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }

    VAR_10.sig = VAR_2;
    VAR_10.pid = VAR_1;
    VAR_10.act = VAR_0;
    VAR_11.set_scan_mode.c_mode = VAR_8;
    VAR_11.set_scan_mode.d_mode = VAR_9;

    return (FUNC_0(&VAR_10, &VAR_11, sizeof(btc_gap_bt_args_t), ((void*)0)) == VAR_3 ? VAR_7 : VAR_6);
}
