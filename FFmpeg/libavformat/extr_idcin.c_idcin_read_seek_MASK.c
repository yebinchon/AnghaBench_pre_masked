
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {int * streams; int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ first_pkt_pos; size_t video_stream_index; int next_chunk_is_video; scalar_t__ current_audio_chunk; } ;
typedef TYPE_1__ IdcinDemuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_1, int VAR_2,
                           int64_t VAR_3, int VAR_4)
{
    IdcinDemuxContext *VAR_5 = VAR_1->priv_data;

    if (VAR_5->first_pkt_pos > 0) {
        int64_t VAR_6 = FUNC_0(VAR_1->pb, VAR_5->first_pkt_pos, VAR_0);
        if (VAR_6 < 0)
            return VAR_6;
        FUNC_1(VAR_1, VAR_1->streams[VAR_5->video_stream_index], 0);
        VAR_5->next_chunk_is_video = 1;
        VAR_5->current_audio_chunk = 0;
        return 0;
    }
    return -1;
}
