
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_12__ {int block_duration; } ;
struct TYPE_11__ {int channels; int bits_per_coded_sample; int sample_rate; int codec_id; int block_align; int bit_rate; int codec_tag; int codec_type; } ;
struct TYPE_10__ {TYPE_4__* priv_data; TYPE_1__** streams; int * pb; } ;
struct TYPE_9__ {TYPE_3__* codecpar; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVCodecParameters ;
typedef TYPE_4__ AIFFInputContext ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;




 int VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,char*,int) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_2__*,char*,int ) ;
 int VAR_7 ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_8, int VAR_9,
                                    unsigned VAR_10)
{
    AVIOContext *VAR_11 = VAR_8->pb;
    AVCodecParameters *VAR_12 = VAR_8->streams[0]->codecpar;
    AIFFInputContext *VAR_13 = VAR_8->priv_data;
    int VAR_14;
    uint64_t VAR_15;
    int VAR_16;
    unsigned int VAR_17;

    if (VAR_9 & 1)
        VAR_9++;
    VAR_12->codec_type = VAR_3;
    VAR_12->channels = FUNC_5(VAR_11);
    VAR_17 = FUNC_6(VAR_11);
    VAR_12->bits_per_coded_sample = FUNC_5(VAR_11);

    VAR_14 = FUNC_5(VAR_11) - 16383 - 63;
    VAR_15 = FUNC_7(VAR_11);
    if (VAR_14 <-63 || VAR_14 >63) {
        FUNC_4(VAR_8, VAR_6, "exp %d is out of range\n", VAR_14);
        return VAR_2;
    }
    if (VAR_14 >= 0)
        VAR_16 = VAR_15 << VAR_14;
    else
        VAR_16 = (VAR_15 + (1ULL<<(-VAR_14-1))) >> -VAR_14;
    VAR_12->sample_rate = VAR_16;
    VAR_9 -= 18;


    if (VAR_9 < 4) {
        VAR_10 = VAR_0;
    } else if (VAR_10 == VAR_1) {
        VAR_12->codec_tag = FUNC_8(VAR_11);
        VAR_12->codec_id = FUNC_11(VAR_7, VAR_12->codec_tag);
        if (VAR_12->codec_id == VAR_4)
            FUNC_10(VAR_8, "unknown or unsupported codec tag: %s",
                                  FUNC_1(VAR_12->codec_tag));
        VAR_9 -= 4;
    }

    if (VAR_10 != VAR_1 || VAR_12->codec_id == VAR_5) {
        VAR_12->codec_id = FUNC_0(VAR_12->bits_per_coded_sample);
        VAR_12->bits_per_coded_sample = FUNC_3(VAR_12->codec_id);
        VAR_13->block_duration = 1;
    } else {
        switch (VAR_12->codec_id) {
        case 132:
        case 131:
        case 129:
        case 133:
        case 130:
            VAR_13->block_duration = 1;
            break;
        case 138:
            VAR_12->block_align = 34 * VAR_12->channels;
            break;
        case 135:
            VAR_12->block_align = 2 * VAR_12->channels;
            break;
        case 139:
            VAR_12->bits_per_coded_sample = 5;
        case 137:
        case 140:
        case 134:
        case 128:
            VAR_12->block_align = 1 * VAR_12->channels;
            break;
        case 136:
            VAR_12->block_align = 33;
            break;
        default:
            VAR_13->block_duration = 1;
            break;
        }
        if (VAR_12->block_align > 0)
            VAR_13->block_duration = FUNC_2(VAR_12,
                                                                VAR_12->block_align);
    }



    if (!VAR_12->block_align)
        VAR_12->block_align = (FUNC_3(VAR_12->codec_id) * VAR_12->channels) >> 3;

    if (VAR_13->block_duration) {
        VAR_12->bit_rate = (int64_t)VAR_12->sample_rate * (VAR_12->block_align << 3) /
                        VAR_13->block_duration;
    }


    if (VAR_9)
        FUNC_9(VAR_11, VAR_9);

    return VAR_17;
}
