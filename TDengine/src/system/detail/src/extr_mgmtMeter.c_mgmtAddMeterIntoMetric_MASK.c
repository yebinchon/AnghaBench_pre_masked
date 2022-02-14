
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rwLock; int numOfMeters; struct TYPE_6__* pHead; struct TYPE_6__* prev; struct TYPE_6__* next; } ;
typedef TYPE_1__ STabObj ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(STabObj *VAR_0, STabObj *VAR_1) {
  if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0)) return -1;

  FUNC_2(&(VAR_0->rwLock));

  VAR_1->next = VAR_0->pHead;
  VAR_1->prev = ((void*)0);

  if (VAR_0->pHead) VAR_0->pHead->prev = VAR_1;

  VAR_0->pHead = VAR_1;
  VAR_0->numOfMeters++;

  FUNC_0(VAR_0, VAR_1);

  FUNC_1(&(VAR_0->rwLock));

  return 0;
}
