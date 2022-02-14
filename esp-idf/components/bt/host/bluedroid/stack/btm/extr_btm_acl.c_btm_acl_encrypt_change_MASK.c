
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ rs_disc_pending; int hci_handle; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
struct TYPE_11__ {size_t hci_status; int new_role; int p_bda; int event; } ;
typedef TYPE_4__ tBTM_BL_ROLE_CHG_DATA ;
typedef int tBTM_BL_EVENT_DATA ;
struct TYPE_12__ {scalar_t__ switch_role_state; int remote_addr; void* encrypt_state; int link_role; } ;
typedef TYPE_5__ tACL_CONN ;
typedef size_t UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_8__ {size_t hci_status; int remote_bd_addr; int role; } ;
struct TYPE_9__ {TYPE_1__ switch_role_ref_data; } ;
struct TYPE_13__ {int bl_evt_mask; int (* p_bl_changed_cb ) (int *) ;TYPE_2__ devcb; TYPE_5__* acl_db; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*,int ,size_t,size_t) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_3 (size_t,int ) ;
 TYPE_7__ VAR_13 ;
 TYPE_3__* FUNC_4 (int ) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (int *) ;

void FUNC_9 (UINT16 VAR_14, UINT8 VAR_15, UINT8 VAR_16)
{
    tACL_CONN *VAR_17;
    UINT8 VAR_18;
    tBTM_SEC_DEV_REC *VAR_19;
    tBTM_BL_ROLE_CHG_DATA VAR_20;

    FUNC_0 ("btm_acl_encrypt_change handle=%d status=%d encr_enabl=%d\n",
                     VAR_14, VAR_15, VAR_16);
    VAR_18 = FUNC_5(VAR_14);

    if (VAR_18 < VAR_12) {
        VAR_17 = &VAR_13.acl_db[VAR_18];
    } else {
        return;
    }


    if (VAR_17->switch_role_state == VAR_2) {

        if (VAR_16) {
            VAR_17->switch_role_state = VAR_4;
            VAR_17->encrypt_state = VAR_0;
        } else {
            VAR_17->switch_role_state = VAR_5;
            VAR_17->encrypt_state = VAR_1;
        }

        if (!FUNC_7 (VAR_17->remote_addr, (UINT8)!VAR_17->link_role)) {
            VAR_17->switch_role_state = VAR_4;
            VAR_17->encrypt_state = VAR_0;
            FUNC_3(VAR_13.devcb.switch_role_ref_data.hci_status, VAR_17->remote_addr);
        }

        else {
            if ((VAR_19 = FUNC_4 (VAR_17->remote_addr)) != ((void*)0)) {
                VAR_19->rs_disc_pending = VAR_10;
            }
        }


    }

    else if (VAR_17->switch_role_state == VAR_3) {
        VAR_17->switch_role_state = VAR_4;
        VAR_17->encrypt_state = VAR_0;
        FUNC_3(VAR_13.devcb.switch_role_ref_data.hci_status, VAR_17->remote_addr);


        if (VAR_13.p_bl_changed_cb && (VAR_13.bl_evt_mask & VAR_7)) {
            VAR_20.event = VAR_6;
            VAR_20.new_role = VAR_13.devcb.switch_role_ref_data.role;
            VAR_20.p_bda = VAR_13.devcb.switch_role_ref_data.remote_bd_addr;
            VAR_20.hci_status = VAR_13.devcb.switch_role_ref_data.hci_status;
            (*VAR_13.p_bl_changed_cb)((tBTM_BL_EVENT_DATA *)&VAR_20);

            FUNC_0("Role Switch Event: new_role 0x%02x, HCI Status 0x%02x, rs_st:%d\n",
                            VAR_20.new_role, VAR_20.hci_status, VAR_17->switch_role_state);
        }



        if ((VAR_19 = FUNC_4 (VAR_17->remote_addr)) != ((void*)0)) {
            if (VAR_19->rs_disc_pending == VAR_8) {
                FUNC_2("btm_acl_encrypt_change -> Issuing delayed HCI_Disconnect!!!\n");
                FUNC_6(VAR_19->hci_handle, VAR_11);
            }
            FUNC_1("btm_acl_encrypt_change: tBTM_SEC_DEV:0x%x rs_disc_pending=%d\n",
                            (UINT32)VAR_19, VAR_19->rs_disc_pending);
            VAR_19->rs_disc_pending = VAR_9;
        }

    }
}
