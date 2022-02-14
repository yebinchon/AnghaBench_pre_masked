
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {int link_super_tout; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ) ;

tBTM_STATUS FUNC_2 (BD_ADDR VAR_3, UINT16 *VAR_4)
{
    tACL_CONN *VAR_5 = FUNC_1(VAR_3, VAR_2);

    FUNC_0 ("BTM_GetLinkSuperTout\n");
    if (VAR_5 != (tACL_CONN *)((void*)0)) {
        *VAR_4 = VAR_5->link_super_tout;
        return (VAR_0);
    }

    return (VAR_1);
}
