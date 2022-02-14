
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSMP_STATUS ;
struct TYPE_3__ {int sec_flags; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int ) ;

void FUNC_4 (BD_ADDR VAR_4, UINT8 VAR_5, UINT32 VAR_6)
{

    tBTM_SEC_DEV_REC *VAR_7 = FUNC_3 (VAR_4);
    tSMP_STATUS VAR_8 = (VAR_5 == VAR_1) ? VAR_3 : VAR_2;

    if (VAR_7 == ((void*)0)) {
        FUNC_1("Passkey reply to Unknown device");
        return;
    }

    VAR_7->sec_flags |= VAR_0;
    FUNC_0 ("BTM_BlePasskeyReply");
    FUNC_2(VAR_4, VAR_8, VAR_6);

}
