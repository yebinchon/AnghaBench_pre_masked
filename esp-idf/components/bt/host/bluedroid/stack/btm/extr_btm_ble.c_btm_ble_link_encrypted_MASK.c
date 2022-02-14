
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ key_size; } ;
struct TYPE_7__ {int pseudo_addr; TYPE_1__ keys; } ;
struct TYPE_8__ {scalar_t__ sec_state; scalar_t__ enc_key_size; TYPE_2__ ble; scalar_t__ role_master; scalar_t__ p_callback; scalar_t__ sec_flags; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_4 ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(BD_ADDR VAR_5, UINT8 VAR_6)
{
    tBTM_SEC_DEV_REC *VAR_7 = FUNC_2 (VAR_5);
    BOOLEAN VAR_8;

    if (!VAR_7) {
        FUNC_1 ("btm_ble_link_encrypted (No Device Found!) encr_enable=%d", VAR_6);
        return;
    }

    FUNC_0 ("btm_ble_link_encrypted encr_enable=%d", VAR_6);

    VAR_8 = (VAR_7->sec_state == VAR_1);

    FUNC_5(VAR_5, VAR_6);

    FUNC_0(" p_dev_rec->sec_flags=0x%x", VAR_7->sec_flags);

    if (VAR_6 && VAR_7->enc_key_size == 0) {
        VAR_7->enc_key_size = VAR_7->ble.keys.key_size;
    }

    VAR_7->sec_state = VAR_2;
    if (VAR_7->p_callback && VAR_8) {
        if (VAR_6) {
            FUNC_3(VAR_7, VAR_3, VAR_4);
        } else if (VAR_7->role_master) {
            FUNC_3(VAR_7, VAR_0, VAR_4);
        }

    }

    FUNC_4(VAR_7->ble.pseudo_addr);
}
