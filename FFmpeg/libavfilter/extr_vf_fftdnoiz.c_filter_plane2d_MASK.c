
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

__attribute__((used)) static void FUNC_1(FFTdnoizContext *VAR_1, int VAR_2)
{
    PlaneContext *VAR_3 = &VAR_1->planes[VAR_2];
    const int VAR_4 = VAR_3->b;
    const int VAR_5 = VAR_3->nox;
    const int VAR_6 = VAR_3->noy;
    const int VAR_7 = VAR_3->buffer_linesize / 4;
    const float VAR_8 = VAR_1->sigma * VAR_1->sigma * VAR_4 * VAR_4;
    const float VAR_9 = 1.f - VAR_1->amount;
    float *VAR_10 = VAR_3->buffer[VAR_0];
    int VAR_11, VAR_12, VAR_13, VAR_14;

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
            float *VAR_15 = VAR_10 + VAR_7 * VAR_11 * VAR_4 + VAR_12 * VAR_4 * 2;

            for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
                for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
                    float VAR_16, VAR_17, VAR_18, VAR_19;

                    VAR_18 = VAR_15[VAR_14 * 2 ];
                    VAR_19 = VAR_15[VAR_14 * 2 + 1];
                    VAR_17 = VAR_18 * VAR_18 + VAR_19 * VAR_19 + 1e-15f;
                    VAR_16 = FUNC_0(VAR_9, (VAR_17 - VAR_8) / VAR_17);
                    VAR_15[VAR_14 * 2 ] *= VAR_16;
                    VAR_15[VAR_14 * 2 + 1] *= VAR_16;
                }

                VAR_15 += VAR_7;
            }
        }
    }
}
