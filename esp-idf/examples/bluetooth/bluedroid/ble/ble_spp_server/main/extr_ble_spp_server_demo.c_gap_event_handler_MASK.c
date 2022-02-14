
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_gap_ble_cb_event_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ adv_start_cmpl; } ;
typedef TYPE_2__ esp_ble_gap_cb_param_t ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(esp_gap_ble_cb_event_t VAR_3, esp_ble_gap_cb_param_t *VAR_4)
{
    esp_err_t VAR_5;
    FUNC_0(VAR_1, "GAP_EVT, event %d\n", VAR_3);

    switch (VAR_3) {
    case 129:
        FUNC_1(&VAR_2);
        break;
    case 128:

        if((VAR_5 = VAR_4->adv_start_cmpl.status) != VAR_0) {
            FUNC_0(VAR_1, "Advertising start failed: %s\n", FUNC_2(VAR_5));
        }
        break;
    default:
        break;
    }
}
