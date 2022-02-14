
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_ble_wl_addr_type_t ;
typedef int esp_bd_addr_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int add_remove; int remote_bda; int wl_addr_type; } ;
struct TYPE_8__ {TYPE_1__ update_white_list; } ;
typedef TYPE_3__ btc_ble_gap_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;

esp_err_t FUNC_3(bool VAR_9, esp_bd_addr_t VAR_10, esp_ble_wl_addr_type_t VAR_11)
{
    btc_msg_t VAR_12;
    btc_ble_gap_args_t VAR_13;

    if (FUNC_1() != VAR_4) {
        return VAR_6;
    }
    if (!VAR_10){
        return VAR_5;
    }
    VAR_12.sig = VAR_2;
    VAR_12.pid = VAR_1;
    VAR_12.act = VAR_0;
    VAR_13.update_white_list.add_remove = VAR_9;
    VAR_13.update_white_list.wl_addr_type = VAR_11;
    FUNC_2(VAR_13.update_white_list.remote_bda, VAR_10, sizeof(esp_bd_addr_t));

    return (FUNC_0(&VAR_12, &VAR_13, sizeof(btc_ble_gap_args_t), ((void*)0))
                == VAR_3 ? VAR_8 : VAR_7);
}
