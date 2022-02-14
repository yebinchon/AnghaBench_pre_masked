
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* src; TYPE_1__* srcpad; } ;
struct TYPE_7__ {int nb_inputs; TYPE_3__** inputs; } ;
struct TYPE_6__ {int (* poll_frame ) (TYPE_3__*) ;} ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3(AVFilterLink *VAR_2)
{
    int VAR_3, VAR_4 = VAR_1;

    if (VAR_2->srcpad->poll_frame)
        return VAR_2->srcpad->poll_frame(VAR_2);

    for (VAR_3 = 0; VAR_3 < VAR_2->src->nb_inputs; VAR_3++) {
        int VAR_5;
        if (!VAR_2->src->inputs[VAR_3])
            return FUNC_0(VAR_0);
        VAR_5 = FUNC_3(VAR_2->src->inputs[VAR_3]);
        VAR_4 = FUNC_1(VAR_4, VAR_5);
    }

    return VAR_4;
}
