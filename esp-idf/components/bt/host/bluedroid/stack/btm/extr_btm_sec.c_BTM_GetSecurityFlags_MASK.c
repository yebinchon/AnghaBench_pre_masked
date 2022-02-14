
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sec_flags; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int ) ;

BOOLEAN FUNC_2 (BD_ADDR VAR_2, UINT8 *VAR_3)
{
    tBTM_SEC_DEV_REC *VAR_4;

    if ((VAR_4 = FUNC_1 (VAR_2)) != ((void*)0)) {
        *VAR_3 = (UINT8) VAR_4->sec_flags;
        return (VAR_1);
    }
    FUNC_0 ("BTM_GetSecurityFlags false");
    return (VAR_0);
}
