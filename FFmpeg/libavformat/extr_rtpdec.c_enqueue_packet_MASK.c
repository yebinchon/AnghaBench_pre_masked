
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef scalar_t__ int16_t ;
struct TYPE_6__ {int queue_len; TYPE_1__* queue; } ;
struct TYPE_5__ {scalar_t__ seq; int len; struct TYPE_5__* next; int * buf; int recvtime; } ;
typedef TYPE_1__ RTPPacket ;
typedef TYPE_2__ RTPDemuxContext ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(RTPDemuxContext *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    uint16_t VAR_4 = FUNC_1(VAR_2 + 2);
    RTPPacket **VAR_5 = &VAR_1->queue, *VAR_6;


    while (*VAR_5) {
        int16_t VAR_7 = VAR_4 - (*VAR_5)->seq;
        if (VAR_7 < 0)
            break;
        VAR_5 = &(*VAR_5)->next;
    }

    VAR_6 = FUNC_3(sizeof(*VAR_6));
    if (!VAR_6)
        return FUNC_0(VAR_0);
    VAR_6->recvtime = FUNC_2();
    VAR_6->seq = VAR_4;
    VAR_6->len = VAR_3;
    VAR_6->buf = VAR_2;
    VAR_6->next = *VAR_5;
    *VAR_5 = VAR_6;
    VAR_1->queue_len++;

    return 0;
}
