
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * jit_table; int (* free_func ) (int *) ;int * jit_hashchain; } ;
typedef TYPE_1__ Q68State ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(Q68State *VAR_0)
{
    FUNC_0(VAR_0);
    VAR_0->free_func(VAR_0->jit_hashchain);
    VAR_0->jit_hashchain = ((void*)0);
    VAR_0->free_func(VAR_0->jit_table);
    VAR_0->jit_table = ((void*)0);
}
