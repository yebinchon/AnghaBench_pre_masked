
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int enqueue_sem; int lock; int list; int dequeue_sem; } ;
typedef TYPE_1__ fixed_queue_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;

void *FUNC_7(fixed_queue_t *VAR_1, uint32_t VAR_2)
{
    void *VAR_3 = ((void*)0);

    FUNC_0(VAR_1 != ((void*)0));

    if (FUNC_6(VAR_1->dequeue_sem, VAR_2) != 0) {
        return ((void*)0);
    }

    FUNC_3(&VAR_1->lock, VAR_0);
    VAR_3 = FUNC_1(VAR_1->list);
    FUNC_2(VAR_1->list, VAR_3);
    FUNC_4(&VAR_1->lock);

    FUNC_5(&VAR_1->enqueue_sem);

    return VAR_3;
}
