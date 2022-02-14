
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
 float FUNC_0 (float const,float) ;

__attribute__((used)) static void FUNC_1(FFTdnoizContext *VAR_1, int VAR_2, float *VAR_3)
{
    PlaneContext *VAR_4 = &VAR_1->planes[VAR_2];
    const int VAR_5 = VAR_4->b;
    const int VAR_6 = VAR_4->nox;
    const int VAR_7 = VAR_4->noy;
    const int VAR_8 = VAR_4->buffer_linesize / sizeof(float);
    const float VAR_9 = VAR_1->sigma * VAR_1->sigma * VAR_5 * VAR_5;
    const float VAR_10 = 1.f - VAR_1->amount;
    float *VAR_11 = VAR_4->buffer[VAR_0];
    int VAR_12, VAR_13, VAR_14, VAR_15;

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
            float *VAR_16 = VAR_11 + VAR_8 * VAR_12 * VAR_5 + VAR_13 * VAR_5 * 2;
            float *VAR_17 = VAR_3 + VAR_8 * VAR_12 * VAR_5 + VAR_13 * VAR_5 * 2;

            for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
                for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
                    float VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
                    float VAR_24, VAR_25, VAR_26, VAR_27;

                    VAR_20 = VAR_16[VAR_15 * 2 ];
                    VAR_22 = VAR_17[VAR_15 * 2 ];
                    VAR_21 = VAR_16[VAR_15 * 2 + 1];
                    VAR_23 = VAR_17[VAR_15 * 2 + 1];

                    VAR_24 = VAR_20 + VAR_22;
                    VAR_25 = VAR_21 + VAR_23;
                    VAR_26 = VAR_20 - VAR_22;
                    VAR_27 = VAR_21 - VAR_23;

                    VAR_19 = VAR_24 * VAR_24 + VAR_25 * VAR_25 + 1e-15f;
                    VAR_18 = FUNC_0(VAR_10, (VAR_19 - VAR_9) / VAR_19);
                    VAR_24 *= VAR_18;
                    VAR_25 *= VAR_18;
                    VAR_19 = VAR_26 * VAR_26 + VAR_27 * VAR_27 + 1e-15f;
                    VAR_18 = FUNC_0(VAR_10, (VAR_19 - VAR_9) / VAR_19);
                    VAR_26 *= VAR_18;
                    VAR_27 *= VAR_18;

                    VAR_16[VAR_15 * 2 ] = (VAR_24 + VAR_26) * 0.5f;
                    VAR_16[VAR_15 * 2 + 1] = (VAR_25 + VAR_27) * 0.5f;
                }

                VAR_16 += VAR_8;
                VAR_17 += VAR_8;
            }
        }
    }
}
