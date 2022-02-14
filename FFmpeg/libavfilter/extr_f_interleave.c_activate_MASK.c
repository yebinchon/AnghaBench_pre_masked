
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_19__ {int time_base; } ;
struct TYPE_18__ {int nb_inputs; TYPE_4__** inputs; TYPE_1__* priv; int ** outputs; } ;
struct TYPE_17__ {scalar_t__ pts; } ;
struct TYPE_16__ {scalar_t__ pts; } ;
typedef TYPE_1__ InterleaveContext ;
typedef TYPE_2__ AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__**) ;
 TYPE_2__* FUNC_6 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(AVFilterContext *VAR_7)
{
    AVFilterLink *VAR_8 = VAR_7->outputs[0];
    InterleaveContext *VAR_9 = VAR_7->priv;
    int64_t VAR_10, VAR_11 = VAR_6;
    int VAR_12, VAR_13 = 0, VAR_14 = -1;

    FUNC_0(VAR_8, VAR_7);

    for (VAR_12 = 0; VAR_12 < VAR_7->nb_inputs; VAR_12++) {
        if (!FUNC_10(VAR_7->inputs[VAR_12]) &&
            !FUNC_7(VAR_7->inputs[VAR_12]))
            break;
    }

    if (VAR_12 == VAR_7->nb_inputs) {
        for (VAR_12 = 0; VAR_12 < VAR_7->nb_inputs; VAR_12++) {
            AVFrame *VAR_15;

            if (FUNC_10(VAR_7->inputs[VAR_12]))
                continue;

            VAR_15 = FUNC_6(VAR_7->inputs[VAR_12], 0);
            if (VAR_15->pts == VAR_3) {
                int VAR_16;

                FUNC_2(VAR_7, VAR_2,
                       "NOPTS value for input frame cannot be accepted, frame discarded\n");
                VAR_16 = FUNC_5(VAR_7->inputs[VAR_12], &VAR_15);
                if (VAR_16 < 0)
                    return VAR_16;
                FUNC_1(&VAR_15);
                return VAR_1;
            }

            VAR_10 = FUNC_3(VAR_15->pts, VAR_7->inputs[VAR_12]->time_base, VAR_4);
            if (VAR_10 < VAR_11) {
                VAR_11 = VAR_10;
                VAR_14 = VAR_12;
            }
        }

        if (VAR_14 >= 0) {
            AVFrame *VAR_17;
            int VAR_18;

            VAR_18 = FUNC_5(VAR_7->inputs[VAR_14], &VAR_17);
            if (VAR_18 < 0)
                return VAR_18;

            VAR_17->pts = VAR_9->pts = VAR_11;
            return FUNC_4(VAR_8, VAR_17);
        }
    }

    for (VAR_12 = 0; VAR_12 < VAR_7->nb_inputs; VAR_12++) {
        if (FUNC_7(VAR_7->inputs[VAR_12]))
            continue;
        if (FUNC_9(VAR_8) &&
            !FUNC_10(VAR_7->inputs[VAR_12])) {
            FUNC_8(VAR_7->inputs[VAR_12]);
            return 0;
        }
        VAR_13++;
    }

    if (VAR_13 == VAR_7->nb_inputs) {
        FUNC_11(VAR_8, VAR_0, VAR_9->pts);
        return 0;
    }

    return VAR_5;
}
