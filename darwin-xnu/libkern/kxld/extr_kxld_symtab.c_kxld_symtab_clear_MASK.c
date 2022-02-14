
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ name_index_initialized; scalar_t__ cxx_index_initialized; scalar_t__ strsize; int * strings; int name_index; int cxx_index; int syms; } ;
typedef TYPE_1__ KXLDSymtab ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(KXLDSymtab *VAR_0)
{
    FUNC_0(VAR_0);

    FUNC_1(&VAR_0->syms);
    FUNC_2(&VAR_0->cxx_index);
    FUNC_2(&VAR_0->name_index);
    VAR_0->strings = ((void*)0);
    VAR_0->strsize = 0;
    VAR_0->cxx_index_initialized = 0;
    VAR_0->name_index_initialized = 0;
}
