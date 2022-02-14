
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int frame_len_bits; int block_len_bits; float** windows; int ** coefs; int * output; int * frame_out; TYPE_1__* fdsp; TYPE_3__* mdct_ctx; } ;
typedef TYPE_2__ WMACodecContext ;
struct TYPE_14__ {int channels; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int nb_samples; scalar_t__ extended_data; } ;
struct TYPE_12__ {int (* mdct_calc ) (TYPE_3__*,int *,int *) ;} ;
struct TYPE_10__ {int (* vector_fmul ) (int ,int ,float const*,int) ;int (* vector_fmul_reverse ) (int *,int ,float const*,int) ;int (* vector_fmul_scalar ) (int ,float*,float,int) ;} ;
typedef TYPE_3__ FFTContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,float*,float,int) ;
 int FUNC_5 (int *,int ,float const*,int) ;
 int FUNC_6 (int ,int ,float const*,int) ;
 int FUNC_7 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_2, const AVFrame *VAR_3)
{
    WMACodecContext *VAR_4 = VAR_2->priv_data;
    float **VAR_5 = (float **) VAR_3->extended_data;
    int VAR_6 = VAR_3->nb_samples;
    int VAR_7 = VAR_4->frame_len_bits - VAR_4->block_len_bits;
    FFTContext *VAR_8 = &VAR_4->mdct_ctx[VAR_7];
    int VAR_9;
    const float *VAR_10 = VAR_4->windows[VAR_7];
    int VAR_11 = 1 << VAR_4->block_len_bits;
    float VAR_12 = 2.0 * 32768.0 / VAR_11;

    for (VAR_9 = 0; VAR_9 < VAR_2->channels; VAR_9++) {
        FUNC_3(VAR_4->output, VAR_4->frame_out[VAR_9], VAR_11 * sizeof(*VAR_4->output));
        VAR_4->fdsp->vector_fmul_scalar(VAR_4->frame_out[VAR_9], VAR_5[VAR_9], VAR_12, VAR_6);
        VAR_4->fdsp->vector_fmul_reverse(&VAR_4->output[VAR_11], VAR_4->frame_out[VAR_9],
                                    VAR_10, VAR_6);
        VAR_4->fdsp->vector_fmul(VAR_4->frame_out[VAR_9], VAR_4->frame_out[VAR_9], VAR_10, VAR_6);
        VAR_8->mdct_calc(VAR_8, VAR_4->coefs[VAR_9], VAR_4->output);
        if (!FUNC_2(VAR_4->coefs[VAR_9][0])) {
            FUNC_1(VAR_2, VAR_0, "Input contains NaN/+-Inf\n");
            return FUNC_0(VAR_1);
        }
    }

    return 0;
}
