
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int acct; } ;
struct TYPE_5__ {int * pMetric; int * vgTimer; scalar_t__ numOfTables; scalar_t__ numOfVgroups; int * pTail; int * pHead; TYPE_1__ cfg; } ;
typedef TYPE_2__ SDbObj ;
typedef int SAcctObj ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int * FUNC_1 (int ) ;

void *FUNC_2(void *VAR_0, char *VAR_1, int VAR_2, int *VAR_3) {
  SDbObj * VAR_4 = (SDbObj *)VAR_0;
  SAcctObj *VAR_5 = FUNC_1(VAR_4->cfg.acct);

  VAR_4->pHead = ((void*)0);
  VAR_4->pTail = ((void*)0);
  VAR_4->numOfVgroups = 0;
  VAR_4->numOfTables = 0;
  VAR_4->vgTimer = ((void*)0);
  VAR_4->pMetric = ((void*)0);
  FUNC_0(VAR_5, VAR_4);

  return ((void*)0);
}
