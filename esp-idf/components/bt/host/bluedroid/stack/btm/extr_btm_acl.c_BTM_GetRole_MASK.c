
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {int link_role; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ,int ) ;

tBTM_STATUS FUNC_2 (BD_ADDR VAR_4, UINT8 *VAR_5)
{
    tACL_CONN *VAR_6;
    FUNC_0 ("BTM_GetRole\n");
    if ((VAR_6 = FUNC_1(VAR_4, VAR_3)) == ((void*)0)) {
        *VAR_5 = VAR_0;
        return (VAR_2);
    }


    *VAR_5 = VAR_6->link_role;
    return (VAR_1);
}
