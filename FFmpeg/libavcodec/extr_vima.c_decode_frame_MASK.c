
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_10__ {int channels; int channel_layout; } ;
struct TYPE_9__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_8__ {int size; int data; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int) ;
 int* VAR_3 ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int) ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_7 (int *,int) ;
 scalar_t__** VAR_6 ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_7, void *VAR_8,
                        int *VAR_9, AVPacket *VAR_10)
{
    GetBitContext VAR_11;
    AVFrame *VAR_12 = VAR_8;
    int16_t VAR_13[2];
    uint32_t VAR_14;
    int8_t VAR_15[2];
    int VAR_16, VAR_17;
    int VAR_18 = 1;

    if (VAR_10->size < 13)
        return VAR_0;

    if ((VAR_16 = FUNC_6(&VAR_11, VAR_10->data, VAR_10->size)) < 0)
        return VAR_16;

    VAR_14 = FUNC_4(&VAR_11, 32);
    if (VAR_14 == 0xffffffff) {
        FUNC_7(&VAR_11, 32);
        VAR_14 = FUNC_4(&VAR_11, 32);
    }

    if (VAR_14 > VAR_10->size * 2)
        return VAR_0;

    VAR_15[0] = FUNC_5(&VAR_11, 8);
    if (VAR_15[0] & 0x80) {
        VAR_15[0] = ~VAR_15[0];
        VAR_18 = 2;
    }
    VAR_7->channels = VAR_18;
    VAR_7->channel_layout = (VAR_18 == 2) ? VAR_2
                                            : VAR_1;
    VAR_13[0] = FUNC_5(&VAR_11, 16);
    if (VAR_18 > 1) {
        VAR_15[1] = FUNC_5(&VAR_11, 8);
        VAR_13[1] = FUNC_5(&VAR_11, 16);
    }

    VAR_12->nb_samples = VAR_14;
    if ((VAR_16 = FUNC_2(VAR_7, VAR_12, 0)) < 0)
        return VAR_16;

    for (VAR_17 = 0; VAR_17 < VAR_18; VAR_17++) {
        uint16_t *VAR_19 = (uint16_t *)VAR_12->data[0] + VAR_17;
        int VAR_20 = VAR_15[VAR_17];
        int VAR_21 = VAR_13[VAR_17];
        int VAR_22;

        for (VAR_22 = 0; VAR_22 < VAR_14; VAR_22++) {
            int VAR_23, VAR_24, VAR_25, VAR_26;

            VAR_20 = FUNC_0(VAR_20, 0, 88);
            VAR_23 = VAR_5[VAR_20];
            VAR_24 = FUNC_3(&VAR_11, VAR_23);
            VAR_25 = 1 << (VAR_23 - 1);
            VAR_26 = VAR_25 - 1;

            if (VAR_24 & VAR_25)
                VAR_24 ^= VAR_25;
            else
                VAR_25 = 0;

            if (VAR_24 == VAR_26) {
                VAR_21 = FUNC_5(&VAR_11, 16);
            } else {
                int VAR_27, VAR_28;

                VAR_27 = (VAR_24 << (7 - VAR_23)) | (VAR_20 << 6);
                VAR_27 = FUNC_0(VAR_27, 0, 5785);
                VAR_28 = VAR_4[VAR_27];
                if (VAR_24)
                    VAR_28 += VAR_3[VAR_20] >> (VAR_23 - 1);
                if (VAR_25)
                    VAR_28 = -VAR_28;

                VAR_21 = FUNC_1(VAR_21 + VAR_28);
            }

            *VAR_19 = VAR_21;
            VAR_19 += VAR_18;

            VAR_20 += VAR_6[VAR_23 - 2][VAR_24];
        }
    }

    *VAR_9 = 1;

    return VAR_10->size;
}
