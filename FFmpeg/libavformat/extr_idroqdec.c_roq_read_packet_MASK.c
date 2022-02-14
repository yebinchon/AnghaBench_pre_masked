
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_19__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_18__ {int stream_index; unsigned int pts; int data; int pos; } ;
struct TYPE_17__ {int index; TYPE_1__* codecpar; } ;
struct TYPE_16__ {int video_stream_index; int frame_rate; int audio_stream_index; unsigned int audio_channels; unsigned int audio_frame_count; int video_pts; void* height; void* width; } ;
struct TYPE_15__ {int channels; int sample_rate; int bits_per_coded_sample; int bit_rate; int block_align; int channel_layout; int codec_tag; int codec_id; int codec_type; void* height; void* width; } ;
typedef TYPE_2__ RoqDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;





 int VAR_13 ;
 int FUNC_3 (int *,TYPE_4__*,unsigned int) ;
 int FUNC_4 (TYPE_5__*,int ,char*,unsigned int) ;
 int FUNC_5 (TYPE_4__*,unsigned int) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_3__* FUNC_7 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned char*,unsigned int) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int *,unsigned int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_3__*,int,int,int) ;
 unsigned int FUNC_14 (int *,unsigned int) ;
 int FUNC_15 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_14,
                           AVPacket *VAR_15)
{
    RoqDemuxContext *VAR_16 = VAR_14->priv_data;
    AVIOContext *VAR_17 = VAR_14->pb;
    int VAR_18 = 0;
    unsigned int VAR_19;
    unsigned int VAR_20;
    unsigned int VAR_21;
    unsigned char VAR_22[VAR_12];
    int VAR_23 = 0;
    int64_t VAR_24;

    while (!VAR_23) {

        if (FUNC_8(VAR_14->pb))
            return FUNC_0(VAR_8);


        if ((VAR_18 = FUNC_9(VAR_17, VAR_22, VAR_12)) !=
            VAR_12)
            return FUNC_0(VAR_8);

        VAR_20 = FUNC_1(&VAR_22[0]);
        VAR_19 = FUNC_2(&VAR_22[2]);
        if(VAR_19 > VAR_10)
            return VAR_0;

        VAR_19 = FUNC_14(VAR_17, VAR_19);

        switch (VAR_20) {

        case 132:
            if (VAR_16->video_stream_index == -1) {
                AVStream *VAR_25 = FUNC_7(VAR_14, ((void*)0));
                if (!VAR_25)
                    return FUNC_0(VAR_9);
                FUNC_13(VAR_25, 63, 1, VAR_16->frame_rate);
                VAR_16->video_stream_index = VAR_25->index;
                VAR_25->codecpar->codec_type = VAR_2;
                VAR_25->codecpar->codec_id = VAR_5;
                VAR_25->codecpar->codec_tag = 0;

                if (FUNC_9(VAR_17, VAR_22, VAR_12) != VAR_12)
                    return FUNC_0(VAR_8);
                VAR_25->codecpar->width = VAR_16->width = FUNC_1(VAR_22);
                VAR_25->codecpar->height = VAR_16->height = FUNC_1(VAR_22 + 2);
                break;
            }

            FUNC_11(VAR_17, VAR_12);
            break;

        case 131:
            if (VAR_16->video_stream_index < 0)
                return VAR_0;

            VAR_24 = FUNC_12(VAR_17) - VAR_12;
            VAR_21 = VAR_19;
            FUNC_11(VAR_17, VAR_21);
            if (FUNC_9(VAR_17, VAR_22, VAR_12) !=
                VAR_12)
                return FUNC_0(VAR_8);
            VAR_19 = FUNC_2(&VAR_22[2]) + VAR_12 * 2 +
                VAR_21;

            if (VAR_19 > VAR_10)
                return VAR_0;


            FUNC_10(VAR_17, VAR_24, VAR_13);


            VAR_18= FUNC_3(VAR_17, VAR_15, VAR_19);
            if (VAR_18 != VAR_19)
                return FUNC_0(VAR_8);
            VAR_15->stream_index = VAR_16->video_stream_index;
            VAR_15->pts = VAR_16->video_pts++;

            VAR_23 = 1;
            break;

        case 129:
        case 128:
            if (VAR_16->audio_stream_index == -1) {
                AVStream *VAR_26 = FUNC_7(VAR_14, ((void*)0));
                if (!VAR_26)
                    return FUNC_0(VAR_9);
                FUNC_13(VAR_26, 32, 1, VAR_11);
                VAR_16->audio_stream_index = VAR_26->index;
                VAR_26->codecpar->codec_type = VAR_1;
                VAR_26->codecpar->codec_id = VAR_6;
                VAR_26->codecpar->codec_tag = 0;
                if (VAR_20 == 128) {
                    VAR_26->codecpar->channels = 2;
                    VAR_26->codecpar->channel_layout = VAR_4;
                } else {
                    VAR_26->codecpar->channels = 1;
                    VAR_26->codecpar->channel_layout = VAR_3;
                }
                VAR_16->audio_channels = VAR_26->codecpar->channels;
                VAR_26->codecpar->sample_rate = VAR_11;
                VAR_26->codecpar->bits_per_coded_sample = 16;
                VAR_26->codecpar->bit_rate = VAR_26->codecpar->channels * VAR_26->codecpar->sample_rate *
                    VAR_26->codecpar->bits_per_coded_sample;
                VAR_26->codecpar->block_align = VAR_26->codecpar->channels * VAR_26->codecpar->bits_per_coded_sample;
            }
        case 130:
            if (VAR_20 == 130) {
                if (VAR_16->video_stream_index < 0)
                    return VAR_0;
            }


            if (FUNC_5(VAR_15, VAR_19 + VAR_12))
                return FUNC_0(VAR_8);

            FUNC_15(VAR_15->data, VAR_22, VAR_12);

            if (VAR_20 == 130) {
                VAR_15->stream_index = VAR_16->video_stream_index;
                VAR_15->pts = VAR_16->video_pts++;
            } else {
                VAR_15->stream_index = VAR_16->audio_stream_index;
                VAR_15->pts = VAR_16->audio_frame_count;
                VAR_16->audio_frame_count += (VAR_19 / VAR_16->audio_channels);
            }

            VAR_15->pos= FUNC_12(VAR_17);
            VAR_18 = FUNC_9(VAR_17, VAR_15->data + VAR_12,
                VAR_19);
            if (VAR_18 != VAR_19) {
                FUNC_6(VAR_15);
                VAR_18 = FUNC_0(VAR_8);
            }

            VAR_23 = 1;
            break;

        default:
            FUNC_4(VAR_14, VAR_7, "  unknown RoQ chunk (%04X)\n", VAR_20);
            return VAR_0;
        }
    }

    return VAR_18;
}
