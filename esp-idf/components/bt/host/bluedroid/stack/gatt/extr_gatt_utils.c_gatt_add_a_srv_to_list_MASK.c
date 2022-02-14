
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_2__* p_first; TYPE_2__* p_last; } ;
typedef TYPE_1__ tGATT_SRV_LIST_INFO ;
struct TYPE_7__ {scalar_t__ s_hdl; struct TYPE_7__* p_next; struct TYPE_7__* p_prev; } ;
typedef TYPE_2__ tGATT_SRV_LIST_ELEM ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

BOOLEAN FUNC_2(tGATT_SRV_LIST_INFO *VAR_2, tGATT_SRV_LIST_ELEM *VAR_3)
{
    tGATT_SRV_LIST_ELEM *VAR_4;

    if (!VAR_3) {
        FUNC_0("p_new==NULL");
        return VAR_0;
    }

    if (!VAR_2->p_first) {

        VAR_2->p_first =
            VAR_2->p_last = VAR_3;
        VAR_3->p_next =
            VAR_3->p_prev = ((void*)0);
    } else {
        VAR_4 = VAR_2->p_first;
        while (1) {
            if (VAR_4 == ((void*)0)) {
                VAR_2->p_last->p_next = VAR_3;
                VAR_3->p_prev = VAR_2->p_last;
                VAR_3->p_next = ((void*)0);
                VAR_2->p_last = VAR_3;
                break;
            } else {
                if (VAR_3->s_hdl < VAR_4->s_hdl) {

                    if (VAR_4->p_prev != ((void*)0)) {
                        VAR_4->p_prev->p_next = VAR_3;
                    } else {
                        VAR_2->p_first = VAR_3;
                    }

                    VAR_3->p_prev = VAR_4->p_prev;
                    VAR_3->p_next = VAR_4;
                    VAR_4->p_prev = VAR_3;
                    break;
                }
            }
            VAR_4 = VAR_4->p_next;
        }
    }
    VAR_2->count++;

    FUNC_1(VAR_2);
    return VAR_1;

}
