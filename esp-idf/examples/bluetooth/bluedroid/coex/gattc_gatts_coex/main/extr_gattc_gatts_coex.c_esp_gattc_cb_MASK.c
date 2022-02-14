
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ esp_gattc_cb_event_t ;
typedef scalar_t__ esp_gatt_if_t ;
struct TYPE_6__ {scalar_t__ status; size_t app_id; } ;
struct TYPE_7__ {TYPE_1__ reg; } ;
typedef TYPE_2__ esp_ble_gattc_cb_param_t ;
struct TYPE_8__ {scalar_t__ gattc_if; int (* gattc_cb ) (scalar_t__,scalar_t__,TYPE_2__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,size_t,scalar_t__) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(esp_gattc_cb_event_t VAR_6, esp_gatt_if_t VAR_7, esp_ble_gattc_cb_param_t *VAR_8)
{

    if (VAR_6 == VAR_1) {
        if (VAR_8->reg.status == VAR_3) {
            VAR_5[VAR_8->reg.app_id].gattc_if = VAR_7;
        } else {
            FUNC_0(VAR_0, "reg app failed, app_id %04x, status %d\n",
                    VAR_8->reg.app_id,
                    VAR_8->reg.status);
            return;
        }
    }



    do {
        int VAR_9;
        for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 ++) {
            if (VAR_7 == VAR_2 ||
                    VAR_7 == VAR_5[VAR_9].gattc_if) {
                if (VAR_5[VAR_9].gattc_cb) {
                    VAR_5[VAR_9].gattc_cb(VAR_6, VAR_7, VAR_8);
                }
            }
        }
    } while (0);
}
