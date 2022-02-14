
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


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    FUNC_0(VAR_1);
    return FUNC_1(VAR_0->dst->outputs[0], VAR_1);
}
