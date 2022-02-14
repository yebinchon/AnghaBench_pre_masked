
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int8_t ;
typedef int int64_t ;
struct TYPE_16__ {TYPE_4__** streams; TYPE_3__* priv_data; int * pb; } ;
struct TYPE_15__ {int time_base; TYPE_1__* codecpar; } ;
struct TYPE_14__ {int packet_count; int audio_index; int video_index; TYPE_2__* start; } ;
struct TYPE_13__ {struct TYPE_13__* next; } ;
struct TYPE_12__ {int codec_id; scalar_t__ format; int height; int width; int channels; int bits_per_coded_sample; int sample_rate; } ;
typedef TYPE_2__ FILMPacket ;
typedef TYPE_3__ FILMOutputContext ;
typedef TYPE_4__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_4)
{
    int VAR_5 = 0;
    int64_t VAR_6, VAR_7, VAR_8;
    int8_t VAR_9;
    AVIOContext *VAR_10 = VAR_4->pb;
    FILMOutputContext *VAR_11 = VAR_4->priv_data;
    FILMPacket *VAR_12, *VAR_13;
    AVStream *VAR_14 = ((void*)0);
    AVStream *VAR_15 = ((void*)0);



    VAR_6 = VAR_11->packet_count * 16;
    VAR_7 = 16 + VAR_6;
    VAR_8 = 16 +
                 32 +
                 VAR_7;

    VAR_5 = FUNC_13(VAR_4, VAR_8);
    if (VAR_5 < 0)
        return VAR_5;

    FUNC_6(VAR_10, 0, VAR_3);

    if (VAR_11->audio_index > -1)
        VAR_14 = VAR_4->streams[VAR_11->audio_index];
    if (VAR_11->video_index > -1)
        VAR_15 = VAR_4->streams[VAR_11->video_index];

    if (VAR_14 != ((void*)0)) {
        VAR_9 = FUNC_12(VAR_14->codecpar->codec_id);
        if (VAR_9 < 0) {
            FUNC_3(VAR_4, VAR_0, "Incompatible audio stream format.\n");
            return FUNC_0(VAR_2);
        }
    }

    if (VAR_15->codecpar->format != VAR_1) {
        FUNC_3(VAR_4, VAR_0, "Pixel format must be rgb24.\n");
        return FUNC_0(VAR_2);
    }



    FUNC_10(VAR_10, "FILM");
    FUNC_9(VAR_10, 48 + VAR_7);


    FUNC_10(VAR_10, "1.09");

    FUNC_9(VAR_10, 0);


    FUNC_10(VAR_10, "FDSC");
    FUNC_9(VAR_10, 0x20);


    switch (VAR_15->codecpar->codec_id) {
    case 129:
        FUNC_10(VAR_10, "cvid");
        break;
    case 128:
        FUNC_10(VAR_10, "raw ");
        break;
    default:
        FUNC_3(VAR_4, VAR_0, "Incompatible video stream format.\n");
        return FUNC_0(VAR_2);
    }

    FUNC_9(VAR_10, VAR_15->codecpar->height);
    FUNC_9(VAR_10, VAR_15->codecpar->width);
    FUNC_7(VAR_10, 24);

    if (VAR_14 != ((void*)0)) {
        FUNC_7(VAR_10, VAR_14->codecpar->channels);
        FUNC_7(VAR_10, VAR_14->codecpar->bits_per_coded_sample);
        FUNC_7(VAR_10, VAR_9);
        FUNC_8(VAR_10, VAR_14->codecpar->sample_rate);
    } else {

        FUNC_7(VAR_10, 0);
        FUNC_7(VAR_10, 0);
        FUNC_7(VAR_10, 0);
        FUNC_8(VAR_10, 0);
    }


    FUNC_9(VAR_10, 0);
    FUNC_8(VAR_10, 0);


    FUNC_10(VAR_10, "STAB");
    FUNC_9(VAR_10, 16 + (VAR_11->packet_count * 16));
    FUNC_9(VAR_10, FUNC_4(FUNC_2(VAR_15->time_base)));

    FUNC_9(VAR_10, VAR_11->packet_count);

    FUNC_5(VAR_10);


    VAR_13 = VAR_11->start;
    while (VAR_13 != ((void*)0)) {
        FUNC_11(VAR_4, VAR_13);
        VAR_12 = VAR_13;
        VAR_13 = VAR_13->next;
        FUNC_1(&VAR_12);
    }

    return 0;
}
