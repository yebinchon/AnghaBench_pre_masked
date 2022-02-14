
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_BLE_LOCAL_KEYS ;
struct TYPE_4__ {int ble_id_keys; } ;
typedef TYPE_1__ tBTA_DM_SEC ;
typedef int UINT8 ;
struct TYPE_5__ {int (* p_sec_cback ) (int,TYPE_1__*) ;} ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;


 TYPE_3__ VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3 (UINT8 VAR_3, tBTM_BLE_LOCAL_KEYS *VAR_4)
{
    UINT8 VAR_5;
    tBTA_DM_SEC VAR_6;

    switch (VAR_3) {
    case 128:
    case 129:
        if (VAR_2.p_sec_cback) {
            FUNC_1(&VAR_6.ble_id_keys, VAR_4, sizeof(tBTM_BLE_LOCAL_KEYS));

            VAR_5 = (VAR_3 == 128) ? VAR_1 : VAR_0;

            VAR_2.p_sec_cback(VAR_5, &VAR_6);
        }
        break;

    default:
        FUNC_0("Unknown key type %d", VAR_3);
        break;
    }
    return;

}
