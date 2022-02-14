
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_6__ {int in_formats; } ;
struct TYPE_5__ {int out_formats; } ;
typedef TYPE_3__ AVFilterContext ;




 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0)
{
    static const enum AVPixelFormat VAR_1[] = {128, 129};
    static const enum AVPixelFormat VAR_2[] = {128, 129};
    int VAR_3;

    if ((VAR_3 = FUNC_0(FUNC_1(VAR_1) , &VAR_0->inputs[0]->out_formats)) < 0)
        return VAR_3;
    if ((VAR_3 = FUNC_0(FUNC_1(VAR_2), &VAR_0->outputs[0]->in_formats)) < 0)
        return VAR_3;
    return 0;
}
