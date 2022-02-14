
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef double int32_t ;
struct TYPE_18__ {TYPE_1__* priv; TYPE_3__** outputs; } ;
struct TYPE_17__ {int channels; TYPE_4__* dst; } ;
struct TYPE_16__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_15__ {double dcshift; scalar_t__ limitergain; double limiterthreshold; } ;
typedef TYPE_1__ DCShiftContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 double VAR_1 ;
 double FUNC_1 (double) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    AVFilterLink *VAR_5 = VAR_4->outputs[0];
    AVFrame *VAR_6;
    DCShiftContext *VAR_7 = VAR_4->priv;
    int VAR_8, VAR_9;
    double VAR_10 = VAR_7->dcshift;

    if (FUNC_4(VAR_3)) {
        VAR_6 = VAR_3;
    } else {
        VAR_6 = FUNC_6(VAR_5, VAR_3->nb_samples);
        if (!VAR_6) {
            FUNC_3(&VAR_3);
            return FUNC_0(VAR_0);
        }
        FUNC_2(VAR_6, VAR_3);
    }

    if (VAR_7->limitergain > 0) {
        for (VAR_8 = 0; VAR_8 < VAR_2->channels; VAR_8++) {
            const int32_t *VAR_11 = (int32_t *)VAR_3->extended_data[VAR_8];
            int32_t *VAR_12 = (int32_t *)VAR_6->extended_data[VAR_8];

            for (VAR_9 = 0; VAR_9 < VAR_3->nb_samples; VAR_9++) {
                double VAR_13;

                VAR_13 = VAR_11[VAR_9];

                if (VAR_13 > VAR_7->limiterthreshold && VAR_10 > 0) {
                    VAR_13 = (VAR_13 - VAR_7->limiterthreshold) * VAR_7->limitergain /
                             (VAR_1 - VAR_7->limiterthreshold) +
                             VAR_7->limiterthreshold + VAR_10;
                } else if (VAR_13 < -VAR_7->limiterthreshold && VAR_10 < 0) {
                    VAR_13 = (VAR_13 + VAR_7->limiterthreshold) * VAR_7->limitergain /
                             (VAR_1 - VAR_7->limiterthreshold) -
                             VAR_7->limiterthreshold + VAR_10;
                } else {
                    VAR_13 = VAR_10 * VAR_1 + VAR_13;
                }

                VAR_12[VAR_9] = FUNC_1(VAR_13);
            }
        }
    } else {
        for (VAR_8 = 0; VAR_8 < VAR_2->channels; VAR_8++) {
            const int32_t *VAR_14 = (int32_t *)VAR_3->extended_data[VAR_8];
            int32_t *VAR_15 = (int32_t *)VAR_6->extended_data[VAR_8];

            for (VAR_9 = 0; VAR_9 < VAR_3->nb_samples; VAR_9++) {
                double VAR_16 = VAR_10 * (VAR_1 + 1.) + VAR_14[VAR_9];

                VAR_15[VAR_9] = FUNC_1(VAR_16);
            }
        }
    }

    if (VAR_6 != VAR_3)
        FUNC_3(&VAR_3);
    return FUNC_5(VAR_5, VAR_6);
}
