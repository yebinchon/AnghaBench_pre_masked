
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int noise_band_count; int floor; } ;
struct TYPE_5__ {int* noise_band_avr; int* noise_band_norm; int* noise_band_avi; int* noise_band_var; int* noise_band_auto_var; } ;
typedef TYPE_1__ DeNoiseChannel ;
typedef TYPE_2__ AudioFFTDeNoiseContext ;


 double VAR_0 ;
 double FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(AudioFFTDeNoiseContext *VAR_1,
                                DeNoiseChannel *VAR_2,
                                double *VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_1->noise_band_count; VAR_4++) {
        VAR_2->noise_band_avr[VAR_4] /= VAR_2->noise_band_norm[VAR_4];
        VAR_2->noise_band_avi[VAR_4] /= VAR_2->noise_band_norm[VAR_4];
        VAR_2->noise_band_var[VAR_4] /= VAR_2->noise_band_norm[VAR_4];
        VAR_2->noise_band_var[VAR_4] -= VAR_2->noise_band_avr[VAR_4] * VAR_2->noise_band_avr[VAR_4] +
                                   VAR_2->noise_band_avi[VAR_4] * VAR_2->noise_band_avi[VAR_4];
        VAR_2->noise_band_auto_var[VAR_4] = VAR_2->noise_band_var[VAR_4];
        VAR_3[VAR_4] = (1.0 / VAR_0) * FUNC_0(VAR_2->noise_band_var[VAR_4] / VAR_1->floor) - 100.0;
    }
    if (VAR_1->noise_band_count < 15) {
        for (int VAR_5 = VAR_1->noise_band_count; VAR_5 < 15; VAR_5++)
            VAR_3[VAR_5] = VAR_3[VAR_5 - 1];
    }
}
