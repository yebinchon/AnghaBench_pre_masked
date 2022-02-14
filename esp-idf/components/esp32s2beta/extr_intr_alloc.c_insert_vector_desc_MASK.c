
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cpu; scalar_t__ intno; struct TYPE_4__* next; } ;
typedef TYPE_1__ vector_desc_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_0(vector_desc_t *VAR_1)
{
    vector_desc_t *VAR_2=VAR_0;
    vector_desc_t *VAR_3=((void*)0);
    while(VAR_2!=((void*)0)) {
        if (VAR_2->cpu > VAR_1->cpu) break;
        if (VAR_2->cpu == VAR_1->cpu && VAR_2->intno >= VAR_1->intno) break;
        VAR_3=VAR_2;
        VAR_2=VAR_2->next;
    }
    if ((VAR_0==((void*)0)) || (VAR_3==((void*)0))) {

        VAR_1->next = VAR_2;
        VAR_0=VAR_1;
    } else {
        VAR_3->next=VAR_1;
        VAR_1->next=VAR_2;
    }
}
