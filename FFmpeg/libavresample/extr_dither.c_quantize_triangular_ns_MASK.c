
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_6__ {scalar_t__ mute_reset_threshold; int* ns_coef_b; int* ns_coef_a; scalar_t__ mute_dither_threshold; } ;
struct TYPE_5__ {float* noise_buf; size_t noise_buf_ptr; scalar_t__ mute; int* dither_a; int* dither_b; } ;
typedef TYPE_1__ DitherState ;
typedef TYPE_2__ DitherContext ;


 float const VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,float,float) ;
 int FUNC_2 (float) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(DitherContext *VAR_1, DitherState *VAR_2,
                                   int16_t *VAR_3, const float *VAR_4,
                                   int VAR_5)
{
    int VAR_6, VAR_7;
    float *VAR_8 = &VAR_2->noise_buf[VAR_2->noise_buf_ptr];

    if (VAR_2->mute > VAR_1->mute_reset_threshold)
        FUNC_3(VAR_2->dither_a, 0, sizeof(VAR_2->dither_a));

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        float VAR_9 = 0;
        float VAR_10 = VAR_4[VAR_6] * VAR_0;

        for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
            VAR_9 += VAR_1->ns_coef_b[VAR_7] * VAR_2->dither_b[VAR_7] -
                   VAR_1->ns_coef_a[VAR_7] * VAR_2->dither_a[VAR_7];
        }
        for (VAR_7 = 3; VAR_7 > 0; VAR_7--) {
            VAR_2->dither_a[VAR_7] = VAR_2->dither_a[VAR_7 - 1];
            VAR_2->dither_b[VAR_7] = VAR_2->dither_b[VAR_7 - 1];
        }
        VAR_2->dither_a[0] = VAR_9;
        VAR_10 -= VAR_9;

        if (VAR_2->mute > VAR_1->mute_dither_threshold) {
            VAR_3[VAR_6] = FUNC_0(FUNC_2(VAR_10));
            VAR_2->dither_b[0] = 0;
        } else {
            VAR_3[VAR_6] = FUNC_0(FUNC_2(VAR_10 + VAR_8[VAR_6]));
            VAR_2->dither_b[0] = FUNC_1(VAR_3[VAR_6] - VAR_10, -1.5f, 1.5f);
        }

        VAR_2->mute++;
        if (VAR_4[VAR_6])
            VAR_2->mute = 0;
    }
}
