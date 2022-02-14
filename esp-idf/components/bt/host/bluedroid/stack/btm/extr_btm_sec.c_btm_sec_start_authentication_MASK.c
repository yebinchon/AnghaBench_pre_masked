
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hci_handle; int sec_state; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static BOOLEAN FUNC_1 (tBTM_SEC_DEV_REC *VAR_1)
{
    VAR_1->sec_state = VAR_0;

    return (FUNC_0 (VAR_1->hci_handle));
}
