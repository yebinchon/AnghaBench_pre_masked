
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ hci_handle; int sec_flags; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT32 ;
struct TYPE_6__ {scalar_t__ pairing_state; void* acl_disc_reason; int pairing_bda; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 TYPE_4__ VAR_13 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

void FUNC_9(tBTM_STATUS VAR_14, BD_ADDR VAR_15, UINT32 VAR_16)
{

    FUNC_1 ("BTM_PasskeyReqReply: State: %s  res:%d\n",
                   FUNC_3(VAR_13.pairing_state), VAR_14);

    if ( (VAR_13.pairing_state == VAR_3)
            || (FUNC_8 (VAR_13.pairing_bda, VAR_15, VAR_0) != 0) ) {
        return;
    }


    if ( (VAR_13.pairing_state == VAR_5) && (VAR_14 != VAR_9) ) {
        tBTM_SEC_DEV_REC *VAR_17 = FUNC_2 (VAR_15);
        if (VAR_17 != ((void*)0)) {
            VAR_13.acl_disc_reason = VAR_11;

            if (VAR_17->hci_handle != VAR_6) {
                FUNC_5 (VAR_17, VAR_10, VAR_17->hci_handle);
            } else {
                FUNC_0(VAR_15);
            }

            VAR_17->sec_flags &= ~(VAR_7 | VAR_8);

            FUNC_4 (VAR_3);
            return;
        }
    } else if (VAR_13.pairing_state != VAR_4) {
        return;
    }

    if (VAR_16 > VAR_2) {
        VAR_14 = VAR_1;
    }

    FUNC_4 (VAR_5);

    if (VAR_14 != VAR_9) {

        VAR_13.acl_disc_reason = VAR_11;
        FUNC_6 (VAR_15);
    } else {
        VAR_13.acl_disc_reason = VAR_12;
        FUNC_7 (VAR_15, VAR_16);
    }
}
