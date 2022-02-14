
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_6__ {int in_formats; } ;
struct TYPE_5__ {int out_formats; } ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_2)
{
    int VAR_3;

    if ((VAR_3 = FUNC_0(FUNC_1(VAR_0), &VAR_2->inputs[0]->out_formats)) < 0)
        return VAR_3;

    if ((VAR_3 = FUNC_0(FUNC_1(VAR_1), &VAR_2->outputs[0]->in_formats)) < 0)
        return VAR_3;

    return 0;
}
