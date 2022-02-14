
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {int audio_stream_index; void* bps; void* channels; void* sample_rate; void* version; int video_stream_index; } ;
typedef TYPE_1__ WsVqaDemuxContext ;
struct TYPE_14__ {void** extradata; void* height; void* width; scalar_t__ codec_tag; int codec_id; int codec_type; } ;
struct TYPE_13__ {int ctx_flags; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_12__ {void* duration; void* nb_frames; TYPE_6__* codecpar; int index; scalar_t__ start_time; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void**) ;
 void* FUNC_2 (void**) ;




 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int *,void**,int) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_6__*,int *,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_10)
{
    WsVqaDemuxContext *VAR_11 = VAR_10->priv_data;
    AVIOContext *VAR_12 = VAR_10->pb;
    AVStream *VAR_13;
    uint8_t *VAR_14;
    uint8_t VAR_15[VAR_9];
    uint32_t VAR_16;
    uint32_t VAR_17;
    int VAR_18;


    VAR_13 = FUNC_5(VAR_10, ((void*)0));
    if (!VAR_13)
        return FUNC_0(VAR_6);
    VAR_13->start_time = 0;
    VAR_11->video_stream_index = VAR_13->index;
    VAR_13->codecpar->codec_type = VAR_2;
    VAR_13->codecpar->codec_id = VAR_3;
    VAR_13->codecpar->codec_tag = 0;


    FUNC_7(VAR_12, 20, VAR_7);


    if (FUNC_10(VAR_10, VAR_13->codecpar, VAR_12, VAR_8) < 0)
        return FUNC_0(VAR_6);
    VAR_14 = VAR_13->codecpar->extradata;
    VAR_13->codecpar->width = FUNC_2(&VAR_14[6]);
    VAR_13->codecpar->height = FUNC_2(&VAR_14[8]);
    VAR_18 = VAR_14[12];
    VAR_13->nb_frames =
    VAR_13->duration = FUNC_2(&VAR_14[4]);
    if (VAR_18 < 1 || VAR_18 > 30) {
        FUNC_4(VAR_10, VAR_4, "invalid fps: %d\n", VAR_18);
        return VAR_0;
    }
    FUNC_9(VAR_13, 64, 1, VAR_18);

    VAR_11->version = FUNC_2(&VAR_14[ 0]);
    VAR_11->sample_rate = FUNC_2(&VAR_14[24]);
    VAR_11->channels = VAR_14[26];
    VAR_11->bps = VAR_14[27];
    VAR_11->audio_stream_index = -1;

    VAR_10->ctx_flags |= VAR_1;



    do {
        if (FUNC_6(VAR_12, VAR_15, VAR_9) != VAR_9)
            return FUNC_0(VAR_5);
        VAR_16 = FUNC_1(&VAR_15[0]);
        VAR_17 = FUNC_1(&VAR_15[4]);


        switch (VAR_16) {
        case 134:
        case 133:
        case 135:
        case 129:
        case 128:
        case 130:
        case 131:
        case 132:
            break;

        default:
            FUNC_4(VAR_10, VAR_4, " note: unknown chunk seen (%s)\n",
                   FUNC_3(VAR_16));
            break;
        }

        FUNC_8(VAR_12, VAR_17);
    } while (VAR_16 != 131);

    return 0;
}
