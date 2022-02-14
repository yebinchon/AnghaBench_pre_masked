
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_13__ {int member_0; } ;
struct TYPE_9__ {int pltk; int ediv; TYPE_5__ rand; } ;
struct TYPE_10__ {int key_type; TYPE_1__ keys; } ;
struct TYPE_11__ {scalar_t__ sec_state; TYPE_2__ ble; int ble_hci_handle; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
struct TYPE_12__ {int enc_handle; } ;
typedef TYPE_4__ tBTM_CB ;
typedef TYPE_5__ BT_OCTET8 ;
typedef int BT_OCTET16 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 TYPE_3__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_5__,int ,int ) ;

tBTM_STATUS FUNC_5(BD_ADDR VAR_8, BOOLEAN VAR_9, BT_OCTET16 VAR_10)
{

    tBTM_CB *VAR_11 = &VAR_7;
    tBTM_SEC_DEV_REC *VAR_12 = FUNC_3 (VAR_8);
    BT_OCTET8 VAR_13 = {0};


    tBTM_STATUS VAR_14 = VAR_3;

    FUNC_0 ("btm_ble_start_encrypt");

    if (!VAR_12 ) {
        FUNC_1("Link is not active, can not encrypt!");
        return VAR_6;
    }

    if (VAR_12->sec_state == VAR_4) {
        FUNC_2("Link Encryption is active, Busy!");
        return VAR_0;
    }

    VAR_11->enc_handle = VAR_12->ble_hci_handle;

    if (VAR_9) {
        if (FUNC_4(VAR_12->ble_hci_handle, VAR_13, 0, VAR_10)) {
            VAR_14 = VAR_1;
        }
    } else if (VAR_12->ble.key_type & VAR_2) {
        if (FUNC_4(VAR_12->ble_hci_handle, VAR_12->ble.keys.rand,
                                     VAR_12->ble.keys.ediv, VAR_12->ble.keys.pltk)) {
            VAR_14 = VAR_1;
        }
    } else {
        FUNC_1("No key available to encrypt the link");
    }
    if (VAR_14 == VAR_1) {
        if (VAR_12->sec_state == VAR_5) {
            VAR_12->sec_state = VAR_4;
        }
    }

    return VAR_14;
}
