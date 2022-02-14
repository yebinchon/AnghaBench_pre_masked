
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int stream_index; } ;
struct TYPE_8__ {int cur_stream; int audio_packets; int num_streams; size_t current_packet; int * packet_sizes; int packet_sizes_alloc; } ;
typedef TYPE_1__ PMPContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **,int *,int) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    PMPContext *VAR_6 = VAR_4->priv_data;
    AVIOContext *VAR_7 = VAR_4->pb;
    int VAR_8 = 0;
    int VAR_9;

    if (FUNC_4(VAR_7))
        return VAR_0;
    if (VAR_6->cur_stream == 0) {
        int VAR_10;
        VAR_6->audio_packets = FUNC_5(VAR_7);

        if (!VAR_6->audio_packets) {
            FUNC_3(VAR_4, VAR_2, "No audio packets.\n");
            return VAR_1;
        }

        VAR_10 = (VAR_6->num_streams - 1) * VAR_6->audio_packets + 1;
        FUNC_7(VAR_7, 8);
        VAR_6->current_packet = 0;
        FUNC_1(&VAR_6->packet_sizes,
                       &VAR_6->packet_sizes_alloc,
                       VAR_10 * sizeof(*VAR_6->packet_sizes));
        if (!VAR_6->packet_sizes_alloc) {
            FUNC_3(VAR_4, VAR_2, "Cannot (re)allocate packet buffer\n");
            return FUNC_0(VAR_3);
        }
        for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
            VAR_6->packet_sizes[VAR_9] = FUNC_6(VAR_7);
    }
    VAR_8 = FUNC_2(VAR_7, VAR_5, VAR_6->packet_sizes[VAR_6->current_packet]);
    if (VAR_8 >= 0) {
        VAR_8 = 0;
        VAR_5->stream_index = VAR_6->cur_stream;
    }
    if (VAR_6->current_packet % VAR_6->audio_packets == 0)
        VAR_6->cur_stream = (VAR_6->cur_stream + 1) % VAR_6->num_streams;
    VAR_6->current_packet++;
    return VAR_8;
}
