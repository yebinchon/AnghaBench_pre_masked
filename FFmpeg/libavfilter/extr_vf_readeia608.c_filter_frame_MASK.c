
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; TYPE_2__** outputs; } ;
struct TYPE_9__ {TYPE_3__* dst; } ;
struct TYPE_8__ {int start; int end; scalar_t__ nb_found; } ;
typedef TYPE_1__ ReadEIA608Context ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int *,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    AVFilterLink *VAR_3 = VAR_2->outputs[0];
    ReadEIA608Context *VAR_4 = VAR_2->priv;
    int VAR_5;

    VAR_4->nb_found = 0;
    for (VAR_5 = VAR_4->start; VAR_5 <= VAR_4->end; VAR_5++)
        FUNC_0(VAR_2, VAR_0, VAR_1, VAR_5);

    return FUNC_1(VAR_3, VAR_1);
}
