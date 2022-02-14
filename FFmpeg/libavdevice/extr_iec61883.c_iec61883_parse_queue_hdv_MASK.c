
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iec61883_data {int packets; TYPE_1__* queue_first; int mpeg_demux; } ;
struct TYPE_4__ {struct TYPE_4__* buf; struct TYPE_4__* next; int len; } ;
typedef TYPE_1__ DVPacket ;
typedef int AVPacket ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int ,int *,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct iec61883_data *VAR_0, AVPacket *VAR_1)
{
    DVPacket *VAR_2;
    int VAR_3;

    while (VAR_0->queue_first) {
        VAR_2 = VAR_0->queue_first;
        VAR_3 = FUNC_1(VAR_0->mpeg_demux, VAR_1, VAR_2->buf,
                                          VAR_2->len);
        VAR_0->queue_first = VAR_2->next;
        FUNC_0(&VAR_2->buf);
        FUNC_0(&VAR_2);
        VAR_0->packets--;

        if (VAR_3 > 0)
            return VAR_3;
    }

    return -1;
}
