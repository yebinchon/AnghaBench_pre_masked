
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {scalar_t__ mtu; } ;
struct TYPE_8__ {TYPE_1__ set_mtu; } ;
typedef TYPE_3__ btc_ble_gatt_com_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;

esp_err_t FUNC_2 (uint16_t VAR_10)
{
    btc_msg_t VAR_11;
    btc_ble_gatt_com_args_t VAR_12;

    FUNC_0(VAR_4);

    if ((VAR_10 < VAR_7) || (VAR_10 > VAR_8)) {
        return VAR_5;
    }

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;
    VAR_12.set_mtu.mtu = VAR_10;

    return (FUNC_1(&VAR_11, &VAR_12, sizeof(btc_ble_gatt_com_args_t), ((void*)0)) == VAR_3 ? VAR_9 : VAR_6);
}
