
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; scalar_t__ unwritten_size; struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* premux_packet; } ;
typedef TYPE_1__ StreamInfo ;
typedef TYPE_2__ PacketDesc ;
typedef int AVFormatContext ;



__attribute__((used)) static int FUNC_0(AVFormatContext *VAR_0, StreamInfo *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    PacketDesc *VAR_4 = VAR_1->premux_packet;

    while (VAR_2 > 0) {
        if (VAR_4->size == VAR_4->unwritten_size)
            VAR_3++;
        VAR_2 -= VAR_4->unwritten_size;
        VAR_4 = VAR_4->next;
    }

    return VAR_3;
}
