
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dst; } ;
struct TYPE_4__ {int * outputs; } ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int * FUNC_0 (int ,int) ;

AVFrame *FUNC_1(AVFilterLink *VAR_0, int VAR_1)
{
    return FUNC_0(VAR_0->dst->outputs[0], VAR_1);
}
