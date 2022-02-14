
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_12__ {int * pb; } ;
struct TYPE_11__ {unsigned int duration; TYPE_1__* codecpar; } ;
struct TYPE_10__ {int codec_tag; int codec_id; int channels; int sample_rate; int block_align; int channel_layout; int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int FUNC_6 (TYPE_2__*,int,int,int) ;
 int FUNC_7 (int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_6)
{
    AVIOContext *VAR_7 = VAR_6->pb;
    int VAR_8, VAR_9, VAR_10;
    unsigned int VAR_11;
    enum AVCodecID VAR_12;
    AVStream *VAR_13;

    VAR_8 = FUNC_3(VAR_7);
    VAR_11 = FUNC_3(VAR_7);
    VAR_9 = FUNC_3(VAR_7);
    FUNC_3(VAR_7);

    VAR_12 = FUNC_7(VAR_5, VAR_8);

    if (VAR_12 == VAR_3) {
        FUNC_4(VAR_6, "ADPCM in RSO");
        return VAR_0;
    }

    VAR_10 = FUNC_1(VAR_12);
    if (!VAR_10) {
        FUNC_5(VAR_6, "Unknown bits per sample");
        return VAR_0;
    }


    VAR_13 = FUNC_2(VAR_6, ((void*)0));
    if (!VAR_13)
        return FUNC_0(VAR_4);

    VAR_13->duration = (VAR_11 * 8) / VAR_10;
    VAR_13->codecpar->codec_type = VAR_1;
    VAR_13->codecpar->codec_tag = VAR_8;
    VAR_13->codecpar->codec_id = VAR_12;
    VAR_13->codecpar->channels = 1;
    VAR_13->codecpar->channel_layout = VAR_2;
    VAR_13->codecpar->sample_rate = VAR_9;
    VAR_13->codecpar->block_align = 1;

    FUNC_6(VAR_13, 64, 1, VAR_9);

    return 0;
}
