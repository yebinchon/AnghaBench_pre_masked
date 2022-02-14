
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tSMP_STATUS ;
struct TYPE_3__ {int sec_flags; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (int ) ;

void FUNC_4(BD_ADDR VAR_4, UINT8 VAR_5, UINT8 VAR_6, UINT8 *VAR_7)
{

    tSMP_STATUS VAR_8 = (VAR_5 == VAR_1) ? VAR_3 : VAR_2;
    tBTM_SEC_DEV_REC *VAR_9 = FUNC_3 (VAR_4);

    FUNC_0 ("BTM_BleOobDataReply");

    if (VAR_9 == ((void*)0)) {
        FUNC_1("BTM_BleOobDataReply() to Unknown device");
        return;
    }

    VAR_9->sec_flags |= VAR_0;
    FUNC_2(VAR_4, VAR_8, VAR_6, VAR_7);

}
