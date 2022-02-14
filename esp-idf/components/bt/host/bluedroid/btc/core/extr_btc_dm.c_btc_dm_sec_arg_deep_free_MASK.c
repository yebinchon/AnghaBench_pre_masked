
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ act; scalar_t__ arg; } ;
typedef TYPE_3__ btc_msg_t ;
struct TYPE_6__ {int p_key_value; } ;
struct TYPE_7__ {TYPE_1__ ble_key; } ;
struct TYPE_9__ {TYPE_2__ sec; } ;
typedef TYPE_4__ btc_dm_sec_args_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(btc_msg_t *VAR_1)
{
    btc_dm_sec_args_t *VAR_2 = (btc_dm_sec_args_t *)(VAR_1->arg);
    if (VAR_1->act == VAR_0) {
        FUNC_0(VAR_2->sec.ble_key.p_key_value);
    }
}
