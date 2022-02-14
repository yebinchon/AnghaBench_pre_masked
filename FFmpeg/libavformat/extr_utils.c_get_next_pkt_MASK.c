
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* internal; } ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_2__* parse_queue; TYPE_2__* packet_buffer_end; } ;
typedef int AVStream ;
typedef TYPE_2__ AVPacketList ;
typedef TYPE_3__ AVFormatContext ;



__attribute__((used)) static AVPacketList *FUNC_0(AVFormatContext *VAR_0, AVStream *VAR_1, AVPacketList *VAR_2)
{
    if (VAR_2->next)
        return VAR_2->next;
    if (VAR_2 == VAR_0->internal->packet_buffer_end)
        return VAR_0->internal->parse_queue;
    return ((void*)0);
}
