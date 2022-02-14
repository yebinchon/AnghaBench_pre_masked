
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_gap_ble_cb_event_t ;
typedef int esp_ble_gap_cb_param_t ;
struct TYPE_2__ {int adv_params; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(esp_gap_ble_cb_event_t VAR_4, esp_ble_gap_cb_param_t *VAR_5)
{
    switch (VAR_4) {
    case 129:
        VAR_0 &= (~VAR_1);
        if (VAR_0 == 0) {
            FUNC_0(&VAR_2->adv_params);
        }
        break;
    case 128:
        VAR_0 &= (~VAR_3);
        if (VAR_0 == 0) {
            FUNC_0(&VAR_2->adv_params);
        }
        break;
    default:
        break;
    }
}
