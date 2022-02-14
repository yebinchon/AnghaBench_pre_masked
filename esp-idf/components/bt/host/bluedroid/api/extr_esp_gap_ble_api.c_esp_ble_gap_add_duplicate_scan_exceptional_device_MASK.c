
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_duplicate_info_t ;
typedef scalar_t__ esp_ble_duplicate_exceptional_info_type_t ;
typedef int esp_bd_addr_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int device_info; scalar_t__ info_type; int subcode; } ;
struct TYPE_8__ {TYPE_1__ update_duplicate_exceptional_list; } ;
typedef TYPE_3__ btc_ble_gap_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;

esp_err_t FUNC_3(esp_ble_duplicate_exceptional_info_type_t VAR_11, esp_duplicate_info_t VAR_12)
{
    btc_msg_t VAR_13;
    btc_ble_gap_args_t VAR_14;

    if (FUNC_1() != VAR_6) {
        return VAR_8;
    }
    if (!VAR_12 && VAR_11 <= VAR_5) {
        return VAR_7;
    }
    VAR_13.sig = VAR_2;
    VAR_13.pid = VAR_1;
    VAR_13.act = VAR_0;
    VAR_14.update_duplicate_exceptional_list.subcode = VAR_4;
    VAR_14.update_duplicate_exceptional_list.info_type = VAR_11;
    if (VAR_12) {
        FUNC_2(VAR_14.update_duplicate_exceptional_list.device_info, VAR_12, sizeof(esp_bd_addr_t));
    }

    return (FUNC_0(&VAR_13, &VAR_14, sizeof(btc_ble_gap_args_t), ((void*)0))
                == VAR_3 ? VAR_10 : VAR_9);
}
