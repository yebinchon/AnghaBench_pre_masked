
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int nb_outputs; TYPE_1__** outputs; } ;
struct TYPE_6__ {TYPE_2__* dst; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static AVFrame *FUNC_2(AVFilterLink *VAR_0, int VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    unsigned VAR_3 = FUNC_0(VAR_0);
    AVFilterLink *VAR_4 = VAR_2->outputs[VAR_3 % VAR_2->nb_outputs];

    return FUNC_1(VAR_4, VAR_1);
}
