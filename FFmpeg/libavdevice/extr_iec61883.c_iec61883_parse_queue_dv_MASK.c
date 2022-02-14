
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct iec61883_data {int packets; TYPE_1__* queue_first; int dv_demux; } ;
struct TYPE_11__ {int data; int size; } ;
struct TYPE_10__ {struct TYPE_10__* buf; struct TYPE_10__* next; int len; } ;
typedef TYPE_1__ DVPacket ;
typedef TYPE_2__ AVPacket ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_2__*,TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iec61883_data *VAR_0, AVPacket *VAR_1)
{
    DVPacket *VAR_2;
    int VAR_3;

    VAR_3 = FUNC_4(VAR_0->dv_demux, VAR_1);
    if (VAR_3 > 0)
        return VAR_3;

    VAR_2 = VAR_0->queue_first;
    if (!VAR_2)
        return -1;

    VAR_3 = FUNC_5(VAR_0->dv_demux, VAR_1,
                                    VAR_2->buf, VAR_2->len, -1);
    VAR_0->queue_first = VAR_2->next;
    if (VAR_3 < 0)
        FUNC_0(VAR_2->buf);
    FUNC_0(VAR_2);
    VAR_0->packets--;

    if (VAR_3 < 0)
        return -1;

    if (FUNC_2(VAR_1, VAR_1->data, VAR_1->size) < 0) {
        FUNC_1(&VAR_1->data);
        FUNC_3(VAR_1);
        return -1;
    }

    return VAR_3;
}
