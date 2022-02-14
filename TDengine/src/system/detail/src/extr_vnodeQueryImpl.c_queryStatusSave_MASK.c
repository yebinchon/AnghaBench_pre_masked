
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int order; } ;
struct TYPE_14__ {TYPE_1__ cur; } ;
struct TYPE_13__ {int skey; int lastKey; int ekey; int over; } ;
struct TYPE_12__ {int endPos; int startPos; TYPE_5__* pTSBuf; int nextPos; TYPE_4__* pQuery; } ;
struct TYPE_11__ {int cur; int end; int next; int start; int lastKey; int overStatus; } ;
typedef TYPE_2__ SQueryStatus ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(SQueryRuntimeEnv *VAR_2, SQueryStatus *VAR_3) {
  SQuery *VAR_4 = VAR_2->pQuery;

  VAR_3->overStatus = VAR_4->over;
  VAR_3->lastKey = VAR_4->lastKey;

  VAR_3->start = VAR_2->startPos;
  VAR_3->next = VAR_2->nextPos;
  VAR_3->end = VAR_2->endPos;

  VAR_3->cur = FUNC_2(VAR_2->pTSBuf);

  if (VAR_2->pTSBuf) {
    VAR_2->pTSBuf->cur.order ^= 1;
    FUNC_3(VAR_2->pTSBuf);
  }

  FUNC_1(VAR_4, VAR_0);

  FUNC_0(VAR_4->skey, VAR_4->ekey, VAR_1);
  VAR_4->lastKey = VAR_4->skey;
  VAR_2->startPos = VAR_2->endPos;
}
