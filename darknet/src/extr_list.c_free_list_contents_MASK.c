
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int val; } ;
typedef TYPE_1__ node ;
struct TYPE_5__ {TYPE_1__* front; } ;
typedef TYPE_2__ list ;


 int FUNC_0 (int ) ;

void FUNC_1(list *VAR_0)
{
 node *VAR_1 = VAR_0->front;
 while(VAR_1){
  FUNC_0(VAR_1->val);
  VAR_1 = VAR_1->next;
 }
}
