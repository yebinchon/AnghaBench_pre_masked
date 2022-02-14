
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int esp_hf_outgoing_data_cb_t ;
typedef int esp_hf_incoming_data_cb_t ;
typedef int esp_err_t ;
struct TYPE_8__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_7__ {int send; int recv; } ;
struct TYPE_9__ {TYPE_1__ reg_data_cb; } ;
typedef TYPE_3__ btc_hf_args_t ;
typedef scalar_t__ bt_status_t ;


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
 int FUNC_2 (TYPE_3__*,int ,int) ;

esp_err_t FUNC_3(esp_hf_incoming_data_cb_t VAR_8, esp_hf_outgoing_data_cb_t VAR_9)
{
    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }
    btc_msg_t VAR_10;
    VAR_10.sig = VAR_2;
    VAR_10.pid = VAR_1;
    VAR_10.act = VAR_0;

    btc_hf_args_t VAR_11;
    FUNC_2(&VAR_11, 0, sizeof(btc_hf_args_t));
    VAR_11.reg_data_cb.recv = VAR_8;
    VAR_11.reg_data_cb.send = VAR_9;


    bt_status_t VAR_12 = FUNC_0(&VAR_10, &VAR_11, sizeof(btc_hf_args_t), ((void*)0));
    return (VAR_12 == VAR_3) ? VAR_7 : VAR_6;
}
