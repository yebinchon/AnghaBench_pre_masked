
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sec_level; } ;
struct TYPE_6__ {int key_type; TYPE_1__ keys; } ;
struct TYPE_7__ {scalar_t__ sec_state; int sec_flags; TYPE_2__ ble; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef int tBTM_LE_AUTH_REQ ;
typedef int tBTM_BLE_SEC_REQ_ACT ;
typedef scalar_t__ UINT8 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (int ) ;

void FUNC_3(BD_ADDR VAR_12, tBTM_LE_AUTH_REQ VAR_13, tBTM_BLE_SEC_REQ_ACT *VAR_14)
{
    tBTM_SEC_DEV_REC *VAR_15 = FUNC_2 (VAR_12);
    UINT8 VAR_16 = VAR_6, VAR_17 = VAR_6;

    FUNC_0 ("btm_ble_link_sec_check auth_req =0x%x", VAR_13);

    if (VAR_15 == ((void*)0)) {
        FUNC_1 ("btm_ble_link_sec_check received for unknown device");
        return;
    }

    if (VAR_15->sec_state == VAR_11 ||
            VAR_15->sec_state == VAR_10) {

        *VAR_14 = VAR_0;
    } else {
        VAR_16 = VAR_7;
        if (VAR_13 & VAR_3) {
            VAR_16 = VAR_5;
        }

        FUNC_0 ("dev_rec sec_flags=0x%x", VAR_15->sec_flags);


        if (VAR_15->sec_flags & VAR_9) {
            if (VAR_15->sec_flags & VAR_8) {
                VAR_17 = VAR_5;
            } else {
                VAR_17 = VAR_7;
            }
        } else {

            if (VAR_15->ble.key_type & VAR_4) {
                VAR_17 = VAR_15->ble.keys.sec_level;
            } else {
                VAR_17 = VAR_6;
            }
        }

        if (VAR_17 >= VAR_16) {

            *VAR_14 = VAR_1;
        } else {
            *VAR_14 = VAR_2;
        }
    }

    FUNC_0("cur_sec_level=%d req_sec_level=%d sec_req_act=%d",
                    VAR_17,
                    VAR_16,
                    *VAR_14);


}
