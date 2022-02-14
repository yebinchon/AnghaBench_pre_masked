
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_20__ {TYPE_3__** streams; } ;
struct TYPE_19__ {scalar_t__* data; int pos; size_t stream_index; int duration; int flags; } ;
struct TYPE_18__ {size_t index; TYPE_1__* codecpar; } ;
struct TYPE_17__ {size_t video_index; scalar_t__ audio_index; int width; int height; int bethsoft_global_delay; scalar_t__* palette; int nframes; int sample_rate; } ;
struct TYPE_16__ {int width; int height; int codec_id; int codec_type; } ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__* FUNC_1 (scalar_t__*,unsigned int*,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__**) ;
 int FUNC_4 (TYPE_5__*,int ,char*) ;
 scalar_t__* FUNC_5 (unsigned int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 scalar_t__* FUNC_7 (TYPE_4__*,int ,int) ;
 TYPE_3__* FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,scalar_t__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_5__*,char*) ;
 int FUNC_15 (TYPE_3__*,int,int,int ) ;
 int FUNC_16 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_17(BVID_DemuxContext *VAR_13, AVIOContext *VAR_14, AVPacket *VAR_15,
                      uint8_t VAR_16, AVFormatContext *VAR_17)
{
    uint8_t * VAR_18 = ((void*)0);
    int VAR_19 = 0;
    int VAR_20;
    int VAR_21 = 0;
    int VAR_22, VAR_23, VAR_24;
    unsigned int VAR_25;
    int VAR_26 = 0;
    AVStream *VAR_27;

    if (VAR_13->video_index < 0) {
        VAR_27 = FUNC_8(VAR_17, ((void*)0));
        if (!VAR_27)
            return FUNC_0(VAR_9);
        VAR_13->video_index = VAR_27->index;
        if (VAR_13->audio_index < 0) {
            FUNC_14(VAR_17, "Using default video time base since "
                                  "having no audio packet before the first "
                                  "video packet");
        }
        FUNC_15(VAR_27, 64, 185, VAR_13->sample_rate);
        VAR_27->codecpar->codec_type = VAR_1;
        VAR_27->codecpar->codec_id = VAR_2;
        VAR_27->codecpar->width = VAR_13->width;
        VAR_27->codecpar->height = VAR_13->height;
    }
    VAR_27 = VAR_17->streams[VAR_13->video_index];
    VAR_24 = VAR_27->codecpar->width * VAR_27->codecpar->height;

    VAR_18 = FUNC_5(VAR_25 = VAR_6);
    if(!VAR_18)
        return FUNC_0(VAR_9);


    VAR_22 = FUNC_13(VAR_14) - 1;

    VAR_18[VAR_19++] = VAR_16;


    VAR_23 = VAR_13->bethsoft_global_delay + FUNC_11(VAR_14);


    if(VAR_16 == VAR_12){
        if (FUNC_10(VAR_14, &VAR_18[VAR_19], 2) != 2) {
            VAR_26 = FUNC_0(VAR_8);
            goto fail;
        }
        VAR_19 += 2;
    }

    do{
        VAR_18 = FUNC_1(VAR_18, &VAR_25, VAR_19 + VAR_6);
        if(!VAR_18)
            return FUNC_0(VAR_9);

        VAR_20 = FUNC_9(VAR_14);
        VAR_18[VAR_19++] = VAR_20;

        if(VAR_20 >= 0x80){
            if(VAR_16 == VAR_11)
                VAR_18[VAR_19++] = FUNC_9(VAR_14);
        } else if(VAR_20){
            if (FUNC_10(VAR_14, &VAR_18[VAR_19], VAR_20) != VAR_20) {
                VAR_26 = FUNC_0(VAR_8);
                goto fail;
            }
            VAR_19 += VAR_20;
        }
        VAR_21 += VAR_20 & 0x7F;
        if(VAR_21 == VAR_24){

            if(FUNC_9(VAR_14))
                FUNC_12(VAR_14, -1, VAR_10);
            break;
        }
        if (VAR_21 > VAR_24) {
            VAR_26 = VAR_0;
            goto fail;
        }
    } while(VAR_20);


    if ((VAR_26 = FUNC_6(VAR_15, VAR_19)) < 0)
        goto fail;
    FUNC_16(VAR_15->data, VAR_18, VAR_19);

    VAR_15->pos = VAR_22;
    VAR_15->stream_index = VAR_13->video_index;
    VAR_15->duration = VAR_23;
    if (VAR_16 == VAR_11)
        VAR_15->flags |= VAR_5;


    if (VAR_13->palette) {
        uint8_t *VAR_28 = FUNC_7(VAR_15, VAR_4,
                                                 VAR_7);
        if (!VAR_28) {
            VAR_26 = FUNC_0(VAR_9);
            FUNC_4(VAR_17, VAR_3, "Failed to allocate palette side data\n");
            goto fail;
        }
        FUNC_16(VAR_28, VAR_13->palette, VAR_7);

        FUNC_3(&VAR_13->palette);
    }

    VAR_13->nframes--;
fail:
    FUNC_2(VAR_18);
    return VAR_26;
}
