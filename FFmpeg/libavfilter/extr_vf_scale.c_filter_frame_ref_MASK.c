
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dst; } ;
struct TYPE_5__ {TYPE_2__** outputs; } ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterLink *VAR_2 = VAR_0->dst->outputs[1];

    return FUNC_0(VAR_2, VAR_1);
}
