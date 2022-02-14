
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; scalar_t__ in_use; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef scalar_t__ UINT8 ;
struct TYPE_6__ {TYPE_1__* scb; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;

tBTA_AG_SCB *FUNC_1 (tBTA_AG_SCB *VAR_3)
{
    tBTA_AG_SCB *VAR_4 = &VAR_2.scb[0];
    UINT8 VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_4++) {
        if (VAR_4->in_use && (VAR_4 != VAR_3) && (VAR_4->state == VAR_0)) {
            return VAR_4;
        }
    }

    FUNC_0("bta_ag_get_other_idle_scb: No idle AG scb");
    return ((void*)0);
}
