
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int duration; int flags; int stream_index; } ;
struct TYPE_18__ {int start_time; TYPE_1__* codecpar; int index; } ;
struct TYPE_17__ {int is_finished; int sample_rate; int nframes; int audio_index; int palette; } ;
struct TYPE_16__ {int channels; int bits_per_coded_sample; int sample_rate; int bit_rate; int channel_layout; int codec_id; int codec_type; } ;
typedef TYPE_2__ BVID_DemuxContext ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;






 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*,int,int,int) ;
 int FUNC_11 (TYPE_2__*,int *,TYPE_4__*,unsigned char,TYPE_5__*) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_12,
                           AVPacket *VAR_13)
{
    BVID_DemuxContext *VAR_14 = VAR_12->priv_data;
    AVIOContext *VAR_15 = VAR_12->pb;
    unsigned char VAR_16;
    int VAR_17;
    int VAR_18;

    if(VAR_14->is_finished || FUNC_6(VAR_15))
        return VAR_0;

    VAR_16 = FUNC_7(VAR_15);
    switch(VAR_16){
        case 131:
            if (VAR_14->palette) {
                FUNC_3(VAR_12, VAR_7, "discarding unused palette\n");
                FUNC_1(&VAR_14->palette);
            }
            VAR_14->palette = FUNC_4(VAR_9);
            if (!VAR_14->palette)
                return FUNC_0(VAR_11);
            if (FUNC_8(VAR_15, VAR_14->palette, VAR_9) != VAR_9) {
                FUNC_1(&VAR_14->palette);
                return FUNC_0(VAR_10);
            }
            return FUNC_12(VAR_12, VAR_13);

        case 132:
            FUNC_9(VAR_15);

            VAR_14->sample_rate = 1000000 / (256 - FUNC_7(VAR_15));
        case 134:
            if (VAR_14->audio_index < 0) {
                AVStream *VAR_19 = FUNC_5(VAR_12, ((void*)0));
                if (!VAR_19)
                    return FUNC_0(VAR_11);
                VAR_14->audio_index = VAR_19->index;
                VAR_19->codecpar->codec_type = VAR_2;
                VAR_19->codecpar->codec_id = VAR_4;
                VAR_19->codecpar->channels = 1;
                VAR_19->codecpar->channel_layout = VAR_3;
                VAR_19->codecpar->bits_per_coded_sample = 8;
                VAR_19->codecpar->sample_rate = VAR_14->sample_rate;
                VAR_19->codecpar->bit_rate = 8 * VAR_19->codecpar->sample_rate;
                VAR_19->start_time = 0;
                FUNC_10(VAR_19, 64, 1, VAR_14->sample_rate);
            }
            VAR_17 = FUNC_9(VAR_15);
            if ((VAR_18 = FUNC_2(VAR_15, VAR_13, VAR_17)) != VAR_17) {
                if (VAR_18 < 0)
                    return VAR_18;
                FUNC_3(VAR_12, VAR_5, "incomplete audio block\n");
                return FUNC_0(VAR_10);
            }
            VAR_13->stream_index = VAR_14->audio_index;
            VAR_13->duration = VAR_17;
            VAR_13->flags |= VAR_8;
            return 0;

        case 129:
        case 128:
        case 130:
            return FUNC_11(VAR_14, VAR_15, VAR_13, VAR_16, VAR_12);

        case 133:
            if(VAR_14->nframes != 0)
                FUNC_3(VAR_12, VAR_6, "reached terminating character but not all frames read.\n");
            VAR_14->is_finished = 1;
            return FUNC_0(VAR_10);
        default:
            FUNC_3(VAR_12, VAR_5, "unknown block (character = %c, decimal = %d, hex = %x)!!!\n",
                   VAR_16, VAR_16, VAR_16);
            return VAR_1;
    }
}
