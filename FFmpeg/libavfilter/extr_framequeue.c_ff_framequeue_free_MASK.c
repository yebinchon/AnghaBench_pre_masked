
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * queue; int first_bucket; scalar_t__ queued; } ;
typedef TYPE_1__ FFFrameQueue ;
typedef int AVFrame ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (TYPE_1__*) ;

void FUNC_3(FFFrameQueue *VAR_0)
{
    while (VAR_0->queued) {
        AVFrame *VAR_1 = FUNC_2(VAR_0);
        FUNC_0(&VAR_1);
    }
    if (VAR_0->queue != &VAR_0->first_bucket)
        FUNC_1(&VAR_0->queue);
}
