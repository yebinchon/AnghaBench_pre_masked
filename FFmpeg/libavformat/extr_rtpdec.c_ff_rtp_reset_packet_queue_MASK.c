
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ prev_ret; scalar_t__ queue_len; scalar_t__ seq; TYPE_1__* queue; } ;
struct TYPE_5__ {struct TYPE_5__* buf; struct TYPE_5__* next; } ;
typedef TYPE_1__ RTPPacket ;
typedef TYPE_2__ RTPDemuxContext ;


 int FUNC_0 (TYPE_1__**) ;

void FUNC_1(RTPDemuxContext *VAR_0)
{
    while (VAR_0->queue) {
        RTPPacket *VAR_1 = VAR_0->queue->next;
        FUNC_0(&VAR_0->queue->buf);
        FUNC_0(&VAR_0->queue);
        VAR_0->queue = VAR_1;
    }
    VAR_0->seq = 0;
    VAR_0->queue_len = 0;
    VAR_0->prev_ret = 0;
}
