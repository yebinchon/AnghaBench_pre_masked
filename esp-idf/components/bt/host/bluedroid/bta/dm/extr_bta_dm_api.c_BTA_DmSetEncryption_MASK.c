
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_TRANSPORT ;
typedef int tBTA_DM_ENCRYPT_CBACK ;
typedef int tBTA_DM_BLE_SEC_ACT ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int sec_act; int * p_callback; int transport; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SET_ENCRYPTION ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(BD_ADDR VAR_2, tBTA_TRANSPORT VAR_3, tBTA_DM_ENCRYPT_CBACK *VAR_4,
                         tBTA_DM_BLE_SEC_ACT VAR_5)
{
    tBTA_DM_API_SET_ENCRYPTION *VAR_6;

    FUNC_0("BTA_DmSetEncryption");
    if ((VAR_6 = (tBTA_DM_API_SET_ENCRYPTION *) FUNC_4(sizeof(tBTA_DM_API_SET_ENCRYPTION))) != ((void*)0)) {
        FUNC_3(VAR_6, 0, sizeof(tBTA_DM_API_SET_ENCRYPTION));

        VAR_6->hdr.event = VAR_1;

        FUNC_2(VAR_6->bd_addr, VAR_2, VAR_0);
        VAR_6->transport = VAR_3;
        VAR_6->p_callback = VAR_4;
        VAR_6->sec_act = VAR_5;

        FUNC_1(VAR_6);
    }
}
