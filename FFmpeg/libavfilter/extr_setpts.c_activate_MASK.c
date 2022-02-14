
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_18__ {TYPE_2__** outputs; TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_17__ {int time_base; } ;
struct TYPE_16__ {double* var_values; } ;
typedef TYPE_1__ SetPTSContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (double,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (TYPE_3__*,int ,char*,int ,double,int ,int ,int ) ;
 int FUNC_5 (double) ;
 double FUNC_6 (TYPE_1__*,TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int*,int *) ;
 int FUNC_8 (TYPE_2__*,int **) ;
 int FUNC_9 (TYPE_2__*,int,int ) ;
 int FUNC_10 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_11(AVFilterContext *VAR_5)
{
    SetPTSContext *VAR_6 = VAR_5->priv;
    AVFilterLink *VAR_7 = VAR_5->inputs[0];
    AVFilterLink *VAR_8 = VAR_5->outputs[0];
    AVFrame *VAR_9;
    int VAR_10;
    int64_t VAR_11;
    int VAR_12;

    FUNC_1(VAR_8, VAR_7);

    VAR_12 = FUNC_8(VAR_7, &VAR_9);
    if (VAR_12 < 0)
        return VAR_12;
    if (VAR_12 > 0)
        return FUNC_10(VAR_7, VAR_9);

    if (FUNC_7(VAR_7, &VAR_10, &VAR_11)) {
        double VAR_13 = FUNC_6(VAR_6, VAR_7, ((void*)0), VAR_11);

        FUNC_4(VAR_5, VAR_0, "N:EOF PTS:%s T:%f POS:%s -> PTS:%s T:%f\n",
               FUNC_5(VAR_6->var_values[VAR_3]),
               VAR_6->var_values[VAR_4],
               FUNC_5(VAR_6->var_values[VAR_2]),
               FUNC_5(VAR_13), FUNC_3(VAR_13, VAR_7->time_base));
        FUNC_9(VAR_8, VAR_10, FUNC_0(VAR_13));
        return 0;
    }

    FUNC_2(VAR_8, VAR_7);

    return VAR_1;
}
