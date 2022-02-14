
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int work_queue_num; int * work_queues; } ;
typedef TYPE_1__ osi_thread_t ;


 int FUNC_0 (int ) ;

int FUNC_1(osi_thread_t *VAR_0, int VAR_1)
{
    if (VAR_1 < 0 || VAR_1 >= VAR_0->work_queue_num) {
        return -1;
    }

    return FUNC_0(VAR_0->work_queues[VAR_1]);
}
