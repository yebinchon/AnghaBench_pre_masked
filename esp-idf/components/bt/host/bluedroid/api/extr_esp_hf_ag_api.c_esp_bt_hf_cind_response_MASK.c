
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int esp_hf_roaming_status_t ;
typedef int esp_hf_network_state_t ;
typedef int esp_hf_call_status_t ;
typedef int esp_hf_call_setup_status_t ;
typedef int esp_hf_call_held_status_t ;
typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
struct TYPE_8__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_7__ {int signal; int batt_lev; int call_held_state; int roam; int ntk_state; int call_setup_state; int call_state; int remote_addr; } ;
struct TYPE_9__ {TYPE_1__ cind_rep; } ;
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
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

esp_err_t FUNC_4(esp_bd_addr_t VAR_8,
                                esp_hf_call_status_t VAR_9,
                                esp_hf_call_setup_status_t VAR_10,
                                esp_hf_network_state_t VAR_11, int VAR_12, esp_hf_roaming_status_t VAR_13, int VAR_14,
                                esp_hf_call_held_status_t VAR_15)
{
    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }
    btc_msg_t VAR_16;
    VAR_16.sig = VAR_2;
    VAR_16.pid = VAR_1;
    VAR_16.act = VAR_0;

    btc_hf_args_t VAR_17;
    FUNC_3(&VAR_17, 0, sizeof(btc_hf_args_t));
    FUNC_2(&(VAR_17.cind_rep.remote_addr), VAR_8, sizeof(esp_bd_addr_t));
    VAR_17.cind_rep.call_state = VAR_9;
    VAR_17.cind_rep.call_setup_state = VAR_10;
    VAR_17.cind_rep.ntk_state = VAR_11;
    VAR_17.cind_rep.signal = VAR_12;
    VAR_17.cind_rep.roam = VAR_13;
    VAR_17.cind_rep.batt_lev = VAR_14;
    VAR_17.cind_rep.call_held_state = VAR_15;


    bt_status_t VAR_18 = FUNC_0(&VAR_16, &VAR_17, sizeof(btc_hf_args_t), ((void*)0));
    return (VAR_18 == VAR_3) ? VAR_7 : VAR_6;
}
