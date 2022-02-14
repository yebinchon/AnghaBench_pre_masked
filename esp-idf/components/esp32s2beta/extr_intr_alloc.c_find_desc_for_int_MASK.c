
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cpu; int intno; struct TYPE_4__* next; } ;
typedef TYPE_1__ vector_desc_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static vector_desc_t *FUNC_0(int VAR_1, int VAR_2)
{
    vector_desc_t *VAR_3=VAR_0;
    while(VAR_3!=((void*)0)) {
        if (VAR_3->cpu==VAR_2 && VAR_3->intno==VAR_1) break;
        VAR_3=VAR_3->next;
    }
    return VAR_3;
}
