
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ sec_state; scalar_t__ hci_handle; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
struct TYPE_6__ {scalar_t__ pairing_state; int pairing_flags; int pairing_bda; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__ VAR_20 ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,int ) ;

tBTM_STATUS FUNC_11 (BD_ADDR VAR_21)
{
    tBTM_SEC_DEV_REC *VAR_22;

    FUNC_1 ("BTM_SecBondCancel()  State: %s flags:0x%x\n",
                   FUNC_5 (VAR_20.pairing_state), VAR_20.pairing_flags);

    if (((VAR_22 = FUNC_4 (VAR_21)) == ((void*)0))
            || (FUNC_10 (VAR_20.pairing_bda, VAR_21, VAR_0) != 0) ) {
        return VAR_16;
    }


    if (VAR_20.pairing_flags & VAR_5) {
        if (VAR_22->sec_state == VAR_12) {
            FUNC_2 ("Cancel LE pairing\n");
            if (FUNC_3(VAR_21)) {
                return VAR_1;
            }
        }
        return VAR_17;
    }


    FUNC_2 ("hci_handle:0x%x sec_state:%d\n", VAR_22->hci_handle, VAR_22->sec_state );
    if (VAR_10 == VAR_20.pairing_state &&
            VAR_7 & VAR_20.pairing_flags) {

        FUNC_6();
        return VAR_15;
    }


    if ( (VAR_20.pairing_state != VAR_9)
            && (VAR_20.pairing_flags & VAR_7)) {

        if (VAR_22->hci_handle != VAR_11) {

            if ((VAR_22->sec_state == VAR_13) ||
                    (VAR_22->sec_state == VAR_14)) {
                return (VAR_1);
            }


            if (VAR_20.pairing_flags & VAR_4) {
                return FUNC_7(VAR_22, VAR_19, VAR_22->hci_handle);
            } else {
                FUNC_9(VAR_21, VAR_18);
            }

            return VAR_2;
        } else {

            if (VAR_20.pairing_flags & VAR_4) {
                if (FUNC_8(VAR_21)) {
                    return VAR_1;
                }

                return VAR_3;
            }
            if (VAR_20.pairing_state == VAR_8) {
                FUNC_0();
                VAR_20.pairing_flags |= VAR_6;
                return VAR_1;
            }
            return VAR_2;
        }
    }
    return VAR_17;
}
