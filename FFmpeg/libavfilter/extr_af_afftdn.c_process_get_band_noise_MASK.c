
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double* matrix_b; double* vector_b; double sample_rate; double* band_centre; int matrix_a; } ;
struct TYPE_5__ {int* band_noise; } ;
typedef TYPE_1__ DeNoiseChannel ;
typedef TYPE_2__ AudioFFTDeNoiseContext ;


 double FUNC_0 (double) ;
 int FUNC_1 (double) ;
 int FUNC_2 (int ,double*,int) ;

__attribute__((used)) static int FUNC_3(AudioFFTDeNoiseContext *VAR_0,
                                  DeNoiseChannel *VAR_1,
                                  int VAR_2)
{
    double VAR_3, VAR_4, VAR_5;
    int VAR_6 = 0;

    if (VAR_2 < 15)
        return VAR_1->band_noise[VAR_2];

    for (int VAR_7 = 0; VAR_7 < 5; VAR_7++) {
        VAR_4 = 0.0;
        for (int VAR_8 = 0; VAR_8 < 15; VAR_8++)
            VAR_4 += VAR_0->matrix_b[VAR_6++] * VAR_1->band_noise[VAR_8];
        VAR_0->vector_b[VAR_7] = VAR_4;
    }

    FUNC_2(VAR_0->matrix_a, VAR_0->vector_b, 5);
    VAR_5 = (0.5 * VAR_0->sample_rate) / VAR_0->band_centre[14];
    VAR_5 = 15.0 + FUNC_0(VAR_5 / 1.5) / FUNC_0(1.5);
    VAR_4 = 0.0;
    VAR_3 = 1.0;
    for (int VAR_9 = 0; VAR_9 < 5; VAR_9++) {
        VAR_4 += VAR_3 * VAR_0->vector_b[VAR_9];
        VAR_3 *= VAR_5;
    }

    return FUNC_1(VAR_4);
}
