
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int pb; TYPE_2__** streams; TYPE_1__* priv_data; } ;
struct TYPE_13__ {scalar_t__ timestamp; int pos; int size; } ;
struct TYPE_12__ {size_t stream_index; scalar_t__ pts; int pos; } ;
struct TYPE_11__ {size_t nb_index_entries; TYPE_4__* index_entries; } ;
struct TYPE_10__ {size_t next_video_index; size_t total_vframes; size_t video_stream_index; size_t next_audio_index; size_t total_aframes; size_t audio_stream_index; scalar_t__ is_audio_present; } ;
typedef TYPE_1__ IFVContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVIndexEntry ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_5__*,int ,size_t) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_4, AVPacket *VAR_5)
{
    IFVContext *VAR_6 = VAR_4->priv_data;
    AVStream *VAR_7;
    AVIndexEntry *VAR_8, *VAR_9, *VAR_10;
    int VAR_11;

    VAR_8 = VAR_9 = VAR_10 = ((void*)0);

    if (VAR_6->next_video_index < VAR_6->total_vframes) {
        VAR_7 = VAR_4->streams[VAR_6->video_stream_index];
        if (VAR_6->next_video_index < VAR_7->nb_index_entries)
            VAR_10 = VAR_8 = &VAR_7->index_entries[VAR_6->next_video_index];
    }

    if (VAR_6->is_audio_present &&
        VAR_6->next_audio_index < VAR_6->total_aframes) {
        VAR_7 = VAR_4->streams[VAR_6->audio_stream_index];
        if (VAR_6->next_audio_index < VAR_7->nb_index_entries) {
            VAR_9 = &VAR_7->index_entries[VAR_6->next_audio_index];
            if (!VAR_8 || VAR_9->timestamp < VAR_8->timestamp)
                VAR_10 = VAR_9;
        }
    }

    if (!VAR_8) {
        if (VAR_6->is_audio_present && !VAR_9) {


            VAR_6->next_video_index = VAR_6->total_vframes;
            VAR_6->next_audio_index = VAR_6->total_aframes;

            FUNC_4(VAR_4->pb, 0x1c);
            VAR_6->total_vframes += FUNC_2(VAR_4->pb);
            VAR_6->total_aframes += FUNC_2(VAR_4->pb);
            FUNC_4(VAR_4->pb, 0xc);

            if (FUNC_1(VAR_4->pb))
                return VAR_0;

            VAR_11 = FUNC_5(VAR_4, VAR_2, VAR_6->next_video_index);
            if (VAR_11 < 0)
                return VAR_11;

            VAR_11 = FUNC_5(VAR_4, VAR_1, VAR_6->next_audio_index);
            if (VAR_11 < 0)
                return VAR_11;

            return 0;

        } else if (!VAR_6->is_audio_present) {


            VAR_6->next_video_index = VAR_6->total_vframes;

            FUNC_4(VAR_4->pb, 0x1c);
            VAR_6->total_vframes += FUNC_2(VAR_4->pb);
            FUNC_4(VAR_4->pb, 0x10);

            if (FUNC_1(VAR_4->pb))
                return VAR_0;

            VAR_11 = FUNC_5(VAR_4, VAR_2, VAR_6->next_video_index);
            if (VAR_11 < 0)
                return VAR_11;

            return 0;
        }
    }

    if (!VAR_10) return VAR_0;

    FUNC_3(VAR_4->pb, VAR_10->pos, VAR_3);
    VAR_11 = FUNC_0(VAR_4->pb, VAR_5, VAR_10->size);
    if (VAR_11 < 0)
        return VAR_11;

    if (VAR_10 == VAR_8) {
        VAR_6->next_video_index++;
        VAR_5->stream_index = VAR_6->video_stream_index;
    } else {
        VAR_6->next_audio_index++;
        VAR_5->stream_index = VAR_6->audio_stream_index;
    }

    VAR_5->pts = VAR_10->timestamp;
    VAR_5->pos = VAR_10->pos;

    return 0;
}
