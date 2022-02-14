
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_24__ {int meterId; int sid; int vnode; } ;
struct TYPE_20__ {scalar_t__ offset; } ;
struct TYPE_22__ {scalar_t__ pointsRead; scalar_t__ numOfFilterCols; scalar_t__ pointsOffset; scalar_t__ pointsToRead; int ekey; int lastKey; int over; TYPE_2__ limit; } ;
struct TYPE_23__ {int pointsReturned; int pointsRead; TYPE_1__* pMeterQuerySupporter; TYPE_6__* pObj; TYPE_4__ query; } ;
struct TYPE_21__ {int nextPos; } ;
struct TYPE_19__ {TYPE_3__ runtimeEnv; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SQInfo ;
typedef TYPE_6__ SMeterObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,TYPE_5__*,int ,int ,int ,scalar_t__,int ,...) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_13(SQInfo *VAR_3) {
  SQuery * VAR_4 = &VAR_3->query;
  SMeterObj *VAR_5 = VAR_3->pObj;

  SQueryRuntimeEnv *VAR_6 = &VAR_3->pMeterQuerySupporter->runtimeEnv;


  if (!FUNC_8(VAR_4)) {
    FUNC_11(VAR_6);
  }

  while (1) {
    FUNC_12(VAR_6);
    FUNC_3(VAR_6);

    if (FUNC_7(VAR_4)) {
      return;
    }

    VAR_4->pointsRead = FUNC_6(VAR_6);
    if (VAR_4->limit.offset > 0 && VAR_4->numOfFilterCols > 0 && VAR_4->pointsRead > 0) {
      FUNC_5(VAR_6);
    }





    if (VAR_4->pointsRead > 0 || FUNC_0(VAR_4->over, VAR_0 | VAR_1)) {
      break;
    }

    TSKEY VAR_7 = FUNC_9(VAR_6, &VAR_6->nextPos);
    FUNC_1(VAR_7 > 0 || ((VAR_7 < 0) && FUNC_0(VAR_4->over, VAR_1)));

    FUNC_2("QInfo:%p vid:%d sid:%d id:%s, skip current result, offset:%lld, next qrange:%lld-%lld", VAR_3,
           VAR_5->vnode, VAR_5->sid, VAR_5->meterId, VAR_4->limit.offset, VAR_4->lastKey, VAR_4->ekey);

    FUNC_11(VAR_6);
  }

  FUNC_4(VAR_3);
  FUNC_10(VAR_6);

  VAR_3->pointsRead += VAR_4->pointsRead;

  if (FUNC_0(VAR_4->over, VAR_2)) {
    TSKEY VAR_8 = FUNC_9(VAR_6, &VAR_6->nextPos);
    FUNC_1(VAR_8 > 0 || ((VAR_8 < 0) && FUNC_0(VAR_4->over, VAR_1)));

    FUNC_2("QInfo:%p vid:%d sid:%d id:%s, query abort due to buffer limitation, next qrange:%lld-%lld", VAR_3,
           VAR_5->vnode, VAR_5->sid, VAR_5->meterId, VAR_4->lastKey, VAR_4->ekey);
  }

  FUNC_2("QInfo:%p vid:%d sid:%d id:%s, %d points returned, totalRead:%d totalReturn:%d", VAR_3, VAR_5->vnode,
         VAR_5->sid, VAR_5->meterId, VAR_4->pointsRead, VAR_3->pointsRead, VAR_3->pointsReturned);

  VAR_4->pointsOffset = VAR_4->pointsToRead;
  if (!FUNC_8(VAR_4)) {
    FUNC_1(VAR_4->pointsRead <= VAR_4->pointsToRead);
  }
}
