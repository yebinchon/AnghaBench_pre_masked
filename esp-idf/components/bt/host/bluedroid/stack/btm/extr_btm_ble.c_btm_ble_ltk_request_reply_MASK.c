
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lltk; int key_size; } ;
struct TYPE_8__ {int key_type; TYPE_1__ keys; } ;
struct TYPE_9__ {TYPE_2__ ble; int ble_hci_handle; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
struct TYPE_10__ {int enc_handle; int key_size; } ;
typedef TYPE_4__ tBTM_CB ;
typedef int BT_OCTET16 ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(BD_ADDR VAR_2, BOOLEAN VAR_3, BT_OCTET16 VAR_4)
{
    tBTM_SEC_DEV_REC *VAR_5 = FUNC_2 (VAR_2);
    tBTM_CB *VAR_6 = &VAR_1;

    if (VAR_5 == ((void*)0)) {
        FUNC_1("btm_ble_ltk_request_reply received for unknown device");
        return;
    }

    FUNC_0 ("btm_ble_ltk_request_reply");
    VAR_6->enc_handle = VAR_5->ble_hci_handle;
    VAR_6->key_size = VAR_5->ble.keys.key_size;

    FUNC_0("key size = %d", VAR_5->ble.keys.key_size);
    if (VAR_3) {
        FUNC_4(VAR_1.enc_handle, VAR_4);
    } else {
        if (VAR_5->ble.key_type & VAR_0) {
            FUNC_4(VAR_1.enc_handle, VAR_5->ble.keys.lltk);
        } else {
            FUNC_3(VAR_1.enc_handle);
        }
    }
}
