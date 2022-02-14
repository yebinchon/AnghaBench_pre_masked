
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_59__ TYPE_9__ ;
typedef struct TYPE_58__ TYPE_8__ ;
typedef struct TYPE_57__ TYPE_7__ ;
typedef struct TYPE_56__ TYPE_6__ ;
typedef struct TYPE_55__ TYPE_5__ ;
typedef struct TYPE_54__ TYPE_4__ ;
typedef struct TYPE_53__ TYPE_3__ ;
typedef struct TYPE_52__ TYPE_2__ ;
typedef struct TYPE_51__ TYPE_1__ ;
typedef struct TYPE_50__ TYPE_19__ ;
typedef struct TYPE_49__ TYPE_17__ ;
typedef struct TYPE_48__ TYPE_12__ ;
typedef struct TYPE_47__ TYPE_11__ ;
typedef struct TYPE_46__ TYPE_10__ ;


typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_57__ {scalar_t__ order; } ;
struct TYPE_52__ {scalar_t__ offset; } ;
struct TYPE_58__ {scalar_t__ skey; scalar_t__ ekey; scalar_t__ lastKey; scalar_t__ pos; scalar_t__ slot; TYPE_7__ order; int precision; int intervalTimeUnit; int nAggTimeInterval; TYPE_6__* pSelectExpr; TYPE_2__ limit; int pGroupbyExpr; scalar_t__ pointsRead; } ;
struct TYPE_59__ {int over; int dataReady; scalar_t__ pointsRead; TYPE_8__ query; } ;
struct TYPE_55__ {TYPE_4__* arg; } ;
struct TYPE_56__ {TYPE_5__ pBase; } ;
struct TYPE_53__ {scalar_t__ i64; } ;
struct TYPE_54__ {TYPE_3__ argValue; } ;
struct TYPE_51__ {int vnodeIndex; } ;
struct TYPE_50__ {scalar_t__ tsOrder; } ;
struct TYPE_49__ {int interpoInfo; int pResult; scalar_t__ usedIndex; int hashList; TYPE_19__* pTSBuf; TYPE_1__ cur; TYPE_8__* pQuery; int loadCompBlockInfo; int loadBlockInfo; } ;
struct TYPE_48__ {scalar_t__ lastKey; int vnode; } ;
struct TYPE_47__ {scalar_t__ rawSKey; scalar_t__ rawEKey; int numOfMeters; TYPE_17__ runtimeEnv; int pResult; } ;
struct TYPE_46__ {int member_0; } ;
typedef TYPE_8__ SQuery ;
typedef TYPE_9__ SQInfo ;
typedef TYPE_10__ SPointInterpoSupporter ;
typedef TYPE_11__ SMeterQuerySupportObj ;
typedef TYPE_12__ SMeterObj ;


 scalar_t__ FUNC_0 (TYPE_8__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_11__*,TYPE_8__*,TYPE_12__*) ;
 scalar_t__ FUNC_2 (TYPE_11__*,TYPE_8__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_8__*,int) ;
 int FUNC_5 (char*,TYPE_9__*,...) ;
 int FUNC_6 (TYPE_9__*,TYPE_11__*,int,int) ;
 scalar_t__ FUNC_7 (TYPE_8__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_8__*) ;
 scalar_t__ FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (int,int,TYPE_11__*,TYPE_10__*) ;
 int FUNC_13 (TYPE_10__*) ;
 int FUNC_14 (TYPE_8__*,TYPE_10__*) ;
 int FUNC_15 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_8__*,int ) ;
 int FUNC_18 (TYPE_8__*) ;
 scalar_t__ FUNC_19 (TYPE_12__*,TYPE_8__*,TYPE_17__*,int *,scalar_t__,int) ;
 int FUNC_20 (scalar_t__,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_21 (int,int,int ) ;
 int FUNC_22 (int *,scalar_t__,int ,int ,int ) ;
 int FUNC_23 (TYPE_19__*,int ) ;
 int FUNC_24 (TYPE_17__*,TYPE_12__*,int*,int*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (TYPE_9__*,int ) ;

int32_t FUNC_28(SQInfo *VAR_5, SMeterObj *VAR_6, SMeterQuerySupportObj *VAR_7,
                                     void *VAR_8) {
  SQuery *VAR_9 = &VAR_5->query;

  if ((FUNC_0(VAR_9) && (VAR_9->skey > VAR_9->ekey)) ||
      (!FUNC_0(VAR_9) && (VAR_9->ekey > VAR_9->skey))) {
    FUNC_5("QInfo:%p no result in time range %lld-%lld, order %d", VAR_5, VAR_9->skey, VAR_9->ekey,
           VAR_9->order.order);

    FUNC_16(&VAR_5->dataReady);
    VAR_5->over = 1;

    return VAR_1;
  }

  FUNC_18(VAR_9);
  FUNC_4(VAR_9, 0);

  VAR_5->over = 0;
  VAR_5->pointsRead = 0;
  VAR_9->pointsRead = 0;


  VAR_9->lastKey = VAR_9->skey;

  FUNC_25(&VAR_7->runtimeEnv.loadBlockInfo);
  FUNC_26(&VAR_7->runtimeEnv.loadCompBlockInfo);


  bool VAR_10 = 1;
  bool VAR_11 = 1;
  VAR_7->runtimeEnv.pQuery = VAR_9;

  FUNC_24(&VAR_7->runtimeEnv, VAR_6, &VAR_11, &VAR_10);


  if (!(VAR_10 || VAR_11)) {
    FUNC_5("QInfo:%p no result in query", VAR_5);
    FUNC_16(&VAR_5->dataReady);
    VAR_5->over = 1;

    return VAR_1;
  }

  VAR_7->runtimeEnv.pTSBuf = VAR_8;
  VAR_7->runtimeEnv.cur.vnodeIndex = -1;
  if (VAR_8 != ((void*)0)) {
    int16_t VAR_12 = (VAR_9->order.order == VAR_7->runtimeEnv.pTSBuf->tsOrder) ? VAR_2 : VAR_3;
    FUNC_23(VAR_7->runtimeEnv.pTSBuf, VAR_12);
  }


  int32_t VAR_13 = FUNC_19(VAR_6, VAR_9, &VAR_7->runtimeEnv, ((void*)0), VAR_9->order.order, 0);
  if (VAR_13 != VAR_1) {
    return VAR_13;
  }

  FUNC_27(VAR_5, VAR_6->vnode);

  if (FUNC_9(VAR_9->pGroupbyExpr)) {
    if ((VAR_13 = FUNC_2(VAR_7, VAR_9, 0)) != VAR_1) {
      return VAR_13;
    }

    VAR_7->runtimeEnv.hashList = FUNC_21(10039, sizeof(void *), VAR_4);
    VAR_7->runtimeEnv.usedIndex = 0;
    VAR_7->runtimeEnv.pResult = VAR_7->pResult;
  }


  if (FUNC_7(VAR_9)) {
    VAR_9->skey = VAR_6->lastKey;
    VAR_9->ekey = VAR_6->lastKey;
    VAR_9->lastKey = VAR_9->skey;
  }

  VAR_7->rawSKey = VAR_9->skey;
  VAR_7->rawEKey = VAR_9->ekey;


  VAR_7->numOfMeters = 1;
  FUNC_17(VAR_9, VAR_0);

  SPointInterpoSupporter VAR_14 = {0};
  FUNC_14(VAR_9, &VAR_14);

  if ((FUNC_12(VAR_11, VAR_10, VAR_7, &VAR_14) == 0) ||
      (FUNC_8(VAR_9) && !FUNC_11(VAR_9) && (VAR_9->limit.offset > 0)) ||
      (FUNC_11(VAR_9) && VAR_9->limit.offset >= VAR_9->pSelectExpr[1].pBase.arg[0].argValue.i64)) {
    FUNC_16(&VAR_5->dataReady);
    VAR_5->over = 1;

    FUNC_13(&VAR_14);
    return VAR_1;
  }





  FUNC_15(VAR_5, &VAR_14);
  FUNC_13(&VAR_14);

  if (!FUNC_6(VAR_5, VAR_7, VAR_11, VAR_10)) {
    return VAR_1;
  }

  int64_t VAR_15 = FUNC_20(VAR_7->rawSKey, VAR_9->nAggTimeInterval, VAR_9->intervalTimeUnit,
                                             VAR_9->precision);
  FUNC_22(&VAR_7->runtimeEnv.interpoInfo, VAR_9->order.order, VAR_15, 0, 0);
  FUNC_1(VAR_7, VAR_9, VAR_6);

  if (!FUNC_10(VAR_9)) {
    FUNC_3(VAR_9->pos >= 0 && VAR_9->slot >= 0);
  }


  VAR_9->lastKey = VAR_9->skey;
  return VAR_1;
}
