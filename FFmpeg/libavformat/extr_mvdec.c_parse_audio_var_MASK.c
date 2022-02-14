
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int nb_frames; TYPE_1__* codecpar; } ;
struct TYPE_12__ {int aformat; int acompression; } ;
struct TYPE_11__ {int sample_rate; int bits_per_coded_sample; } ;
typedef TYPE_2__ MvContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_4__*,char const*,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1, AVStream *VAR_2,
                           const char *VAR_3, int VAR_4)
{
    MvContext *VAR_5 = VAR_1->priv_data;
    AVIOContext *VAR_6 = VAR_1->pb;
    if (!FUNC_2(VAR_3, "__DIR_COUNT")) {
        VAR_2->nb_frames = FUNC_3(VAR_6, VAR_4);
    } else if (!FUNC_2(VAR_3, "AUDIO_FORMAT")) {
        VAR_5->aformat = FUNC_3(VAR_6, VAR_4);
    } else if (!FUNC_2(VAR_3, "COMPRESSION")) {
        VAR_5->acompression = FUNC_3(VAR_6, VAR_4);
    } else if (!FUNC_2(VAR_3, "DEFAULT_VOL")) {
        FUNC_4(VAR_1, VAR_3, VAR_4);
    } else if (!FUNC_2(VAR_3, "NUM_CHANNELS")) {
        return FUNC_1(VAR_1, VAR_2, FUNC_3(VAR_6, VAR_4));
    } else if (!FUNC_2(VAR_3, "SAMPLE_RATE")) {
        VAR_2->codecpar->sample_rate = FUNC_3(VAR_6, VAR_4);
        FUNC_0(VAR_2, 33, 1, VAR_2->codecpar->sample_rate);
    } else if (!FUNC_2(VAR_3, "SAMPLE_WIDTH")) {
        VAR_2->codecpar->bits_per_coded_sample = FUNC_3(VAR_6, VAR_4) * 8;
    } else
        return VAR_0;

    return 0;
}
