
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tBTA_GATT_STATUS ;
struct TYPE_8__ {int handle; int status; } ;
struct TYPE_10__ {TYPE_1__ reg_for_notify; } ;
typedef TYPE_3__ esp_ble_gattc_cb_param_t ;
struct TYPE_9__ {int gattc_if; int handle; int remote_bda; } ;
struct TYPE_11__ {TYPE_2__ reg_for_notify; } ;
typedef TYPE_4__ btc_ble_gattc_args_t ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_3(btc_ble_gattc_args_t *VAR_1)
{
    tBTA_GATT_STATUS VAR_2;
    esp_ble_gattc_cb_param_t VAR_3;

    VAR_2 = FUNC_0(VAR_1->reg_for_notify.gattc_if,
             VAR_1->reg_for_notify.remote_bda,
             VAR_1->reg_for_notify.handle);

    FUNC_2(&VAR_3, 0, sizeof(esp_ble_gattc_cb_param_t));
    VAR_3.reg_for_notify.status = VAR_2;
    VAR_3.reg_for_notify.handle = VAR_1->reg_for_notify.handle;
    FUNC_1(VAR_0, VAR_1->reg_for_notify.gattc_if, &VAR_3);
}
