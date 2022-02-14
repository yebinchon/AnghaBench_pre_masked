
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_25__ {int channels; int sample_rate; int bits_per_coded_sample; int codec_id; int codec_type; int extradata_size; int extradata; } ;
struct TYPE_24__ {int seekable; } ;
struct TYPE_23__ {int error_recognition; TYPE_5__* pb; TYPE_1__* priv_data; } ;
struct TYPE_22__ {int duration; TYPE_9__* codecpar; scalar_t__ start_time; } ;
struct TYPE_21__ {int frame_size; int last_frame_size; int totalframes; scalar_t__ currentframe; } ;
typedef TYPE_1__ TTAContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_2__*,scalar_t__,int,int,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_9 (TYPE_5__*,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_2__*,int,int,int) ;
 scalar_t__ FUNC_12 (TYPE_9__*,scalar_t__) ;
 int FUNC_13 (TYPE_3__*) ;
 int VAR_11 ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_12)
{
    TTAContext *VAR_13 = VAR_12->priv_data;
    AVStream *VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18;
    int64_t VAR_19, VAR_20;
    uint32_t VAR_21, VAR_22;

    FUNC_14(VAR_12);

    VAR_20 = FUNC_10(VAR_12->pb);
    if (VAR_20 < 0)
        return VAR_20;
    FUNC_16(VAR_12->pb, VAR_11, VAR_9);
    if (FUNC_7(VAR_12->pb) != FUNC_1("TTA1"))
        return VAR_0;

    FUNC_9(VAR_12->pb, 2);
    VAR_16 = FUNC_6(VAR_12->pb);
    VAR_17 = FUNC_6(VAR_12->pb);
    VAR_18 = FUNC_7(VAR_12->pb);
    if(VAR_18 <= 0 || VAR_18 > 1000000){
        FUNC_3(VAR_12, VAR_6, "nonsense samplerate\n");
        return VAR_0;
    }

    VAR_21 = FUNC_7(VAR_12->pb);
    if (!VAR_21) {
        FUNC_3(VAR_12, VAR_6, "invalid number of samples\n");
        return VAR_0;
    }

    VAR_22 = FUNC_15(VAR_12->pb) ^ VAR_9;
    if (VAR_22 != FUNC_7(VAR_12->pb) && VAR_12->error_recognition & VAR_5) {
        FUNC_3(VAR_12, VAR_6, "Header CRC error\n");
        return VAR_0;
    }

    VAR_13->frame_size = VAR_18 * 256 / 245;
    VAR_13->last_frame_size = VAR_21 % VAR_13->frame_size;
    if (!VAR_13->last_frame_size)
        VAR_13->last_frame_size = VAR_13->frame_size;
    VAR_13->totalframes = VAR_21 / VAR_13->frame_size + (VAR_13->last_frame_size < VAR_13->frame_size);
    VAR_13->currentframe = 0;

    if(VAR_13->totalframes >= VAR_10/sizeof(uint32_t) || VAR_13->totalframes <= 0){
        FUNC_3(VAR_12, VAR_6, "totalframes %d invalid\n", VAR_13->totalframes);
        return VAR_0;
    }

    VAR_14 = FUNC_4(VAR_12, ((void*)0));
    if (!VAR_14)
        return FUNC_0(VAR_7);

    FUNC_11(VAR_14, 64, 1, VAR_18);
    VAR_14->start_time = 0;
    VAR_14->duration = VAR_21;

    VAR_19 = FUNC_10(VAR_12->pb);
    if (VAR_19 < 0)
        return VAR_19;
    VAR_19 += 4 * VAR_13->totalframes + 4;

    if (FUNC_12(VAR_14->codecpar, FUNC_10(VAR_12->pb) - VAR_20))
        return FUNC_0(VAR_7);

    FUNC_8(VAR_12->pb, VAR_20, VAR_8);
    FUNC_5(VAR_12->pb, VAR_14->codecpar->extradata, VAR_14->codecpar->extradata_size);

    FUNC_16(VAR_12->pb, VAR_11, VAR_9);
    for (VAR_15 = 0; VAR_15 < VAR_13->totalframes; VAR_15++) {
        uint32_t VAR_23 = FUNC_7(VAR_12->pb);
        int VAR_24;
        if ((VAR_24 = FUNC_2(VAR_14, VAR_19, VAR_15 * VAR_13->frame_size, VAR_23, 0,
                                    VAR_1)) < 0)
            return VAR_24;
        VAR_19 += VAR_23;
    }
    VAR_22 = FUNC_15(VAR_12->pb) ^ VAR_9;
    if (VAR_22 != FUNC_7(VAR_12->pb) && VAR_12->error_recognition & VAR_5) {
        FUNC_3(VAR_12, VAR_6, "Seek table CRC error\n");
        return VAR_0;
    }

    VAR_14->codecpar->codec_type = VAR_3;
    VAR_14->codecpar->codec_id = VAR_4;
    VAR_14->codecpar->channels = VAR_16;
    VAR_14->codecpar->sample_rate = VAR_18;
    VAR_14->codecpar->bits_per_coded_sample = VAR_17;

    if (VAR_12->pb->seekable & VAR_2) {
        int64_t VAR_25 = FUNC_10(VAR_12->pb);
        FUNC_13(VAR_12);
        FUNC_8(VAR_12->pb, VAR_25, VAR_8);
    }

    return 0;
}
