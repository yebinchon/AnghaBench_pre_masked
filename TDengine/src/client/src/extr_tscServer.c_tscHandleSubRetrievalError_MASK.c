
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_27__ {size_t vnodeIdx; TYPE_20__* pState; int pFinalColModel; int pOrderDescriptor; int * pExtMemBuffer; scalar_t__ numOfRetry; TYPE_4__* pParentSqlObj; int queryMutex; TYPE_1__* localBuffer; } ;
struct TYPE_25__ {int code; scalar_t__ numOfRows; } ;
struct TYPE_24__ {int type; int command; } ;
struct TYPE_26__ {TYPE_3__ res; int param; int (* fp ) (int ,TYPE_4__*,int) ;TYPE_2__ cmd; int rspSem; int emptyRspSem; } ;
struct TYPE_23__ {int code; int numOfTotal; int numOfCompleted; } ;
struct TYPE_22__ {scalar_t__ numOfElems; } ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SRetrieveSupport ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_4__*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_20__*) ;
 TYPE_4__* FUNC_7 (TYPE_4__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_8 (char*,TYPE_4__*,TYPE_4__*,...) ;
 void FUNC_9 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_10 (int *,int ,int ,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (char*,TYPE_4__*,TYPE_4__*,int,size_t,...) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(SRetrieveSupport *VAR_5, SSqlObj *VAR_6, int VAR_7) {
  SSqlObj *VAR_8 = VAR_5->pParentSqlObj;
  int32_t VAR_9 = VAR_5->vnodeIdx;

  FUNC_0(VAR_6 != ((void*)0));


  if (VAR_5->pState->code == VAR_2 && VAR_8->res.code != VAR_2) {
    VAR_5->pState->code = -(int)VAR_8->res.code;





    VAR_6->res.numOfRows = 0;
    VAR_5->numOfRetry = VAR_0;
    FUNC_13("%p query is cancelled, sub:%p, orderOfSub:%d abort retrieve, code:%d", VAR_5->pParentSqlObj, VAR_6,
             VAR_5->vnodeIdx, VAR_5->pState->code);
  }

  if (VAR_7 >= 0) {
    FUNC_13("%p sub:%p retrieve numOfRows:%d,orderOfSub:%d", VAR_8, VAR_6, VAR_7, VAR_9);
    FUNC_8("%p sub:%p abort further retrieval due to other queries failure,orderOfSub:%d,code:%d", VAR_8, VAR_6, VAR_9,
             VAR_5->pState->code);
  } else {
    if (VAR_5->numOfRetry++ < VAR_0 && VAR_5->pState->code == VAR_2) {




      FUNC_5(VAR_5->pExtMemBuffer[VAR_9]);


      VAR_5->localBuffer->numOfElems = 0;
      FUNC_3(&VAR_5->queryMutex);

      FUNC_13("%p sub:%p retrieve failed, code:%d, orderOfSub:%d, retry:%d", VAR_5->pParentSqlObj, VAR_6, VAR_7,
               VAR_9, VAR_5->numOfRetry);

      SSqlObj *VAR_10 = FUNC_7(VAR_5->pParentSqlObj, VAR_5, VAR_6);
      if (VAR_10 == ((void*)0)) {
        FUNC_8("%p sub:%p failed to create new subquery sqlobj due to out of memory, abort retry",
                 VAR_5->pParentSqlObj, VAR_6);

        VAR_5->pState->code = VAR_1;
        VAR_5->numOfRetry = VAR_0;
        return;
      }

      FUNC_11(VAR_10);
      return;
    } else {
      FUNC_2(&VAR_5->pState->code, VAR_2, VAR_7);
      FUNC_8("%p sub:%p retrieve failed,code:%d,orderOfSub:%d failed.no more retry,set global code:%d", VAR_8, VAR_6,
               VAR_7, VAR_9, VAR_5->pState->code);
    }
  }

  if (FUNC_1(&VAR_5->pState->numOfCompleted, 1) < VAR_5->pState->numOfTotal) {
    return FUNC_9(VAR_5, VAR_6);
  }


  FUNC_8("%p retrieve from %d vnode(s) completed,code:%d.FAILED.", VAR_8, VAR_5->pState->numOfTotal,
           VAR_5->pState->code);
  VAR_8->res.code = -(VAR_5->pState->code);


  FUNC_10(VAR_5->pExtMemBuffer, VAR_5->pOrderDescriptor, VAR_5->pFinalColModel,
                            VAR_5->pState->numOfTotal);

  FUNC_6(VAR_5->pState);
  FUNC_9(VAR_5, VAR_6);


  if (VAR_8->fp == ((void*)0)) {

    FUNC_15(&VAR_8->emptyRspSem);
    FUNC_15(&VAR_8->emptyRspSem);

    FUNC_14(&VAR_8->rspSem);

    VAR_8->cmd.command = VAR_4;
  } else {

    if ((VAR_8->cmd.type & VAR_3) == VAR_3) {
      (*VAR_8->fp)(VAR_8->param, VAR_8, VAR_8->res.code);
    } else {
      if (VAR_8->res.code != VAR_2) {
        FUNC_12(VAR_8);
      }
    }
  }
}
