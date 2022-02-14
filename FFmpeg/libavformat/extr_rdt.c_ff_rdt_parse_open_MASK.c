
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_11__ {int n_streams; int prev_set_id; int prev_stream_id; int prev_timestamp; void* dynamic_protocol_context; int * parse_packet; TYPE_1__** streams; TYPE_4__* ic; } ;
struct TYPE_10__ {int * parse_packet; } ;
struct TYPE_9__ {scalar_t__ id; } ;
typedef TYPE_2__ RTPDynamicProtocolHandler ;
typedef TYPE_3__ RDTDemuxContext ;
typedef TYPE_4__ AVFormatContext ;


 TYPE_3__* FUNC_0 (int) ;

RDTDemuxContext *
FUNC_1(AVFormatContext *VAR_0, int VAR_1,
                  void *VAR_2, const RTPDynamicProtocolHandler *VAR_3)
{
    RDTDemuxContext *VAR_4 = FUNC_0(sizeof(RDTDemuxContext));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->ic = VAR_0;
    VAR_4->streams = &VAR_0->streams[VAR_1];
    do {
        VAR_4->n_streams++;
    } while (VAR_1 + VAR_4->n_streams < VAR_0->nb_streams &&
             VAR_4->streams[VAR_4->n_streams]->id == VAR_4->streams[0]->id);
    VAR_4->prev_set_id = -1;
    VAR_4->prev_stream_id = -1;
    VAR_4->prev_timestamp = -1;
    VAR_4->parse_packet = VAR_3 ? VAR_3->parse_packet : ((void*)0);
    VAR_4->dynamic_protocol_context = VAR_2;

    return VAR_4;
}
