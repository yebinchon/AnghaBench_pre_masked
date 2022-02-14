
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
typedef int esp_bt_sp_param_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {void* value; int len; int param_type; } ;
struct TYPE_8__ {TYPE_1__ set_security_param; } ;
typedef TYPE_3__ btc_gap_bt_args_t ;


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

esp_err_t FUNC_2(esp_bt_sp_param_t VAR_9,
        void *VAR_10, uint8_t VAR_11)
{
    btc_msg_t VAR_12;
    btc_gap_bt_args_t VAR_13;

    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }

    VAR_12.sig = VAR_2;
    VAR_12.pid = VAR_1;
    VAR_12.act = VAR_0;
    VAR_13.set_security_param.param_type = VAR_9;
    VAR_13.set_security_param.len = VAR_11;
    VAR_13.set_security_param.value = VAR_10;

    return (FUNC_0(&VAR_12, &VAR_13, sizeof(btc_gap_bt_args_t), VAR_8)
            == VAR_3 ? VAR_7 : VAR_6);
}
