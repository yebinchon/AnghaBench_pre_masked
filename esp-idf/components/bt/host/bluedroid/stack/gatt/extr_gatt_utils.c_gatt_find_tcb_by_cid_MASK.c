
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t att_lcid; scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef size_t UINT16 ;
struct TYPE_5__ {TYPE_1__* tcb; } ;


 size_t VAR_0 ;
 TYPE_3__ VAR_1 ;

tGATT_TCB *FUNC_0 (UINT16 VAR_2)
{
    UINT16 VAR_3 = 0;
    tGATT_TCB *VAR_4 = ((void*)0);

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (VAR_1.tcb[VAR_3].in_use && VAR_1.tcb[VAR_3].att_lcid == VAR_2) {
            VAR_4 = &VAR_1.tcb[VAR_3];
            break;
        }
    }
    return VAR_4;
}
