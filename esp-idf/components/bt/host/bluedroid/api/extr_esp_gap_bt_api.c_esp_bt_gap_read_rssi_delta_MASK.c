
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
struct TYPE_8__ {TYPE_1__ bda; } ;
struct TYPE_10__ {TYPE_2__ read_rssi_delta; } ;
typedef TYPE_4__ btc_gap_bt_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_4__*,int,int *) ;
 int FUNC_1 (int ,int ,int) ;

esp_err_t FUNC_2(esp_bd_addr_t VAR_6)
{
    btc_msg_t VAR_7;
    btc_gap_bt_args_t VAR_8;
    VAR_7.sig = VAR_2;
    VAR_7.pid = VAR_1;
    VAR_7.act = VAR_0;
    FUNC_1(VAR_8.read_rssi_delta.bda.address, VAR_6, sizeof(esp_bd_addr_t));

    return (FUNC_0(&VAR_7, &VAR_8, sizeof(btc_gap_bt_args_t), ((void*)0)) == VAR_3 ? VAR_5 : VAR_4);
}
