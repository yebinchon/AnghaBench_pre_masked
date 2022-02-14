
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int v; struct TYPE_8__* next; } ;
typedef TYPE_1__ Set ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

Set *FUNC_2(Set *VAR_0, Set *VAR_1) {
    Set *VAR_2 = ((void*)0);
    for (; VAR_0; VAR_0 = VAR_0->next)
        if (FUNC_1(VAR_1, VAR_0->v))
            VAR_2 = FUNC_0(VAR_2, VAR_0->v);
    return VAR_2;
}
