
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sec_flags; scalar_t__ hci_handle; scalar_t__ ble_hci_handle; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* sec_dev_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

tBTM_SEC_DEV_REC *FUNC_0 (UINT16 VAR_3)
{
    tBTM_SEC_DEV_REC *VAR_4 = &VAR_2.sec_dev_rec[0];
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_4++) {
        if ((VAR_4->sec_flags & VAR_0)
                && ((VAR_4->hci_handle == VAR_3)

                    || (VAR_4->ble_hci_handle == VAR_3)

                   )) {
            return (VAR_4);
        }
    }
    return (((void*)0));
}
