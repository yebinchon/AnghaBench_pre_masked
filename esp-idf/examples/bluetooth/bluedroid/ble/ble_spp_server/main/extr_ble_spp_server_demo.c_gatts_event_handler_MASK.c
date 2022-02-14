
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ esp_gatts_cb_event_t ;
typedef scalar_t__ esp_gatt_if_t ;
struct TYPE_6__ {scalar_t__ status; scalar_t__ app_id; } ;
struct TYPE_7__ {TYPE_1__ reg; } ;
typedef TYPE_2__ esp_ble_gatts_cb_param_t ;
struct TYPE_8__ {scalar_t__ gatts_if; int (* gatts_cb ) (scalar_t__,scalar_t__,TYPE_2__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_1 (scalar_t__,scalar_t__,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(esp_gatts_cb_event_t VAR_7, esp_gatt_if_t VAR_8, esp_ble_gatts_cb_param_t *VAR_9)
{
    FUNC_0(VAR_3, "EVT %d, gatts if %d\n", VAR_7, VAR_8);


    if (VAR_7 == VAR_0) {
        if (VAR_9->reg.status == VAR_2) {
            VAR_6[VAR_4].gatts_if = VAR_8;
        } else {
            FUNC_0(VAR_3, "Reg app failed, app_id %04x, status %d\n",VAR_9->reg.app_id, VAR_9->reg.status);
            return;
        }
    }

    do {
        int VAR_10;
        for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
            if (VAR_8 == VAR_1 ||
                    VAR_8 == VAR_6[VAR_10].gatts_if) {
                if (VAR_6[VAR_10].gatts_cb) {
                    VAR_6[VAR_10].gatts_cb(VAR_7, VAR_8, VAR_9);
                }
            }
        }
    } while (0);
}
