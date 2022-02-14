
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {TYPE_2__* priv; TYPE_4__** outputs; } ;
struct TYPE_19__ {int channels; TYPE_5__* dst; } ;
struct TYPE_18__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_17__ {double level_out; double level_in; TYPE_1__* rc; } ;
struct TYPE_16__ {int brickw; scalar_t__ use_brickw; int r1; } ;
typedef TYPE_2__ AudioEmphasisContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__**) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 double const FUNC_4 (int *,double const) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    AudioEmphasisContext *VAR_5 = VAR_3->priv;
    const double *VAR_6 = (const double *)VAR_2->data[0];
    const double VAR_7 = VAR_5->level_out;
    const double VAR_8 = VAR_5->level_in;
    AVFrame *VAR_9;
    double *VAR_10;
    int VAR_11, VAR_12;

    if (FUNC_3(VAR_2)) {
        VAR_9 = VAR_2;
    } else {
        VAR_9 = FUNC_6(VAR_4, VAR_2->nb_samples);
        if (!VAR_9) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_9, VAR_2);
    }
    VAR_10 = (double *)VAR_9->data[0];

    for (VAR_11 = 0; VAR_11 < VAR_2->nb_samples; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < VAR_1->channels; VAR_12++)
            VAR_10[VAR_12] = VAR_7 * FUNC_4(&VAR_5->rc[VAR_12].r1, VAR_5->rc[VAR_12].use_brickw ? FUNC_4(&VAR_5->rc[VAR_12].brickw, VAR_6[VAR_12] * VAR_8) : VAR_6[VAR_12] * VAR_8);
        VAR_10 += VAR_1->channels;
        VAR_6 += VAR_1->channels;
    }

    if (VAR_2 != VAR_9)
        FUNC_2(&VAR_2);
    return FUNC_5(VAR_4, VAR_9);
}
