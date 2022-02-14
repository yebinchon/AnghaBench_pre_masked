
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
struct TYPE_9__ {int act; int pid; int sig; } ;
typedef TYPE_3__ btc_msg_t ;
struct TYPE_7__ {int address; } ;
struct TYPE_8__ {int accept; TYPE_1__ bda; } ;
struct TYPE_10__ {TYPE_2__ confirm_reply; } ;
typedef TYPE_4__ btc_gap_bt_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;

esp_err_t FUNC_3(esp_bd_addr_t VAR_9, bool VAR_10)
{
    btc_msg_t VAR_11;
    btc_gap_bt_args_t VAR_12;

    if (FUNC_1() != VAR_4) {
        return VAR_5;
    }

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;
    VAR_12.confirm_reply.accept = VAR_10;
    FUNC_2(VAR_12.confirm_reply.bda.address, VAR_9, sizeof(esp_bd_addr_t));
    return (FUNC_0(&VAR_11, &VAR_12, sizeof(btc_gap_bt_args_t), VAR_8)
            == VAR_3 ? VAR_7 : VAR_6);
}
