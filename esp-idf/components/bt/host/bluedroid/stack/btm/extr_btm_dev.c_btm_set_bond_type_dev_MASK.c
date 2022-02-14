
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bond_type; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int tBTM_BOND_TYPE ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;

BOOLEAN FUNC_1(BD_ADDR VAR_2, tBTM_BOND_TYPE VAR_3)
{
    tBTM_SEC_DEV_REC *VAR_4 = FUNC_0(VAR_2);

    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->bond_type = VAR_3;
    return VAR_1;
}
