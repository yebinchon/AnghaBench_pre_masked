
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sec_act; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_SEC_ACTION ;


 int VAR_0 ;

tGATT_SEC_ACTION FUNC_0(tGATT_TCB *VAR_1)
{
    tGATT_SEC_ACTION VAR_2 = VAR_0;
    if (VAR_1) {
        VAR_2 = VAR_1->sec_act;
    }
    return VAR_2;
}
