
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {TYPE_4__** outputs; TYPE_2__* priv; } ;
struct TYPE_16__ {TYPE_5__* dst; } ;
struct TYPE_15__ {int channels; int nb_samples; int pts; scalar_t__* extended_data; } ;
struct TYPE_14__ {float* ires; float* fsamples; int winlen; int tabsize; int irdft; int rdft; TYPE_1__* out; } ;
struct TYPE_13__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ SuperEqualizerContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (int ,float*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    SuperEqualizerContext *VAR_4 = VAR_3->priv;
    AVFilterLink *VAR_5 = VAR_3->outputs[0];
    const float *VAR_6 = VAR_4->ires;
    float *VAR_7 = VAR_4->fsamples;
    int VAR_8, VAR_9;

    AVFrame *VAR_10 = FUNC_4(VAR_5, VAR_4->winlen);
    float *VAR_11, *VAR_12, *VAR_13;

    if (!VAR_10) {
        FUNC_1(&VAR_2);
        return FUNC_0(VAR_0);
    }

    for (VAR_8 = 0; VAR_8 < VAR_2->channels; VAR_8++) {
        VAR_13 = (float *)VAR_10->extended_data[VAR_8];
        VAR_12 = (float *)VAR_4->out->extended_data[VAR_8];
        VAR_11 = (float *)VAR_2->extended_data[VAR_8];

        for (VAR_9 = 0; VAR_9 < VAR_2->nb_samples; VAR_9++)
            VAR_7[VAR_9] = VAR_11[VAR_9];
        for (; VAR_9 < VAR_4->tabsize; VAR_9++)
            VAR_7[VAR_9] = 0;

        FUNC_2(VAR_4->rdft, VAR_7);

        VAR_7[0] = VAR_6[0] * VAR_7[0];
        VAR_7[1] = VAR_6[1] * VAR_7[1];
        for (VAR_9 = 1; VAR_9 < VAR_4->tabsize / 2; VAR_9++) {
            float VAR_14, VAR_15;

            VAR_14 = VAR_6[VAR_9*2 ] * VAR_7[VAR_9*2] - VAR_6[VAR_9*2+1] * VAR_7[VAR_9*2+1];
            VAR_15 = VAR_6[VAR_9*2+1] * VAR_7[VAR_9*2] + VAR_6[VAR_9*2 ] * VAR_7[VAR_9*2+1];

            VAR_7[VAR_9*2 ] = VAR_14;
            VAR_7[VAR_9*2+1] = VAR_15;
        }

        FUNC_2(VAR_4->irdft, VAR_7);

        for (VAR_9 = 0; VAR_9 < VAR_4->winlen; VAR_9++)
            VAR_12[VAR_9] += VAR_7[VAR_9] / VAR_4->tabsize * 2;
        for (VAR_9 = VAR_4->winlen; VAR_9 < VAR_4->tabsize; VAR_9++)
            VAR_12[VAR_9] = VAR_7[VAR_9] / VAR_4->tabsize * 2;
        for (VAR_9 = 0; VAR_9 < VAR_4->winlen; VAR_9++)
            VAR_13[VAR_9] = VAR_12[VAR_9];
        for (VAR_9 = 0; VAR_9 < VAR_4->winlen; VAR_9++)
            VAR_12[VAR_9] = VAR_12[VAR_9+VAR_4->winlen];
    }

    VAR_10->pts = VAR_2->pts;
    FUNC_1(&VAR_2);

    return FUNC_3(VAR_5, VAR_10);
}
