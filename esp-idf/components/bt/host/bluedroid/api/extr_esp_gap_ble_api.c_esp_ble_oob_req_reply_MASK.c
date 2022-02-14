
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int esp_err_t ;
typedef int esp_bd_addr_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {scalar_t__* p_value; scalar_t__ len; int bd_addr; } ;
struct TYPE_8__ {TYPE_1__ oob_req_reply; } ;
typedef TYPE_3__ btc_ble_gap_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;

esp_err_t FUNC_3(esp_bd_addr_t VAR_11, uint8_t *VAR_12, uint8_t VAR_13)
{
    if(VAR_13 != VAR_6) {
        return VAR_7;
    }

    btc_msg_t VAR_14;
    btc_ble_gap_args_t VAR_15;

    FUNC_0(VAR_5);

    VAR_14.sig = VAR_2;
    VAR_14.pid = VAR_1;
    VAR_14.act = VAR_0;
    FUNC_2(VAR_15.oob_req_reply.bd_addr, VAR_11, VAR_4);
    VAR_15.oob_req_reply.len = VAR_13;
    VAR_15.oob_req_reply.p_value = VAR_12;

    return (FUNC_1(&VAR_14, &VAR_15, sizeof(btc_ble_gap_args_t), VAR_10)
            == VAR_3 ? VAR_9 : VAR_8);
}
