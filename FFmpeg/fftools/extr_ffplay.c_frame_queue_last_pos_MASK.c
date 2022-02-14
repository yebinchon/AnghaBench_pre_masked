
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {scalar_t__ serial; int pos; } ;
struct TYPE_6__ {size_t rindex; TYPE_1__* pktq; scalar_t__ rindex_shown; TYPE_3__* queue; } ;
struct TYPE_5__ {scalar_t__ serial; } ;
typedef TYPE_2__ FrameQueue ;
typedef TYPE_3__ Frame ;



__attribute__((used)) static int64_t FUNC_0(FrameQueue *VAR_0)
{
    Frame *VAR_1 = &VAR_0->queue[VAR_0->rindex];
    if (VAR_0->rindex_shown && VAR_1->serial == VAR_0->pktq->serial)
        return VAR_1->pos;
    else
        return -1;
}
