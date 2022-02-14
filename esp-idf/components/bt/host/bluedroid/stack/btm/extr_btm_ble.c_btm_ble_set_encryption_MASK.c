
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_4__ {int key_type; int skip_update_conn_param; } ;
struct TYPE_5__ {int sec_state; TYPE_1__ ble; int security_required; int role_master; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int tBTM_LE_AUTH_REQ ;
typedef int tBTM_BLE_SEC_REQ_ACT ;
typedef int tBTM_BLE_SEC_ACT ;
typedef int UINT8 ;
typedef int BD_ADDR ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int VAR_12 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 TYPE_2__* FUNC_5 (int ) ;

tBTM_STATUS FUNC_6 (BD_ADDR VAR_13, void *VAR_14, UINT8 VAR_15)
{
    tBTM_STATUS VAR_16 = VAR_3;

    tBTM_BLE_SEC_ACT VAR_17 = *(tBTM_BLE_SEC_ACT *)VAR_14 ;
    tBTM_SEC_DEV_REC *VAR_18 = FUNC_5 (VAR_13);
    tBTM_BLE_SEC_REQ_ACT VAR_19;
    tBTM_LE_AUTH_REQ VAR_20;

    if (VAR_18 == ((void*)0)) {
        FUNC_1 ("btm_ble_set_encryption (NULL device record!! sec_act=0x%x", VAR_17);
        return (VAR_8);
    }

    FUNC_0 ("btm_ble_set_encryption sec_act=0x%x role_master=%d", VAR_17, VAR_18->role_master);

    if (VAR_17 == 129) {
        VAR_18->security_required |= VAR_6;
    }

    switch (VAR_17) {
    case 130:
        if (VAR_15 == VAR_4 && (VAR_18->ble.key_type & VAR_2)) {

            VAR_16 = FUNC_4(VAR_13, VAR_9, ((void*)0));
            break;
        }


    case 128:
    case 129:
        if ((VAR_15 == VAR_4) && (VAR_17 != 130)) {
            VAR_20 = (VAR_17 == 128)
                       ? VAR_10 : (VAR_10 | VAR_11);
            FUNC_3 (VAR_13, VAR_20, &VAR_19);

            if (VAR_19 == VAR_0) {
                VAR_16 = FUNC_4(VAR_13, VAR_9, ((void*)0));
                break;
            }
        }


        if(VAR_15 == VAR_5 && (VAR_18->ble.key_type & VAR_2)) {
            VAR_18->ble.skip_update_conn_param = 1;
        } else {
            VAR_18->ble.skip_update_conn_param = 0;
        }

        if (FUNC_2(VAR_13) == VAR_12) {
            VAR_16 = VAR_1;
            VAR_18->sec_state = VAR_7;
        }
        break;

    default:
        VAR_16 = VAR_8;
        break;
    }

    return VAR_16;
}
