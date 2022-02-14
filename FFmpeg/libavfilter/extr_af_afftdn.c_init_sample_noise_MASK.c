
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* noise_band_norm; double* noise_band_avr; double* noise_band_avi; double* noise_band_var; } ;
typedef TYPE_1__ DeNoiseChannel ;



__attribute__((used)) static void FUNC_0(DeNoiseChannel *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < 15; VAR_1++) {
        VAR_0->noise_band_norm[VAR_1] = 0.0;
        VAR_0->noise_band_avr[VAR_1] = 0.0;
        VAR_0->noise_band_avi[VAR_1] = 0.0;
        VAR_0->noise_band_var[VAR_1] = 0.0;
    }
}
