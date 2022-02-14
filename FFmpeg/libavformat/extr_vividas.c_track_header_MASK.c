
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;
typedef int VividasDemuxContext ;
struct TYPE_7__ {int extradata_size; int* extradata; void* sample_rate; void* channels; int codec_id; int codec_type; void* height; void* width; } ;
struct TYPE_5__ {void* den; void* num; } ;
struct TYPE_6__ {int id; TYPE_3__* codecpar; void* nb_frames; TYPE_1__ time_base; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


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
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int**) ;
 int FUNC_3 (int *,int ,char*,int) ;
 unsigned int FUNC_4 (int*,int) ;
 TYPE_2__* FUNC_5 (int *,int *) ;
 int * FUNC_6 (int*,int,int ,int *,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int*,int) ;
 void* FUNC_9 (int *) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(VividasDemuxContext *VAR_10, AVFormatContext *VAR_11, uint8_t *VAR_12, int VAR_13)
{
    int VAR_14,VAR_15;
    int64_t VAR_16;
    int VAR_17;
    int VAR_18, VAR_19;
    AVIOContext *VAR_20;

    VAR_20 = FUNC_6(VAR_12, VAR_13, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_20)
        return FUNC_0(VAR_6);

    FUNC_14(VAR_20);
    FUNC_7(VAR_20);

    VAR_17 = FUNC_14(VAR_20);

    for (VAR_14=0;VAR_14<VAR_17;VAR_14++) {
        int VAR_21 = FUNC_7(VAR_20);
        for (VAR_15=0;VAR_15<VAR_21;VAR_15++) {
            FUNC_7(VAR_20);
            FUNC_7(VAR_20);
        }
    }

    FUNC_7(VAR_20);

    VAR_16 = FUNC_12(VAR_20);
    VAR_16 += FUNC_14(VAR_20);

    FUNC_7(VAR_20);
    VAR_18 = FUNC_7(VAR_20);

    FUNC_11(VAR_20, VAR_16, VAR_9);
    if (VAR_18 != 1)
        FUNC_3(VAR_11, VAR_5, "number of video tracks %d is not 1\n", VAR_18);

    for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
        AVStream *VAR_22 = FUNC_5(VAR_11, ((void*)0));

        VAR_22->id = VAR_14;

        VAR_22->codecpar->codec_type = VAR_2;
        VAR_22->codecpar->codec_id = VAR_4;

        VAR_16 = FUNC_12(VAR_20);
        VAR_16 += FUNC_14(VAR_20);
        FUNC_7(VAR_20);
        FUNC_7(VAR_20);
        VAR_22->time_base.num = FUNC_10(VAR_20);
        VAR_22->time_base.den = FUNC_10(VAR_20);
        VAR_22->nb_frames = FUNC_10(VAR_20);
        VAR_22->codecpar->width = FUNC_9(VAR_20);
        VAR_22->codecpar->height = FUNC_9(VAR_20);
        FUNC_7(VAR_20);
        FUNC_10(VAR_20);

        FUNC_11(VAR_20, VAR_16, VAR_9);
    }

    VAR_16 = FUNC_12(VAR_20);
    VAR_16 += FUNC_14(VAR_20);
    FUNC_7(VAR_20);
    VAR_19 = FUNC_7(VAR_20);
    FUNC_11(VAR_20, VAR_16, VAR_9);

    if (VAR_19 != 1)
        FUNC_3(VAR_11, VAR_5, "number of audio tracks %d is not 1\n", VAR_19);

    for(VAR_14=0;VAR_14<VAR_19;VAR_14++) {
        int VAR_23;
        AVStream *VAR_24 = FUNC_5(VAR_11, ((void*)0));

        VAR_24->id = VAR_18 + VAR_14;

        VAR_24->codecpar->codec_type = VAR_1;
        VAR_24->codecpar->codec_id = VAR_3;

        VAR_16 = FUNC_12(VAR_20);
        VAR_16 += FUNC_14(VAR_20);
        FUNC_7(VAR_20);
        FUNC_7(VAR_20);
        FUNC_9(VAR_20);
        VAR_24->codecpar->channels = FUNC_9(VAR_20);
        VAR_24->codecpar->sample_rate = FUNC_10(VAR_20);
        FUNC_11(VAR_20, 10, VAR_8);
        VAR_23 = FUNC_7(VAR_20);
        FUNC_11(VAR_20, VAR_23, VAR_8);
        FUNC_7(VAR_20);

        if (FUNC_12(VAR_20) < VAR_16) {
            int VAR_25;
            int VAR_26 = 0;
            int VAR_27[256];
            int VAR_28 = 1;
            uint8_t *VAR_29;
            FUNC_14(VAR_20);
            FUNC_7(VAR_20);
            FUNC_14(VAR_20);
            VAR_25 = FUNC_7(VAR_20);
            for (VAR_15 = 0; VAR_15 < VAR_25; VAR_15++) {
                uint64_t VAR_30 = FUNC_14(VAR_20);
                if (VAR_30 > VAR_7/2 - VAR_26) {
                    FUNC_1(VAR_20);
                    return VAR_0;
                }
                VAR_27[VAR_15] = VAR_30;
                VAR_26 += VAR_30;
            }

            VAR_24->codecpar->extradata_size = 64 + VAR_26 + VAR_26 / 255;
            if (FUNC_13(VAR_24->codecpar, VAR_24->codecpar->extradata_size)) {
                FUNC_1(VAR_20);
                return FUNC_0(VAR_6);
            }

            VAR_29 = VAR_24->codecpar->extradata;
            VAR_29[0] = 2;

            for (VAR_15 = 0; VAR_15 < VAR_25 - 1; VAR_15++) {
                unsigned VAR_31 = FUNC_4(&VAR_29[VAR_28], VAR_27[VAR_15]);
                if (VAR_31 > VAR_27[VAR_15]) {
                    FUNC_1(VAR_20);
                    return VAR_0;
                }
                VAR_28 += VAR_31;
            }

            for (VAR_15 = 0; VAR_15 < VAR_25; VAR_15++) {
                int VAR_32 = FUNC_8(VAR_20, &VAR_29[VAR_28], VAR_27[VAR_15]);
                if (VAR_32 < VAR_27[VAR_15]) {
                    VAR_24->codecpar->extradata_size = 0;
                    FUNC_2(&VAR_24->codecpar->extradata);
                    break;
                }
                VAR_28 += VAR_27[VAR_15];
            }

            if (VAR_28 < VAR_24->codecpar->extradata_size)
                VAR_24->codecpar->extradata_size = VAR_28;
        }
    }

    FUNC_1(VAR_20);
    return 0;
}
