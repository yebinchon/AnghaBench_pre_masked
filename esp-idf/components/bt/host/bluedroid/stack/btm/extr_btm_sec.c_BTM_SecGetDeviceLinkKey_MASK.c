
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {int sec_flags; int link_key; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int LINK_KEY ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

tBTM_STATUS FUNC_2 (BD_ADDR VAR_4, LINK_KEY VAR_5)
{
    tBTM_SEC_DEV_REC *VAR_6;

    if (((VAR_6 = FUNC_0 (VAR_4)) != ((void*)0))
            && (VAR_6->sec_flags & VAR_0)) {
        FUNC_1 (VAR_5, VAR_6->link_key, VAR_3);
        return (VAR_1);
    }
    return (VAR_2);
}
