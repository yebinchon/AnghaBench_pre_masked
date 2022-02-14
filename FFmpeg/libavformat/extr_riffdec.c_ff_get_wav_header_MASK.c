
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef long long uint64_t ;
struct TYPE_5__ {long long sample_rate; int bits_per_coded_sample; int codec_tag; long long bit_rate; int codec_id; void* channels; scalar_t__* extradata; void* block_align; int codec_type; } ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__*) ;
 long long FUNC_2 (scalar_t__*) ;
 int VAR_6 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__**) ;
 int FUNC_5 (int *,int ,char*,long long) ;
 void* FUNC_6 (int *) ;
 long long FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;
 long long FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 scalar_t__ FUNC_13 (int *,TYPE_1__*,int *,int) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int *,int *,TYPE_1__*) ;

int FUNC_16(AVFormatContext *VAR_7, AVIOContext *VAR_8,
                      AVCodecParameters *VAR_9, int VAR_10, int VAR_11)
{
    int VAR_12;
    uint64_t VAR_13 = 0;

    if (VAR_10 < 14) {
        FUNC_12(VAR_7, "wav header size < 14");
        return VAR_0;
    }

    VAR_9->codec_type = VAR_2;
    if (!VAR_11) {
        VAR_12 = FUNC_8(VAR_8);
        if (VAR_12 != 0x0165) {
            VAR_9->channels = FUNC_8(VAR_8);
            VAR_9->sample_rate = FUNC_9(VAR_8);
            VAR_13 = FUNC_9(VAR_8) * 8LL;
            VAR_9->block_align = FUNC_8(VAR_8);
        }
    } else {
        VAR_12 = FUNC_6(VAR_8);
        VAR_9->channels = FUNC_6(VAR_8);
        VAR_9->sample_rate = FUNC_7(VAR_8);
        VAR_13 = FUNC_7(VAR_8) * 8LL;
        VAR_9->block_align = FUNC_6(VAR_8);
    }
    if (VAR_10 == 14) {
        VAR_9->bits_per_coded_sample = 8;
    } else {
        if (!VAR_11) {
            VAR_9->bits_per_coded_sample = FUNC_8(VAR_8);
        } else {
            VAR_9->bits_per_coded_sample = FUNC_6(VAR_8);
        }
    }
    if (VAR_12 == 0xFFFE) {
        VAR_9->codec_tag = 0;
    } else {
        VAR_9->codec_tag = VAR_12;
        VAR_9->codec_id = FUNC_14(VAR_12,
                                             VAR_9->bits_per_coded_sample);
    }
    if (VAR_10 >= 18 && VAR_12 != 0x0165) {
        int VAR_14 = FUNC_8(VAR_8);
        if (VAR_11) {
            FUNC_11(VAR_7, "WAVEFORMATEX support for RIFX files");
            return VAR_1;
        }
        VAR_10 -= 18;
        VAR_14 = FUNC_3(VAR_10, VAR_14);
        if (VAR_14 >= 22 && VAR_12 == 0xfffe) {
            FUNC_15(VAR_7, VAR_8, VAR_9);
            VAR_14 -= 22;
            VAR_10 -= 22;
        }
        if (VAR_14 > 0) {
            FUNC_4(&VAR_9->extradata);
            if (FUNC_13(VAR_7, VAR_9, VAR_8, VAR_14) < 0)
                return FUNC_0(VAR_6);
            VAR_10 -= VAR_14;
        }


        if (VAR_10 > 0)
            FUNC_10(VAR_8, VAR_10);
    } else if (VAR_12 == 0x0165 && VAR_10 >= 32) {
        int VAR_15, VAR_16;

        VAR_10 -= 4;
        FUNC_4(&VAR_9->extradata);
        if (FUNC_13(VAR_7, VAR_9, VAR_8, VAR_10) < 0)
            return FUNC_0(VAR_6);
        VAR_15 = FUNC_1(VAR_9->extradata + 4);
        VAR_9->sample_rate = FUNC_2(VAR_9->extradata + 12);
        VAR_9->channels = 0;
        VAR_13 = 0;
        if (VAR_10 < 8 + VAR_15 * 20)
            return VAR_0;
        for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
            VAR_9->channels += VAR_9->extradata[8 + VAR_16 * 20 + 17];
    }

    VAR_9->bit_rate = VAR_13;

    if (VAR_9->sample_rate <= 0) {
        FUNC_5(VAR_7, VAR_5,
               "Invalid sample rate: %d\n", VAR_9->sample_rate);
        return VAR_0;
    }
    if (VAR_9->codec_id == VAR_3) {


        VAR_9->channels = 0;
        VAR_9->sample_rate = 0;
    }

    if (VAR_9->codec_id == VAR_4 && VAR_9->sample_rate)
        VAR_9->bits_per_coded_sample = VAR_9->bit_rate / VAR_9->sample_rate;

    return 0;
}
