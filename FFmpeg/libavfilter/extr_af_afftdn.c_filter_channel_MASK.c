
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_19__ {float re; scalar_t__ im; } ;
struct TYPE_18__ {TYPE_3__* priv; } ;
struct TYPE_17__ {int channels; scalar_t__* extended_data; } ;
struct TYPE_16__ {int block_count; int window_length; float const* window; int fft_length2; int fft_length; int track_noise; TYPE_2__* dnch; } ;
struct TYPE_15__ {double* out_samples; double sfm_fail_total; double sfm_threshold; double sfm_alpha; TYPE_8__* fft_data; int ifft; int prior_band_excit; int prior; int fft; scalar_t__* sfm_fail_flags; } ;
typedef TYPE_2__ DeNoiseChannel ;
typedef TYPE_3__ AudioFFTDeNoiseContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ,TYPE_8__*) ;
 int FUNC_1 (int ,TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_8__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AudioFFTDeNoiseContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame *VAR_6 = VAR_5->in;
    const int VAR_7 = (VAR_6->channels * VAR_2) / VAR_3;
    const int VAR_8 = (VAR_6->channels * (VAR_2+1)) / VAR_3;

    for (int VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++) {
        DeNoiseChannel *VAR_10 = &VAR_4->dnch[VAR_9];
        const float *VAR_11 = (const float *)VAR_6->extended_data[VAR_9];
        double *VAR_12 = VAR_10->out_samples;

        if (VAR_4->track_noise) {
            int VAR_13 = VAR_4->block_count & 0x1FF;

            if (VAR_10->sfm_fail_flags[VAR_13])
                VAR_10->sfm_fail_total--;
            VAR_10->sfm_fail_flags[VAR_13] = 0;
            VAR_10->sfm_threshold *= 1.0 - VAR_10->sfm_alpha;
            VAR_10->sfm_threshold += VAR_10->sfm_alpha * (0.5 + (1.0 / 640) * VAR_10->sfm_fail_total);
        }

        for (int VAR_14 = 0; VAR_14 < VAR_4->window_length; VAR_14++) {
            VAR_10->fft_data[VAR_14].re = VAR_4->window[VAR_14] * VAR_11[VAR_14] * (1LL << 24);
            VAR_10->fft_data[VAR_14].im = 0;
        }

        for (int VAR_15 = VAR_4->window_length; VAR_15 < VAR_4->fft_length2; VAR_15++) {
            VAR_10->fft_data[VAR_15].re = 0;
            VAR_10->fft_data[VAR_15].im = 0;
        }

        FUNC_1(VAR_10->fft, VAR_10->fft_data);
        FUNC_0(VAR_10->fft, VAR_10->fft_data);

        FUNC_3(VAR_10->fft_data, VAR_4->fft_length);
        FUNC_4(VAR_4, VAR_10, VAR_10->fft_data,
                      VAR_10->prior,
                      VAR_10->prior_band_excit,
                      VAR_4->track_noise);
        FUNC_2(VAR_10->fft_data, VAR_4->fft_length);

        FUNC_1(VAR_10->ifft, VAR_10->fft_data);
        FUNC_0(VAR_10->ifft, VAR_10->fft_data);

        for (int VAR_16 = 0; VAR_16 < VAR_4->window_length; VAR_16++)
            VAR_12[VAR_16] += VAR_4->window[VAR_16] * VAR_10->fft_data[VAR_16].re / (1LL << 24);
    }

    return 0;
}
