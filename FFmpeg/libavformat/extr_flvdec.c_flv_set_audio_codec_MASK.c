
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bits_per_coded_sample; int sample_rate; int codec_tag; void* codec_id; } ;
struct TYPE_5__ {int need_parsing; } ;
typedef TYPE_1__ AVStream ;
typedef int AVFormatContext ;
typedef TYPE_2__ AVCodecParameters ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_12, AVStream *VAR_13,
                                AVCodecParameters *VAR_14, int VAR_15)
{
    switch (VAR_15) {

    case 132:
        VAR_14->codec_id = VAR_14->bits_per_coded_sample == 8
                           ? VAR_9



                           : VAR_8;

        break;
    case 130:
        VAR_14->codec_id = VAR_14->bits_per_coded_sample == 8
                           ? VAR_9
                           : VAR_8;
        break;
    case 138:
        VAR_14->codec_id = VAR_1;
        break;
    case 137:
        VAR_14->codec_id = VAR_2;
        break;
    case 128:
        VAR_14->codec_id = VAR_10;
        VAR_14->sample_rate = 16000;
        break;
    case 136:
        VAR_14->codec_id = VAR_3;
        VAR_13->need_parsing = VAR_0;
        break;
    case 133:

        VAR_14->sample_rate = 8000;
        VAR_14->codec_id = VAR_4;
        break;
    case 134:
        VAR_14->sample_rate = 16000;
        VAR_14->codec_id = VAR_4;
        break;
    case 135:
        VAR_14->codec_id = VAR_4;
        break;
    case 129:
        VAR_14->sample_rate = 8000;
        VAR_14->codec_id = VAR_6;
        break;
    case 131:
        VAR_14->sample_rate = 8000;
        VAR_14->codec_id = VAR_5;
        break;
    default:
        FUNC_0(VAR_12, "Audio codec (%x)",
               VAR_15 >> VAR_11);
        VAR_14->codec_tag = VAR_15 >> VAR_11;
    }
}
