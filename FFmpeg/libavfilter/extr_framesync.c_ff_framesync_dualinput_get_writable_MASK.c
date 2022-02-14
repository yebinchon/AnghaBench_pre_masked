
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* parent; } ;
struct TYPE_5__ {int * inputs; } ;
typedef TYPE_2__ FFFrameSync ;
typedef int AVFrame ;


 int FUNC_0 (int **) ;
 int FUNC_1 (TYPE_2__*,int **,int **) ;
 int FUNC_2 (int ,int **) ;

int FUNC_3(FFFrameSync *VAR_0, AVFrame **VAR_1, AVFrame **VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_3 = FUNC_2(VAR_0->parent->inputs[0], VAR_1);
    if (VAR_3 < 0) {
        FUNC_0(VAR_1);
        *VAR_2 = ((void*)0);
        return VAR_3;
    }
    return 0;
}
