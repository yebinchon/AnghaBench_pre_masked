
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_BLE_LOCAL_KEYS ;
typedef int UINT8 ;
struct TYPE_4__ {int (* p_le_key_callback ) (int,int *) ;} ;
struct TYPE_5__ {int ble_encryption_key_value; int id_keys; } ;
struct TYPE_6__ {TYPE_1__ api; TYPE_2__ devcb; } ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 TYPE_3__ VAR_0 ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(UINT8 VAR_1)
{
    tBTM_BLE_LOCAL_KEYS *VAR_2 = ((void*)0);

    FUNC_0 ("btm_notify_new_key key_type=%d", VAR_1);

    if (VAR_0.api.p_le_key_callback) {
        switch (VAR_1) {
        case 128:
            FUNC_0 ("BTM_BLE_KEY_TYPE_ID");
            VAR_2 = (tBTM_BLE_LOCAL_KEYS *)&VAR_0.devcb.id_keys;
            break;

        case 129:
            FUNC_0 ("BTM_BLE_KEY_TYPE_ER");
            VAR_2 = (tBTM_BLE_LOCAL_KEYS *)&VAR_0.devcb.ble_encryption_key_value;
            break;

        default:
            FUNC_1("unknown key type: %d", VAR_1);
            break;
        }
        if (VAR_2 != ((void*)0)) {
            (*VAR_0.api.p_le_key_callback) (VAR_1, VAR_2);
        }
    }
}
