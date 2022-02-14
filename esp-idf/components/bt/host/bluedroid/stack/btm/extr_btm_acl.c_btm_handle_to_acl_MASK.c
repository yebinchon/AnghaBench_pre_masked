
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hci_handle; scalar_t__ in_use; } ;
typedef TYPE_1__ tACL_CONN ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* acl_db; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

tACL_CONN *FUNC_1 (UINT16 VAR_2)
{
    tACL_CONN *VAR_3 = &VAR_1.acl_db[0];
    UINT8 VAR_4;
    FUNC_0 ("btm_handle_to_acl_index\n");
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_3++) {
        if ((VAR_3->in_use) && (VAR_3->hci_handle == VAR_2)) {
            return(VAR_3);
        }
    }


    return ((tACL_CONN *)((void*)0));
}
