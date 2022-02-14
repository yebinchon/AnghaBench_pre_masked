
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {int nb_inputs; TYPE_1__** outputs; TYPE_2__** inputs; } ;
struct TYPE_6__ {int out_formats; } ;
struct TYPE_5__ {int in_formats; } ;
typedef TYPE_3__ AVFilterContext ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0)
{
    int VAR_1;
    int VAR_2;

    static const enum AVPixelFormat VAR_3[] = {
        129,
        132,
        128,
        130,
        131,
        133
    };
    static const enum AVPixelFormat VAR_4[] = {
        132,
        131,
        133
    };

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_inputs; VAR_1++) {
        VAR_2 = FUNC_0(FUNC_1(VAR_3), &VAR_0->inputs[VAR_1]->out_formats);
        if (VAR_2 < 0)
            return VAR_2;
    }

    VAR_2 = FUNC_0(FUNC_1(VAR_4), &VAR_0->outputs[0]->in_formats);
    if (VAR_2 < 0)
        return VAR_2;

    return 0;
}
