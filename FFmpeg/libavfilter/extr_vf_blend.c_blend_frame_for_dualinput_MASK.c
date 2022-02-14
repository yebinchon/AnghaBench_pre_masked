
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * outputs; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
typedef TYPE_1__ FFFrameSync ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterContext ;


 int * FUNC_0 (TYPE_2__*,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,int **,int **) ;

__attribute__((used)) static int FUNC_3(FFFrameSync *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->parent;
    AVFrame *VAR_2, *VAR_3, *VAR_4;
    int VAR_5;

    VAR_5 = FUNC_2(VAR_0, &VAR_2, &VAR_3);
    if (VAR_5 < 0)
        return VAR_5;
    if (!VAR_3)
        return FUNC_1(VAR_1->outputs[0], VAR_2);
    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
    return FUNC_1(VAR_1->outputs[0], VAR_4);
}
