
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int context; int (* func ) (int ) ;} ;
typedef TYPE_1__ work_item_t ;
struct osi_thread_start_arg {int start_sem; TYPE_2__* thread; } ;
struct TYPE_6__ {int work_queue_num; int stop_sem; int * thread_handle; int * work_queues; scalar_t__ stop; int work_sem; } ;
typedef TYPE_2__ osi_thread_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
    struct osi_thread_start_arg *VAR_2 = (struct osi_thread_start_arg *)VAR_1;
    osi_thread_t *VAR_3 = VAR_2->thread;

    FUNC_2(&VAR_2->start_sem);

    while (1) {
        int VAR_4 = 0;

        FUNC_3(&VAR_3->work_sem, VAR_0);

        if (VAR_3->stop) {
            break;
        }

        while (!VAR_3->stop && VAR_4 < VAR_3->work_queue_num) {
            work_item_t *VAR_5 = FUNC_0(VAR_3->work_queues[VAR_4], 0);
            if (VAR_5) {
                VAR_5->func(VAR_5->context);
                FUNC_1(VAR_5);
                VAR_4 = 0;
                continue;
            } else {
                VAR_4++;
            }
        }
    }

    VAR_3->thread_handle = ((void*)0);
    FUNC_2(&VAR_3->stop_sem);

    FUNC_5(((void*)0));
}
