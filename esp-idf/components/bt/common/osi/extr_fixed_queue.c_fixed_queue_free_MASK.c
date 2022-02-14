
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int list_node_t ;
struct TYPE_5__ {int lock; int dequeue_sem; int enqueue_sem; int list; } ;
typedef TYPE_1__ fixed_queue_t ;
typedef int (* fixed_queue_free_cb ) (int ) ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ) ;
 int const* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(fixed_queue_t *VAR_0, fixed_queue_free_cb VAR_1)
{
    const list_node_t *VAR_2;

    if (VAR_0 == ((void*)0)) {
     return;
 }

    FUNC_0(VAR_0);

    if (VAR_1) {
        for (VAR_2 = FUNC_1(VAR_0->list); VAR_2 != FUNC_2(VAR_0->list); VAR_2 = FUNC_4(VAR_2)) {
            VAR_1(FUNC_5(VAR_2));
        }
    }

    FUNC_3(VAR_0->list);
    FUNC_8(&VAR_0->enqueue_sem);
    FUNC_8(&VAR_0->dequeue_sem);
    FUNC_7(&VAR_0->lock);
    FUNC_6(VAR_0);
}
