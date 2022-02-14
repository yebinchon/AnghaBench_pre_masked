
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int* write; int* n_clippings; float** ringbuffer; TYPE_5__* out; TYPE_5__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_16__ {TYPE_3__* priv; } ;
struct TYPE_15__ {scalar_t__ format; int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_14__ {float re; float im; } ;
struct TYPE_11__ {int ir_samples; } ;
struct TYPE_13__ {int n_conv; int buffer_length; int n_fft; int lfe_channel; float const gain_lfe; int ** fft; int ** ifft; TYPE_4__** temp_afft; TYPE_4__** temp_fft; TYPE_1__ sofa; TYPE_4__** data_hrtf; } ;
typedef TYPE_3__ SOFAlizerContext ;
typedef int FFTContext ;
typedef TYPE_4__ FFTComplex ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const,int) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (float) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
    SOFAlizerContext *VAR_6 = VAR_2->priv;
    ThreadData *VAR_7 = VAR_3;
    AVFrame *VAR_8 = VAR_7->in, *VAR_9 = VAR_7->out;
    int VAR_10 = VAR_4;
    int *VAR_11 = &VAR_7->write[VAR_4];
    FFTComplex *VAR_12 = VAR_6->data_hrtf[VAR_4];
    int *VAR_13 = &VAR_7->n_clippings[VAR_4];
    float *VAR_14 = VAR_7->ringbuffer[VAR_4];
    const int VAR_15 = VAR_6->sofa.ir_samples;
    const int VAR_16 = VAR_8->format == VAR_1;
    const int VAR_17 = 1 + !VAR_16;
    float *VAR_18 = (float *)VAR_9->extended_data[VAR_4 * VAR_16];
    const int VAR_19 = VAR_6->n_conv;

    const int VAR_20 = VAR_6->buffer_length;

    const uint32_t VAR_21 = (uint32_t)VAR_20 - 1;
    FFTComplex *VAR_22 = VAR_6->temp_fft[VAR_4];
    FFTComplex *VAR_23 = VAR_6->temp_afft[VAR_4];
    FFTContext *VAR_24 = VAR_6->ifft[VAR_4];
    FFTContext *VAR_25 = VAR_6->fft[VAR_4];
    const int VAR_26 = VAR_6->n_conv;
    const int VAR_27 = VAR_6->n_fft;
    const float VAR_28 = 1.0f / VAR_6->n_fft;
    FFTComplex *VAR_29;
    int VAR_30 = *VAR_11;
    int VAR_31;
    int VAR_32, VAR_33;

    if (!VAR_16)
        VAR_18 += VAR_10;



    VAR_31 = FUNC_0(VAR_15, VAR_8->nb_samples);
    for (VAR_33 = 0; VAR_33 < VAR_31; VAR_33++) {

        VAR_18[VAR_17 * VAR_33] = VAR_14[VAR_30];
        VAR_14[VAR_30] = 0.0f;

        VAR_30 = (VAR_30 + 1) & VAR_21;
    }


    for (VAR_33 = VAR_31; VAR_33 < VAR_8->nb_samples; VAR_33++) {
        VAR_18[VAR_17 * VAR_33] = 0;
    }


    FUNC_4(VAR_23, 0, sizeof(FFTComplex) * VAR_27);

    for (VAR_32 = 0; VAR_32 < VAR_26; VAR_32++) {
        const float *VAR_34 = (const float *)VAR_8->extended_data[VAR_32 * VAR_16];

        if (VAR_32 == VAR_6->lfe_channel) {
            if (VAR_8->format == VAR_0) {
                for (VAR_33 = 0; VAR_33 < VAR_8->nb_samples; VAR_33++) {

                    VAR_18[2 * VAR_33] += VAR_34[VAR_32 + VAR_33 * VAR_19] * VAR_6->gain_lfe;
                }
            } else {
                for (VAR_33 = 0; VAR_33 < VAR_8->nb_samples; VAR_33++) {

                    VAR_18[VAR_33] += VAR_34[VAR_33] * VAR_6->gain_lfe;
                }
            }
            continue;
        }


        VAR_10 = VAR_32 * VAR_27;
        VAR_29 = VAR_12 + VAR_10;


        FUNC_4(VAR_22, 0, sizeof(FFTComplex) * VAR_27);

        if (VAR_8->format == VAR_0) {
            for (VAR_33 = 0; VAR_33 < VAR_8->nb_samples; VAR_33++) {


                VAR_22[VAR_33].re = VAR_34[VAR_33 * VAR_19 + VAR_32];
            }
        } else {
            for (VAR_33 = 0; VAR_33 < VAR_8->nb_samples; VAR_33++) {


                VAR_22[VAR_33].re = VAR_34[VAR_33];
            }
        }


        FUNC_2(VAR_25, VAR_22);
        FUNC_1(VAR_25, VAR_22);
        for (VAR_33 = 0; VAR_33 < VAR_27; VAR_33++) {
            const FFTComplex *VAR_35 = VAR_29 + VAR_33;
            const float VAR_36 = VAR_22[VAR_33].re;
            const float VAR_37 = VAR_22[VAR_33].im;



            VAR_23[VAR_33].re += VAR_36 * VAR_35->re - VAR_37 * VAR_35->im;

            VAR_23[VAR_33].im += VAR_36 * VAR_35->im + VAR_37 * VAR_35->re;
        }
    }


    FUNC_2(VAR_24, VAR_23);
    FUNC_1(VAR_24, VAR_23);

    for (VAR_33 = 0; VAR_33 < VAR_8->nb_samples; VAR_33++) {

        VAR_18[VAR_17 * VAR_33] += VAR_23[VAR_33].re * VAR_28;
    }

    for (VAR_33 = 0; VAR_33 < VAR_15 - 1; VAR_33++) {

        int VAR_38 = (VAR_30 + VAR_33) & VAR_21;

        *(VAR_14 + VAR_38) += VAR_23[VAR_8->nb_samples + VAR_33].re * VAR_28;
    }


    for (VAR_32 = 0; VAR_32 < VAR_9->nb_samples; VAR_32++) {

        if (FUNC_3(VAR_18[VAR_32 * VAR_17]) > 1) {
            VAR_13[0]++;
        }
    }


    *VAR_11 = VAR_30;

    return 0;
}
