
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enqueue_sem; int lock; int list; int dequeue_sem; } ;
typedef TYPE_1__ fixed_queue_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

void *FUNC_7(fixed_queue_t *VAR_1, void *VAR_2)
{
    bool VAR_3 = 0;

    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_3(&VAR_1->lock, VAR_0);
    if (FUNC_1(VAR_1->list, VAR_2) &&
            FUNC_6(VAR_1->dequeue_sem, 0) == 0) {
        VAR_3 = FUNC_2(VAR_1->list, VAR_2);
        FUNC_0(VAR_3);
    }
    FUNC_4(&VAR_1->lock);

    if (VAR_3) {
        FUNC_5(VAR_1->enqueue_sem);
        return VAR_2;
    }

    return ((void*)0);
}
