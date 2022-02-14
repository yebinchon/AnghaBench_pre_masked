
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int fbw_channels; int* first_spx_coords; int spx_src_start_freq; int num_spx_bands; int* spx_band_sizes; float spx_dst_end_freq; int** spx_noise_blend; int** spx_signal_blend; scalar_t__* channel_uses_spx; int gbc; } ;
typedef int INTFLOAT ;
typedef int GetBitContext ;
typedef TYPE_1__ AC3DecodeContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,float,float) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (float) ;

__attribute__((used)) static inline void FUNC_6(AC3DecodeContext *VAR_0)
{
    GetBitContext *VAR_1 = &VAR_0->gbc;
    int VAR_2 = VAR_0->fbw_channels;
    int VAR_3, VAR_4;

    for (VAR_3 = 1; VAR_3 <= VAR_2; VAR_3++) {
        if (VAR_0->channel_uses_spx[VAR_3]) {
            if (VAR_0->first_spx_coords[VAR_3] || FUNC_4(VAR_1)) {
                INTFLOAT VAR_5;
                int VAR_6, VAR_7;

                VAR_0->first_spx_coords[VAR_3] = 0;
                VAR_5 = FUNC_0(FUNC_3(VAR_1, 5));
                VAR_7 = FUNC_3(VAR_1, 2) * 3;

                VAR_6 = VAR_0->spx_src_start_freq;
                for (VAR_4 = 0; VAR_4 < VAR_0->num_spx_bands; VAR_4++) {
                    int VAR_8 = VAR_0->spx_band_sizes[VAR_4];
                    int VAR_9, VAR_10;
                    INTFLOAT VAR_11, VAR_12, VAR_13;
                    float VAR_14;


                    VAR_11 = ((float)((VAR_6 + (VAR_8 >> 1))) / VAR_0->spx_dst_end_freq) - VAR_5;
                    VAR_11 = FUNC_1(VAR_11, 0.0f, 1.0f);
                    VAR_13 = FUNC_5(3.0f * VAR_11);

                    VAR_12 = FUNC_5(1.0f - VAR_11);

                    VAR_6 += VAR_8;


                    VAR_9 = FUNC_3(VAR_1, 4);
                    VAR_10 = FUNC_3(VAR_1, 2);
                    if (VAR_9 == 15) VAR_10 <<= 1;
                    else VAR_10 += 4;
                    VAR_10 <<= (25 - VAR_9 - VAR_7);
                    VAR_14 = VAR_10 * (1.0f / (1 << 23));
                    VAR_0->spx_noise_blend [VAR_3][VAR_4] = VAR_13 * VAR_14;
                    VAR_0->spx_signal_blend[VAR_3][VAR_4] = VAR_12 * VAR_14;

                }
            }
        } else {
            VAR_0->first_spx_coords[VAR_3] = 1;
        }
    }
}
