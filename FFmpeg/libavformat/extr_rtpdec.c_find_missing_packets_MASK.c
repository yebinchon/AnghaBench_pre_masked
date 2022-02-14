
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ int16_t ;
struct TYPE_5__ {scalar_t__ seq; TYPE_1__* queue; } ;
struct TYPE_4__ {scalar_t__ seq; struct TYPE_4__* next; } ;
typedef TYPE_1__ RTPPacket ;
typedef TYPE_2__ RTPDemuxContext ;



__attribute__((used)) static int FUNC_0(RTPDemuxContext *VAR_0, uint16_t *VAR_1,
                                uint16_t *VAR_2)
{
    int VAR_3;
    uint16_t VAR_4 = VAR_0->seq + 1;
    RTPPacket *VAR_5 = VAR_0->queue;

    if (!VAR_5 || VAR_5->seq == VAR_4)
        return 0;

    *VAR_2 = 0;
    for (VAR_3 = 1; VAR_3 <= 16; VAR_3++) {
        uint16_t VAR_6 = VAR_4 + VAR_3;
        while (VAR_5) {
            int16_t VAR_7 = VAR_5->seq - VAR_6;
            if (VAR_7 >= 0)
                break;
            VAR_5 = VAR_5->next;
        }
        if (!VAR_5)
            break;
        if (VAR_5->seq == VAR_6)
            continue;
        *VAR_2 |= 1 << (VAR_3 - 1);
    }

    *VAR_1 = VAR_4;
    return 1;
}
