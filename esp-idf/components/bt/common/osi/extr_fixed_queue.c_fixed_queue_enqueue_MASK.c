
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int dequeue_sem; int lock; int list; int enqueue_sem; } ;
typedef TYPE_1__ fixed_queue_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;

bool FUNC_6(fixed_queue_t *VAR_1, void *VAR_2, uint32_t VAR_3)
{
    bool VAR_4=0;

    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    if (FUNC_5(&VAR_1->enqueue_sem, VAR_3) != 0) {
        return 0;
    }

    FUNC_2(&VAR_1->lock, VAR_0);
    VAR_4 = FUNC_1(VAR_1->list, VAR_2);
    FUNC_3(&VAR_1->lock);

    if(VAR_4 == 1 )
        FUNC_4(&VAR_1->dequeue_sem);

    return VAR_4;
}
