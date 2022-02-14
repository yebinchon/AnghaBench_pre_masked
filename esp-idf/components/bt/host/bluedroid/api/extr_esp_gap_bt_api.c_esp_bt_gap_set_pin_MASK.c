
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int esp_err_t ;
typedef scalar_t__ esp_bt_pin_type_t ;
typedef int esp_bt_pin_code_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int pin_code; scalar_t__ pin_code_len; scalar_t__ pin_type; } ;
struct TYPE_8__ {TYPE_1__ set_pin_type; } ;
typedef TYPE_3__ btc_gap_bt_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;

esp_err_t FUNC_4(esp_bt_pin_type_t VAR_11, uint8_t VAR_12, esp_bt_pin_code_t VAR_13)
{
    btc_msg_t VAR_14;
    btc_gap_bt_args_t VAR_15;

    if (FUNC_1() != VAR_4) {
        return VAR_7;
    }

    VAR_14.sig = VAR_2;
    VAR_14.pid = VAR_1;
    VAR_14.act = VAR_0;
    VAR_15.set_pin_type.pin_type = VAR_11;
    if (VAR_11 == VAR_6){
        VAR_15.set_pin_type.pin_code_len = VAR_12;
        FUNC_2(VAR_15.set_pin_type.pin_code, VAR_13, VAR_12);
    } else {
        VAR_15.set_pin_type.pin_code_len = 0;
        FUNC_3(VAR_15.set_pin_type.pin_code, 0, VAR_5);
    }

    return (FUNC_0(&VAR_14, &VAR_15, sizeof(btc_gap_bt_args_t), VAR_10)
            == VAR_3 ? VAR_9 : VAR_8);
}
