
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sec_flags; int link_key_type; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int tBTM_LINK_KEY_TYPE ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;

tBTM_LINK_KEY_TYPE FUNC_1 (BD_ADDR VAR_2)
{
    tBTM_SEC_DEV_REC *VAR_3 = FUNC_0 (VAR_2);

    if ((VAR_3 != ((void*)0)) && (VAR_3->sec_flags & VAR_1)) {
        return VAR_3->link_key_type;
    }
    return VAR_0;
}
