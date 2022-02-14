
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct iec61883_data {scalar_t__ packets; scalar_t__ max_packets; int mutex; int cond; TYPE_1__* queue_last; TYPE_1__* queue_first; } ;
struct TYPE_4__ {int len; struct TYPE_4__* next; scalar_t__ buf; } ;
typedef TYPE_1__ DVPacket ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,unsigned char*,int) ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(unsigned char *VAR_2, int VAR_3,
                             int VAR_4, void *VAR_5)
{
    struct iec61883_data *VAR_6 = VAR_5;
    DVPacket *VAR_7;
    int VAR_8;





    if (VAR_6->packets >= VAR_6->max_packets) {
        FUNC_1(((void*)0), VAR_1, "DV packet queue overrun, dropping.\n");
        VAR_8 = 0;
        goto exit;
    }

    VAR_7 = FUNC_3(sizeof(*VAR_7));
    if (!VAR_7) {
        VAR_8 = -1;
        goto exit;
    }

    VAR_7->buf = FUNC_2(VAR_3 + VAR_0);
    if (!VAR_7->buf) {
        FUNC_0(VAR_7);
        VAR_8 = -1;
        goto exit;
    }
    VAR_7->len = VAR_3;

    FUNC_4(VAR_7->buf, VAR_2, VAR_3);
    FUNC_5(VAR_7->buf + VAR_3, 0, VAR_0);

    if (VAR_6->queue_first) {
        VAR_6->queue_last->next = VAR_7;
        VAR_6->queue_last = VAR_7;
    } else {
        VAR_6->queue_first = VAR_7;
        VAR_6->queue_last = VAR_7;
    }
    VAR_6->packets++;

    VAR_8 = 0;

exit:




    return VAR_8;
}
