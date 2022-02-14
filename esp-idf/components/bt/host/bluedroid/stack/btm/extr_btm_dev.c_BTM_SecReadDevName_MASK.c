
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sec_bd_name; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int BD_ADDR ;


 TYPE_1__* FUNC_0 (int ) ;

char *FUNC_1 (BD_ADDR VAR_0)
{
    char *VAR_1 = ((void*)0);
    tBTM_SEC_DEV_REC *VAR_2;

    if ((VAR_2 = FUNC_0(VAR_0)) != ((void*)0)) {
        VAR_1 = (char *)VAR_2->sec_bd_name;
    }

    return (VAR_1);
}
