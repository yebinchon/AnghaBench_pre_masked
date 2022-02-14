
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {scalar_t__ number; } ;
struct TYPE_8__ {TYPE_1__ input_number; int member_0; } ;
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
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;

esp_err_t FUNC_2(uint32_t VAR_9)
{
    btc_ble_mesh_prov_args_t VAR_10 = {0};
    btc_msg_t VAR_11 = {0};

    if (VAR_9 > VAR_8) {
        return VAR_5;
    }

    FUNC_0(VAR_4);

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;
    VAR_10.input_number.number = VAR_9;

    return (FUNC_1(&VAR_11, &VAR_10, sizeof(btc_ble_mesh_prov_args_t), ((void*)0))
            == VAR_3 ? VAR_7 : VAR_6);
}
