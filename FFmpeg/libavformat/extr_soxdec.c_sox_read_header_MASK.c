
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {int metadata; int * pb; } ;
struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int channels; double sample_rate; int bits_per_coded_sample; int bit_rate; int block_align; int codec_id; int codec_type; } ;
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
 double VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_1 (int *,char*,char*,int ) ;
 int FUNC_2 (char**) ;
 double FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 char* FUNC_5 (unsigned int) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 unsigned int FUNC_9 (int *,char*,unsigned int) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned int) ;
 int FUNC_13 (TYPE_2__*,int,int,double) ;
 double FUNC_14 (double) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_13)
{
    AVIOContext *VAR_14 = VAR_13->pb;
    unsigned VAR_15, VAR_16;
    double VAR_17, VAR_18;
    AVStream *VAR_19;

    VAR_19 = FUNC_6(VAR_13, ((void*)0));
    if (!VAR_19)
        return FUNC_0(VAR_8);

    VAR_19->codecpar->codec_type = VAR_1;

    if (FUNC_10(VAR_14) == VAR_11) {
        VAR_19->codecpar->codec_id = VAR_3;
        VAR_15 = FUNC_10(VAR_14);
        FUNC_12(VAR_14, 8);
        VAR_17 = FUNC_3(FUNC_11(VAR_14));
        VAR_19->codecpar->channels = FUNC_10(VAR_14);
        VAR_16 = FUNC_10(VAR_14);
    } else {
        VAR_19->codecpar->codec_id = VAR_2;
        VAR_15 = FUNC_7(VAR_14);
        FUNC_12(VAR_14, 8);
        VAR_17 = FUNC_3(FUNC_8(VAR_14));
        VAR_19->codecpar->channels = FUNC_7(VAR_14);
        VAR_16 = FUNC_7(VAR_14);
    }

    if (VAR_16 > 0xFFFFFFFFU - VAR_10 - 4U) {
        FUNC_4(VAR_13, VAR_5, "invalid comment size (%u)\n", VAR_16);
        return VAR_0;
    }

    if (VAR_17 <= 0 || VAR_17 > VAR_9) {
        FUNC_4(VAR_13, VAR_5, "invalid sample rate (%f)\n", VAR_17);
        return VAR_0;
    }

    VAR_18 = VAR_17 - FUNC_14(VAR_17);
    if (VAR_18)
        FUNC_4(VAR_13, VAR_6,
               "truncating fractional part of sample rate (%f)\n",
               VAR_18);

    if ((VAR_15 + 4) & 7 || VAR_15 < VAR_10 + VAR_16
        || VAR_19->codecpar->channels > 65535) {
        FUNC_4(VAR_13, VAR_5, "invalid header\n");
        return VAR_0;
    }

    if (VAR_16 && VAR_16 < VAR_12) {
        char *VAR_20 = FUNC_5(VAR_16+1);
        if(!VAR_20)
            return FUNC_0(VAR_8);
        if (FUNC_9(VAR_14, VAR_20, VAR_16) != VAR_16) {
            FUNC_2(&VAR_20);
            return FUNC_0(VAR_7);
        }
        VAR_20[VAR_16] = 0;

        FUNC_1(&VAR_13->metadata, "comment", VAR_20,
                               VAR_4);
    }

    FUNC_12(VAR_14, VAR_15 - VAR_10 - VAR_16);

    VAR_19->codecpar->sample_rate = VAR_17;
    VAR_19->codecpar->bits_per_coded_sample = 32;
    VAR_19->codecpar->bit_rate = (int64_t)VAR_19->codecpar->sample_rate *
                                          VAR_19->codecpar->bits_per_coded_sample *
                                          VAR_19->codecpar->channels;
    VAR_19->codecpar->block_align = VAR_19->codecpar->bits_per_coded_sample *
                                          VAR_19->codecpar->channels / 8;

    FUNC_13(VAR_19, 64, 1, VAR_19->codecpar->sample_rate);

    return 0;
}
