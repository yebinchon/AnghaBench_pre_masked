
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int esp_hf_in_band_ring_state_t ;
typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
struct TYPE_8__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_7__ {int state; int remote_addr; } ;
struct TYPE_9__ {TYPE_1__ bsir; } ;
typedef TYPE_3__ btc_hf_args_t ;
typedef int bt_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

esp_err_t FUNC_4(esp_bd_addr_t VAR_8, esp_hf_in_band_ring_state_t VAR_9)
{
    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }
    btc_msg_t VAR_10;
    VAR_10.sig = VAR_2;
    VAR_10.pid = VAR_1;
    VAR_10.act = VAR_0;

    btc_hf_args_t VAR_11;
    FUNC_3(&VAR_11, 0, sizeof(btc_hf_args_t));
    FUNC_2(&(VAR_11.bsir.remote_addr), VAR_8, sizeof(esp_bd_addr_t));
    VAR_11.bsir.state = VAR_9;


    bt_status_t VAR_12 = FUNC_0(&VAR_10, &VAR_11, sizeof(btc_hf_args_t), ((void*)0));
    return (VAR_12 = VAR_3) ? VAR_7 : VAR_6;
}
