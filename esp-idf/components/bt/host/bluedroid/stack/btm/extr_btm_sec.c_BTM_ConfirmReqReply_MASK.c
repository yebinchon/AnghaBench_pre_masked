
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_4__ {int sec_flags; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
struct TYPE_5__ {scalar_t__ pairing_state; int acl_disc_reason; int pairing_bda; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;

void FUNC_6(tBTM_STATUS VAR_12, BD_ADDR VAR_13)
{
    tBTM_SEC_DEV_REC *VAR_14;

    FUNC_0 ("BTM_ConfirmReqReply() State: %s  Res: %u",
                     FUNC_2(VAR_11.pairing_state), VAR_12);


    if ( (VAR_11.pairing_state != VAR_2)
            || (FUNC_5 (VAR_11.pairing_bda, VAR_13, VAR_0) != 0) ) {
        return;
    }

    FUNC_3 (VAR_1);

    if ( (VAR_12 == VAR_5) || (VAR_12 == VAR_6) ) {
        VAR_11.acl_disc_reason = VAR_9;

        if (VAR_12 == VAR_5) {
            if ((VAR_14 = FUNC_1 (VAR_13)) != ((void*)0)) {
                VAR_14->sec_flags |= VAR_4;
            }
            VAR_14->sec_flags |= VAR_3;
        }

        FUNC_4 (VAR_13, VAR_10);
    } else {

        VAR_11.acl_disc_reason = VAR_8;
        FUNC_4 (VAR_13, VAR_7);
    }
}
