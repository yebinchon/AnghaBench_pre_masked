
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_13__ {int * pb; TYPE_2__* priv_data; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {scalar_t__ data_end; } ;
struct TYPE_10__ {int sample_rate; int channels; int bits_per_coded_sample; int bit_rate; int channel_layout; int codec_id; int codec_type; } ;
typedef TYPE_2__ MMFContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,int,int,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_8)
{
    MMFContext *VAR_9 = VAR_8->priv_data;
    unsigned int VAR_10;
    AVIOContext *VAR_11 = VAR_8->pb;
    AVStream *VAR_12;
    int64_t VAR_13;
    int VAR_14, VAR_15;

    VAR_10 = FUNC_6(VAR_11);
    if (VAR_10 != FUNC_1('M', 'M', 'M', 'D'))
        return VAR_0;
    FUNC_7(VAR_11, 4);


    for (;; FUNC_7(VAR_11, VAR_13)) {
        VAR_10 = FUNC_6(VAR_11);
        VAR_13 = FUNC_5(VAR_11);
        if (VAR_10 == FUNC_1('C', 'N', 'T', 'I'))
            continue;
        if (VAR_10 == FUNC_1('O', 'P', 'D', 'A'))
            continue;
        break;
    }


    if ((VAR_10 & 0xffffff) == FUNC_1('M', 'T', 'R', 0)) {
        FUNC_2(VAR_8, VAR_6, "MIDI like format found, unsupported\n");
        return VAR_1;
    }
    if ((VAR_10 & 0xffffff) != FUNC_1('A', 'T', 'R', 0)) {
        FUNC_2(VAR_8, VAR_6, "Unsupported SMAF chunk %08x\n", VAR_10);
        return VAR_1;
    }

    FUNC_4(VAR_11);
    FUNC_4(VAR_11);
    VAR_15 = FUNC_4(VAR_11);
    VAR_14 = FUNC_10(VAR_15 & 0x0f);
    if (VAR_14 < 0) {
        FUNC_2(VAR_8, VAR_6, "Invalid sample rate\n");
        return VAR_0;
    }
    FUNC_4(VAR_11);
    FUNC_4(VAR_11);
    FUNC_4(VAR_11);


    for (;; FUNC_7(VAR_11, VAR_13)) {
        VAR_10 = FUNC_6(VAR_11);
        VAR_13 = FUNC_5(VAR_11);
        if (VAR_10 == FUNC_1('A', 't', 's', 'q'))
            continue;
        if (VAR_10 == FUNC_1('A', 's', 'p', 'I'))
            continue;
        break;
    }


    if ((VAR_10 & 0xffffff) != FUNC_1('A', 'w', 'a', 0)) {
        FUNC_2(VAR_8, VAR_6, "Unexpected SMAF chunk %08x\n", VAR_10);
        return VAR_0;
    }
    VAR_9->data_end = FUNC_8(VAR_11) + VAR_13;

    VAR_12 = FUNC_3(VAR_8, ((void*)0));
    if (!VAR_12)
        return FUNC_0(VAR_7);

    VAR_12->codecpar->codec_type = VAR_2;
    VAR_12->codecpar->codec_id = VAR_5;
    VAR_12->codecpar->sample_rate = VAR_14;
    VAR_12->codecpar->channels = (VAR_15 >> 7) + 1;
    VAR_12->codecpar->channel_layout = VAR_15 >> 7 ? VAR_4 : VAR_3;
    VAR_12->codecpar->bits_per_coded_sample = 4;
    VAR_12->codecpar->bit_rate = VAR_12->codecpar->sample_rate *
                                          VAR_12->codecpar->bits_per_coded_sample;

    FUNC_9(VAR_12, 64, 1, VAR_12->codecpar->sample_rate);

    return 0;
}
