
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_17__ {TYPE_4__* dst; } ;
struct TYPE_16__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_15__ {float mult; scalar_t__ clip; } ;
typedef TYPE_1__ ExtraStereoContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 float FUNC_1 (float,int,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_1->dst;
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    ExtraStereoContext *VAR_5 = VAR_3->priv;
    const float *VAR_6 = (const float *)VAR_2->data[0];
    const float VAR_7 = VAR_5->mult;
    AVFrame *VAR_8;
    float *VAR_9;
    int VAR_10;

    if (FUNC_4(VAR_2)) {
        VAR_8 = VAR_2;
    } else {
        VAR_8 = FUNC_6(VAR_4, VAR_2->nb_samples);
        if (!VAR_8) {
            FUNC_3(&VAR_2);
            return FUNC_0(VAR_0);
        }
        FUNC_2(VAR_8, VAR_2);
    }
    VAR_9 = (float *)VAR_8->data[0];

    for (VAR_10 = 0; VAR_10 < VAR_2->nb_samples; VAR_10++) {
        float VAR_11, VAR_12, VAR_13;

        VAR_12 = VAR_6[VAR_10 * 2 ];
        VAR_13 = VAR_6[VAR_10 * 2 + 1];
        VAR_11 = (VAR_12 + VAR_13) / 2.;
        VAR_12 = VAR_11 + VAR_7 * (VAR_12 - VAR_11);
        VAR_13 = VAR_11 + VAR_7 * (VAR_13 - VAR_11);

        if (VAR_5->clip) {
            VAR_12 = FUNC_1(VAR_12, -1, 1);
            VAR_13 = FUNC_1(VAR_13, -1, 1);
        }

        VAR_9[VAR_10 * 2 ] = VAR_12;
        VAR_9[VAR_10 * 2 + 1] = VAR_13;
    }

    if (VAR_8 != VAR_2)
        FUNC_3(&VAR_2);
    return FUNC_5(VAR_4, VAR_8);
}
