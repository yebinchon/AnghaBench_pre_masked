
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int* write; int** delay; float** ir; int* n_clippings; float** ringbuffer; float** temp_src; TYPE_5__* out; TYPE_5__* in; } ;
typedef TYPE_3__ ThreadData ;
struct TYPE_13__ {TYPE_4__* priv; } ;
struct TYPE_12__ {scalar_t__ format; int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_8__ {int ir_samples; int n_samples; } ;
struct TYPE_11__ {int n_conv; int buffer_length; int lfe_channel; float gain_lfe; TYPE_2__* fdsp; TYPE_1__ sofa; } ;
struct TYPE_9__ {scalar_t__ (* scalarproduct_float ) (float const*,float*,int ) ;} ;
typedef TYPE_4__ SOFAlizerContext ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const,int) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (float) ;
 int FUNC_3 (float*,float const* const,int const) ;
 scalar_t__ FUNC_4 (float const*,float*,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1, void *VAR_2, int VAR_3, int VAR_4)
{
    SOFAlizerContext *VAR_5 = VAR_1->priv;
    ThreadData *VAR_6 = VAR_2;
    AVFrame *VAR_7 = VAR_6->in, *VAR_8 = VAR_6->out;
    int VAR_9 = VAR_3;
    int *VAR_10 = &VAR_6->write[VAR_3];
    const int *const VAR_11 = VAR_6->delay[VAR_3];
    const float *const VAR_12 = VAR_6->ir[VAR_3];
    int *VAR_13 = &VAR_6->n_clippings[VAR_3];
    float *VAR_14 = VAR_6->ringbuffer[VAR_3];
    float *VAR_15 = VAR_6->temp_src[VAR_3];
    const int VAR_16 = VAR_5->sofa.ir_samples;
    const int VAR_17 = VAR_5->sofa.n_samples;
    const int VAR_18 = VAR_7->format == VAR_0;
    const int VAR_19 = 1 + !VAR_18;
    const float *VAR_20 = (const float *)VAR_7->extended_data[0];
    float *VAR_21 = (float *)VAR_8->extended_data[VAR_3 * VAR_18];
    const int VAR_22 = VAR_5->n_conv;

    const int VAR_23 = VAR_5->buffer_length;

    const uint32_t VAR_24 = (uint32_t)VAR_23 - 1;
    float *VAR_25[16];
    int VAR_26 = *VAR_10;
    int VAR_27;
    int VAR_28, VAR_29;

    if (!VAR_18)
        VAR_21 += VAR_9;

    for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29++) {

        VAR_25[VAR_29] = VAR_14 + VAR_29 * VAR_23;
    }

    for (VAR_28 = 0; VAR_28 < VAR_7->nb_samples; VAR_28++) {
        const float *VAR_30 = VAR_12;

        VAR_21[0] = 0;
        if (VAR_18) {
            for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29++) {
                const float *VAR_31 = (const float *)VAR_7->extended_data[VAR_29];


                VAR_25[VAR_29][VAR_26] = VAR_31[VAR_28];
            }
        } else {
            for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29++) {

                VAR_25[VAR_29][VAR_26] = VAR_20[VAR_29];
            }
        }


        for (VAR_29 = 0; VAR_29 < VAR_22; VAR_29++) {
            const float *const VAR_32 = VAR_25[VAR_29];

            if (VAR_29 == VAR_5->lfe_channel) {


                VAR_21[0] += *(VAR_25[VAR_5->lfe_channel] + VAR_26) * VAR_5->gain_lfe;
                VAR_30 += VAR_17;
                continue;
            }




            VAR_27 = (VAR_26 - VAR_11[VAR_29] - (VAR_16 - 1) + VAR_23) & VAR_24;

            if (VAR_27 + VAR_16 < VAR_23) {
                FUNC_3(VAR_15, VAR_32 + VAR_27, VAR_16 * sizeof(*VAR_15));
            } else {
                int VAR_33 = FUNC_1(VAR_17 - (VAR_27 % VAR_16), VAR_23 - VAR_27);

                FUNC_3(VAR_15, VAR_32 + VAR_27, VAR_33 * sizeof(*VAR_15));
                FUNC_3(VAR_15 + VAR_33, VAR_32, (VAR_17 - VAR_33) * sizeof(*VAR_15));
            }


            VAR_21[0] += VAR_5->fdsp->scalarproduct_float(VAR_30, VAR_15, FUNC_0(VAR_16, 32));
            VAR_30 += VAR_17;
        }


        if (FUNC_2(VAR_21[0]) > 1)
            VAR_13[0]++;


        VAR_21 += VAR_19;
        VAR_20 += VAR_22;
        VAR_26 = (VAR_26 + 1) & VAR_24;
    }

    *VAR_10 = VAR_26;

    return 0;
}
