
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {double const* table; size_t index; size_t table_size; } ;
typedef TYPE_1__ TremoloContext ;
struct TYPE_18__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_17__ {int channels; TYPE_4__* dst; } ;
struct TYPE_16__ {int nb_samples; scalar_t__* data; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_6(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    TremoloContext *VAR_5 = VAR_3->priv;
    const double *VAR_6 = (const double *)VAR_2->data[0];
    const int VAR_7 = VAR_1->channels;
    const int VAR_8 = VAR_2->nb_samples;
    AVFrame *VAR_9;
    double *VAR_10;
    int VAR_11, VAR_12;

    if (FUNC_3(VAR_2)) {
        VAR_9 = VAR_2;
    } else {
        VAR_9 = FUNC_5(VAR_4, VAR_2->nb_samples);
        if (!VAR_9) {
            FUNC_2(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_1(VAR_9, VAR_2);
    }
    VAR_10 = (double *)VAR_9->data[0];

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
        for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
            VAR_10[VAR_12] = VAR_6[VAR_12] * VAR_5->table[VAR_5->index];
        VAR_10 += VAR_7;
        VAR_6 += VAR_7;
        VAR_5->index++;
        if (VAR_5->index >= VAR_5->table_size)
            VAR_5->index = 0;
    }

    if (VAR_2 != VAR_9)
        FUNC_2(&VAR_2);

    return FUNC_4(VAR_4, VAR_9);
}
