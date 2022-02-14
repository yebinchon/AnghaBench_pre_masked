
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ queue_len; TYPE_1__* queue; scalar_t__ seq; int ic; } ;
struct TYPE_8__ {struct TYPE_8__* buf; struct TYPE_8__* next; int len; scalar_t__ seq; } ;
typedef TYPE_1__ RTPPacket ;
typedef TYPE_2__ RTPDemuxContext ;
typedef int AVPacket ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int ,int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int *,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_4(RTPDemuxContext *VAR_1, AVPacket *VAR_2)
{
    int VAR_3;
    RTPPacket *VAR_4;

    if (VAR_1->queue_len <= 0)
        return -1;

    if (!FUNC_2(VAR_1))
        FUNC_1(VAR_1->ic, VAR_0,
               "RTP: missed %d packets\n", VAR_1->queue->seq - VAR_1->seq - 1);


    VAR_3 = FUNC_3(VAR_1, VAR_2, VAR_1->queue->buf, VAR_1->queue->len);
    VAR_4 = VAR_1->queue->next;
    FUNC_0(&VAR_1->queue->buf);
    FUNC_0(&VAR_1->queue);
    VAR_1->queue = VAR_4;
    VAR_1->queue_len--;
    return VAR_3;
}
