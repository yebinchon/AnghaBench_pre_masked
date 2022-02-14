
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_14__ {int sec_flags; int rs_disc_pending; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
struct TYPE_15__ {int mode; } ;
typedef TYPE_4__ tBTM_PM_PWR_MD ;
typedef scalar_t__ tBTM_PM_MODE ;
typedef int tBTM_CMPL_CB ;
struct TYPE_16__ {scalar_t__ link_role; scalar_t__ switch_role_state; scalar_t__ encrypt_state; int hci_handle; int remote_addr; } ;
typedef TYPE_5__ tACL_CONN ;
typedef int settings ;
typedef scalar_t__ UINT8 ;
struct TYPE_12__ {int hci_status; scalar_t__ role; int * remote_bd_addr; } ;
struct TYPE_13__ {int * p_switch_role_cb; TYPE_1__ switch_role_ref_data; } ;
struct TYPE_18__ {TYPE_2__ devcb; } ;
struct TYPE_17__ {int (* supports_master_slave_role_switch ) () ;} ;
typedef scalar_t__ BOOLEAN ;
typedef int * BD_ADDR_PTR ;
typedef int * BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_4__*) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (char*,scalar_t__,...) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 TYPE_5__* FUNC_5 (int *,int ) ;
 TYPE_8__ VAR_23 ;
 TYPE_3__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,scalar_t__) ;
 TYPE_6__* FUNC_10 () ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (void*,int ,int) ;
 int FUNC_13 () ;

tBTM_STATUS FUNC_14 (BD_ADDR VAR_24, UINT8 VAR_25, tBTM_CMPL_CB *VAR_26)
{
    tACL_CONN *VAR_27;
    tBTM_SEC_DEV_REC *VAR_28 = ((void*)0);

    BOOLEAN VAR_29;

    tBTM_STATUS VAR_30;
    tBTM_PM_MODE VAR_31;
    tBTM_PM_PWR_MD VAR_32;

    BD_ADDR_PTR VAR_33;

    FUNC_3 ("BTM_SwitchRole BDA: %02x-%02x-%02x-%02x-%02x-%02x\n",
                   VAR_24[0], VAR_24[1], VAR_24[2],
                   VAR_24[3], VAR_24[4], VAR_24[5]);


    if (!FUNC_10()->supports_master_slave_role_switch()) {
        return (VAR_8);
    }

    if (VAR_23.devcb.p_switch_role_cb && VAR_26) {

        VAR_33 = VAR_23.devcb.switch_role_ref_data.remote_bd_addr;
        FUNC_4 ("Role switch on other device is in progress 0x%02x%02x%02x%02x%02x%02x\n",
                         VAR_33[0], VAR_33[1], VAR_33[2],
                         VAR_33[3], VAR_33[4], VAR_33[5]);

        return (VAR_6);
    }

    if ((VAR_27 = FUNC_5(VAR_24, VAR_19)) == ((void*)0)) {
        return (VAR_17);
    }


    if (VAR_27->link_role == VAR_25) {
        return (VAR_16);
    }



    VAR_29 = FUNC_7(VAR_24);

    if (VAR_29 == VAR_22) {
        return (VAR_9);
    }



    if (VAR_27->switch_role_state != VAR_3) {
        FUNC_4 ("BTM_SwitchRole busy: %d\n",
                         VAR_27->switch_role_state);
        return (VAR_6);
    }

    if ((VAR_30 = FUNC_1(VAR_27->remote_addr, &VAR_31)) != VAR_16) {
        return (VAR_30);
    }


    if (VAR_31 == VAR_11 || VAR_31 == VAR_12) {
        FUNC_12( (void *)&VAR_32, 0, sizeof(VAR_32));
        VAR_32.mode = VAR_10;
        VAR_30 = FUNC_2 (VAR_13, VAR_27->remote_addr, &VAR_32);
        if (VAR_30 != VAR_7) {
            return (VAR_18);
        }

        VAR_27->switch_role_state = VAR_5;
    }

    else {
        VAR_28 = FUNC_6 (VAR_24);
        if ((VAR_28 != ((void*)0))
                && ((VAR_28->sec_flags & VAR_14) != 0)
                && !FUNC_0(VAR_27)) {

            if (VAR_27->encrypt_state != VAR_1) {
                if (!FUNC_8 (VAR_27->hci_handle, VAR_20)) {
                    return (VAR_9);
                } else {
                    VAR_27->encrypt_state = VAR_1;
                }
            }

            VAR_27->switch_role_state = VAR_2;
        } else {
            if (!FUNC_9 (VAR_24, VAR_25)) {
                return (VAR_9);
            }

            VAR_27->switch_role_state = VAR_4;


            if (VAR_28) {
                VAR_28->rs_disc_pending = VAR_15;
            }

        }
    }


    if (VAR_26) {
        FUNC_11 (VAR_23.devcb.switch_role_ref_data.remote_bd_addr, VAR_24,
                VAR_0);
        VAR_23.devcb.switch_role_ref_data.role = VAR_25;

        VAR_23.devcb.switch_role_ref_data.hci_status = VAR_21;
        VAR_23.devcb.p_switch_role_cb = VAR_26;
    }
    return (VAR_7);
}
