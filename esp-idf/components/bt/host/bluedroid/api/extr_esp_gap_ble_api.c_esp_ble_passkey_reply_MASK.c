
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int accept; int bd_addr; int passkey; } ;
struct TYPE_8__ {TYPE_1__ enc_passkey_replay; } ;
typedef TYPE_3__ btc_ble_gap_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ,int ,int ) ;

esp_err_t FUNC_3(esp_bd_addr_t VAR_8, bool VAR_9, uint32_t VAR_10)
{
    btc_msg_t VAR_11;
    btc_ble_gap_args_t VAR_12;

    FUNC_0(VAR_5);

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;
    VAR_12.enc_passkey_replay.accept = VAR_9;
    VAR_12.enc_passkey_replay.passkey = VAR_10;
    FUNC_2(VAR_12.enc_passkey_replay.bd_addr, VAR_8, VAR_4);

    return (FUNC_1(&VAR_11, &VAR_12, sizeof(btc_ble_gap_args_t), ((void*)0))
            == VAR_3 ? VAR_7 : VAR_6);
}
