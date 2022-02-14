
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_blufi_error_state_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int state; } ;
struct TYPE_8__ {TYPE_1__ blufi_err_infor; } ;
typedef TYPE_3__ btc_blufi_args_t ;


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

esp_err_t FUNC_2(esp_blufi_error_state_t VAR_8)
{
    btc_msg_t VAR_9;
    btc_blufi_args_t VAR_10;

    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }

    VAR_9.sig = VAR_2;
    VAR_9.pid = VAR_1;
    VAR_9.act = VAR_0;
    VAR_10.blufi_err_infor.state = VAR_8;

    return (FUNC_0(&VAR_9, &VAR_10, sizeof(btc_blufi_args_t), ((void*)0)) == VAR_3 ? VAR_7 : VAR_6);
}
