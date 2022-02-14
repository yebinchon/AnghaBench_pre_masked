
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
struct TYPE_8__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_7__ {char* unat; int remote_addr; } ;
struct TYPE_9__ {TYPE_1__ unat_rep; } ;
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
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;

esp_err_t FUNC_4(esp_bd_addr_t VAR_9, char *VAR_10)
{
    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }
    btc_msg_t VAR_11;
    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;

    btc_hf_args_t VAR_12;
    FUNC_3(&VAR_12, 0, sizeof(btc_hf_args_t));
    VAR_12.unat_rep.unat = VAR_10;
    FUNC_2(&(VAR_12.unat_rep.remote_addr), VAR_9, sizeof(esp_bd_addr_t));


    bt_status_t VAR_13 = FUNC_0(&VAR_11, &VAR_12, sizeof(btc_hf_args_t), VAR_8);
    return (VAR_13 = VAR_3) ? VAR_7 : VAR_6;
}
