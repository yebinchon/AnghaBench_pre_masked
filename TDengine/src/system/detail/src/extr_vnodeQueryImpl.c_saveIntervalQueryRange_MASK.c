
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ skey; scalar_t__ lastKey; int cur; int ekey; } ;
struct TYPE_8__ {scalar_t__ skey; scalar_t__ lastKey; int ekey; } ;
struct TYPE_7__ {int * pTSBuf; TYPE_2__* pQuery; } ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SMeterQueryInfo ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

void FUNC_3(SQueryRuntimeEnv *VAR_0, SMeterQueryInfo *VAR_1) {
  SQuery *VAR_2 = VAR_0->pQuery;

  VAR_1->skey = VAR_2->skey;
  VAR_1->ekey = VAR_2->ekey;
  VAR_1->lastKey = VAR_2->lastKey;

  FUNC_1(((VAR_2->lastKey >= VAR_2->skey) && FUNC_0(VAR_2)) ||
         ((VAR_2->lastKey <= VAR_2->skey) && !FUNC_0(VAR_2)));

  if (VAR_0->pTSBuf != ((void*)0)) {
    VAR_1->cur = FUNC_2(VAR_0->pTSBuf);
  }
}
