
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_LE_KEY_VALUE ;
struct TYPE_4__ {int* bd_addr; int key_type; int blekey; } ;
struct TYPE_5__ {TYPE_1__ add_ble_key; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int*,int *,int ) ;

void FUNC_2 (tBTA_DM_MSG *VAR_0)
{
    if (!FUNC_1 (VAR_0->add_ble_key.bd_addr,
                           (tBTM_LE_KEY_VALUE *)&VAR_0->add_ble_key.blekey,
                           VAR_0->add_ble_key.key_type)) {
        FUNC_0 ("BTA_DM: Error adding BLE Key for device %08x%04x",
                          (VAR_0->add_ble_key.bd_addr[0] << 24) + (VAR_0->add_ble_key.bd_addr[1] << 16) + (VAR_0->add_ble_key.bd_addr[2] << 8) + VAR_0->add_ble_key.bd_addr[3],

                          (VAR_0->add_ble_key.bd_addr[4] << 8) + VAR_0->add_ble_key.bd_addr[5]);
    }
}
