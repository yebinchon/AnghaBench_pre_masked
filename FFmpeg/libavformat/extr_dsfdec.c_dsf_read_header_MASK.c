
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_23__ {TYPE_2__* internal; TYPE_5__* pb; TYPE_3__* priv_data; } ;
struct TYPE_22__ {int seekable; } ;
struct TYPE_21__ {TYPE_1__* codecpar; } ;
struct TYPE_20__ {int audio_size; int data_end; int data_size; } ;
struct TYPE_19__ {void* data_offset; } ;
struct TYPE_18__ {int channels; int sample_rate; int block_align; long long bit_rate; int codec_id; int codec_type; int channel_layout; } ;
typedef TYPE_3__ DSFContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (int *) ;
 int VAR_6 ;
 int FUNC_2 (char,char,char,char) ;
 int VAR_7 ;
 TYPE_4__* FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int,int ) ;
 int FUNC_7 (TYPE_5__*,int) ;
 void* FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_6__*,char*,...) ;
 int FUNC_10 (TYPE_4__*,int,int,long long) ;
 int * VAR_8 ;
 int FUNC_11 (TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_12(AVFormatContext *VAR_9)
{
    DSFContext *VAR_10 = VAR_9->priv_data;
    AVIOContext *VAR_11 = VAR_9->pb;
    AVStream *VAR_12;
    uint64_t VAR_13;
    unsigned int VAR_14;

    FUNC_7(VAR_11, 4);
    if (FUNC_5(VAR_11) != 28)
        return VAR_0;


    VAR_12 = FUNC_3(VAR_9, ((void*)0));
    if (!VAR_12)
        return FUNC_0(VAR_5);

    FUNC_7(VAR_11, 8);
    VAR_13 = FUNC_5(VAR_11);
    if (VAR_11->seekable & VAR_1) {
        FUNC_11(VAR_9, VAR_13);
        FUNC_6(VAR_11, 28, VAR_7);
    }



    if (FUNC_4(VAR_11) != FUNC_2('f', 'm', 't', ' ') || FUNC_5(VAR_11) != 52)
        return VAR_0;

    if (FUNC_4(VAR_11) != 1) {
        FUNC_9(VAR_9, "unknown format version");
        return VAR_0;
    }

    if (FUNC_4(VAR_11)) {
        FUNC_9(VAR_9, "unknown format id");
        return VAR_0;
    }

    VAR_14 = FUNC_4(VAR_11);
    if (VAR_14 < FUNC_1(VAR_8))
        VAR_12->codecpar->channel_layout = VAR_8[VAR_14];
    if (!VAR_12->codecpar->channel_layout)
        FUNC_9(VAR_9, "channel type %i", VAR_14);

    VAR_12->codecpar->codec_type = VAR_2;
    VAR_12->codecpar->channels = FUNC_4(VAR_11);
    VAR_12->codecpar->sample_rate = FUNC_4(VAR_11) / 8;

    if (VAR_12->codecpar->channels <= 0)
        return VAR_0;

    switch(FUNC_4(VAR_11)) {
    case 1: VAR_12->codecpar->codec_id = VAR_3; break;
    case 8: VAR_12->codecpar->codec_id = VAR_4; break;
    default:
        FUNC_9(VAR_9, "unknown most significant bit");
        return VAR_0;
    }

    VAR_10->audio_size = FUNC_5(VAR_11) / 8 * VAR_12->codecpar->channels;
    VAR_12->codecpar->block_align = FUNC_4(VAR_11);
    if (VAR_12->codecpar->block_align > VAR_6 / VAR_12->codecpar->channels) {
        FUNC_9(VAR_9, "block_align overflow");
        return VAR_0;
    }
    VAR_12->codecpar->block_align *= VAR_12->codecpar->channels;
    VAR_12->codecpar->bit_rate = VAR_12->codecpar->channels * VAR_12->codecpar->sample_rate * 8LL;
    FUNC_10(VAR_12, 64, 1, VAR_12->codecpar->sample_rate);
    FUNC_7(VAR_11, 4);



    VAR_10->data_end = FUNC_8(VAR_11);
    if (FUNC_4(VAR_11) != FUNC_2('d', 'a', 't', 'a'))
        return VAR_0;
    VAR_10->data_size = FUNC_5(VAR_11) - 12;
    VAR_10->data_end += VAR_10->data_size + 12;
    VAR_9->internal->data_offset = FUNC_8(VAR_11);

    return 0;
}
