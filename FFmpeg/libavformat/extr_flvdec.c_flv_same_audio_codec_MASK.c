
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int codec_id; int codec_tag; int bits_per_coded_sample; int sample_rate; } ;
typedef TYPE_1__ AVCodecParameters ;


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
 int VAR_11 ;
 int VAR_12 ;
__attribute__((used)) static int FUNC_0(AVCodecParameters *VAR_13, int VAR_14)
{
    int VAR_15 = (VAR_14 & VAR_12) ? 16 : 8;
    int VAR_16 = VAR_14 & VAR_10;
    int VAR_17;

    if (!VAR_13->codec_id && !VAR_13->codec_tag)
        return 1;

    if (VAR_13->bits_per_coded_sample != VAR_15)
        return 0;

    switch (VAR_16) {

    case 132:
        VAR_17 = VAR_15 == 8
                   ? VAR_8



                   : VAR_7;

        return VAR_17 == VAR_13->codec_id;
    case 130:
        VAR_17 = VAR_15 == 8
                   ? VAR_8
                   : VAR_7;
        return VAR_17 == VAR_13->codec_id;
    case 138:
        return VAR_13->codec_id == VAR_0;
    case 137:
        return VAR_13->codec_id == VAR_1;
    case 128:
        return VAR_13->codec_id == VAR_9;
    case 136:
        return VAR_13->codec_id == VAR_2;
    case 133:
    case 134:
    case 135:
        return VAR_13->codec_id == VAR_3;
    case 129:
        return VAR_13->sample_rate == 8000 &&
               VAR_13->codec_id == VAR_5;
    case 131:
        return VAR_13->sample_rate == 8000 &&
               VAR_13->codec_id == VAR_4;
    default:
        return VAR_13->codec_tag == (VAR_16 >> VAR_11);
    }
}
