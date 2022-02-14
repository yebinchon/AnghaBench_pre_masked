
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int new_band_noise ;
struct TYPE_7__ {double* matrix_b; double* vector_b; double* matrix_c; float noise_floor; scalar_t__ track_noise; int matrix_a; } ;
struct TYPE_6__ {int* band_noise; } ;
typedef TYPE_1__ DeNoiseChannel ;
typedef TYPE_2__ AudioFFTDeNoiseContext ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (double) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int ,double*,int) ;

__attribute__((used)) static void FUNC_5(AudioFFTDeNoiseContext *VAR_1,
                              DeNoiseChannel *VAR_2,
                              double *VAR_3,
                              int VAR_4)
{
    int VAR_5[15];
    double VAR_6[15];
    double VAR_7 = 0.0, VAR_8;
    float VAR_9;
    int VAR_10, VAR_11;

    for (int VAR_12 = 0; VAR_12 < 15; VAR_12++)
        VAR_6[VAR_12] = VAR_3[VAR_12];

    if (VAR_4) {
        VAR_10 = 0;
        for (int VAR_13 = 0; VAR_13 < 5; VAR_13++) {
            VAR_7 = 0.0;
            for (VAR_11 = 0; VAR_11 < 15; VAR_11++)
                VAR_7 += VAR_1->matrix_b[VAR_10++] * VAR_6[VAR_11];
            VAR_1->vector_b[VAR_13] = VAR_7;
        }
        FUNC_4(VAR_1->matrix_a, VAR_1->vector_b, 5);
        VAR_10 = 0;
        for (int VAR_14 = 0; VAR_14 < 15; VAR_14++) {
            VAR_7 = 0.0;
            for (VAR_11 = 0; VAR_11 < 5; VAR_11++)
                VAR_7 += VAR_1->matrix_c[VAR_10++] * VAR_1->vector_b[VAR_11];
            VAR_6[VAR_14] = VAR_7;
        }
    }

    VAR_7 = 0.0;
    for (int VAR_15 = 0; VAR_15 < 15; VAR_15++)
        VAR_7 += VAR_6[VAR_15];

    VAR_8 = (int)(VAR_7 / 15.0 - 0.5);
    if (!VAR_4)
        VAR_10 = FUNC_2(VAR_6[7] - VAR_8);

    for (VAR_8 -= VAR_2->band_noise[7] - VAR_10; VAR_8 > -20.0; VAR_8 -= 1.0)
        ;

    for (int VAR_16 = 0; VAR_16 < 15; VAR_16++)
        VAR_6[VAR_16] -= VAR_8;

    VAR_9 = VAR_8 + 2.5;

    if (VAR_4) {
        FUNC_1(VAR_1, VAR_0, "bn=");
        for (int VAR_17 = 0; VAR_17 < 15; VAR_17++) {
            VAR_5[VAR_17] = FUNC_2(VAR_6[VAR_17]);
            VAR_5[VAR_17] = FUNC_0(VAR_5[VAR_17], -24, 24);
            FUNC_1(VAR_1, VAR_0, "%d ", VAR_5[VAR_17]);
        }
        FUNC_1(VAR_1, VAR_0, "\n");
        FUNC_3(VAR_2->band_noise, VAR_5, sizeof(VAR_5));
    }

    if (VAR_1->track_noise)
        VAR_1->noise_floor = VAR_9;
}
