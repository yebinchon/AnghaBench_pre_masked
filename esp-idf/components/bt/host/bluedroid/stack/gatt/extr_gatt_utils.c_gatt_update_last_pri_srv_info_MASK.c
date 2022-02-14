
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_last_primary; TYPE_2__* p_first; } ;
typedef TYPE_1__ tGATT_SRV_LIST_INFO ;
struct TYPE_5__ {struct TYPE_5__* p_next; scalar_t__ is_primary; } ;
typedef TYPE_2__ tGATT_SRV_LIST_ELEM ;



void FUNC_0(tGATT_SRV_LIST_INFO *VAR_0)
{
    tGATT_SRV_LIST_ELEM *VAR_1 = VAR_0->p_first;

    VAR_0->p_last_primary = ((void*)0);

    while (VAR_1) {
        if (VAR_1->is_primary) {
            VAR_0->p_last_primary = VAR_1;
        }
        VAR_1 = VAR_1->p_next;
    }

}
