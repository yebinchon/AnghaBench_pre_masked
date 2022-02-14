
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ tBT_TRANSPORT ;
typedef scalar_t__ tBTM_STATUS ;
struct TYPE_13__ {int sec_flags; scalar_t__ hci_handle; scalar_t__ ble_hci_handle; int* dev_class; int sm4; int sec_state; scalar_t__** features; int trusted_mask; void* is_originator; int security_required; scalar_t__ pin_code_length; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
struct TYPE_14__ {scalar_t__ hci_handle; } ;
typedef TYPE_3__ tACL_CONN ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_12__ {scalar_t__ pin_type; } ;
struct TYPE_16__ {scalar_t__ pairing_state; int security_mode; void* pin_type_changed; TYPE_1__ cfg; int pairing_flags; int pairing_bda; int pin_code; scalar_t__ pin_code_len; } ;
struct TYPE_15__ {int (* supports_simple_pairing ) () ;} ;
typedef scalar_t__* BD_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__*,int *,scalar_t__) ;
 int VAR_12 ;
 int FUNC_2 (int *,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_4 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,scalar_t__,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int,scalar_t__,...) ;
 int FUNC_8 (char*) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ FUNC_9 (scalar_t__*) ;
 scalar_t__ VAR_35 ;
 void* VAR_36 ;
 TYPE_3__* FUNC_10 (scalar_t__*,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,scalar_t__*) ;
 TYPE_9__ VAR_37 ;
 TYPE_2__* FUNC_12 (scalar_t__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (scalar_t__) ;
 TYPE_4__* FUNC_19 () ;
 int FUNC_20 (scalar_t__*,void*) ;
 int FUNC_21 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_22 () ;
 int FUNC_23 () ;

tBTM_STATUS FUNC_24 (BD_ADDR VAR_38, tBT_TRANSPORT VAR_39,
                                       UINT8 VAR_40, UINT8 *VAR_41, UINT32 VAR_42[])
{
    tBTM_SEC_DEV_REC *VAR_43;
    tBTM_STATUS VAR_44;

    UINT8 *VAR_45;

    UINT8 VAR_46;
    tACL_CONN *VAR_47 = FUNC_10(VAR_38, VAR_39);
    FUNC_4 ("btm_sec_bond_by_transport BDA: %02x:%02x:%02x:%02x:%02x:%02x\n",
                   VAR_38[0], VAR_38[1], VAR_38[2], VAR_38[3], VAR_38[4], VAR_38[5]);

    FUNC_5("btm_sec_bond_by_transport: Transport used %d\n" , VAR_39);



    if (VAR_37.pairing_state != VAR_9) {

        FUNC_6 ("BTM_SecBond: already busy in state: %s\n", FUNC_13(VAR_37.pairing_state));

        return (VAR_29);
    }

    if ((VAR_43 = FUNC_12 (VAR_38)) == ((void*)0)) {
        return (VAR_5);
    }

    FUNC_5 ("before update sec_flags=0x%x\n", VAR_43->sec_flags);


    if ( ((VAR_43->hci_handle != VAR_14) && VAR_39 == VAR_30
            && (VAR_43->sec_flags & VAR_12))

            || ((VAR_43->ble_hci_handle != VAR_14) && VAR_39 == VAR_31
                && (VAR_43->sec_flags & VAR_15))


       ) {
        FUNC_8("BTM_SecBond -> Already Paired\n");
        return (VAR_28);
    }


    if ((FUNC_0 (VAR_38, ((void*)0))) != VAR_28) {
        return (VAR_5);
    }



    if (VAR_41 && (VAR_40 <= VAR_34) && (VAR_40 != 0)) {
        VAR_37.pin_code_len = VAR_40;
        VAR_43->pin_code_length = VAR_40;
        FUNC_21 (VAR_37.pin_code, VAR_41, VAR_34);
    }


    FUNC_21 (VAR_37.pairing_bda, VAR_38, VAR_0);

    VAR_37.pairing_flags = VAR_7;

    VAR_43->security_required = VAR_23;
    VAR_43->is_originator = VAR_36;
    if (VAR_42) {
        FUNC_2(VAR_42, VAR_43->trusted_mask);
    }


    if (VAR_39 == VAR_31) {
        FUNC_11 (VAR_43, VAR_38);
        VAR_43->sec_flags &= ~ VAR_16;

        if (FUNC_9(VAR_38) == VAR_35) {
            VAR_37.pairing_flags |= VAR_6;
            VAR_43->sec_state = VAR_25;
            FUNC_14 (VAR_10);
            return VAR_1;
        }

        VAR_37.pairing_flags = 0;
        return (VAR_5);
    }


    VAR_43->sec_flags &= ~(VAR_18 | VAR_12 | VAR_13
                              | VAR_24 | VAR_17);


    FUNC_5 ("after update sec_flags=0x%x\n", VAR_43->sec_flags);


    if (!FUNC_19()->supports_simple_pairing()) {



        if (((VAR_43->dev_class[1] & VAR_2) == VAR_3)
                && (VAR_43->dev_class[2] & VAR_4)
                && (VAR_37.cfg.pin_type != VAR_33)) {
            VAR_37.pin_type_changed = VAR_36;
            FUNC_18 (VAR_33);
        }
    }


    for (VAR_46 = 0; VAR_46 <= VAR_32; VAR_46++) {

        VAR_45 = VAR_43->features[VAR_46];

        FUNC_7("  remote_features page[%1d] = %02x-%02x-%02x-%02x\n",
                        VAR_46, VAR_45[0], VAR_45[1], VAR_45[2], VAR_45[3]);
        FUNC_7("                              %02x-%02x-%02x-%02x\n",
                        VAR_45[4], VAR_45[5], VAR_45[6], VAR_45[7]);
    }

    FUNC_7 ("BTM_SecBond: Remote sm4: 0x%x  HCI Handle: 0x%04x\n", VAR_43->sm4, VAR_43->hci_handle);


    VAR_43->sec_flags &= ~VAR_22;



    if (VAR_47 && VAR_47->hci_handle != VAR_14) {
        if (!FUNC_17 (VAR_43)) {
            return (VAR_5);
        }

        FUNC_14 (VAR_11);


        FUNC_20 (VAR_38, VAR_36);
        return (VAR_1);
    }

    FUNC_5 ("sec mode: %d sm4:x%x\n", VAR_37.security_mode, VAR_43->sm4);
    if (!FUNC_19()->supports_simple_pairing()
            || (VAR_43->sm4 == VAR_27)) {
        if ( FUNC_15 (VAR_43) ) {
            return (VAR_1);
        }
    }
    if ((VAR_37.security_mode == VAR_20 ||
            VAR_37.security_mode == VAR_21 ||
            VAR_37.security_mode == VAR_19) &&
            FUNC_3(VAR_43->sm4)) {

        if ((VAR_43->sm4 & VAR_26) == 0) {



            FUNC_14 (VAR_8);
            FUNC_1(VAR_38, ((void*)0), VAR_30);
        } else {

            FUNC_14 (VAR_11);
        }

        FUNC_5 ("State:%s sm4: 0x%x sec_state:%d\n",
                         FUNC_13 (VAR_37.pairing_state), VAR_43->sm4, VAR_43->sec_state);

        return VAR_1;
    }


    VAR_44 = FUNC_16(VAR_43);

    if (VAR_44 != VAR_1) {
        FUNC_14 (VAR_9);
    }

    return VAR_44;
}
