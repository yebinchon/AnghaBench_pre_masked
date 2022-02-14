
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
struct TYPE_6__ {int act; int pid; int sig; } ;
typedef TYPE_1__ btc_msg_t ;
struct TYPE_7__ {int disconnect; } ;
typedef TYPE_2__ btc_hf_args_t ;
typedef scalar_t__ bt_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;

esp_err_t FUNC_4(esp_bd_addr_t VAR_8)
{
    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }
    btc_msg_t VAR_9;
    VAR_9.sig = VAR_2;
    VAR_9.pid = VAR_1;
    VAR_9.act = VAR_0;

    btc_hf_args_t VAR_10;
    FUNC_3(&VAR_10, 0, sizeof(btc_hf_args_t));
    FUNC_2(&(VAR_10.disconnect), VAR_8, sizeof(esp_bd_addr_t));


    bt_status_t VAR_11 = FUNC_0(&VAR_9, &VAR_10, sizeof(btc_hf_args_t), ((void*)0));
    return (VAR_11 == VAR_3) ? VAR_7 : VAR_6;
}
