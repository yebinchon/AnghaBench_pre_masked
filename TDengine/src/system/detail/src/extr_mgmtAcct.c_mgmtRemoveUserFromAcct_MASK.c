
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numOfUsers; } ;
struct TYPE_12__ {int mutex; TYPE_1__ acctInfo; TYPE_3__* pUser; } ;
struct TYPE_11__ {TYPE_3__* next; TYPE_2__* prev; } ;
struct TYPE_10__ {TYPE_2__* prev; } ;
struct TYPE_9__ {TYPE_3__* next; } ;
typedef TYPE_4__ SUserObj ;
typedef TYPE_5__ SAcctObj ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(SAcctObj *VAR_0, SUserObj *VAR_1) {
  FUNC_0(&VAR_0->mutex);
  if (VAR_1->prev) VAR_1->prev->next = VAR_1->next;

  if (VAR_1->next) VAR_1->next->prev = VAR_1->prev;

  if (VAR_1->prev == ((void*)0)) VAR_0->pUser = VAR_1->next;

  VAR_0->acctInfo.numOfUsers--;
  FUNC_1(&VAR_0->mutex);

  return 0;
}
