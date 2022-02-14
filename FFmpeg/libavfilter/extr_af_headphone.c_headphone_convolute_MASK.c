
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {int* write; int** delay; float** ir; int* n_clippings; float** ringbuffer; float** temp_src; TYPE_4__* out; TYPE_4__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {int channels; int nb_samples; scalar_t__* data; } ;
struct TYPE_9__ {int ir_len; int air_len; int buffer_length; int lfe_channel; float gain_lfe; TYPE_1__* fdsp; } ;
struct TYPE_7__ {scalar_t__ (* scalarproduct_float ) (float const*,float*,int ) ;} ;
typedef TYPE_3__ HeadphoneContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int const,int) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (float) ;
 int FUNC_3 (float*,float const* const,int const) ;
 scalar_t__ FUNC_4 (float const*,float*,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    HeadphoneContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in, *VAR_7 = VAR_5->out;
    int VAR_8 = VAR_2;
    int *VAR_9 = &VAR_5->write[VAR_2];
    const int *const VAR_10 = VAR_5->delay[VAR_2];
    const float *const VAR_11 = VAR_5->ir[VAR_2];
    int *VAR_12 = &VAR_5->n_clippings[VAR_2];
    float *VAR_13 = VAR_5->ringbuffer[VAR_2];
    float *VAR_14 = VAR_5->temp_src[VAR_2];
    const int VAR_15 = VAR_4->ir_len;
    const int VAR_16 = VAR_4->air_len;
    const float *VAR_17 = (const float *)VAR_6->data[0];
    float *VAR_18 = (float *)VAR_7->data[0];
    const int VAR_19 = VAR_6->channels;
    const int VAR_20 = VAR_4->buffer_length;
    const uint32_t VAR_21 = (uint32_t)VAR_20 - 1;
    float *VAR_22[16];
    int VAR_23 = *VAR_9;
    int VAR_24;
    int VAR_25, VAR_26;

    VAR_18 += VAR_8;
    for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
        VAR_22[VAR_26] = VAR_13 + VAR_26 * VAR_20;
    }

    for (VAR_25 = 0; VAR_25 < VAR_6->nb_samples; VAR_25++) {
        const float *VAR_27 = VAR_11;

        *VAR_18 = 0;
        for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
            *(VAR_22[VAR_26] + VAR_23) = VAR_17[VAR_26];
        }

        for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
            const float *const VAR_28 = VAR_22[VAR_26];

            if (VAR_26 == VAR_4->lfe_channel) {
                *VAR_18 += *(VAR_22[VAR_4->lfe_channel] + VAR_23) * VAR_4->gain_lfe;
                VAR_27 += VAR_16;
                continue;
            }

            VAR_24 = (VAR_23 - *(VAR_10 + VAR_26) - (VAR_15 - 1) + VAR_20) & VAR_21;

            if (VAR_24 + VAR_15 < VAR_20) {
                FUNC_3(VAR_14, VAR_28 + VAR_24, VAR_15 * sizeof(*VAR_14));
            } else {
                int VAR_29 = FUNC_1(VAR_16 - (VAR_24 % VAR_15), VAR_20 - VAR_24);

                FUNC_3(VAR_14, VAR_28 + VAR_24, VAR_29 * sizeof(*VAR_14));
                FUNC_3(VAR_14 + VAR_29, VAR_28, (VAR_16 - VAR_29) * sizeof(*VAR_14));
            }

            VAR_18[0] += VAR_4->fdsp->scalarproduct_float(VAR_27, VAR_14, FUNC_0(VAR_15, 32));
            VAR_27 += VAR_16;
        }

        if (FUNC_2(VAR_18[0]) > 1)
            VAR_12[0]++;

        VAR_18 += 2;
        VAR_17 += VAR_19;
        VAR_23 = (VAR_23 + 1) & VAR_21;
    }

    *VAR_9 = VAR_23;

    return 0;
}
