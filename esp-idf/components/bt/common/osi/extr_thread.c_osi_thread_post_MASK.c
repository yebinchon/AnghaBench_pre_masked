
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* context; int * func; } ;
typedef TYPE_1__ work_item_t ;
typedef int uint32_t ;
struct TYPE_7__ {int work_queue_num; int work_sem; int * work_queues; } ;
typedef TYPE_2__ osi_thread_t ;
typedef int * osi_thread_func_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

bool FUNC_5(osi_thread_t *VAR_0, osi_thread_func_t VAR_1, void *VAR_2, int VAR_3, uint32_t VAR_4)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_1 != ((void*)0));

    if (VAR_3 >= VAR_0->work_queue_num) {
        return 0;
    }

    work_item_t *VAR_5 = (work_item_t *)FUNC_3(sizeof(work_item_t));
    if (VAR_5 == ((void*)0)) {
        return 0;
    }
    VAR_5->func = VAR_1;
    VAR_5->context = VAR_2;

    if (FUNC_1(VAR_0->work_queues[VAR_3], VAR_5, VAR_4) == 0) {
        FUNC_2(VAR_5);
        return 0;
    }

    FUNC_4(&VAR_0->work_sem);

    return 1;
}
