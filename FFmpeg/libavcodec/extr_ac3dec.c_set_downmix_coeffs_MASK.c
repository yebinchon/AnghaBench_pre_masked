
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t center_mix_level; size_t surround_mix_level; int fbw_channels; size_t channel_mode; scalar_t__ output_mode; void*** downmix_coeffs; } ;
typedef TYPE_1__ AC3DecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 void* FUNC_1 (float) ;
 float VAR_7 ;
 size_t*** VAR_8 ;
 void** FUNC_2 (int,int) ;
 float* VAR_9 ;

__attribute__((used)) static int FUNC_3(AC3DecodeContext *VAR_10)
{
    int VAR_11;
    float VAR_12 = VAR_9[VAR_10-> center_mix_level];
    float VAR_13 = VAR_9[VAR_10->surround_mix_level];
    float VAR_14, VAR_15;
    float VAR_16[2][VAR_5];

    if (!VAR_10->downmix_coeffs[0]) {
        VAR_10->downmix_coeffs[0] = FUNC_2(2 * VAR_5,
                                               sizeof(**VAR_10->downmix_coeffs));
        if (!VAR_10->downmix_coeffs[0])
            return FUNC_0(VAR_6);
        VAR_10->downmix_coeffs[1] = VAR_10->downmix_coeffs[0] + VAR_5;
    }

    for (VAR_11 = 0; VAR_11 < VAR_10->fbw_channels; VAR_11++) {
        VAR_16[0][VAR_11] = VAR_9[VAR_8[VAR_10->channel_mode][VAR_11][0]];
        VAR_16[1][VAR_11] = VAR_9[VAR_8[VAR_10->channel_mode][VAR_11][1]];
    }
    if (VAR_10->channel_mode > 1 && VAR_10->channel_mode & 1) {
        VAR_16[0][1] = VAR_16[1][1] = VAR_12;
    }
    if (VAR_10->channel_mode == VAR_0 || VAR_10->channel_mode == VAR_2) {
        int VAR_17 = VAR_10->channel_mode - 2;
        VAR_16[0][VAR_17] = VAR_16[1][VAR_17] = VAR_13 * VAR_7;
    }
    if (VAR_10->channel_mode == VAR_1 || VAR_10->channel_mode == VAR_3) {
        int VAR_18 = VAR_10->channel_mode - 4;
        VAR_16[0][VAR_18] = VAR_16[1][VAR_18+1] = VAR_13;
    }


    VAR_14 = VAR_15 = 0.0;
    for (VAR_11 = 0; VAR_11 < VAR_10->fbw_channels; VAR_11++) {
        VAR_14 += VAR_16[0][VAR_11];
        VAR_15 += VAR_16[1][VAR_11];
    }
    VAR_14 = 1.0f / VAR_14;
    VAR_15 = 1.0f / VAR_15;
    for (VAR_11 = 0; VAR_11 < VAR_10->fbw_channels; VAR_11++) {
        VAR_16[0][VAR_11] *= VAR_14;
        VAR_16[1][VAR_11] *= VAR_15;
    }

    if (VAR_10->output_mode == VAR_4) {
        for (VAR_11 = 0; VAR_11 < VAR_10->fbw_channels; VAR_11++)
            VAR_16[0][VAR_11] = (VAR_16[0][VAR_11] +
                                    VAR_16[1][VAR_11]) * VAR_7;
    }
    for (VAR_11 = 0; VAR_11 < VAR_10->fbw_channels; VAR_11++) {
        VAR_10->downmix_coeffs[0][VAR_11] = FUNC_1(VAR_16[0][VAR_11]);
        VAR_10->downmix_coeffs[1][VAR_11] = FUNC_1(VAR_16[1][VAR_11]);
    }

    return 0;
}
