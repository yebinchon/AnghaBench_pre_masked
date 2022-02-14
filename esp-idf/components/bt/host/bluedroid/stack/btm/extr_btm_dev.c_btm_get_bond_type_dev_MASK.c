
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bond_type; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int tBTM_BOND_TYPE ;
typedef int BD_ADDR ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

tBTM_BOND_TYPE FUNC_1(BD_ADDR VAR_1)
{
    tBTM_SEC_DEV_REC *VAR_2 = FUNC_0(VAR_1);

    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }

    return VAR_2->bond_type;
}
