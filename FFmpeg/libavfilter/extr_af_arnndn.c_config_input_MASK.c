
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


struct TYPE_13__ {TYPE_4__* priv; } ;
struct TYPE_12__ {int channels; TYPE_6__* dst; } ;
struct TYPE_11__ {int channels; TYPE_1__* model; TYPE_3__* st; } ;
struct TYPE_9__ {void* denoise_gru_state; void* noise_gru_state; void* vad_gru_state; TYPE_1__* model; } ;
struct TYPE_10__ {int txi_fn; int txi; int tx_fn; int tx; TYPE_2__ rnn; } ;
struct TYPE_8__ {int denoise_gru_size; int noise_gru_size; int vad_gru_size; } ;
typedef TYPE_3__ DenoiseState ;
typedef TYPE_4__ AudioRNNContext ;
typedef TYPE_5__ AVFilterLink ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int *,int *,int ,int,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_3->dst;
    AudioRNNContext *VAR_5 = VAR_4->priv;
    int VAR_6;

    VAR_5->channels = VAR_3->channels;

    VAR_5->st = FUNC_2(VAR_5->channels, sizeof(DenoiseState));
    if (!VAR_5->st)
        return FUNC_0(VAR_1);

    for (int VAR_7 = 0; VAR_7 < VAR_5->channels; VAR_7++) {
        DenoiseState *VAR_8 = &VAR_5->st[VAR_7];

        VAR_8->rnn.model = VAR_5->model;
        VAR_8->rnn.vad_gru_state = FUNC_2(sizeof(float), FUNC_1(VAR_5->model->vad_gru_size, 16));
        VAR_8->rnn.noise_gru_state = FUNC_2(sizeof(float), FUNC_1(VAR_5->model->noise_gru_size, 16));
        VAR_8->rnn.denoise_gru_state = FUNC_2(sizeof(float), FUNC_1(VAR_5->model->denoise_gru_size, 16));
        if (!VAR_8->rnn.vad_gru_state ||
            !VAR_8->rnn.noise_gru_state ||
            !VAR_8->rnn.denoise_gru_state)
            return FUNC_0(VAR_1);

        VAR_6 = FUNC_3(&VAR_8->tx, &VAR_8->tx_fn, VAR_0, 0, VAR_2, ((void*)0), 0);
        if (VAR_6 < 0)
            return VAR_6;

        VAR_6 = FUNC_3(&VAR_8->txi, &VAR_8->txi_fn, VAR_0, 1, VAR_2, ((void*)0), 0);
        if (VAR_6 < 0)
            return VAR_6;
    }

    return 0;
}
