
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* prev; struct TYPE_5__* next; void* val; } ;
typedef TYPE_1__ node ;
struct TYPE_6__ {int size; TYPE_1__* back; TYPE_1__* front; } ;
typedef TYPE_2__ list ;


 TYPE_1__* FUNC_0 (int) ;

void FUNC_1(list *VAR_0, void *VAR_1)
{
 node *VAR_2 = FUNC_0(sizeof(node));
 VAR_2->val = VAR_1;
 VAR_2->next = 0;

 if(!VAR_0->back){
  VAR_0->front = VAR_2;
  VAR_2->prev = 0;
 }else{
  VAR_0->back->next = VAR_2;
  VAR_2->prev = VAR_0->back;
 }
 VAR_0->back = VAR_2;
 ++VAR_0->size;
}
