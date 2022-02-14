
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hci_handle; int sm4; int sec_bd_name; int dev_class; scalar_t__ bd_addr; int sec_flags; scalar_t__ pin_code_length; int trusted_mask; int security_required; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
struct TYPE_6__ {int (* p_auth_complete_callback ) (scalar_t__,int ,int ,int ) ;} ;
struct TYPE_8__ {scalar_t__ pairing_state; int pairing_flags; int acl_disc_reason; scalar_t__ security_mode_changed; scalar_t__ pin_code_len_saved; int pin_code; scalar_t__ pin_code_len; TYPE_1__ api; int pairing_bda; } ;
typedef int BD_ADDR ;
typedef int APPL_AUTH_WRITE_EXCEPTION ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (char*,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 TYPE_5__ VAR_23 ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_14 (scalar_t__,int ,int ,int ) ;

void FUNC_15 (BD_ADDR VAR_24, UINT8 VAR_25, UINT8 VAR_26, UINT8 *VAR_27, UINT32 VAR_28[])
{
    tBTM_SEC_DEV_REC *VAR_29;

    FUNC_1 ("BTM_PINCodeReply(): PairState: %s   PairFlags: 0x%02x  PinLen:%d  Result:%d\n",
                   FUNC_6(VAR_23.pairing_state), VAR_23.pairing_flags, VAR_26, VAR_25);


    if (VAR_23.pairing_state != VAR_9) {
        FUNC_4 ("BTM_PINCodeReply() - Wrong State: %d\n", VAR_23.pairing_state);
        return;
    }

    if (FUNC_12 (VAR_24, VAR_23.pairing_bda, VAR_0) != 0) {
        FUNC_2 ("BTM_PINCodeReply() - Wrong BD Addr\n");
        return;
    }

    if ((VAR_29 = FUNC_5 (VAR_24)) == ((void*)0)) {
        FUNC_2 ("BTM_PINCodeReply() - no dev CB\n");
        return;
    }

    if ( (VAR_26 > VAR_21) || (VAR_26 == 0) || (VAR_27 == ((void*)0)) ) {
        VAR_25 = VAR_2;
    }

    if (VAR_25 != VAR_16) {

        if ((VAR_23.pairing_flags & VAR_4) ||
                ((VAR_23.pairing_flags & VAR_6) &&
                 (VAR_23.pairing_flags & VAR_3)) ) {

            FUNC_7 (VAR_8);
            VAR_23.acl_disc_reason = VAR_19;

            FUNC_9 (VAR_24);
        } else {
            VAR_29->security_required = VAR_14;
            FUNC_7 (VAR_7);
        }
        return;
    }
    if (VAR_28) {
        FUNC_0(VAR_28, VAR_29->trusted_mask);
    }
    VAR_29->sec_flags |= VAR_13;
    if (VAR_26 >= 16) {
        VAR_29->sec_flags |= VAR_11;
    }

    if ( (VAR_23.pairing_flags & VAR_6)
            && (VAR_29->hci_handle == VAR_12)
            && (VAR_23.security_mode_changed == VAR_17) ) {

        VAR_23.pin_code_len = VAR_26;
        VAR_29->pin_code_length = VAR_26;
        FUNC_13 (VAR_23.pin_code, VAR_27, VAR_26);

        VAR_23.security_mode_changed = VAR_22;



        {
            FUNC_11 (VAR_22);
        }

        VAR_23.acl_disc_reason = 0xff ;



        if (VAR_23.pairing_flags & VAR_5) {
            FUNC_4 ("BTM_PINCodeReply(): waiting HCI_Connection_Complete after rejected incoming connection\n");


            FUNC_7 (VAR_10);
        }

        else if (VAR_29->sm4 & VAR_15) {
            FUNC_4 ("BTM_PINCodeReply(): link is connecting so wait pin code request from peer\n");
            FUNC_7 (VAR_10);
        } else if (FUNC_8(VAR_29) != VAR_1) {
            FUNC_7 (VAR_7);
            VAR_29->sec_flags &= ~VAR_13;

            if (VAR_23.api.p_auth_complete_callback) {
                (*VAR_23.api.p_auth_complete_callback) (VAR_29->bd_addr, VAR_29->dev_class,
                                                        VAR_29->sec_bd_name, VAR_18);
            }
        }
        return;
    }

    FUNC_7 (VAR_8);
    VAR_23.acl_disc_reason = VAR_20;
    FUNC_10 (VAR_24, VAR_26, VAR_27);
}
