
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rindex_shown; size_t rindex; size_t max_size; int mutex; int cond; int size; int * queue; scalar_t__ keep_last; } ;
typedef TYPE_1__ FrameQueue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(FrameQueue *VAR_0)
{
    if (VAR_0->keep_last && !VAR_0->rindex_shown) {
        VAR_0->rindex_shown = 1;
        return;
    }
    FUNC_3(&VAR_0->queue[VAR_0->rindex]);
    if (++VAR_0->rindex == VAR_0->max_size)
        VAR_0->rindex = 0;
    FUNC_1(VAR_0->mutex);
    VAR_0->size--;
    FUNC_0(VAR_0->cond);
    FUNC_2(VAR_0->mutex);
}
