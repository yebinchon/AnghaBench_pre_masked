
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ keyFirst; scalar_t__ keyLast; } ;
struct TYPE_10__ {size_t pos; scalar_t__ ekey; scalar_t__ lastKey; scalar_t__ skey; } ;
struct TYPE_9__ {int blockStatus; TYPE_2__* pQuery; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SBlockInfo ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(SQueryRuntimeEnv *VAR_0, const TSKEY *VAR_1,
                                      SBlockInfo *VAR_2) {
  SQuery *VAR_3 = VAR_0->pQuery;

  TSKEY VAR_4 = -1;

  if (FUNC_0(VAR_0->blockStatus) && FUNC_3(VAR_3, VAR_2)) {
    VAR_4 = VAR_1[VAR_3->pos];
  } else {
    VAR_4 = VAR_2->keyFirst;
    TSKEY VAR_5 = VAR_2->keyLast;

    FUNC_2((VAR_5 <= VAR_3->ekey && FUNC_1(VAR_3)) ||
           (VAR_5 >= VAR_3->ekey && !FUNC_1(VAR_3)));
  }

  FUNC_2((VAR_4 >= VAR_3->lastKey && VAR_4 <= VAR_3->ekey && VAR_3->skey <= VAR_3->lastKey &&
          FUNC_1(VAR_3)) ||
         (VAR_4 <= VAR_3->lastKey && VAR_4 >= VAR_3->ekey && VAR_3->skey >= VAR_3->lastKey &&
          !FUNC_1(VAR_3)));
}
