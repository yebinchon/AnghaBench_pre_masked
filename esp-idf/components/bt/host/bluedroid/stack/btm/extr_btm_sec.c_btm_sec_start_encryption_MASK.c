
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sec_state; int hci_handle; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static BOOLEAN FUNC_1 (tBTM_SEC_DEV_REC *VAR_3)
{
    if (!FUNC_0 (VAR_3->hci_handle, VAR_2)) {
        return (VAR_1);
    }

    VAR_3->sec_state = VAR_0;
    return (VAR_2);
}
