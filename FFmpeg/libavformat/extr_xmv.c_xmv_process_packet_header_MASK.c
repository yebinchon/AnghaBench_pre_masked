
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint64_t ;
typedef size_t uint16_t ;
struct TYPE_11__ {int data_size; int frame_count; int has_extradata; int created; size_t stream_index; int data_offset; int extradata; scalar_t__ current_frame; } ;
struct TYPE_12__ {int audio_track_count; int current_stream; int stream_count; TYPE_1__ video; TYPE_3__* audio; int video_duration; int video_height; int video_width; int next_packet_size; } ;
typedef TYPE_2__ XMVDemuxContext ;
struct TYPE_13__ {int created; int channels; int sample_rate; int block_samples; size_t stream_index; int data_size; int frame_size; int block_align; void* data_offset; int bit_rate; int bits_per_sample; int compression; int codec_id; } ;
typedef TYPE_3__ XMVAudioPacket ;
struct TYPE_16__ {int channels; int sample_rate; int block_align; int extradata_size; int extradata; int bit_rate; int bits_per_coded_sample; int codec_tag; int codec_id; int codec_type; int height; int width; } ;
struct TYPE_15__ {size_t nb_streams; TYPE_4__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_14__ {size_t index; TYPE_7__* codecpar; int duration; } ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char,char,char,char) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (int *,int*,int) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int,int,int) ;
 int FUNC_10 (TYPE_7__*,int) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_5)
{
    XMVDemuxContext *VAR_6 = VAR_5->priv_data;
    AVIOContext *VAR_7 = VAR_5->pb;
    int VAR_8;

    uint8_t VAR_9[8];
    uint16_t VAR_10;
    uint64_t VAR_11;


    VAR_6->next_packet_size = FUNC_7(VAR_7);



    if (FUNC_6(VAR_7, VAR_9, 8) != 8)
        return FUNC_0(VAR_3);

    VAR_6->video.data_size = FUNC_1(VAR_9) & 0x007FFFFF;

    VAR_6->video.current_frame = 0;
    VAR_6->video.frame_count = (FUNC_1(VAR_9) >> 23) & 0xFF;

    VAR_6->video.has_extradata = (VAR_9[3] & 0x80) != 0;

    if (!VAR_6->video.created) {
        AVStream *VAR_12 = FUNC_5(VAR_5, ((void*)0));
        if (!VAR_12)
            return FUNC_0(VAR_4);

        FUNC_9(VAR_12, 32, 1, 1000);

        VAR_12->codecpar->codec_type = VAR_1;
        VAR_12->codecpar->codec_id = VAR_2;
        VAR_12->codecpar->codec_tag = FUNC_2('W', 'M', 'V', '2');
        VAR_12->codecpar->width = VAR_6->video_width;
        VAR_12->codecpar->height = VAR_6->video_height;

        VAR_12->duration = VAR_6->video_duration;

        VAR_6->video.stream_index = VAR_12->index;

        VAR_6->video.created = 1;
    }
    VAR_6->video.data_size -= VAR_6->audio_track_count * 4;

    VAR_6->current_stream = 0;
    if (!VAR_6->video.frame_count) {
        VAR_6->video.frame_count = 1;
        VAR_6->current_stream = VAR_6->stream_count > 1;
    }



    for (VAR_10 = 0; VAR_10 < VAR_6->audio_track_count; VAR_10++) {
        XMVAudioPacket *VAR_13 = &VAR_6->audio[VAR_10];

        if (FUNC_6(VAR_7, VAR_9, 4) != 4)
            return FUNC_0(VAR_3);

        if (!VAR_13->created) {
            AVStream *VAR_14 = FUNC_5(VAR_5, ((void*)0));
            if (!VAR_14)
                return FUNC_0(VAR_4);

            VAR_14->codecpar->codec_type = VAR_0;
            VAR_14->codecpar->codec_id = VAR_13->codec_id;
            VAR_14->codecpar->codec_tag = VAR_13->compression;
            VAR_14->codecpar->channels = VAR_13->channels;
            VAR_14->codecpar->sample_rate = VAR_13->sample_rate;
            VAR_14->codecpar->bits_per_coded_sample = VAR_13->bits_per_sample;
            VAR_14->codecpar->bit_rate = VAR_13->bit_rate;
            VAR_14->codecpar->block_align = 36 * VAR_13->channels;

            FUNC_9(VAR_14, 32, VAR_13->block_samples, VAR_13->sample_rate);

            VAR_13->stream_index = VAR_14->index;

            VAR_14->duration = VAR_6->video_duration;

            VAR_13->created = 1;
        }

        VAR_13->data_size = FUNC_1(VAR_9) & 0x007FFFFF;
        if ((VAR_13->data_size == 0) && (VAR_10 != 0))





            VAR_13->data_size = VAR_6->audio[VAR_10 - 1].data_size;


        VAR_13->frame_size = VAR_13->data_size / VAR_6->video.frame_count;
        VAR_13->frame_size -= VAR_13->frame_size % VAR_13->block_align;
    }



    VAR_11 = FUNC_8(VAR_7);

    VAR_6->video.data_offset = VAR_11;
    VAR_11 += VAR_6->video.data_size;

    for (VAR_10 = 0; VAR_10 < VAR_6->audio_track_count; VAR_10++) {
        VAR_6->audio[VAR_10].data_offset = VAR_11;
        VAR_11 += VAR_6->audio[VAR_10].data_size;
    }




    if (VAR_6->video.data_size > 0) {
        if (VAR_6->video.has_extradata) {
            FUNC_12(VAR_6->video.extradata, VAR_7);

            VAR_6->video.data_size -= 4;
            VAR_6->video.data_offset += 4;

            if (VAR_6->video.stream_index >= 0) {
                AVStream *VAR_15 = VAR_5->streams[VAR_6->video.stream_index];

                FUNC_3(VAR_6->video.stream_index < VAR_5->nb_streams);

                if (VAR_15->codecpar->extradata_size < 4) {
                    FUNC_4(&VAR_15->codecpar->extradata);

                    if ((VAR_8 = FUNC_10(VAR_15->codecpar, 4)) < 0)
                        return VAR_8;
                }

                FUNC_11(VAR_15->codecpar->extradata, VAR_6->video.extradata, 4);
            }
        }
    }

    return 0;
}
