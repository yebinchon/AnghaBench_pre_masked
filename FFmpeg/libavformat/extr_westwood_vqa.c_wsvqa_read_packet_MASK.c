
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int audio_stream_index; int sample_rate; int channels; int bps; int video_stream_index; int version; } ;
typedef TYPE_1__ WsVqaDemuxContext ;
struct TYPE_17__ {int sample_rate; int bits_per_coded_sample; int channels; int extradata; int codec_id; int codec_type; } ;
struct TYPE_16__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_15__ {int stream_index; int duration; int data; } ;
struct TYPE_14__ {int index; TYPE_7__* codecpar; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;

 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_3__*,int) ;
 int FUNC_7 (TYPE_4__*,int ,char*,int ) ;
 TYPE_2__* FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (TYPE_2__*,int,int,int) ;
 int FUNC_12 (TYPE_7__*,int) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_9,
                             AVPacket *VAR_10)
{
    WsVqaDemuxContext *VAR_11 = VAR_9->priv_data;
    AVIOContext *VAR_12 = VAR_9->pb;
    int VAR_13 = -1;
    uint8_t VAR_14[VAR_8];
    uint32_t VAR_15;
    uint32_t VAR_16;
    int VAR_17;

    while (FUNC_9(VAR_12, VAR_14, VAR_8) == VAR_8) {
        VAR_15 = FUNC_1(&VAR_14[0]);
        VAR_16 = FUNC_1(&VAR_14[4]);

        VAR_17 = VAR_16 & 0x01;

        if ((VAR_15 == 131) || (VAR_15 == 130) ||
            (VAR_15 == 129) || (VAR_15 == 128)) {

            VAR_13= FUNC_6(VAR_12, VAR_10, VAR_16);
            if (VAR_13<0)
                return FUNC_0(VAR_6);

            switch (VAR_15) {
            case 131:
            case 130:
            case 129:
                if (VAR_11->audio_stream_index == -1) {
                    AVStream *VAR_18 = FUNC_8(VAR_9, ((void*)0));
                    if (!VAR_18)
                        return FUNC_0(VAR_7);

                    VAR_11->audio_stream_index = VAR_18->index;
                    if (!VAR_11->sample_rate)
                        VAR_11->sample_rate = 22050;
                    if (!VAR_11->channels)
                        VAR_11->channels = 1;
                    if (!VAR_11->bps)
                        VAR_11->bps = 8;
                    VAR_18->codecpar->sample_rate = VAR_11->sample_rate;
                    VAR_18->codecpar->bits_per_coded_sample = VAR_11->bps;
                    VAR_18->codecpar->channels = VAR_11->channels;
                    VAR_18->codecpar->codec_type = VAR_0;

                    FUNC_11(VAR_18, 64, 1, VAR_18->codecpar->sample_rate);

                    switch (VAR_15) {
                    case 131:
                        if (VAR_11->bps == 16)
                            VAR_18->codecpar->codec_id = VAR_2;
                        else
                            VAR_18->codecpar->codec_id = VAR_3;
                        break;
                    case 130:
                        VAR_18->codecpar->codec_id = VAR_4;
                        break;
                    case 129:
                        VAR_18->codecpar->codec_id = VAR_1;
                        if (FUNC_12(VAR_18->codecpar, 2))
                            return FUNC_0(VAR_7);
                        FUNC_3(VAR_18->codecpar->extradata, VAR_11->version);
                        break;
                    }
                }

                VAR_10->stream_index = VAR_11->audio_stream_index;
                switch (VAR_15) {
                case 130:

                    if(VAR_10->data)
                        VAR_10->duration = FUNC_2(VAR_10->data) / VAR_11->channels;
                    break;
                case 129:

                    VAR_10->duration = (VAR_16 * 2) / VAR_11->channels;
                    break;
                }
                break;
            case 128:
                VAR_10->stream_index = VAR_11->video_stream_index;
                VAR_10->duration = 1;
                break;
            }


            if (VAR_17)
                FUNC_10(VAR_12, 1);

            return VAR_13;
        } else {
            switch(VAR_15){
            case 132:
                break;
            default:
                FUNC_7(VAR_9, VAR_5, "Skipping unknown chunk %s\n",
                       FUNC_5(FUNC_4(VAR_15)));
            }
            FUNC_10(VAR_12, VAR_16 + VAR_17);
        }
    }

    return VAR_13;
}
