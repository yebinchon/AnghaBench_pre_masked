
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ AVFilterInOut ;



__attribute__((used)) static void FUNC_0(AVFilterInOut **VAR_0, AVFilterInOut **VAR_1)
{
    while (*VAR_0 && (*VAR_0)->next)
        VAR_0 = &((*VAR_0)->next);

    if (!*VAR_0)
        *VAR_0 = *VAR_1;
    else
        (*VAR_0)->next = *VAR_1;
    *VAR_1 = ((void*)0);
}
