
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int frame; } ;
struct TYPE_5__ {int max_size; int cond; int mutex; TYPE_2__* queue; } ;
typedef TYPE_1__ FrameQueue ;
typedef TYPE_2__ Frame ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(FrameQueue *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->max_size; VAR_1++) {
        Frame *VAR_2 = &VAR_0->queue[VAR_1];
        FUNC_3(VAR_2);
        FUNC_2(&VAR_2->frame);
    }
    FUNC_1(VAR_0->mutex);
    FUNC_0(VAR_0->cond);
}
