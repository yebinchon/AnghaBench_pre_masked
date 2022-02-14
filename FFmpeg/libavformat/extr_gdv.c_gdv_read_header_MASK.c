
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {unsigned int id; void* height; void* width; } ;
struct TYPE_14__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {TYPE_1__* codecpar; scalar_t__ start_time; void* nb_frames; void* duration; } ;
struct TYPE_12__ {unsigned int audio_size; int is_audio; int* pal; int is_first_video; } ;
struct TYPE_11__ {unsigned int sample_rate; int channels; void* height; void* width; scalar_t__ codec_tag; int codec_id; int codec_type; } ;
typedef TYPE_2__ GDVContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
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
 int FUNC_1 (TYPE_9__*) ;
 TYPE_9__* VAR_8 ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 unsigned int FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__*,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_9)
{
    GDVContext *VAR_10 = VAR_9->priv_data;
    AVIOContext *VAR_11 = VAR_9->pb;
    AVStream *VAR_12, *VAR_13;
    unsigned VAR_14, VAR_15, VAR_16, VAR_17;

    FUNC_5(VAR_11, 4);
    VAR_17 = FUNC_4(VAR_11);

    VAR_12 = FUNC_2(VAR_9, 0);
    if (!VAR_12)
        return FUNC_0(VAR_7);

    VAR_12->start_time = 0;
    VAR_12->duration =
    VAR_12->nb_frames = FUNC_4(VAR_11);

    VAR_14 = FUNC_4(VAR_11);
    if (!VAR_14)
        return VAR_0;

    VAR_15 = FUNC_4(VAR_11);
    if (VAR_15 & 1) {
        VAR_13 = FUNC_2(VAR_9, 0);
        if (!VAR_13)
            return FUNC_0(VAR_7);

        VAR_13->start_time = 0;
        VAR_13->codecpar->codec_type = VAR_1;
        VAR_13->codecpar->codec_tag = 0;
        VAR_13->codecpar->sample_rate = FUNC_4(VAR_11);
        VAR_13->codecpar->channels = 1 + !!(VAR_15 & 2);
        if (VAR_15 & 8) {
            VAR_13->codecpar->codec_id = VAR_4;
        } else {
            VAR_13->codecpar->codec_id = (VAR_15 & 4) ? VAR_5 : VAR_6;
        }

        FUNC_6(VAR_13, 64, 1, VAR_13->codecpar->sample_rate);
        VAR_10->audio_size = (VAR_13->codecpar->sample_rate / VAR_14) *
                           VAR_13->codecpar->channels * (1 + !!(VAR_15 & 4)) / (1 + !!(VAR_15 & 8));
        VAR_10->is_audio = 1;
    } else {
        FUNC_5(VAR_11, 2);
    }
    VAR_16 = FUNC_4(VAR_11);
    FUNC_5(VAR_11, 4);

    VAR_12->codecpar->codec_type = VAR_2;
    VAR_12->codecpar->codec_id = VAR_3;
    VAR_12->codecpar->codec_tag = 0;
    VAR_12->codecpar->width = FUNC_4(VAR_11);
    VAR_12->codecpar->height = FUNC_4(VAR_11);

    if (VAR_12->codecpar->width == 0 || VAR_12->codecpar->height == 0) {
        int VAR_18;

        for (VAR_18 = 0; VAR_18 < FUNC_1(VAR_8) - 1; VAR_18++) {
            if (VAR_8[VAR_18].id == VAR_17)
                break;
        }

        VAR_12->codecpar->width = VAR_8[VAR_18].width;
        VAR_12->codecpar->height = VAR_8[VAR_18].height;
    }

    FUNC_6(VAR_12, 64, 1, VAR_14);

    if (VAR_16 & 1) {
        int VAR_19;

        for (VAR_19 = 0; VAR_19 < 256; VAR_19++) {
            unsigned VAR_20 = FUNC_3(VAR_11);
            unsigned VAR_21 = FUNC_3(VAR_11);
            unsigned VAR_22 = FUNC_3(VAR_11);
            VAR_10->pal[VAR_19] = 0xFFU << 24 | VAR_20 << 18 | VAR_21 << 10 | VAR_22 << 2;
        }
    }

    VAR_10->is_first_video = 1;

    return 0;
}
