
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* esp_gatts_cb_t ) (int ,int ,int *) ;
typedef int esp_gatts_cb_event_t ;
typedef int esp_gatt_if_t ;
typedef int esp_ble_gatts_cb_param_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(esp_gatts_cb_event_t VAR_1, esp_gatt_if_t VAR_2, esp_ble_gatts_cb_param_t *VAR_3)
{
    esp_gatts_cb_t VAR_4 = (esp_gatts_cb_t)FUNC_0(VAR_0);
    if (VAR_4) {
        VAR_4(VAR_1, VAR_2, VAR_3);
    }
}
