
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_gatts_cb_event_t ;
typedef int esp_gatt_if_t ;
struct TYPE_5__ {int mtu; } ;
struct TYPE_6__ {TYPE_1__ mtu; } ;
typedef TYPE_2__ esp_ble_gatts_cb_param_t ;
struct TYPE_7__ {int gatt_mtu; } ;


 TYPE_4__* VAR_0 ;

__attribute__((used)) static void FUNC_0(esp_gatts_cb_event_t VAR_1, esp_gatt_if_t VAR_2, esp_ble_gatts_cb_param_t *VAR_3)
{
    VAR_0->gatt_mtu = VAR_3->mtu.mtu;
    return;
}
