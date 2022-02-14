
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ psm; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_RCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* rcb_pool; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

tL2C_RCB *FUNC_0 (UINT16 VAR_2)
{
    tL2C_RCB *VAR_3 = &VAR_1.rcb_pool[0];
    UINT16 VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_3++) {
        if ((VAR_3->in_use) && (VAR_3->psm == VAR_2)) {
            return (VAR_3);
        }
    }


    return (((void*)0));
}
