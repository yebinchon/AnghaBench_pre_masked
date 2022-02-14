
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef size_t UINT8 ;
struct TYPE_5__ {TYPE_1__* tcb; } ;


 size_t VAR_0 ;
 TYPE_3__ VAR_1 ;

tGATT_TCB *FUNC_0(UINT8 VAR_2)
{
    tGATT_TCB *VAR_3 = ((void*)0);

    if ( (VAR_2 < VAR_0) && VAR_1.tcb[VAR_2].in_use) {
        VAR_3 = &VAR_1.tcb[VAR_2];
    }

    return VAR_3;
}
