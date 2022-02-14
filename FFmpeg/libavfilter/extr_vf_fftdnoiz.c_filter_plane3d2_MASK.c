
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int const sigma; float amount; TYPE_1__* planes; } ;
struct TYPE_4__ {int b; int nox; int noy; int buffer_linesize; float** buffer; } ;
typedef TYPE_1__ PlaneContext ;
typedef TYPE_2__ FFTdnoizContext ;


 size_t VAR_0 ;
 float FUNC_0 (float,float const) ;
 float FUNC_1 (float) ;

__attribute__((used)) static void FUNC_2(FFTdnoizContext *VAR_1, int VAR_2, float *VAR_3, float *VAR_4)
{
    PlaneContext *VAR_5 = &VAR_1->planes[VAR_2];
    const int VAR_6 = VAR_5->b;
    const int VAR_7 = VAR_5->nox;
    const int VAR_8 = VAR_5->noy;
    const int VAR_9 = VAR_5->buffer_linesize / sizeof(float);
    const float VAR_10 = VAR_1->sigma * VAR_1->sigma * VAR_6 * VAR_6;
    const float VAR_11 = 1.f - VAR_1->amount;
    float *VAR_12 = VAR_5->buffer[VAR_0];
    const float VAR_13 = FUNC_1(3.f) * 0.5f;
    const float VAR_14 = 1.f / 3.f;
    int VAR_15, VAR_16, VAR_17, VAR_18;

    for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
        for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
            float *VAR_19 = VAR_12 + VAR_9 * VAR_15 * VAR_6 + VAR_16 * VAR_6 * 2;
            float *VAR_20 = VAR_3 + VAR_9 * VAR_15 * VAR_6 + VAR_16 * VAR_6 * 2;
            float *VAR_21 = VAR_4 + VAR_9 * VAR_15 * VAR_6 + VAR_16 * VAR_6 * 2;

            for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
                for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++) {
                    float VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
                    float VAR_30, VAR_31, VAR_32, VAR_33;

                    VAR_32 = VAR_20[2 * VAR_18 ] + VAR_21[2 * VAR_18 ];
                    VAR_33 = VAR_20[2 * VAR_18 + 1] + VAR_21[2 * VAR_18 + 1];
                    VAR_22 = VAR_19[2 * VAR_18 ] + VAR_32;
                    VAR_23 = VAR_19[2 * VAR_18 + 1] + VAR_33;
                    VAR_24 = VAR_13 * (VAR_21[2 * VAR_18 ] - VAR_20[2 * VAR_18 ]);
                    VAR_25 = VAR_13 * (VAR_20[2 * VAR_18 + 1] - VAR_21[2 * VAR_18 + 1]);
                    VAR_26 = VAR_19[2 * VAR_18 ] - 0.5f * VAR_32 + VAR_25;
                    VAR_28 = VAR_26 - VAR_25 - VAR_25;
                    VAR_27 = VAR_19[2 * VAR_18 + 1] - 0.5f * VAR_33 + VAR_24;
                    VAR_29 = VAR_27 - VAR_24 - VAR_24;
                    VAR_31 = VAR_22 * VAR_22 + VAR_23 * VAR_23 + 1e-15f;
                    VAR_30 = FUNC_0((VAR_31 - VAR_10) / VAR_31, VAR_11);
                    VAR_22 *= VAR_30;
                    VAR_23 *= VAR_30;
                    VAR_31 = VAR_26 * VAR_26 + VAR_27 * VAR_27 + 1e-15f;
                    VAR_30 = FUNC_0((VAR_31 - VAR_10) / VAR_31, VAR_11);
                    VAR_26 *= VAR_30;
                    VAR_27 *= VAR_30;
                    VAR_31 = VAR_28 * VAR_28 + VAR_29 * VAR_29 + 1e-15f;
                    VAR_30 = FUNC_0((VAR_31 - VAR_10) / VAR_31, VAR_11);
                    VAR_28 *= VAR_30;
                    VAR_29 *= VAR_30;
                    VAR_19[2 * VAR_18 ] = (VAR_22 + VAR_26 + VAR_28) * VAR_14;
                    VAR_19[2 * VAR_18 + 1] = (VAR_23 + VAR_27 + VAR_29) * VAR_14;

                }

                VAR_19 += VAR_9;
                VAR_20 += VAR_9;
                VAR_21 += VAR_9;
            }
        }
    }
}
