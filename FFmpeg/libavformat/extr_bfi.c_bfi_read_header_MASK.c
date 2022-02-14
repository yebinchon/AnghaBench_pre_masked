
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {int sample_rate; int channels; int bits_per_coded_sample; int bit_rate; int channel_layout; int codec_id; int codec_type; int format; void* height; void* width; } ;
struct TYPE_13__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_12__ {TYPE_5__* codecpar; void* duration; void* nb_frames; } ;
struct TYPE_11__ {void* nframes; } ;
typedef TYPE_1__ BFIContext ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


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
 int FUNC_1 (TYPE_3__*,int ,char*,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_2__*,int,int,int) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*,int *,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext * VAR_10)
{
    BFIContext *VAR_11 = VAR_10->priv_data;
    AVIOContext *VAR_12 = VAR_10->pb;
    AVStream *VAR_13;
    AVStream *VAR_14;
    int VAR_15, VAR_16, VAR_17;


    VAR_13 = FUNC_2(VAR_10, ((void*)0));
    if (!VAR_13)
        return FUNC_0(VAR_8);


    VAR_14 = FUNC_2(VAR_10, ((void*)0));
    if (!VAR_14)
        return FUNC_0(VAR_8);


    FUNC_5(VAR_12, 8);
    VAR_17 = FUNC_3(VAR_12);
    VAR_11->nframes = FUNC_3(VAR_12);
    FUNC_3(VAR_12);
    FUNC_3(VAR_12);
    FUNC_3(VAR_12);
    VAR_16 = FUNC_3(VAR_12);
    FUNC_5(VAR_12, 12);
    VAR_13->codecpar->width = FUNC_3(VAR_12);
    VAR_13->codecpar->height = FUNC_3(VAR_12);


    FUNC_5(VAR_12, 8);
    VAR_15 = FUNC_7(VAR_10, VAR_13->codecpar, VAR_12, 768);
    if (VAR_15 < 0)
        return VAR_15;

    VAR_14->codecpar->sample_rate = FUNC_3(VAR_12);
    if (VAR_14->codecpar->sample_rate <= 0) {
        FUNC_1(VAR_10, VAR_6, "Invalid sample rate %d\n", VAR_14->codecpar->sample_rate);
        return VAR_0;
    }


    FUNC_6(VAR_13, 32, 1, VAR_16);
    VAR_13->codecpar->codec_type = VAR_2;
    VAR_13->codecpar->codec_id = VAR_4;
    VAR_13->codecpar->format = VAR_7;
    VAR_13->nb_frames =
    VAR_13->duration = VAR_11->nframes;


    VAR_14->codecpar->codec_type = VAR_1;
    VAR_14->codecpar->codec_id = VAR_5;
    VAR_14->codecpar->channels = 1;
    VAR_14->codecpar->channel_layout = VAR_3;
    VAR_14->codecpar->bits_per_coded_sample = 8;
    VAR_14->codecpar->bit_rate =
        (int64_t)VAR_14->codecpar->sample_rate * VAR_14->codecpar->bits_per_coded_sample;
    FUNC_4(VAR_12, VAR_17 - 3, VAR_9);
    FUNC_6(VAR_14, 64, 1, VAR_14->codecpar->sample_rate);
    return 0;
}
