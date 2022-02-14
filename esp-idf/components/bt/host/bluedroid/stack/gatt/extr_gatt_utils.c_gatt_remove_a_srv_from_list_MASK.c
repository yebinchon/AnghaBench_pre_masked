
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int count; TYPE_1__* p_last; TYPE_2__* p_first; } ;
typedef TYPE_3__ tGATT_SRV_LIST_INFO ;
struct TYPE_11__ {TYPE_2__* p_next; TYPE_1__* p_prev; } ;
typedef TYPE_4__ tGATT_SRV_LIST_ELEM ;
struct TYPE_9__ {TYPE_1__* p_prev; } ;
struct TYPE_8__ {TYPE_2__* p_next; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;

BOOLEAN FUNC_2(tGATT_SRV_LIST_INFO *VAR_2, tGATT_SRV_LIST_ELEM *VAR_3)
{
    if (!VAR_3 || !VAR_2->p_first) {
        FUNC_0("p_remove==NULL || p_list->p_first==NULL");
        return VAR_0;
    }

    if (VAR_3->p_prev == ((void*)0)) {
        VAR_2->p_first = VAR_3->p_next;
        if (VAR_3->p_next) {
            VAR_3->p_next->p_prev = ((void*)0);
        }
    } else if (VAR_3->p_next == ((void*)0)) {
        VAR_2->p_last = VAR_3->p_prev;
        VAR_3->p_prev->p_next = ((void*)0);
    } else {
        VAR_3->p_next->p_prev = VAR_3->p_prev;
        VAR_3->p_prev->p_next = VAR_3->p_next;
    }
    VAR_2->count--;
    FUNC_1(VAR_2);
    return VAR_1;

}
