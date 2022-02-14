
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numOfUsers; } ;
struct TYPE_8__ {int mutex; TYPE_1__ acctInfo; TYPE_2__* pUser; } ;
struct TYPE_7__ {struct TYPE_7__* prev; struct TYPE_7__* next; } ;
typedef TYPE_2__ SUserObj ;
typedef TYPE_3__ SAcctObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(SAcctObj *VAR_0, SUserObj *VAR_1) {
  FUNC_0(&VAR_0->mutex);
  VAR_1->next = VAR_0->pUser;
  VAR_1->prev = ((void*)0);

  if (VAR_0->pUser) VAR_0->pUser->prev = VAR_1;

  VAR_0->pUser = VAR_1;
  VAR_0->acctInfo.numOfUsers++;
  FUNC_1(&VAR_0->mutex);

  return 0;
}
