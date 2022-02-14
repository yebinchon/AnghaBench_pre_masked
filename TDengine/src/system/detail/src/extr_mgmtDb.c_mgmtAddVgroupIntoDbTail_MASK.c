
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numOfVgroups; TYPE_1__* pTail; TYPE_1__* pHead; } ;
struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ SVgObj ;
typedef TYPE_2__ SDbObj ;



int FUNC_0(SDbObj *VAR_0, SVgObj *VAR_1) {
  VAR_1->next = ((void*)0);
  VAR_1->prev = VAR_0->pTail;

  if (VAR_0->pTail) VAR_0->pTail->next = VAR_1;

  if (VAR_0->pHead == ((void*)0)) VAR_0->pHead = VAR_1;

  VAR_0->pTail = VAR_1;
  VAR_0->numOfVgroups++;

  return 0;
}
