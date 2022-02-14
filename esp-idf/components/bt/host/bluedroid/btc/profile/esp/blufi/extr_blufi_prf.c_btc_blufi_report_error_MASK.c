
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_blufi_error_state_t ;
struct TYPE_6__ {int state; } ;
struct TYPE_7__ {TYPE_1__ report_error; } ;
typedef TYPE_2__ esp_blufi_cb_param_t ;
struct TYPE_8__ {int act; int pid; int sig; } ;
typedef TYPE_3__ btc_msg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int,int *) ;

void FUNC_1(esp_blufi_error_state_t VAR_3)
{
    btc_msg_t VAR_4;
    VAR_4.sig = VAR_1;
    VAR_4.pid = VAR_0;
    VAR_4.act = VAR_2;
    esp_blufi_cb_param_t VAR_5;
    VAR_5.report_error.state = VAR_3;
    FUNC_0(&VAR_4, &VAR_5, sizeof(esp_blufi_cb_param_t), ((void*)0));
}
