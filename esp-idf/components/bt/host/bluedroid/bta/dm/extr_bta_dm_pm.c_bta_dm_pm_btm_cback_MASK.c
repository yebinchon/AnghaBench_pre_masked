
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_PM_STATUS ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int bd_addr; int hci_status; int value; int status; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_PM_BTM_STATUS ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(BD_ADDR VAR_1, tBTM_PM_STATUS VAR_2, UINT16 VAR_3, UINT8 VAR_4)
{
    tBTA_DM_PM_BTM_STATUS *VAR_5;

    if ((VAR_5 = (tBTA_DM_PM_BTM_STATUS *) FUNC_2(sizeof(tBTA_DM_PM_BTM_STATUS))) != ((void*)0)) {
        VAR_5->hdr.event = VAR_0;
        VAR_5->status = VAR_2;
        VAR_5->value = VAR_3;
        VAR_5->hci_status = VAR_4;
        FUNC_0(VAR_5->bd_addr, VAR_1);
        FUNC_1(VAR_5);
    }
}
