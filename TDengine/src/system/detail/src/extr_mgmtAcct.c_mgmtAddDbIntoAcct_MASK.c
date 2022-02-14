
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numOfDbs; } ;
struct TYPE_8__ {int mutex; TYPE_1__ acctInfo; TYPE_2__* pHead; } ;
struct TYPE_7__ {struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_2__ SDbObj ;
typedef TYPE_3__ SAcctObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(SAcctObj *VAR_0, SDbObj *VAR_1) {
  FUNC_0(&VAR_0->mutex);
  VAR_1->next = VAR_0->pHead;
  VAR_1->prev = ((void*)0);

  if (VAR_0->pHead) VAR_0->pHead->prev = VAR_1;

  VAR_0->pHead = VAR_1;
  VAR_0->acctInfo.numOfDbs++;
  FUNC_1(&VAR_0->mutex);

  return 0;
}
