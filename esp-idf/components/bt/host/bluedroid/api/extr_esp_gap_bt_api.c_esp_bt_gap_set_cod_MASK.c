
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_bt_cod_t ;
typedef int esp_bt_cod_mode_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int mode; int cod; } ;
struct TYPE_8__ {TYPE_1__ set_cod; } ;
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
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,int) ;

esp_err_t FUNC_3(esp_bt_cod_t VAR_9, esp_bt_cod_mode_t VAR_10)
{
    btc_msg_t VAR_11;
    btc_gap_bt_args_t VAR_12;

    if (FUNC_1() != VAR_4) {
        return VAR_6;
    }

    switch (VAR_10) {
    case 129:
    case 128:
    case 132:
    case 130:
    case 131:
        break;
    default:
        return VAR_5;
        break;
    }

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;

    VAR_12.set_cod.mode = VAR_10;
    FUNC_2(&VAR_12.set_cod.cod, &VAR_9, sizeof(esp_bt_cod_t));
    return (FUNC_0(&VAR_11, &VAR_12, sizeof(btc_gap_bt_args_t), ((void*)0)) == VAR_3 ? VAR_8 : VAR_7);
}
