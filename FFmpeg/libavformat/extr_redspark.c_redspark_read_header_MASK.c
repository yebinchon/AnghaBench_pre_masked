
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_14__ {int sample_rate; int channels; scalar_t__ extradata; int codec_type; int codec_id; } ;
struct TYPE_13__ {TYPE_1__* priv_data; int * pb; } ;
struct TYPE_12__ {int duration; TYPE_4__* codecpar; } ;
struct TYPE_11__ {scalar_t__ samples_count; } ;
typedef TYPE_1__ RedSparkContext ;
typedef int GetByteContext ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,int ,char*,int) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (TYPE_4__*,int) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_7)
{
    AVIOContext *VAR_8 = VAR_7->pb;
    RedSparkContext *VAR_9 = VAR_7->priv_data;
    AVCodecParameters *VAR_10;
    GetByteContext VAR_11;
    int VAR_12, VAR_13, VAR_14 = 0;
    uint32_t VAR_15, VAR_16;
    uint8_t VAR_17[VAR_5];
    AVStream *VAR_18;

    VAR_18 = FUNC_3(VAR_7, ((void*)0));
    if (!VAR_18)
        return FUNC_0(VAR_4);
    VAR_10 = VAR_18->codecpar;


    VAR_16 = FUNC_4(VAR_8);
    VAR_15 = VAR_16 ^ 0x52656453;
    VAR_16 ^= VAR_15;
    FUNC_1(VAR_17, VAR_16);
    VAR_15 = FUNC_13(VAR_15, 11);

    for (VAR_12 = 4; VAR_12 < VAR_5; VAR_12 += 4) {
        VAR_15 += FUNC_13(VAR_15, 3);
        VAR_16 = FUNC_4(VAR_8) ^ VAR_15;
        FUNC_1(VAR_17 + VAR_12, VAR_16);
    }

    VAR_10->codec_id = VAR_2;
    VAR_10->codec_type = VAR_1;

    FUNC_9(&VAR_11, VAR_17, VAR_5);
    FUNC_10(&VAR_11, 0x3c, VAR_6);
    VAR_10->sample_rate = FUNC_6(&VAR_11);
    if (VAR_10->sample_rate <= 0 || VAR_10->sample_rate > 96000) {
        FUNC_2(VAR_7, VAR_3, "Invalid sample rate: %d\n", VAR_10->sample_rate);
        return VAR_0;
    }

    VAR_18->duration = FUNC_6(&VAR_11) * 14;
    VAR_9->samples_count = 0;
    FUNC_11(&VAR_11, 10);
    VAR_10->channels = FUNC_8(&VAR_11);
    if (!VAR_10->channels) {
        return VAR_0;
    }

    VAR_13 = 0x54 + VAR_10->channels * 8;
    if (FUNC_8(&VAR_11))
        VAR_13 += 16;

    if (VAR_13 + VAR_10->channels * (32 + 14) > VAR_5) {
        return VAR_0;
    }

    if (FUNC_12(VAR_10, 32 * VAR_10->channels)) {
        return VAR_0;
    }


    FUNC_10(&VAR_11, VAR_13, VAR_6);
    for (VAR_12 = 0; VAR_12 < VAR_10->channels; VAR_12++) {
        if (FUNC_7(&VAR_11, VAR_10->extradata + VAR_12 * 32, 32) != 32) {
            return VAR_0;
        }
        FUNC_11(&VAR_11, 14);
    }

    FUNC_5(VAR_18, 64, 1, VAR_10->sample_rate);

    return VAR_14;
}
