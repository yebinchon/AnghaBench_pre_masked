
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* priv; } ;
struct TYPE_11__ {int sample_rate; int channels; int min_samples; int max_samples; int partial_buf_size; TYPE_3__* dst; } ;
struct TYPE_10__ {int fir_len; int delay; int remaining; int rdft_len; int nsamples_max; int cepstrum_len; int analysis_rdft_len; int accuracy; scalar_t__ fixed; void* conv_idx; void* conv_buf; void* kernel_buf; void* kernel_tmp_buf; void* analysis_buf; scalar_t__ multi; void* dump_buf; void* analysis_rdft; scalar_t__ dumpfile; void* analysis_irdft; void* cepstrum_buf; void* cepstrum_irdft; void* cepstrum_rdft; scalar_t__ min_phase; int fft_ctx; scalar_t__ fft2; void* irdft; void* rdft; scalar_t__ frame_nsamples_max; scalar_t__ next_pts; } ;
typedef TYPE_1__ FIREqualizerContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_3__*,int ,char*,...) ;
 void* FUNC_8 (int,int) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_12(AVFilterLink *VAR_8)
{
    AVFilterContext *VAR_9 = VAR_8->dst;
    FIREqualizerContext *VAR_10 = VAR_9->priv;
    int VAR_11;

    FUNC_10(VAR_10);

    VAR_10->next_pts = 0;
    VAR_10->frame_nsamples_max = 0;

    VAR_10->fir_len = FUNC_1(2 * (int)(VAR_8->sample_rate * VAR_10->delay) + 1, 3);
    VAR_10->remaining = VAR_10->fir_len - 1;

    for (VAR_11 = VAR_7; VAR_11 <= VAR_6; VAR_11++) {
        VAR_10->rdft_len = 1 << VAR_11;
        VAR_10->nsamples_max = VAR_10->rdft_len - VAR_10->fir_len + 1;
        if (VAR_10->nsamples_max * 2 >= VAR_10->fir_len)
            break;
    }

    if (VAR_11 > VAR_6) {
        FUNC_7(VAR_9, VAR_1, "too large delay, please decrease it.\n");
        return FUNC_0(VAR_3);
    }

    if (!(VAR_10->rdft = FUNC_9(VAR_11, VAR_2)) || !(VAR_10->irdft = FUNC_9(VAR_11, VAR_5)))
        return FUNC_0(VAR_4);

    if (VAR_10->fft2 && !VAR_10->multi && VAR_8->channels > 1 && !(VAR_10->fft_ctx = FUNC_6(VAR_11, 0)))
        return FUNC_0(VAR_4);

    if (VAR_10->min_phase) {
        int VAR_12 = VAR_11 + 2;
        if (VAR_12 > VAR_6) {
            FUNC_7(VAR_9, VAR_1, "too large delay, please decrease it.\n");
            return FUNC_0(VAR_3);
        }

        VAR_12 = FUNC_2(VAR_6, VAR_12 + 1);
        VAR_10->cepstrum_rdft = FUNC_9(VAR_12, VAR_2);
        VAR_10->cepstrum_irdft = FUNC_9(VAR_12, VAR_5);
        if (!VAR_10->cepstrum_rdft || !VAR_10->cepstrum_irdft)
            return FUNC_0(VAR_4);

        VAR_10->cepstrum_len = 1 << VAR_12;
        VAR_10->cepstrum_buf = FUNC_8(VAR_10->cepstrum_len, sizeof(*VAR_10->cepstrum_buf));
        if (!VAR_10->cepstrum_buf)
            return FUNC_0(VAR_4);
    }

    for ( ; VAR_11 <= VAR_6; VAR_11++) {
        VAR_10->analysis_rdft_len = 1 << VAR_11;
        if (VAR_8->sample_rate <= VAR_10->accuracy * VAR_10->analysis_rdft_len)
            break;
    }

    if (VAR_11 > VAR_6) {
        FUNC_7(VAR_9, VAR_1, "too small accuracy, please increase it.\n");
        return FUNC_0(VAR_3);
    }

    if (!(VAR_10->analysis_irdft = FUNC_9(VAR_11, VAR_5)))
        return FUNC_0(VAR_4);

    if (VAR_10->dumpfile) {
        VAR_10->analysis_rdft = FUNC_9(VAR_11, VAR_2);
        VAR_10->dump_buf = FUNC_8(VAR_10->analysis_rdft_len, sizeof(*VAR_10->dump_buf));
    }

    VAR_10->analysis_buf = FUNC_8(VAR_10->analysis_rdft_len, sizeof(*VAR_10->analysis_buf));
    VAR_10->kernel_tmp_buf = FUNC_8(VAR_10->rdft_len * (VAR_10->multi ? VAR_8->channels : 1), sizeof(*VAR_10->kernel_tmp_buf));
    VAR_10->kernel_buf = FUNC_8(VAR_10->rdft_len * (VAR_10->multi ? VAR_8->channels : 1), sizeof(*VAR_10->kernel_buf));
    VAR_10->conv_buf = FUNC_5(2 * VAR_10->rdft_len * VAR_8->channels, sizeof(*VAR_10->conv_buf));
    VAR_10->conv_idx = FUNC_5(VAR_8->channels, sizeof(*VAR_10->conv_idx));
    if (!VAR_10->analysis_buf || !VAR_10->kernel_tmp_buf || !VAR_10->kernel_buf || !VAR_10->conv_buf || !VAR_10->conv_idx)
        return FUNC_0(VAR_4);

    FUNC_7(VAR_9, VAR_0, "sample_rate = %d, channels = %d, analysis_rdft_len = %d, rdft_len = %d, fir_len = %d, nsamples_max = %d.\n",
           VAR_8->sample_rate, VAR_8->channels, VAR_10->analysis_rdft_len, VAR_10->rdft_len, VAR_10->fir_len, VAR_10->nsamples_max);

    if (VAR_10->fixed)
        VAR_8->min_samples = VAR_8->max_samples = VAR_8->partial_buf_size = VAR_10->nsamples_max;

    return FUNC_11(VAR_9, FUNC_3(VAR_10), FUNC_4(VAR_10));
}
