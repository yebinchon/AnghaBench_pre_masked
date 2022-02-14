
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int nb_streams; } ;
struct TYPE_9__ {int id; TYPE_1__* codecpar; void* need_parsing; } ;
struct TYPE_8__ {int channels; int sample_rate; int bit_rate; int block_align; int bits_per_coded_sample; void* codec_id; void* codec_type; void* channel_layout; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
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
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_18, int VAR_19, int VAR_20) {
    int VAR_21;
    AVStream *VAR_22 = ((void*)0);
    VAR_21 = FUNC_2(VAR_18, VAR_19);
    if (VAR_21 >= 0)
        return VAR_21;
    VAR_22 = FUNC_1(VAR_18, ((void*)0));
    if (!VAR_22)
        return FUNC_0(VAR_17);
    VAR_22->id = VAR_19;
    switch (VAR_20) {
        case 3:
        case 4:
            VAR_22->codecpar->codec_type = VAR_3;
            VAR_22->codecpar->codec_id = VAR_11;
            break;
        case 13:
        case 14:
        case 15:
        case 16:
        case 25:
            VAR_22->codecpar->codec_type = VAR_3;
            VAR_22->codecpar->codec_id = VAR_9;
            break;
        case 11:
        case 12:
        case 20:
            VAR_22->codecpar->codec_type = VAR_3;
            VAR_22->codecpar->codec_id = VAR_13;
            VAR_22->need_parsing = VAR_4;
            break;
        case 22:
        case 23:
            VAR_22->codecpar->codec_type = VAR_3;
            VAR_22->codecpar->codec_id = VAR_12;
            VAR_22->need_parsing = VAR_4;
            break;
        case 9:
            VAR_22->codecpar->codec_type = VAR_0;
            VAR_22->codecpar->codec_id = VAR_16;
            VAR_22->codecpar->channels = 1;
            VAR_22->codecpar->channel_layout = VAR_5;
            VAR_22->codecpar->sample_rate = 48000;
            VAR_22->codecpar->bit_rate = 3 * 1 * 48000 * 8;
            VAR_22->codecpar->block_align = 3 * 1;
            VAR_22->codecpar->bits_per_coded_sample = 24;
            break;
        case 10:
            VAR_22->codecpar->codec_type = VAR_0;
            VAR_22->codecpar->codec_id = VAR_15;
            VAR_22->codecpar->channels = 1;
            VAR_22->codecpar->channel_layout = VAR_5;
            VAR_22->codecpar->sample_rate = 48000;
            VAR_22->codecpar->bit_rate = 2 * 1 * 48000 * 8;
            VAR_22->codecpar->block_align = 2 * 1;
            VAR_22->codecpar->bits_per_coded_sample = 16;
            break;
        case 17:
            VAR_22->codecpar->codec_type = VAR_0;
            VAR_22->codecpar->codec_id = VAR_7;
            VAR_22->codecpar->channels = 2;
            VAR_22->codecpar->channel_layout = VAR_6;
            VAR_22->codecpar->sample_rate = 48000;
            break;
        case 26:
        case 29:
            VAR_22->codecpar->codec_type = VAR_3;
            VAR_22->codecpar->codec_id = VAR_10;
            VAR_22->need_parsing = VAR_4;
            break;

        case 7:
        case 8:
        case 24:
            VAR_22->codecpar->codec_type = VAR_1;
            VAR_22->codecpar->codec_id = VAR_14;
            break;
        case 30:
            VAR_22->codecpar->codec_type = VAR_3;
            VAR_22->codecpar->codec_id = VAR_8;
            break;
        default:
            VAR_22->codecpar->codec_type = VAR_2;
            VAR_22->codecpar->codec_id = VAR_14;
            break;
    }
    return VAR_18->nb_streams - 1;
}
