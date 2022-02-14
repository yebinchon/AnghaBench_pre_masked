
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* src; } ;
struct TYPE_6__ {TYPE_2__** inputs; } ;
typedef TYPE_2__ AVFilterLink ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    AVFilterLink *VAR_2 = VAR_1->src->inputs[0];
    int VAR_3;

    VAR_3 = FUNC_0(VAR_2);
    if (VAR_3 == VAR_0)
        VAR_3 = FUNC_1(VAR_2, ((void*)0));
    return VAR_3;
}
