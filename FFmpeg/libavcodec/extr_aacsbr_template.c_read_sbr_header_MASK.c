
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_7__ {int bs_freq_scale; int bs_alter_scale; int bs_noise_bands; void* bs_xover_band; void* bs_stop_freq; void* bs_start_freq; } ;
struct TYPE_6__ {int bs_limiter_bands; int start; int reset; int bs_limiter_gains; int bs_interpol_freq; int bs_smoothing_mode; TYPE_4__ spectrum_params; void* bs_amp_res_header; scalar_t__ ready_for_dequant; } ;
typedef int SpectrumParameters ;
typedef TYPE_1__ SpectralBandReplication ;
typedef int GetBitContext ;


 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*,int) ;
 int FUNC_4 (int *,TYPE_4__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static unsigned int FUNC_7(SpectralBandReplication *VAR_0, GetBitContext *VAR_1)
{
    unsigned int VAR_2 = FUNC_2(VAR_1);
    uint8_t VAR_3;
    uint8_t VAR_4;
    int VAR_5 = VAR_0->bs_limiter_bands;
    SpectrumParameters VAR_6;

    VAR_0->start = 1;
    VAR_0->ready_for_dequant = 0;


    FUNC_4(&VAR_6, &VAR_0->spectrum_params, sizeof(SpectrumParameters));

    VAR_0->bs_amp_res_header = FUNC_1(VAR_1);
    VAR_0->spectrum_params.bs_start_freq = FUNC_0(VAR_1, 4);
    VAR_0->spectrum_params.bs_stop_freq = FUNC_0(VAR_1, 4);
    VAR_0->spectrum_params.bs_xover_band = FUNC_0(VAR_1, 3);
                                          FUNC_6(VAR_1, 2);

    VAR_3 = FUNC_1(VAR_1);
    VAR_4 = FUNC_1(VAR_1);

    if (VAR_3) {
        VAR_0->spectrum_params.bs_freq_scale = FUNC_0(VAR_1, 2);
        VAR_0->spectrum_params.bs_alter_scale = FUNC_1(VAR_1);
        VAR_0->spectrum_params.bs_noise_bands = FUNC_0(VAR_1, 2);
    } else {
        VAR_0->spectrum_params.bs_freq_scale = 2;
        VAR_0->spectrum_params.bs_alter_scale = 1;
        VAR_0->spectrum_params.bs_noise_bands = 2;
    }


    if (FUNC_3(&VAR_6, &VAR_0->spectrum_params, sizeof(SpectrumParameters)))
        VAR_0->reset = 1;

    if (VAR_4) {
        VAR_0->bs_limiter_bands = FUNC_0(VAR_1, 2);
        VAR_0->bs_limiter_gains = FUNC_0(VAR_1, 2);
        VAR_0->bs_interpol_freq = FUNC_1(VAR_1);
        VAR_0->bs_smoothing_mode = FUNC_1(VAR_1);
    } else {
        VAR_0->bs_limiter_bands = 2;
        VAR_0->bs_limiter_gains = 2;
        VAR_0->bs_interpol_freq = 1;
        VAR_0->bs_smoothing_mode = 1;
    }

    if (VAR_0->bs_limiter_bands != VAR_5 && !VAR_0->reset)
        FUNC_5(VAR_0);

    return FUNC_2(VAR_1) - VAR_2;
}
