
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int* write; int* n_clippings; float** ringbuffer; TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_14__ {TYPE_2__* priv; } ;
struct TYPE_13__ {int channels; int nb_samples; scalar_t__* data; } ;
struct TYPE_12__ {float re; float im; } ;
struct TYPE_11__ {int ir_len; int buffer_length; int n_fft; int lfe_channel; float const gain_lfe; int ** fft; int ** ifft; TYPE_3__** temp_afft; TYPE_3__** temp_fft; TYPE_3__** data_hrtf; } ;
typedef TYPE_2__ HeadphoneContext ;
typedef int FFTContext ;
typedef TYPE_3__ FFTComplex ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (float) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    HeadphoneContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in, *VAR_7 = VAR_5->out;
    int VAR_8 = VAR_2;
    int *VAR_9 = &VAR_5->write[VAR_2];
    FFTComplex *VAR_10 = VAR_4->data_hrtf[VAR_2];
    int *VAR_11 = &VAR_5->n_clippings[VAR_2];
    float *VAR_12 = VAR_5->ringbuffer[VAR_2];
    const int VAR_13 = VAR_4->ir_len;
    const float *VAR_14 = (const float *)VAR_6->data[0];
    float *VAR_15 = (float *)VAR_7->data[0];
    const int VAR_16 = VAR_6->channels;
    const int VAR_17 = VAR_4->buffer_length;
    const uint32_t VAR_18 = (uint32_t)VAR_17 - 1;
    FFTComplex *VAR_19 = VAR_4->temp_fft[VAR_2];
    FFTComplex *VAR_20 = VAR_4->temp_afft[VAR_2];
    FFTContext *VAR_21 = VAR_4->ifft[VAR_2];
    FFTContext *VAR_22 = VAR_4->fft[VAR_2];
    const int VAR_23 = VAR_4->n_fft;
    const float VAR_24 = 1.0f / VAR_4->n_fft;
    FFTComplex *VAR_25;
    int VAR_26 = *VAR_9;
    int VAR_27;
    int VAR_28, VAR_29;

    VAR_15 += VAR_8;

    VAR_27 = FUNC_0(VAR_13, VAR_6->nb_samples);
    for (VAR_29 = 0; VAR_29 < VAR_27; VAR_29++) {
        VAR_15[2 * VAR_29] = VAR_12[VAR_26];
        VAR_12[VAR_26] = 0.0;
        VAR_26 = (VAR_26 + 1) & VAR_18;
    }

    for (VAR_29 = VAR_27; VAR_29 < VAR_6->nb_samples; VAR_29++) {
        VAR_15[2 * VAR_29] = 0;
    }

    FUNC_4(VAR_20, 0, sizeof(FFTComplex) * VAR_23);

    for (VAR_28 = 0; VAR_28 < VAR_16; VAR_28++) {
        if (VAR_28 == VAR_4->lfe_channel) {
            for (VAR_29 = 0; VAR_29 < VAR_6->nb_samples; VAR_29++) {
                VAR_15[2 * VAR_29] += VAR_14[VAR_28 + VAR_29 * VAR_16] * VAR_4->gain_lfe;
            }
            continue;
        }

        VAR_8 = VAR_28 * VAR_23;
        VAR_25 = VAR_10 + VAR_8;

        FUNC_4(VAR_19, 0, sizeof(FFTComplex) * VAR_23);

        for (VAR_29 = 0; VAR_29 < VAR_6->nb_samples; VAR_29++) {
            VAR_19[VAR_29].re = VAR_14[VAR_29 * VAR_16 + VAR_28];
        }

        FUNC_2(VAR_22, VAR_19);
        FUNC_1(VAR_22, VAR_19);
        for (VAR_29 = 0; VAR_29 < VAR_23; VAR_29++) {
            const FFTComplex *VAR_30 = VAR_25 + VAR_29;
            const float VAR_31 = VAR_19[VAR_29].re;
            const float VAR_32 = VAR_19[VAR_29].im;

            VAR_20[VAR_29].re += VAR_31 * VAR_30->re - VAR_32 * VAR_30->im;
            VAR_20[VAR_29].im += VAR_31 * VAR_30->im + VAR_32 * VAR_30->re;
        }
    }

    FUNC_2(VAR_21, VAR_20);
    FUNC_1(VAR_21, VAR_20);

    for (VAR_29 = 0; VAR_29 < VAR_6->nb_samples; VAR_29++) {
        VAR_15[2 * VAR_29] += VAR_20[VAR_29].re * VAR_24;
    }

    for (VAR_29 = 0; VAR_29 < VAR_13 - 1; VAR_29++) {
        int VAR_33 = (VAR_26 + VAR_29) & VAR_18;

        *(VAR_12 + VAR_33) += VAR_20[VAR_6->nb_samples + VAR_29].re * VAR_24;
    }

    for (VAR_28 = 0; VAR_28 < VAR_7->nb_samples; VAR_28++) {
        if (FUNC_3(VAR_15[0]) > 1) {
            VAR_11[0]++;
        }

        VAR_15 += 2;
    }

    *VAR_9 = VAR_26;

    return 0;
}
