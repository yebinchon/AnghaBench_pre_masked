
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int count; TYPE_3__* p_first; TYPE_3__* p_last; } ;
typedef TYPE_2__ tGATT_HDL_LIST_INFO ;
struct TYPE_6__ {scalar_t__ s_handle; } ;
struct TYPE_8__ {struct TYPE_8__* p_next; struct TYPE_8__* p_prev; TYPE_1__ asgn_range; } ;
typedef TYPE_3__ tGATT_HDL_LIST_ELEM ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

BOOLEAN FUNC_1(tGATT_HDL_LIST_INFO *VAR_2, tGATT_HDL_LIST_ELEM *VAR_3)
{
    tGATT_HDL_LIST_ELEM *VAR_4;
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
                if (VAR_3->asgn_range.s_handle > VAR_4->asgn_range.s_handle) {
                    if (VAR_4 == VAR_2->p_first) {
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
    return VAR_1;

}
