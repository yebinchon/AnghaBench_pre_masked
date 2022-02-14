
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_13__ {int channels; int time_base; int sample_rate; TYPE_4__* dst; } ;
struct TYPE_12__ {int nb_samples; scalar_t__ pts; scalar_t__* extended_data; } ;
struct TYPE_11__ {int rdft_len; scalar_t__ next_pts; int fir_len; int frame_nsamples_max; int min_phase; scalar_t__ zero_phase; scalar_t__ conv_idx; scalar_t__ conv_buf; scalar_t__ multi; scalar_t__ kernel_buf; scalar_t__ fft_ctx; } ;
typedef TYPE_1__ FIREqualizerContext ;
typedef int FFTComplex ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,float*,int) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int *,scalar_t__,float*,float*,int) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,float*,int) ;
 int FUNC_6 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    FIREqualizerContext *VAR_4 = VAR_3->priv;
    int VAR_5;

    if (!VAR_4->min_phase) {
        for (VAR_5 = 0; VAR_5 + 1 < VAR_1->channels && VAR_4->fft_ctx; VAR_5 += 2) {
            FUNC_4(VAR_4, VAR_4->kernel_buf, (FFTComplex *)(VAR_4->conv_buf + 2 * VAR_5 * VAR_4->rdft_len),
                            VAR_4->conv_idx + VAR_5, (float *) VAR_2->extended_data[VAR_5],
                            (float *) VAR_2->extended_data[VAR_5+1], VAR_2->nb_samples);
        }

        for ( ; VAR_5 < VAR_1->channels; VAR_5++) {
            FUNC_3(VAR_4, VAR_4->kernel_buf + (VAR_4->multi ? VAR_5 * VAR_4->rdft_len : 0),
                        VAR_4->conv_buf + 2 * VAR_5 * VAR_4->rdft_len, VAR_4->conv_idx + VAR_5,
                        (float *) VAR_2->extended_data[VAR_5], VAR_2->nb_samples);
        }
    } else {
        for (VAR_5 = 0; VAR_5 < VAR_1->channels; VAR_5++) {
            FUNC_5(VAR_4, VAR_4->kernel_buf + (VAR_4->multi ? VAR_5 * VAR_4->rdft_len : 0),
                                     VAR_4->conv_buf + 2 * VAR_5 * VAR_4->rdft_len, VAR_4->conv_idx + VAR_5,
                                     (float *) VAR_2->extended_data[VAR_5], VAR_2->nb_samples);
        }
    }

    VAR_4->next_pts = VAR_0;
    if (VAR_2->pts != VAR_0) {
        VAR_4->next_pts = VAR_2->pts + FUNC_2(VAR_2->nb_samples, FUNC_1(1, VAR_1->sample_rate), VAR_1->time_base);
        if (VAR_4->zero_phase && !VAR_4->min_phase)
            VAR_2->pts -= FUNC_2(VAR_4->fir_len/2, FUNC_1(1, VAR_1->sample_rate), VAR_1->time_base);
    }
    VAR_4->frame_nsamples_max = FUNC_0(VAR_4->frame_nsamples_max, VAR_2->nb_samples);
    return FUNC_6(VAR_3->outputs[0], VAR_2);
}
