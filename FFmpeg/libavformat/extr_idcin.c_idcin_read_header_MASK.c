
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int codec_tag; unsigned int width; unsigned int height; unsigned int channels; unsigned int sample_rate; unsigned int bits_per_coded_sample; unsigned int bit_rate; unsigned int block_align; int codec_id; int channel_layout; int codec_type; } ;
struct TYPE_19__ {TYPE_3__* pb; TYPE_1__* priv_data; } ;
struct TYPE_18__ {int error; scalar_t__ eof_reached; } ;
struct TYPE_17__ {TYPE_7__* codecpar; int index; scalar_t__ start_time; } ;
struct TYPE_16__ {int audio_present; unsigned int block_align; unsigned int audio_chunk_size1; unsigned int audio_chunk_size2; int next_chunk_is_video; int first_pkt_pos; scalar_t__ current_audio_chunk; int audio_stream_index; int video_stream_index; } ;
typedef TYPE_1__ IdcinDemuxContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 TYPE_2__* FUNC_3 (TYPE_4__*,int *) ;
 unsigned int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*,int,int,unsigned int) ;
 int FUNC_7 (TYPE_4__*,TYPE_7__*,TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_14)
{
    AVIOContext *VAR_15 = VAR_14->pb;
    IdcinDemuxContext *VAR_16 = VAR_14->priv_data;
    AVStream *VAR_17;
    unsigned int VAR_18, VAR_19;
    unsigned int VAR_20, VAR_21, VAR_22;
    int VAR_23;


    VAR_18 = FUNC_4(VAR_15);
    VAR_19 = FUNC_4(VAR_15);
    VAR_20 = FUNC_4(VAR_15);
    VAR_21 = FUNC_4(VAR_15);
    VAR_22 = FUNC_4(VAR_15);

    if (VAR_14->pb->eof_reached) {
        FUNC_2(VAR_14, VAR_9, "incomplete header\n");
        return VAR_14->pb->error ? VAR_14->pb->error : VAR_0;
    }

    if (FUNC_1(VAR_18, VAR_19, 0, VAR_14) < 0)
        return VAR_1;
    if (VAR_20 > 0) {
        if (VAR_20 < 14 || VAR_20 > VAR_13) {
            FUNC_2(VAR_14, VAR_9, "invalid sample rate: %u\n", VAR_20);
            return VAR_1;
        }
        if (VAR_21 < 1 || VAR_21 > 2) {
            FUNC_2(VAR_14, VAR_9, "invalid bytes per sample: %u\n",
                   VAR_21);
            return VAR_1;
        }
        if (VAR_22 < 1 || VAR_22 > 2) {
            FUNC_2(VAR_14, VAR_9, "invalid channels: %u\n", VAR_22);
            return VAR_1;
        }
        VAR_16->audio_present = 1;
    } else {

        VAR_16->audio_present = 0;
    }

    VAR_17 = FUNC_3(VAR_14, ((void*)0));
    if (!VAR_17)
        return FUNC_0(VAR_10);
    FUNC_6(VAR_17, 33, 1, VAR_12);
    VAR_17->start_time = 0;
    VAR_16->video_stream_index = VAR_17->index;
    VAR_17->codecpar->codec_type = VAR_3;
    VAR_17->codecpar->codec_id = VAR_6;
    VAR_17->codecpar->codec_tag = 0;
    VAR_17->codecpar->width = VAR_18;
    VAR_17->codecpar->height = VAR_19;


    if ((VAR_23 = FUNC_7(VAR_14, VAR_17->codecpar, VAR_15, VAR_11)) < 0)
        return VAR_23;

    if (VAR_16->audio_present) {
        VAR_16->audio_present = 1;
        VAR_17 = FUNC_3(VAR_14, ((void*)0));
        if (!VAR_17)
            return FUNC_0(VAR_10);
        FUNC_6(VAR_17, 63, 1, VAR_20);
        VAR_17->start_time = 0;
        VAR_16->audio_stream_index = VAR_17->index;
        VAR_17->codecpar->codec_type = VAR_2;
        VAR_17->codecpar->codec_tag = 1;
        VAR_17->codecpar->channels = VAR_22;
        VAR_17->codecpar->channel_layout = VAR_22 > 1 ? VAR_5 :
                                                      VAR_4;
        VAR_17->codecpar->sample_rate = VAR_20;
        VAR_17->codecpar->bits_per_coded_sample = VAR_21 * 8;
        VAR_17->codecpar->bit_rate = VAR_20 * VAR_21 * 8 * VAR_22;
        VAR_17->codecpar->block_align = VAR_16->block_align = VAR_21 * VAR_22;
        if (VAR_21 == 1)
            VAR_17->codecpar->codec_id = VAR_8;
        else
            VAR_17->codecpar->codec_id = VAR_7;

        if (VAR_20 % 14 != 0) {
            VAR_16->audio_chunk_size1 = (VAR_20 / 14) *
            VAR_21 * VAR_22;
            VAR_16->audio_chunk_size2 = (VAR_20 / 14 + 1) *
                VAR_21 * VAR_22;
        } else {
            VAR_16->audio_chunk_size1 = VAR_16->audio_chunk_size2 =
                (VAR_20 / 14) * VAR_21 * VAR_22;
        }
        VAR_16->current_audio_chunk = 0;
    }

    VAR_16->next_chunk_is_video = 1;
    VAR_16->first_pkt_pos = FUNC_5(VAR_14->pb);

    return 0;
}
