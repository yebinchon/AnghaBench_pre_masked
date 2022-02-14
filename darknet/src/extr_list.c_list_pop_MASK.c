
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ next; struct TYPE_5__* prev; void* val; } ;
typedef TYPE_1__ node ;
struct TYPE_6__ {int size; TYPE_1__* back; } ;
typedef TYPE_2__ list ;


 int FUNC_0 (TYPE_1__*) ;

void *FUNC_1(list *VAR_0){
    if(!VAR_0->back) return 0;
    node *VAR_1 = VAR_0->back;
    void *VAR_2 = VAR_1->val;
    VAR_0->back = VAR_1->prev;
    if(VAR_0->back) VAR_0->back->next = 0;
    FUNC_0(VAR_1);
    --VAR_0->size;

    return VAR_2;
}
