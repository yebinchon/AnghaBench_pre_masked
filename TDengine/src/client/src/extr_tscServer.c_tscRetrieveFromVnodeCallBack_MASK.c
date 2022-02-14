
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_38__ ;
typedef struct TYPE_43__ TYPE_31__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_22__ ;
typedef struct TYPE_40__ TYPE_20__ ;
typedef struct TYPE_39__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_42__ {TYPE_31__* pSchema; } ;
typedef TYPE_2__ tOrderDescriptor ;
typedef size_t int32_t ;
struct TYPE_51__ {int pMetricMeta; } ;
struct TYPE_50__ {size_t vnodeIdx; TYPE_38__* pState; int pFinalColModel; TYPE_20__** pExtMemBuffer; TYPE_22__* localBuffer; int queryMutex; TYPE_2__* pOrderDescriptor; TYPE_6__* pParentSqlObj; } ;
struct TYPE_39__ {int orderType; } ;
struct TYPE_49__ {size_t vnodeIdx; int command; TYPE_1__ groupbyExpr; } ;
struct TYPE_47__ {scalar_t__ code; int numOfRows; scalar_t__ row; int precision; int data; } ;
struct TYPE_48__ {int param; int (* fp ) (int ,TYPE_6__*,int ) ;TYPE_5__ res; TYPE_7__ cmd; int rspSem; int emptyRspSem; } ;
struct TYPE_46__ {int vnode; int ip; } ;
struct TYPE_45__ {size_t index; TYPE_4__* vpeerDesc; } ;
struct TYPE_44__ {scalar_t__ code; int numOfTotal; int numOfCompleted; int numOfRetrievedRows; } ;
struct TYPE_43__ {int maxCapacity; } ;
struct TYPE_41__ {int numOfElems; int data; } ;
struct TYPE_40__ {int numOfElemsPerPage; scalar_t__ numOfAllElems; } ;
typedef int TAOS_RES ;
typedef TYPE_3__ SVnodeSidList ;
typedef TYPE_4__ SVPeerDesc ;
typedef int SSrcColumnInfo ;
typedef TYPE_5__ SSqlRes ;
typedef TYPE_6__ SSqlObj ;
typedef TYPE_7__ SSqlCmd ;
typedef TYPE_8__ SRetrieveSupport ;
typedef TYPE_9__ SMeterMetaInfo ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_38__*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (TYPE_20__*,TYPE_2__*,TYPE_22__*,int ,int,int ) ;
 int FUNC_8 (int ,TYPE_6__*,int ) ;
 int FUNC_9 (TYPE_31__*,TYPE_22__*,int ) ;
 int FUNC_10 (TYPE_31__*,int ,int,int,int *) ;
 int FUNC_11 (int *,void (*) (void*,int *,int),void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void FUNC_12 (TYPE_8__*,int *,int ) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_20__**,int ,TYPE_2__*,int ,TYPE_7__*,TYPE_5__*) ;
 int FUNC_15 (char*,TYPE_6__*,TYPE_6__*,scalar_t__,scalar_t__) ;
 size_t FUNC_16 (TYPE_20__*,TYPE_2__*,TYPE_22__*,int ) ;
 void FUNC_17 (TYPE_8__*,TYPE_6__*) ;
 TYPE_9__* FUNC_18 (TYPE_7__*,int ) ;
 int FUNC_19 (int *,TYPE_7__*) ;
 TYPE_3__* FUNC_20 (int ,size_t) ;
 void FUNC_21 (TYPE_8__*,TYPE_6__*,int) ;
 int FUNC_22 (TYPE_6__*) ;
 int FUNC_23 (char*,TYPE_6__*,...) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

void FUNC_26(void *VAR_6, TAOS_RES *VAR_7, int VAR_8) {
  SRetrieveSupport *VAR_9 = (SRetrieveSupport *)VAR_6;
  int32_t VAR_10 = VAR_9->vnodeIdx;
  SSqlObj * VAR_11 = VAR_9->pParentSqlObj;
  tOrderDescriptor *VAR_12 = VAR_9->pOrderDescriptor;

  SSqlObj *VAR_13 = (SSqlObj *)VAR_7;
  if (VAR_13 == ((void*)0)) {

    FUNC_23("%p subquery has been released, idx:%d, abort", VAR_11, VAR_10);
    return;
  }


  FUNC_5(&VAR_9->queryMutex);

  if (VAR_8 < 0 || VAR_9->pState->code < 0 || VAR_11->res.code != VAR_1) {
    return FUNC_21(VAR_9, VAR_13, VAR_8);
  }

  SSqlRes * VAR_14 = &VAR_13->res;
  SSqlCmd * VAR_15 = &VAR_13->cmd;
  SMeterMetaInfo *VAR_16 = FUNC_18(VAR_15, 0);

  SVnodeSidList *VAR_17 = FUNC_20(VAR_16->pMetricMeta, VAR_10);
  SVPeerDesc * VAR_18 = &VAR_17->vpeerDesc[VAR_17->index];

  if (VAR_8 > 0) {
    FUNC_0(VAR_14->numOfRows == VAR_8);
    FUNC_2(&VAR_9->pState->numOfRetrievedRows, VAR_8);

    FUNC_23("%p sub:%p retrieve numOfRows:%d totalNumOfRows:%d from ip:%u,vid:%d,orderOfSub:%d", VAR_11, VAR_13,
             VAR_14->numOfRows, VAR_9->pState->numOfRetrievedRows, VAR_18->ip, VAR_18->vnode, VAR_10);







    if (VAR_5 != 0 && VAR_3 < VAR_4) {
      FUNC_15("%p sub:%p client disk space remain %.3f GB, need at least %.3f GB, stop query", VAR_11, VAR_13,
               VAR_3, VAR_4);
      FUNC_12(VAR_9, VAR_7, VAR_0);
      return;
    }
    int32_t VAR_19 = FUNC_7(VAR_9->pExtMemBuffer[VAR_10], VAR_12, VAR_9->localBuffer, VAR_14->data,
                               VAR_14->numOfRows, VAR_15->groupbyExpr.orderType);
    if (VAR_19 < 0) {

      FUNC_12(VAR_9, VAR_7, VAR_0);
    } else {
      FUNC_6(&VAR_9->queryMutex);
      FUNC_11(VAR_7, FUNC_26, VAR_6);
    }

  } else {

    uint32_t VAR_20 =
        VAR_9->pExtMemBuffer[VAR_15->vnodeIdx]->numOfAllElems + VAR_9->localBuffer->numOfElems;
    FUNC_23("%p sub:%p all data retrieved from ip:%u,vid:%d, numOfRows:%d, orderOfSub:%d", VAR_11, VAR_13, VAR_18->ip,
             VAR_18->vnode, VAR_20, VAR_10);

    FUNC_9(VAR_12->pSchema, VAR_9->localBuffer, VAR_12->pSchema->maxCapacity);
    if (VAR_5 != 0 && VAR_3 < VAR_4) {
      FUNC_15("%p sub:%p client disk space remain %.3f GB, need at least %.3f GB, stop query", VAR_11, VAR_13,
               VAR_3, VAR_4);
      FUNC_12(VAR_9, VAR_7, VAR_0);
      return;
    }



    int32_t VAR_21 =
        FUNC_16(VAR_9->pExtMemBuffer[VAR_10], VAR_12, VAR_9->localBuffer, VAR_15->groupbyExpr.orderType);
    if (VAR_21 != 0) {

      return FUNC_12(VAR_9, VAR_7, VAR_0);
    }

    if (FUNC_1(&VAR_9->pState->numOfCompleted, 1) < VAR_9->pState->numOfTotal) {
      return FUNC_17(VAR_9, VAR_13);
    }


    VAR_12->pSchema->maxCapacity = VAR_9->pExtMemBuffer[VAR_10]->numOfElemsPerPage;

    FUNC_23("%p retrieve from %d vnodes completed.final NumOfRows:%d,start to build loser tree", VAR_11,
             VAR_9->pState->numOfTotal, VAR_9->pState->numOfCompleted);

    FUNC_13(&VAR_11->cmd);
    FUNC_14(VAR_9->pExtMemBuffer, VAR_9->pState->numOfTotal, VAR_12, VAR_9->pFinalColModel,
                          &VAR_11->cmd, &VAR_11->res);
    FUNC_23("%p build loser tree completed", VAR_11);

    VAR_11->res.precision = VAR_13->res.precision;
    VAR_11->res.numOfRows = 0;
    VAR_11->res.row = 0;


    FUNC_3(VAR_9->pState);
    FUNC_17(VAR_9, VAR_13);

    if (VAR_11->fp == ((void*)0)) {
      FUNC_25(&VAR_11->emptyRspSem);
      FUNC_25(&VAR_11->emptyRspSem);

      FUNC_24(&VAR_11->rspSem);
    } else {

      VAR_11->cmd.command = VAR_2;
      if (VAR_11->res.code == VAR_1) {
        (*VAR_11->fp)(VAR_11->param, VAR_11, 0);
      } else {
        FUNC_22(VAR_11);
      }
    }
  }
}
