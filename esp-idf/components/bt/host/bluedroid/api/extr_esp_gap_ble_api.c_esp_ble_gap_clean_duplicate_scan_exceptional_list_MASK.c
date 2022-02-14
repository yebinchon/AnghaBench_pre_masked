
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_duplicate_scan_exceptional_list_type_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int info_type; int subcode; } ;
struct TYPE_8__ {TYPE_1__ update_duplicate_exceptional_list; } ;
typedef TYPE_3__ btc_ble_gap_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(esp_duplicate_scan_exceptional_list_type_t VAR_9)
{
    btc_msg_t VAR_10;
    btc_ble_gap_args_t VAR_11;

    if (FUNC_1() != VAR_5) {
        return VAR_6;
    }

    VAR_10.sig = VAR_2;
    VAR_10.pid = VAR_1;
    VAR_10.act = VAR_0;
    VAR_11.update_duplicate_exceptional_list.subcode = VAR_4;
    VAR_11.update_duplicate_exceptional_list.info_type = VAR_9;

    return (FUNC_0(&VAR_10, &VAR_11, sizeof(btc_ble_gap_args_t), ((void*)0))
                == VAR_3 ? VAR_8 : VAR_7);
}
