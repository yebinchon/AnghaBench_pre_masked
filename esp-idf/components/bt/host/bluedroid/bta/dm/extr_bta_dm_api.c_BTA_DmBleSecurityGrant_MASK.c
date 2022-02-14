
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_DM_BLE_SEC_GRANT ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int res; int bd_addr; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_SEC_GRANT ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(BD_ADDR VAR_1, tBTA_DM_BLE_SEC_GRANT VAR_2)
{
    tBTA_DM_API_BLE_SEC_GRANT *VAR_3;

    if ((VAR_3 = (tBTA_DM_API_BLE_SEC_GRANT *) FUNC_3(sizeof(tBTA_DM_API_BLE_SEC_GRANT))) != ((void*)0)) {
        FUNC_2(VAR_3, 0, sizeof(tBTA_DM_API_BLE_SEC_GRANT));

        VAR_3->hdr.event = VAR_0;
        FUNC_0(VAR_3->bd_addr, VAR_1);
        VAR_3->res = VAR_2;

        FUNC_1(VAR_3);
    }
}
