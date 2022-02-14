
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hci_handle; scalar_t__ in_use; } ;
typedef TYPE_1__ tACL_CONN ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {TYPE_1__* acl_db; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2 (void)
{
    tACL_CONN *VAR_3 = &VAR_2.acl_db[0];
    UINT16 VAR_4;
    FUNC_0 ("btm_acl_device_down\n");
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++, VAR_3++) {
        if (VAR_3->in_use) {
            FUNC_0 ("hci_handle=%d HCI_ERR_HW_FAILURE \n", VAR_3->hci_handle );
            FUNC_1 (VAR_3->hci_handle, VAR_0);
        }
    }
}
