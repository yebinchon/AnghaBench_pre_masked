
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int rwLock; int numOfMeters; TYPE_1__* next; TYPE_1__* pHead; TYPE_2__* prev; } ;
struct TYPE_9__ {TYPE_1__* next; } ;
struct TYPE_8__ {TYPE_2__* prev; } ;
typedef TYPE_3__ STabObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;

int FUNC_3(STabObj *VAR_0, STabObj *VAR_1) {
  FUNC_1(&(VAR_0->rwLock));

  if (VAR_1->prev) VAR_1->prev->next = VAR_1->next;

  if (VAR_1->next) VAR_1->next->prev = VAR_1->prev;

  if (VAR_1->prev == ((void*)0)) VAR_0->pHead = VAR_1->next;

  VAR_0->numOfMeters--;

  FUNC_2(VAR_0, VAR_1);

  FUNC_0(&(VAR_0->rwLock));

  return 0;
}
