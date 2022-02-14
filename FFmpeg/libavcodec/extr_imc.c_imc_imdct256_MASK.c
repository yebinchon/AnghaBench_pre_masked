
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int re; int im; } ;
struct TYPE_11__ {int (* fft_calc ) (TYPE_3__*,TYPE_4__*) ;int (* fft_permute ) (TYPE_3__*,TYPE_4__*) ;} ;
struct TYPE_10__ {int* CWdecoded; float* last_fft_im; } ;
struct TYPE_9__ {float* out_samples; int* pre_coef1; int* pre_coef2; float* post_cos; float* post_sin; float* mdct_sine_window; TYPE_4__* samples; TYPE_3__ fft; } ;
typedef TYPE_1__ IMCContext ;
typedef TYPE_2__ IMCChannel ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(IMCContext *VAR_1, IMCChannel *VAR_2, int VAR_3)
{
    int VAR_4;
    float VAR_5, VAR_6;
    float *VAR_7 = VAR_1->out_samples;
    float *VAR_8 = VAR_1->out_samples + (VAR_0 - 1);


    for (VAR_4 = 0; VAR_4 < VAR_0 / 2; VAR_4++) {
        VAR_1->samples[VAR_4].re = -(VAR_1->pre_coef1[VAR_4] * VAR_2->CWdecoded[VAR_0 - 1 - VAR_4 * 2]) -
                            (VAR_1->pre_coef2[VAR_4] * VAR_2->CWdecoded[VAR_4 * 2]);
        VAR_1->samples[VAR_4].im = (VAR_1->pre_coef2[VAR_4] * VAR_2->CWdecoded[VAR_0 - 1 - VAR_4 * 2]) -
                            (VAR_1->pre_coef1[VAR_4] * VAR_2->CWdecoded[VAR_4 * 2]);
    }


    VAR_1->fft.fft_permute(&VAR_1->fft, VAR_1->samples);
    VAR_1->fft.fft_calc(&VAR_1->fft, VAR_1->samples);


    for (VAR_4 = 0; VAR_4 < VAR_0 / 2; VAR_4++) {
        VAR_5 = ( VAR_1->samples[VAR_4].re * VAR_1->post_cos[VAR_4]) + (-VAR_1->samples[VAR_4].im * VAR_1->post_sin[VAR_4]);
        VAR_6 = (-VAR_1->samples[VAR_4].im * VAR_1->post_cos[VAR_4]) - ( VAR_1->samples[VAR_4].re * VAR_1->post_sin[VAR_4]);
        *VAR_7 = (VAR_1->mdct_sine_window[VAR_0 - 1 - VAR_4 * 2] * VAR_2->last_fft_im[VAR_4])
               + (VAR_1->mdct_sine_window[VAR_4 * 2] * VAR_5);
        *VAR_8 = (VAR_1->mdct_sine_window[VAR_4 * 2] * VAR_2->last_fft_im[VAR_4])
               - (VAR_1->mdct_sine_window[VAR_0 - 1 - VAR_4 * 2] * VAR_5);
        VAR_7 += 2;
        VAR_8 -= 2;
        VAR_2->last_fft_im[VAR_4] = VAR_6;
    }
}
