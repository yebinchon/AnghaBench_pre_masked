
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_14__ {scalar_t__ table; int member_0; } ;
typedef TYPE_1__ VLC ;
struct TYPE_18__ {int channels; scalar_t__ sample_fmt; } ;
struct TYPE_17__ {int nb_samples; int ** data; } ;
struct TYPE_16__ {int size; int * data; } ;
struct TYPE_15__ {int length; int current; int* bits; int* lengths; int* values; scalar_t__ maxlength; int member_0; } ;
typedef TYPE_2__ HuffContext ;
typedef int GetBitContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (TYPE_5__*,int ,char*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,int ,int) ;
 int FUNC_12 (int *,int const*,int) ;
 int FUNC_13 (TYPE_1__*,int ,int,int*,int,int,int*,int,int,int ) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_7, void *VAR_8,
                             int *VAR_9, AVPacket *VAR_10)
{
    AVFrame *VAR_11 = VAR_8;
    const uint8_t *VAR_12 = VAR_10->data;
    int VAR_13 = VAR_10->size;
    GetBitContext VAR_14;
    HuffContext VAR_15[4] = { { 0 } };
    VLC VAR_16[4] = { { 0 } };
    int16_t *VAR_17;
    uint8_t *VAR_18;
    int VAR_19;
    int VAR_20, VAR_21, VAR_22;
    int VAR_23;
    int VAR_24, VAR_25;
    int VAR_26[2] = {0, 0};

    if (VAR_13 <= 4) {
        FUNC_4(VAR_7, VAR_1, "packet is too small\n");
        return VAR_0;
    }

    VAR_23 = FUNC_1(VAR_12);

    if (VAR_23 > (1U<<24)) {
        FUNC_4(VAR_7, VAR_1, "packet is too big\n");
        return VAR_0;
    }

    if ((VAR_22 = FUNC_12(&VAR_14, VAR_12 + 4, VAR_13 - 4)) < 0)
        return VAR_22;

    if(!FUNC_9(&VAR_14)){
        FUNC_4(VAR_7, VAR_2, "Sound: no data\n");
        *VAR_9 = 0;
        return 1;
    }
    VAR_25 = FUNC_9(&VAR_14);
    VAR_24 = FUNC_9(&VAR_14);
    if (VAR_25 ^ (VAR_7->channels != 1)) {
        FUNC_4(VAR_7, VAR_1, "channels mismatch\n");
        return VAR_0;
    }
    if (VAR_24 == (VAR_7->sample_fmt == VAR_3)) {
        FUNC_4(VAR_7, VAR_1, "sample format mismatch\n");
        return VAR_0;
    }


    VAR_11->nb_samples = VAR_23 / (VAR_7->channels * (VAR_24 + 1));
    if (VAR_23 % (VAR_7->channels * (VAR_24 + 1))) {
        FUNC_4(VAR_7, VAR_1,
               "The buffer does not contain an integer number of samples\n");
        return VAR_0;
    }
    if ((VAR_22 = FUNC_7(VAR_7, VAR_11, 0)) < 0)
        return VAR_22;
    VAR_17 = (int16_t *)VAR_11->data[0];
    VAR_18 = VAR_11->data[0];


    for(VAR_20 = 0; VAR_20 < (1 << (VAR_24 + VAR_25)); VAR_20++) {
        VAR_15[VAR_20].length = 256;
        VAR_15[VAR_20].maxlength = 0;
        VAR_15[VAR_20].current = 0;
        VAR_15[VAR_20].bits = FUNC_5(256 * 4);
        VAR_15[VAR_20].lengths = FUNC_5(256 * sizeof(int));
        VAR_15[VAR_20].values = FUNC_5(256 * sizeof(int));
        if (!VAR_15[VAR_20].bits || !VAR_15[VAR_20].lengths || !VAR_15[VAR_20].values) {
            VAR_22 = FUNC_0(VAR_4);
            goto error;
        }
        FUNC_15(&VAR_14);
        if (FUNC_16(&VAR_14, &VAR_15[VAR_20], 0, 0) < 0) {
            VAR_22 = VAR_0;
            goto error;
        }
        FUNC_15(&VAR_14);
        if(VAR_15[VAR_20].current > 1) {
            VAR_21 = FUNC_13(&VAR_16[VAR_20], VAR_6, VAR_15[VAR_20].length,
                    VAR_15[VAR_20].lengths, sizeof(int), sizeof(int),
                    VAR_15[VAR_20].bits, sizeof(uint32_t), sizeof(uint32_t), VAR_5);
            if(VAR_21 < 0) {
                FUNC_4(VAR_7, VAR_1, "Cannot build VLC table\n");
                VAR_22 = VAR_0;
                goto error;
            }
        }
    }

    if(VAR_24) {
        for(VAR_20 = VAR_25; VAR_20 >= 0; VAR_20--)
            VAR_26[VAR_20] = FUNC_14(FUNC_2(FUNC_8(&VAR_14, 16)), 16);
        for(VAR_20 = 0; VAR_20 <= VAR_25; VAR_20++)
            *VAR_17++ = VAR_26[VAR_20];
        for(; VAR_20 < VAR_23 / 2; VAR_20++) {
            if (FUNC_10(&VAR_14) < 0) {
                VAR_22 = VAR_0;
                goto error;
            }
            if(VAR_20 & VAR_25) {
                if(VAR_16[2].table)
                    VAR_21 = FUNC_11(&VAR_14, VAR_16[2].table, VAR_6, 3);
                else
                    VAR_21 = 0;
                if (VAR_21 < 0) {
                    FUNC_4(VAR_7, VAR_1, "invalid vlc\n");
                    VAR_22 = VAR_0;
                    goto error;
                }
                VAR_19 = VAR_15[2].values[VAR_21];
                if(VAR_16[3].table)
                    VAR_21 = FUNC_11(&VAR_14, VAR_16[3].table, VAR_6, 3);
                else
                    VAR_21 = 0;
                if (VAR_21 < 0) {
                    FUNC_4(VAR_7, VAR_1, "invalid vlc\n");
                    VAR_22 = VAR_0;
                    goto error;
                }
                VAR_19 |= VAR_15[3].values[VAR_21] << 8;
                VAR_26[1] += (unsigned)FUNC_14(VAR_19, 16);
                *VAR_17++ = VAR_26[1];
            } else {
                if(VAR_16[0].table)
                    VAR_21 = FUNC_11(&VAR_14, VAR_16[0].table, VAR_6, 3);
                else
                    VAR_21 = 0;
                if (VAR_21 < 0) {
                    FUNC_4(VAR_7, VAR_1, "invalid vlc\n");
                    VAR_22 = VAR_0;
                    goto error;
                }
                VAR_19 = VAR_15[0].values[VAR_21];
                if(VAR_16[1].table)
                    VAR_21 = FUNC_11(&VAR_14, VAR_16[1].table, VAR_6, 3);
                else
                    VAR_21 = 0;
                if (VAR_21 < 0) {
                    FUNC_4(VAR_7, VAR_1, "invalid vlc\n");
                    VAR_22 = VAR_0;
                    goto error;
                }
                VAR_19 |= VAR_15[1].values[VAR_21] << 8;
                VAR_26[0] += (unsigned)FUNC_14(VAR_19, 16);
                *VAR_17++ = VAR_26[0];
            }
        }
    } else {
        for(VAR_20 = VAR_25; VAR_20 >= 0; VAR_20--)
            VAR_26[VAR_20] = FUNC_8(&VAR_14, 8);
        for(VAR_20 = 0; VAR_20 <= VAR_25; VAR_20++)
            *VAR_18++ = VAR_26[VAR_20];
        for(; VAR_20 < VAR_23; VAR_20++) {
            if (FUNC_10(&VAR_14) < 0) {
                VAR_22 = VAR_0;
                goto error;
            }
            if(VAR_20 & VAR_25){
                if(VAR_16[1].table)
                    VAR_21 = FUNC_11(&VAR_14, VAR_16[1].table, VAR_6, 3);
                else
                    VAR_21 = 0;
                if (VAR_21 < 0) {
                    FUNC_4(VAR_7, VAR_1, "invalid vlc\n");
                    VAR_22 = VAR_0;
                    goto error;
                }
                VAR_26[1] += FUNC_14(VAR_15[1].values[VAR_21], 8);
                *VAR_18++ = VAR_26[1];
            } else {
                if(VAR_16[0].table)
                    VAR_21 = FUNC_11(&VAR_14, VAR_16[0].table, VAR_6, 3);
                else
                    VAR_21 = 0;
                if (VAR_21 < 0) {
                    FUNC_4(VAR_7, VAR_1, "invalid vlc\n");
                    VAR_22 = VAR_0;
                    goto error;
                }
                VAR_26[0] += FUNC_14(VAR_15[0].values[VAR_21], 8);
                *VAR_18++ = VAR_26[0];
            }
        }
    }

    *VAR_9 = 1;
    VAR_22 = VAR_13;

error:
    for(VAR_20 = 0; VAR_20 < 4; VAR_20++) {
        if(VAR_16[VAR_20].table)
            FUNC_6(&VAR_16[VAR_20]);
        FUNC_3(VAR_15[VAR_20].bits);
        FUNC_3(VAR_15[VAR_20].lengths);
        FUNC_3(VAR_15[VAR_20].values);
    }

    return VAR_22;
}
