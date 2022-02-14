
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;


typedef int uint32_t ;
typedef int tOrderDescriptor ;
typedef int tFilePage ;
typedef int tExtMemBuffer ;
typedef int tColModel ;
struct TYPE_28__ {int member_0; } ;
typedef TYPE_2__ pthread_mutexattr_t ;
typedef scalar_t__ int32_t ;
struct TYPE_33__ {TYPE_1__* pMetricMeta; } ;
struct TYPE_32__ {int queryMutex; int * pFinalColModel; TYPE_5__* pParentSqlObj; scalar_t__ vnodeIdx; int * localBuffer; TYPE_3__* pState; int * pOrderDescriptor; int ** pExtMemBuffer; } ;
struct TYPE_26__ {int vnodeIdx; scalar_t__ tsBuf; int command; } ;
struct TYPE_30__ {scalar_t__ code; int qhandle; } ;
struct TYPE_31__ {TYPE_15__ cmd; TYPE_4__ res; scalar_t__ numOfSubs; int pSubs; scalar_t__ fp; } ;
struct TYPE_29__ {int numOfCompleted; scalar_t__ numOfTotal; } ;
struct TYPE_27__ {scalar_t__ numOfVnodes; } ;
typedef TYPE_3__ SSubqueryState ;
typedef TYPE_4__ SSqlRes ;
typedef TYPE_5__ SSqlObj ;
typedef TYPE_6__ SRetrieveSupport ;
typedef TYPE_7__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int,int const) ;
 int FUNC_2 (TYPE_5__*,scalar_t__,scalar_t__,TYPE_6__*,int *,int *,int **,TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 TYPE_5__* FUNC_8 (TYPE_5__*,TYPE_6__*,int *) ;
 TYPE_7__* FUNC_9 (TYPE_15__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int ***,int **,int **,int const) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (char*,TYPE_5__*,TYPE_5__*,...) ;

int FUNC_14(SSqlObj *VAR_6) {
  SSqlRes *VAR_7 = &VAR_6->res;


  if (VAR_7->code == VAR_3) {
    VAR_6->cmd.command = VAR_5;
    return VAR_6->res.code;
  }

  tExtMemBuffer ** VAR_8 = ((void*)0);
  tOrderDescriptor *VAR_9 = ((void*)0);
  tColModel * VAR_10 = ((void*)0);

  VAR_7->qhandle = 1;

  const uint32_t VAR_11 = (1 << 16);
  SMeterMetaInfo *VAR_12 = FUNC_9(&VAR_6->cmd, 0);
  int32_t VAR_13 = VAR_12->pMetricMeta->numOfVnodes;
  FUNC_0(VAR_13 > 0);

  int32_t VAR_14 = FUNC_10(VAR_6, &VAR_8, &VAR_9, &VAR_10, VAR_11);
  if (VAR_14 != 0) {
    VAR_7->code = VAR_2;
    if (VAR_6->fp) {
      FUNC_12(VAR_6);
    }
    return VAR_7->code;
  }

  VAR_6->pSubs = FUNC_3(VAR_0 * VAR_13);
  VAR_6->numOfSubs = VAR_13;

  FUNC_13("%p retrieved query data from %d vnode(s)", VAR_6, VAR_13);
  SSubqueryState *VAR_15 = FUNC_1(1, sizeof(SSubqueryState));
  VAR_15->numOfTotal = VAR_13;
  VAR_7->code = VAR_4;

  for (int32_t VAR_16 = 0; VAR_16 < VAR_13; ++VAR_16) {
    if (VAR_7->code == VAR_3 || VAR_7->code == VAR_2) {





      VAR_15->numOfCompleted = (VAR_13 - VAR_16);
      FUNC_2(VAR_6, VAR_16, VAR_13, ((void*)0), VAR_9, VAR_10, VAR_8, VAR_15);

      if (VAR_16 == 0) {
        return VAR_6->res.code;
      }

      break;
    }

    SRetrieveSupport *VAR_17 = (SRetrieveSupport *)FUNC_1(1, sizeof(SRetrieveSupport));
    VAR_17->pExtMemBuffer = VAR_8;
    VAR_17->pOrderDescriptor = VAR_9;
    VAR_17->pState = VAR_15;
    VAR_17->localBuffer = (tFilePage *)FUNC_1(1, VAR_11 + sizeof(tFilePage));
    VAR_17->vnodeIdx = VAR_16;
    VAR_17->pParentSqlObj = VAR_6;
    VAR_17->pFinalColModel = VAR_10;

    pthread_mutexattr_t VAR_18 = {0};
    FUNC_6(&VAR_18, VAR_1);
    FUNC_4(&VAR_17->queryMutex, &VAR_18);
    FUNC_5(&VAR_18);

    SSqlObj *VAR_19 = FUNC_8(VAR_6, VAR_17, ((void*)0));

    if (VAR_19 == ((void*)0)) {
      VAR_15->numOfCompleted = (VAR_13 - VAR_16);
      FUNC_2(VAR_6, VAR_16, VAR_13, VAR_17, VAR_9, VAR_10, VAR_8, VAR_15);

      if (VAR_16 == 0) {
        return VAR_6->res.code;
      }

      break;
    }


    if (VAR_6->cmd.tsBuf) {
      VAR_19->cmd.tsBuf = FUNC_7(VAR_6->cmd.tsBuf);
    }

    FUNC_13("%p sub:%p launch subquery.orderOfSub:%d", VAR_6, VAR_19, VAR_19->cmd.vnodeIdx);
    FUNC_11(VAR_19);
  }

  return VAR_4;
}
