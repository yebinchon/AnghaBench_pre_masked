
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* dst; } ;
struct TYPE_6__ {size_t select_out; scalar_t__ select; } ;
typedef TYPE_1__ SelectContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    SelectContext *VAR_3 = VAR_2->priv;

    FUNC_2(VAR_2, VAR_1);
    if (VAR_3->select)
        return FUNC_1(VAR_2->outputs[VAR_3->select_out], VAR_1);

    FUNC_0(&VAR_1);
    return 0;
}
