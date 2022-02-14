
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_8__ {int channels; TYPE_1__* priv_data; } ;
struct TYPE_7__ {scalar_t__ sample_offset; scalar_t__ max_frame_size; int filter_params; int filter_bits; int** channel_data; int* bias; } ;
typedef TYPE_1__ RALFContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int *,int,int,int,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_3, GetBitContext *VAR_4,
                        int16_t *VAR_5, int16_t *VAR_6)
{
    RALFContext *VAR_7 = VAR_3->priv_data;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12[2], VAR_13[2];
    int *VAR_14, *VAR_15;
    int VAR_16, VAR_17, VAR_18;

    VAR_8 = 12 - FUNC_5(VAR_4, 0, 6);

    if (VAR_8 <= 7) VAR_8 ^= 1;
    VAR_8 = 1 << VAR_8;

    if (VAR_7->sample_offset + VAR_8 > VAR_7->max_frame_size) {
        FUNC_1(VAR_3, VAR_1,
               "Decoder's stomach is crying, it ate too many samples\n");
        return VAR_0;
    }

    if (VAR_3->channels > 1)
        VAR_11 = FUNC_3(VAR_4, 2) + 1;
    else
        VAR_11 = 0;

    VAR_12[0] = (VAR_11 == 4) ? 1 : 0;
    VAR_12[1] = (VAR_11 >= 2) ? 2 : 0;
    VAR_13[0] = 16;
    VAR_13[1] = (VAR_12[1] == 2) ? 17 : 16;

    for (VAR_9 = 0; VAR_9 < VAR_3->channels; VAR_9++) {
        if ((VAR_10 = FUNC_2(VAR_7, VAR_4, VAR_9, VAR_8, VAR_12[VAR_9], VAR_13[VAR_9])) < 0)
            return VAR_10;
        if (VAR_7->filter_params > 1 && VAR_7->filter_params != VAR_2) {
            VAR_7->filter_bits += 3;
            FUNC_0(VAR_7, VAR_9, VAR_8, VAR_13[VAR_9]);
        }
        if (FUNC_4(VAR_4) < 0)
            return VAR_0;
    }
    VAR_14 = VAR_7->channel_data[0];
    VAR_15 = VAR_7->channel_data[1];
    switch (VAR_11) {
    case 0:
        for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
            VAR_5[VAR_16] = VAR_14[VAR_16] + VAR_7->bias[0];
        break;
    case 1:
        for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
            VAR_5[VAR_16] = VAR_14[VAR_16] + VAR_7->bias[0];
            VAR_6[VAR_16] = VAR_15[VAR_16] + VAR_7->bias[1];
        }
        break;
    case 2:
        for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
            VAR_14[VAR_16] += VAR_7->bias[0];
            VAR_5[VAR_16] = VAR_14[VAR_16];
            VAR_6[VAR_16] = VAR_14[VAR_16] - (VAR_15[VAR_16] + VAR_7->bias[1]);
        }
        break;
    case 3:
        for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
            VAR_17 = VAR_14[VAR_16] + VAR_7->bias[0];
            VAR_18 = VAR_15[VAR_16] + VAR_7->bias[1];
            VAR_5[VAR_16] = VAR_17 + VAR_18;
            VAR_6[VAR_16] = VAR_17;
        }
        break;
    case 4:
        for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
            VAR_17 = VAR_15[VAR_16] + VAR_7->bias[1];
            VAR_18 = ((VAR_14[VAR_16] + VAR_7->bias[0]) << 1) | (VAR_17 & 1);
            VAR_5[VAR_16] = (VAR_18 + VAR_17) / 2;
            VAR_6[VAR_16] = (VAR_18 - VAR_17) / 2;
        }
        break;
    }

    VAR_7->sample_offset += VAR_8;

    return 0;
}
