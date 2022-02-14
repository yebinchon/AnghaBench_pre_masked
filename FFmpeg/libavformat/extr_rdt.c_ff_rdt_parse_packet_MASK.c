
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int (* parse_packet ) (int ,int ,int ,int *,scalar_t__*,int *,int,int ,int) ;int prev_stream_id; int prev_set_id; scalar_t__ prev_timestamp; int n_streams; int * streams; int dynamic_protocol_context; int ic; } ;
typedef TYPE_1__ RDTDemuxContext ;
typedef int AVPacket ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int*,int*,int*,int*,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ,int *,scalar_t__*,int *,int,int ,int) ;
 int FUNC_2 (int ,int ,int ,int *,scalar_t__*,int *,int,int ,int) ;

int
FUNC_3(RDTDemuxContext *VAR_1, AVPacket *VAR_2,
                    uint8_t **VAR_3, int VAR_4)
{
    uint8_t *VAR_5 = VAR_3 ? *VAR_3 : ((void*)0);
    int VAR_6, VAR_7 = 0, VAR_8, VAR_9, VAR_10;
    uint32_t VAR_11;
    int VAR_12= 0;

    if (!VAR_1->parse_packet)
        return -1;

    if (!VAR_5 && VAR_1->prev_stream_id != -1) {

        VAR_11= 0;
        VAR_12= VAR_1->parse_packet(VAR_1->ic, VAR_1->dynamic_protocol_context,
                            VAR_1->streams[VAR_1->prev_stream_id],
                            VAR_2, &VAR_11, ((void*)0), 0, 0, VAR_7);
        return VAR_12;
    }

    if (VAR_4 < 12)
        return -1;
    VAR_12 = FUNC_0(VAR_5, VAR_4, &VAR_9, &VAR_6, &VAR_8, &VAR_10, &VAR_11);
    if (VAR_12 < 0)
        return VAR_12;
    if (VAR_10 &&
        (VAR_9 != VAR_1->prev_set_id || VAR_11 != VAR_1->prev_timestamp ||
         VAR_8 != VAR_1->prev_stream_id)) {
        VAR_7 |= VAR_0;
        VAR_1->prev_set_id = VAR_9;
        VAR_1->prev_timestamp = VAR_11;
    }
    VAR_1->prev_stream_id = VAR_8;
    VAR_5 += VAR_12;
    VAR_4 -= VAR_12;

     if (VAR_1->prev_stream_id >= VAR_1->n_streams) {
         VAR_1->prev_stream_id = -1;
         return -1;
     }

    VAR_12 = VAR_1->parse_packet(VAR_1->ic, VAR_1->dynamic_protocol_context,
                         VAR_1->streams[VAR_1->prev_stream_id],
                         VAR_2, &VAR_11, VAR_5, VAR_4, 0, VAR_7);

    return VAR_12;
}
