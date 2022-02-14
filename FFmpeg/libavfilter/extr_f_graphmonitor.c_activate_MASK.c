
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_21__ {TYPE_3__** outputs; TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_20__ {int time_base; } ;
struct TYPE_19__ {scalar_t__ pts; } ;
struct TYPE_18__ {scalar_t__ pts; } ;
typedef TYPE_1__ GraphMonitorContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__**) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__**) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_2)
{
    GraphMonitorContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_2->inputs[0];
    AVFilterLink *VAR_5 = VAR_2->outputs[0];
    int64_t VAR_6 = VAR_0;

    FUNC_1(VAR_5, VAR_4);

    if (FUNC_7(VAR_4)) {
        AVFrame *VAR_7 = ((void*)0);
        int VAR_8;

        VAR_8 = FUNC_6(VAR_4, &VAR_7);
        if (VAR_8 < 0)
            return VAR_8;
        if (VAR_8 > 0) {
            VAR_6 = VAR_7->pts;
            FUNC_3(&VAR_7);
        }
    }

    if (VAR_6 != VAR_0) {
        VAR_6 = FUNC_4(VAR_6, VAR_4->time_base, VAR_5->time_base);
        if (VAR_3->pts < VAR_6 && FUNC_8(VAR_5))
            return FUNC_5(VAR_2, VAR_6);
    }

    FUNC_0(VAR_4, VAR_5);
    FUNC_2(VAR_5, VAR_4);

    return VAR_1;
}
