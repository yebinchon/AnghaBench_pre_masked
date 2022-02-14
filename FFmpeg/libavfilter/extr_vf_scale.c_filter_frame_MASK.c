
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** outputs; } ;
struct TYPE_6__ {TYPE_2__* dst; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int **) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    AVFilterLink *VAR_3 = VAR_2->outputs[0];
    AVFrame *VAR_4;
    int VAR_5;

    VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4);
    if (VAR_4)
        return FUNC_0(VAR_3, VAR_4);

    return VAR_5;
}
