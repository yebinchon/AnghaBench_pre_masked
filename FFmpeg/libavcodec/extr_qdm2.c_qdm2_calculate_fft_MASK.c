
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int (* rdft_calc ) (TYPE_4__*,int *) ;} ;
struct TYPE_7__ {TYPE_1__** complex; } ;
struct TYPE_8__ {int channels; int nb_channels; float* output_buffer; TYPE_2__ fft; int fft_size; TYPE_4__ rdft_ctx; } ;
struct TYPE_6__ {float re; float im; } ;
typedef TYPE_3__ QDM2Context ;
typedef int FFTSample ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_2(QDM2Context *VAR_0, int VAR_1, int VAR_2)
{
    const float VAR_3 = (VAR_0->channels == 1 && VAR_0->nb_channels == 2) ? 0.5f : 1.0f;
    float *VAR_4 = VAR_0->output_buffer + VAR_1;
    int VAR_5;
    VAR_0->fft.complex[VAR_1][0].re *= 2.0f;
    VAR_0->fft.complex[VAR_1][0].im = 0.0f;
    VAR_0->rdft_ctx.rdft_calc(&VAR_0->rdft_ctx, (FFTSample *)VAR_0->fft.complex[VAR_1]);

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0->fft_size, 8); VAR_5++) {
        VAR_4[0] += VAR_0->fft.complex[VAR_1][VAR_5].re * VAR_3;
        VAR_4[VAR_0->channels] += VAR_0->fft.complex[VAR_1][VAR_5].im * VAR_3;
        VAR_4 += 2 * VAR_0->channels;
    }
}
