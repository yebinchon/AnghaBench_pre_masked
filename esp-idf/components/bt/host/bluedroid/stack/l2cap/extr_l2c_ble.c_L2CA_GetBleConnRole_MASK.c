
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int link_role; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int ) ;

UINT8 FUNC_1 (BD_ADDR VAR_2)
{
    UINT8 VAR_3 = VAR_1;

    tL2C_LCB *VAR_4;

    if ((VAR_4 = FUNC_0 (VAR_2, VAR_0)) != ((void*)0)) {
        VAR_3 = VAR_4->link_role;
    }

    return VAR_3;
}
