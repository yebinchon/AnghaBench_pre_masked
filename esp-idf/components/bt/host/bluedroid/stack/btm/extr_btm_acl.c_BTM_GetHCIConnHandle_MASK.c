
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBT_TRANSPORT ;
struct TYPE_3__ {int hci_handle; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

UINT16 FUNC_2 (BD_ADDR VAR_0, tBT_TRANSPORT VAR_1)
{
    tACL_CONN *VAR_2;
    FUNC_0 ("BTM_GetHCIConnHandle\n");
    VAR_2 = FUNC_1(VAR_0, VAR_1);
    if (VAR_2 != (tACL_CONN *)((void*)0)) {
        return (VAR_2->hci_handle);
    }


    return (0xFFFF);
}
