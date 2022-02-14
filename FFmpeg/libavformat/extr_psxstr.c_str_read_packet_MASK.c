
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {TYPE_3__* priv_data; int * pb; } ;
struct TYPE_19__ {int size; int pos; int duration; int stream_index; int * data; int * buf; } ;
struct TYPE_18__ {int start_time; TYPE_1__* codecpar; int index; } ;
struct TYPE_17__ {TYPE_2__* channels; } ;
struct TYPE_16__ {int audio_stream_index; int video_stream_index; TYPE_5__ tmp_pkt; } ;
struct TYPE_15__ {int channels; int sample_rate; int block_align; int channel_layout; int codec_tag; int codec_id; int codec_type; void* height; void* width; } ;
typedef TYPE_3__ StrDemuxContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


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
 void* FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;


 unsigned char VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_6__*,int ,char*,...) ;
 int FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_4__* FUNC_6 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*,int,int,int) ;
 int FUNC_11 (int *,unsigned char*,int) ;
 int FUNC_12 (int *,int ,int) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_15,
                           AVPacket *VAR_16)
{
    AVIOContext *VAR_17 = VAR_15->pb;
    StrDemuxContext *VAR_18 = VAR_15->priv_data;
    unsigned char VAR_19[VAR_12];
    int VAR_20;
    AVPacket *VAR_21;
    AVStream *VAR_22;

    while (1) {

        if (FUNC_8(VAR_17, VAR_19, VAR_12) != VAR_12)
            return FUNC_0(VAR_10);

        VAR_20 = VAR_19[0x11];
        if (VAR_20 >= 32)
            return VAR_0;

        switch (VAR_19[0x12] & VAR_9) {

        case 129:
        case 128:
            {

                int VAR_23 = FUNC_1(&VAR_19[0x1C]);
                int VAR_24 = FUNC_1(&VAR_19[0x1E]);
                int VAR_25 = FUNC_2(&VAR_19[0x24]);

                if(!( VAR_25>=0
                     && VAR_23 < VAR_24
                     && VAR_24*VAR_13 >=VAR_25)){
                    FUNC_3(VAR_15, VAR_7, "Invalid parameters %d %d %d\n", VAR_23, VAR_24, VAR_25);
                    break;
                }

                if(VAR_18->channels[VAR_20].video_stream_index < 0){

                    VAR_22 = FUNC_6(VAR_15, ((void*)0));
                    if (!VAR_22)
                        return FUNC_0(VAR_11);
                    FUNC_10(VAR_22, 64, 1, 15);

                    VAR_18->channels[VAR_20].video_stream_index = VAR_22->index;

                    VAR_22->codecpar->codec_type = VAR_2;
                    VAR_22->codecpar->codec_id = VAR_6;
                    VAR_22->codecpar->codec_tag = 0;
                    VAR_22->codecpar->width = FUNC_1(&VAR_19[0x28]);
                    VAR_22->codecpar->height = FUNC_1(&VAR_19[0x2A]);
                }


                VAR_21 = &VAR_18->channels[VAR_20].tmp_pkt;

                if(VAR_21->size != VAR_24*VAR_13){
                    if(VAR_21->data)
                        FUNC_3(VAR_15, VAR_7, "mismatching sector_count\n");
                    FUNC_5(VAR_21);
                    if (FUNC_4(VAR_21, VAR_24*VAR_13))
                        return FUNC_0(VAR_10);
                    FUNC_12(VAR_21->data, 0, VAR_24*VAR_13);

                    VAR_21->pos= FUNC_9(VAR_17) - VAR_12;
                    VAR_21->stream_index =
                        VAR_18->channels[VAR_20].video_stream_index;
                }

                FUNC_11(VAR_21->data + VAR_23*VAR_13,
                       VAR_19 + VAR_14,
                       VAR_13);

                if (VAR_23 == VAR_24-1) {
                    VAR_21->size= VAR_25;
                    *VAR_16 = *VAR_21;
                    VAR_21->data= ((void*)0);
                    VAR_21->size= -1;
                    VAR_21->buf = ((void*)0);
                    return 0;
                }

            }
            break;

        case 130:
            if(VAR_18->channels[VAR_20].audio_stream_index < 0){
                int VAR_26 = VAR_19[0x13];

                VAR_22 = FUNC_6(VAR_15, ((void*)0));
                if (!VAR_22)
                    return FUNC_0(VAR_11);

                VAR_18->channels[VAR_20].audio_stream_index = VAR_22->index;

                VAR_22->codecpar->codec_type = VAR_1;
                VAR_22->codecpar->codec_id = VAR_5;
                VAR_22->codecpar->codec_tag = 0;
                if (VAR_26 & 1) {
                    VAR_22->codecpar->channels = 2;
                    VAR_22->codecpar->channel_layout = VAR_4;
                } else {
                    VAR_22->codecpar->channels = 1;
                    VAR_22->codecpar->channel_layout = VAR_3;
                }
                VAR_22->codecpar->sample_rate = (VAR_26&4)?18900:37800;

                VAR_22->codecpar->block_align = 128;

                FUNC_10(VAR_22, 64, 18 * 224 / VAR_22->codecpar->channels,
                                    VAR_22->codecpar->sample_rate);
                VAR_22->start_time = 0;
            }
            VAR_21 = VAR_16;
            if (FUNC_4(VAR_21, 2304))
                return FUNC_0(VAR_10);
            FUNC_11(VAR_21->data,VAR_19+24,2304);

            VAR_21->stream_index =
                VAR_18->channels[VAR_20].audio_stream_index;
            VAR_21->duration = 1;
            return 0;
        default:
            FUNC_3(VAR_15, VAR_8, "Unknown sector type %02X\n", VAR_19[0x12]);

            break;
        }

        if (FUNC_7(VAR_17))
            return FUNC_0(VAR_10);
    }
}
