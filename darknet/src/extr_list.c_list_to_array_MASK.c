
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; void* val; } ;
typedef TYPE_1__ node ;
struct TYPE_5__ {TYPE_1__* front; int size; } ;
typedef TYPE_2__ list ;


 void** FUNC_0 (int ,int) ;

void **FUNC_1(list *VAR_0)
{
    void **VAR_1 = FUNC_0(VAR_0->size, sizeof(void*));
    int VAR_2 = 0;
    node *VAR_3 = VAR_0->front;
    while(VAR_3){
        VAR_1[VAR_2++] = VAR_3->val;
        VAR_3 = VAR_3->next;
    }
    return VAR_1;
}
