
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; size_t rindex_shown; size_t rindex; size_t max_size; int * queue; TYPE_1__* pktq; int mutex; int cond; } ;
struct TYPE_4__ {scalar_t__ abort_request; } ;
typedef TYPE_2__ FrameQueue ;
typedef int Frame ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static Frame *FUNC_3(FrameQueue *VAR_0)
{

    FUNC_1(VAR_0->mutex);
    while (VAR_0->size - VAR_0->rindex_shown <= 0 &&
           !VAR_0->pktq->abort_request) {
        FUNC_0(VAR_0->cond, VAR_0->mutex);
    }
    FUNC_2(VAR_0->mutex);

    if (VAR_0->pktq->abort_request)
        return ((void*)0);

    return &VAR_0->queue[(VAR_0->rindex + VAR_0->rindex_shown) % VAR_0->max_size];
}
