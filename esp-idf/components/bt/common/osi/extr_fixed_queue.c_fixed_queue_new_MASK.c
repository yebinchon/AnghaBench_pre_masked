
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t capacity; int dequeue_sem; int enqueue_sem; int list; int lock; } ;
typedef TYPE_1__ fixed_queue_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t,size_t) ;

fixed_queue_t *FUNC_5(size_t VAR_0)
{
    fixed_queue_t *VAR_1 = FUNC_2(sizeof(fixed_queue_t));
    if (!VAR_1) {
        goto error;
    }

    FUNC_3(&VAR_1->lock);
    VAR_1->capacity = VAR_0;

    VAR_1->list = FUNC_1(((void*)0));
    if (!VAR_1->list) {
        goto error;
    }


    FUNC_4(&VAR_1->enqueue_sem, VAR_0, VAR_0);
    if (!VAR_1->enqueue_sem) {
        goto error;
    }

    FUNC_4(&VAR_1->dequeue_sem, VAR_0, 0);
    if (!VAR_1->dequeue_sem) {
        goto error;
    }

    return VAR_1;

error:;
    FUNC_0(VAR_1, ((void*)0));
    return ((void*)0);
}
