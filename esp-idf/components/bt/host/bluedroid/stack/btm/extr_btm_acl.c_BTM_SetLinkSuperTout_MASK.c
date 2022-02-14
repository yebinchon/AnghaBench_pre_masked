
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {scalar_t__ link_role; int hci_handle; int link_super_tout; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

tBTM_STATUS FUNC_3 (BD_ADDR VAR_7, UINT16 VAR_8)
{
    tACL_CONN *VAR_9 = FUNC_1(VAR_7, VAR_5);

    FUNC_0 ("BTM_SetLinkSuperTout\n");
    if (VAR_9 != (tACL_CONN *)((void*)0)) {
        VAR_9->link_super_tout = VAR_8;


        if (VAR_9->link_role == VAR_2) {
            if (!FUNC_2 (VAR_6,
                                                   VAR_9->hci_handle, VAR_8)) {
                return (VAR_1);
            }

            return (VAR_0);
        } else {
            return (VAR_3);
        }
    }


    return (VAR_4);
}
