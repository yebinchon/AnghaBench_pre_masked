
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int in_formats; } ;
struct TYPE_9__ {int out_formats; } ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*) ;
 TYPE_3__* FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int **) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1)
{
    AVFilterFormats *VAR_2 = ((void*)0);
    AVFilterFormats *VAR_3 = ((void*)0);
    const AVPixFmtDescriptor *VAR_4;
    int VAR_5;

    for (VAR_4 = FUNC_1(((void*)0)); VAR_4;
         VAR_4 = FUNC_1(VAR_4)) {
        if (VAR_4->flags & VAR_0)
            VAR_5 = FUNC_2(&VAR_2, FUNC_0(VAR_4));
        else
            VAR_5 = FUNC_2(&VAR_3, FUNC_0(VAR_4));
        if (VAR_5) {
            FUNC_4(&VAR_2);
            FUNC_4(&VAR_3);
            return VAR_5;
        }
    }

    if ((VAR_5 = FUNC_3(VAR_2, &VAR_1->inputs[0]->out_formats)) < 0 ||
        (VAR_5 = FUNC_3(VAR_3, &VAR_1->outputs[0]->in_formats)) < 0)
        return VAR_5;

    return 0;
}
