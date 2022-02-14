
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_7__ {int act; int pid; int sig; int member_0; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_8__ {TYPE_1__ set_device_name; int member_0; } ;
typedef TYPE_3__ btc_ble_mesh_prov_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ,char const*,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (char const*) ;

esp_err_t FUNC_5(const char *VAR_9)
{
    btc_ble_mesh_prov_args_t VAR_10 = {0};
    btc_msg_t VAR_11 = {0};

    if (!VAR_9 || FUNC_4(VAR_9) > VAR_5) {
        return VAR_6;
    }

    FUNC_0(VAR_4);

    VAR_11.sig = VAR_2;
    VAR_11.pid = VAR_1;
    VAR_11.act = VAR_0;

    FUNC_3(VAR_10.set_device_name.name, 0, sizeof(VAR_10.set_device_name.name));
    FUNC_2(VAR_10.set_device_name.name, VAR_9, FUNC_4(VAR_9));
    return (FUNC_1(&VAR_11, &VAR_10, sizeof(btc_ble_mesh_prov_args_t), ((void*)0))
            == VAR_3 ? VAR_8 : VAR_7);
}
