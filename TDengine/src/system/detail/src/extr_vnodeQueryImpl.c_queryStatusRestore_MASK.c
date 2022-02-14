
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int over; int lastKey; int ekey; int skey; } ;
struct TYPE_7__ {int pTSBuf; int endPos; int nextPos; int startPos; TYPE_3__* pQuery; } ;
struct TYPE_6__ {int cur; int end; int next; int start; int overStatus; int lastKey; } ;
typedef TYPE_1__ SQueryStatus ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(SQueryRuntimeEnv *VAR_1, SQueryStatus *VAR_2) {
  SQuery *VAR_3 = VAR_1->pQuery;
  FUNC_0(VAR_3->skey, VAR_3->ekey, VAR_0);

  VAR_3->lastKey = VAR_2->lastKey;

  VAR_3->over = VAR_2->overStatus;

  VAR_1->startPos = VAR_2->start;
  VAR_1->nextPos = VAR_2->next;
  VAR_1->endPos = VAR_2->end;

  FUNC_1(VAR_1->pTSBuf, &VAR_2->cur);
}
