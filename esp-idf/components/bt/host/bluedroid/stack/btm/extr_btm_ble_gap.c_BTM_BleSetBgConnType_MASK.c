
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_BLE_SEL_CBACK ;
typedef int tBTM_BLE_CONN_TYPE ;
struct TYPE_4__ {int bg_conn_type; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_5__ {int (* supports_ble ) () ;} ;
typedef scalar_t__ BOOLEAN ;





 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 () ;

BOOLEAN FUNC_6(tBTM_BLE_CONN_TYPE VAR_3,
                             tBTM_BLE_SEL_CBACK *VAR_4)
{
    BOOLEAN VAR_5 = VAR_1;

    FUNC_1 ("BTM_BleSetBgConnType ");
    if (!FUNC_4()->supports_ble()) {
        return VAR_0;
    }

    if (VAR_2.ble_ctr_cb.bg_conn_type != VAR_3) {
        switch (VAR_3) {
        case 130:
            FUNC_2(VAR_1);
            break;

        case 128:
            if (VAR_2.ble_ctr_cb.bg_conn_type == 130) {
                FUNC_2(VAR_0);
            }
            FUNC_3(VAR_1, VAR_4);
            break;

        case 129:
            if (VAR_2.ble_ctr_cb.bg_conn_type == 130) {
                FUNC_2(VAR_0);
            } else if (VAR_2.ble_ctr_cb.bg_conn_type == 128) {
                FUNC_3(VAR_0, ((void*)0));
            }
            VAR_5 = VAR_1;
            break;

        default:
            FUNC_0("invalid bg connection type : %d ", VAR_3);
            VAR_5 = VAR_0;
            break;
        }

        if (VAR_5) {
            VAR_2.ble_ctr_cb.bg_conn_type = VAR_3;
        }
    }
    return VAR_5;
}
