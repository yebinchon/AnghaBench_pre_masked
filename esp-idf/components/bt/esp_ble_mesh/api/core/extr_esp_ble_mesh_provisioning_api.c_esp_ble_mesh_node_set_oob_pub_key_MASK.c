
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int private_key; int pub_key_y; int pub_key_x; } ;
struct TYPE_8__ {TYPE_1__ set_oob_pub_key; int member_0; } ;
typedef TYPE_3__ btc_ble_mesh_prov_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ,int *,int) ;

esp_err_t FUNC_3(uint8_t VAR_8[32], uint8_t VAR_9[32],
        uint8_t VAR_10[32])
{
    btc_ble_mesh_prov_args_t VAR_11 = {0};
    btc_msg_t VAR_12 = {0};

    if (!VAR_8 || !VAR_9 || !VAR_10) {
        return VAR_5;
    }

    FUNC_0(VAR_4);

    VAR_12.sig = VAR_2;
    VAR_12.pid = VAR_1;
    VAR_12.act = VAR_0;

    FUNC_2(VAR_11.set_oob_pub_key.pub_key_x, VAR_8, 32);
    FUNC_2(VAR_11.set_oob_pub_key.pub_key_y, VAR_9, 32);
    FUNC_2(VAR_11.set_oob_pub_key.private_key, VAR_10, 32);

    return (FUNC_1(&VAR_12, &VAR_11, sizeof(btc_ble_mesh_prov_args_t), ((void*)0))
            == VAR_3 ? VAR_7 : VAR_6);
}
