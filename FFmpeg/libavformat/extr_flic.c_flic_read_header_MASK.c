
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int width; int height; int block_align; int sample_rate; int channels; int bit_rate; int bits_per_coded_sample; int extradata; scalar_t__ extradata_size; int channel_layout; scalar_t__ codec_tag; int codec_id; int codec_type; } ;
struct TYPE_12__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_11__ {TYPE_5__* codecpar; int index; } ;
struct TYPE_10__ {int audio_stream_index; int video_stream_index; scalar_t__ frame_number; } ;
typedef TYPE_1__ FlicDemuxContext ;
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
 void* FUNC_1 (unsigned char*) ;
 void* FUNC_2 (unsigned char*) ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (int *,unsigned char*,int) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int) ;
 int FUNC_10 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_22)
{
    FlicDemuxContext *VAR_23 = VAR_22->priv_data;
    AVIOContext *VAR_24 = VAR_22->pb;
    unsigned char VAR_25[VAR_15];
    AVStream *VAR_26, *VAR_27;
    int VAR_28;
    int VAR_29;
    unsigned char VAR_30[VAR_17];

    VAR_23->frame_number = 0;


    if (FUNC_6(VAR_24, VAR_25, VAR_15) != VAR_15)
        return FUNC_0(VAR_8);

    VAR_29 = FUNC_1(&VAR_25[4]);
    VAR_28 = FUNC_2(&VAR_25[0x10]);
    if (VAR_28 == 0)
        VAR_28 = VAR_11;


    VAR_26 = FUNC_5(VAR_22, ((void*)0));
    if (!VAR_26)
        return FUNC_0(VAR_9);
    VAR_23->video_stream_index = VAR_26->index;
    VAR_26->codecpar->codec_type = VAR_2;
    VAR_26->codecpar->codec_id = VAR_4;
    VAR_26->codecpar->codec_tag = 0;
    VAR_26->codecpar->width = FUNC_1(&VAR_25[0x08]);
    VAR_26->codecpar->height = FUNC_1(&VAR_25[0x0A]);

    if (!VAR_26->codecpar->width || !VAR_26->codecpar->height) {


        FUNC_4(VAR_22, VAR_7,
               "File with no specified width/height. Trying 640x480.\n");
        VAR_26->codecpar->width = 640;
        VAR_26->codecpar->height = 480;
    }


    if (FUNC_9(VAR_26->codecpar, VAR_15))
        return FUNC_0(VAR_9);
    FUNC_10(VAR_26->codecpar->extradata, VAR_25, VAR_15);


    if (FUNC_6(VAR_24, VAR_30, VAR_17) != VAR_17) {
        FUNC_4(VAR_22, VAR_6, "Failed to peek at preamble\n");
        return FUNC_0(VAR_8);
    }

    FUNC_7(VAR_24, -VAR_17, VAR_20);







    if (FUNC_1(&VAR_30[4]) == VAR_18) {

        VAR_27 = FUNC_5(VAR_22, ((void*)0));
        if (!VAR_27)
            return FUNC_0(VAR_9);

        VAR_23->audio_stream_index = VAR_27->index;


        VAR_27->codecpar->block_align = FUNC_2(&VAR_30[0]);
        VAR_27->codecpar->codec_type = VAR_1;
        VAR_27->codecpar->codec_id = VAR_5;
        VAR_27->codecpar->codec_tag = 0;
        VAR_27->codecpar->sample_rate = VAR_19;
        VAR_27->codecpar->channels = 1;
        VAR_27->codecpar->bit_rate = VAR_26->codecpar->sample_rate * 8;
        VAR_27->codecpar->bits_per_coded_sample = 8;
        VAR_27->codecpar->channel_layout = VAR_3;
        VAR_27->codecpar->extradata_size = 0;




        FUNC_8(VAR_26, 64, VAR_27->codecpar->block_align, VAR_19);
        FUNC_8(VAR_27, 64, 1, VAR_19);
    } else if (FUNC_1(&VAR_25[0x10]) == VAR_10) {
        FUNC_8(VAR_26, 64, VAR_16, 70);


        FUNC_7(VAR_24, 12, VAR_21);


        FUNC_3(&VAR_26->codecpar->extradata);
        if (FUNC_9(VAR_26->codecpar, 12))
            return FUNC_0(VAR_9);
        FUNC_10(VAR_26->codecpar->extradata, VAR_25, 12);

    } else if (VAR_29 == VAR_12) {
        FUNC_8(VAR_26, 64, VAR_28, 70);
    } else if ((VAR_29 == VAR_13) ||
               (VAR_29 == VAR_14)) {
        FUNC_8(VAR_26, 64, VAR_28, 1000);
    } else {
        FUNC_4(VAR_22, VAR_6, "Invalid or unsupported magic chunk in file\n");
        return VAR_0;
    }

    return 0;
}
