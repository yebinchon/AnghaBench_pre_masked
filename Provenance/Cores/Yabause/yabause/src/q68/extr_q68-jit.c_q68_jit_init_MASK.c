
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ m68k_start; } ;
struct TYPE_8__ {TYPE_2__* jit_table; int (* free_func ) (TYPE_2__*) ;int * jit_flush; int jit_pages; TYPE_2__* jit_hashchain; TYPE_2__* (* malloc_func ) (int) ;} ;
typedef TYPE_1__ Q68State ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int) ;
 TYPE_2__* FUNC_4 (int) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*) ;

int FUNC_7(Q68State *VAR_1)
{
    VAR_1->jit_table =
        VAR_1->malloc_func(sizeof(*VAR_1->jit_table) * VAR_0);
    if (!VAR_1->jit_table) {
        FUNC_0("No memory for JIT table");
        goto error_return;
    }
    VAR_1->jit_hashchain =
        VAR_1->malloc_func(sizeof(*VAR_1->jit_hashchain) * VAR_0);
    if (!VAR_1->jit_hashchain) {
        FUNC_0("No memory for JIT hash chain table");
        goto error_free_jit_table;
    }



    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_1->jit_table[VAR_2].m68k_start = 0;
    }



    FUNC_3(VAR_1->jit_pages, 0, sizeof(VAR_1->jit_pages));


    VAR_1->jit_flush = ((void*)0);
    return 1;

  error_free_jit_table:
    VAR_1->free_func(VAR_1->jit_table);
    VAR_1->jit_table = ((void*)0);
  error_return:
    return 0;
}
