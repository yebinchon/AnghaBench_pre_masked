
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_16__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;


struct TYPE_32__ {int * pSchema; } ;
typedef TYPE_4__ tTagSchema ;
typedef int tFilePage ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
struct TYPE_36__ {int vnode; } ;
struct TYPE_30__ {int vnodeIndex; } ;
struct TYPE_28__ {int numOfRowsPerPage; int interpoInfo; int pResult; scalar_t__ usedIndex; int hashList; TYPE_12__* pTSBuf; TYPE_2__ cur; int loadCompBlockInfo; int loadBlockInfo; } ;
struct TYPE_35__ {scalar_t__ rawEKey; scalar_t__ rawSKey; int numOfPages; int numOfMeters; int lastPageId; int bufSize; scalar_t__ meterOutputMMapBuf; TYPE_16__ runtimeEnv; int extBufFile; int meterOutputFd; int pResult; TYPE_13__* pSidSet; int pMeterObj; } ;
struct TYPE_34__ {int over; scalar_t__ pointsRead; int dataReady; TYPE_7__* pMeterQuerySupporter; } ;
struct TYPE_31__ {scalar_t__ order; } ;
struct TYPE_33__ {scalar_t__ skey; scalar_t__ ekey; scalar_t__ lastKey; scalar_t__ nAggTimeInterval; int rowSize; TYPE_3__ order; int precision; int intervalTimeUnit; int interpoType; int pGroupbyExpr; scalar_t__ pointsRead; } ;
struct TYPE_29__ {int sid; } ;
struct TYPE_27__ {TYPE_1__** pSids; TYPE_4__* pTagSchema; } ;
struct TYPE_26__ {scalar_t__ tsOrder; } ;
typedef int TSKEY ;
typedef int SSchema ;
typedef TYPE_5__ SQuery ;
typedef TYPE_6__ SQInfo ;
typedef TYPE_7__ SMeterQuerySupportObj ;
typedef TYPE_8__ SMeterObj ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_7__*,TYPE_5__*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (char*,TYPE_6__*,int ,int ) ;
 int FUNC_5 (char*,TYPE_6__*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_12 ;
 int FUNC_6 (int ,int) ;
 TYPE_8__* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (TYPE_5__*) ;
 scalar_t__ FUNC_11 (int *,int,int,int ,int ,int ) ;
 int FUNC_12 (int ,int,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_5__*) ;
 scalar_t__ FUNC_15 (TYPE_8__*,TYPE_5__*,TYPE_16__*,int *,int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_13__*) ;
 int FUNC_18 (scalar_t__,scalar_t__,int ,int ) ;
 int VAR_13 ;
 int FUNC_19 (int,int,int ) ;
 int FUNC_20 (int *,scalar_t__,int ,int ,int ) ;
 int FUNC_21 (TYPE_12__*,int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (TYPE_6__*,int ) ;

int32_t FUNC_25(SQInfo *VAR_14, SQuery *VAR_15, void *VAR_16) {
  SMeterQuerySupportObj *VAR_17 = VAR_14->pMeterQuerySupporter;

  if ((FUNC_0(VAR_15) && (VAR_15->skey > VAR_15->ekey)) ||
      (!FUNC_0(VAR_15) && (VAR_15->ekey > VAR_15->skey))) {
    FUNC_5("QInfo:%p no result in time range %lld-%lld, order %d", VAR_14, VAR_15->skey, VAR_15->ekey,
           VAR_15->order.order);

    FUNC_13(&VAR_14->dataReady);
    VAR_14->over = 1;

    return VAR_8;
  }

  VAR_14->over = 0;
  VAR_14->pointsRead = 0;
  VAR_15->pointsRead = 0;

  FUNC_3(VAR_15, 1);

  FUNC_22(&VAR_17->runtimeEnv.loadBlockInfo);
  FUNC_23(&VAR_17->runtimeEnv.loadCompBlockInfo);





  FUNC_14(VAR_15);


  VAR_17->rawEKey = VAR_15->ekey;
  VAR_17->rawSKey = VAR_15->skey;
  VAR_15->lastKey = VAR_15->skey;


  SSchema *VAR_18 = ((void*)0);

  tTagSchema *VAR_19 = VAR_17->pSidSet->pTagSchema;
  if (VAR_19 != ((void*)0)) {
    VAR_18 = VAR_19->pSchema;
  }


  SMeterObj *VAR_20 = FUNC_7(VAR_17->pMeterObj, VAR_17->pSidSet->pSids[0]->sid);

  VAR_17->runtimeEnv.pTSBuf = VAR_16;
  VAR_17->runtimeEnv.cur.vnodeIndex = -1;


  if (VAR_16 != ((void*)0)) {
    int16_t VAR_21 = (VAR_15->order.order == VAR_17->runtimeEnv.pTSBuf->tsOrder) ? VAR_10 : VAR_11;
    FUNC_21(VAR_17->runtimeEnv.pTSBuf, VAR_21);
  }

  int32_t VAR_22 = FUNC_15(VAR_20, VAR_15, &VAR_17->runtimeEnv, VAR_18, VAR_10, 1);
  if (VAR_22 != VAR_8) {
    return VAR_22;
  }

  FUNC_17(VAR_17->pSidSet);
  FUNC_24(VAR_14, VAR_20->vnode);

  if ((VAR_22 = FUNC_2(VAR_17, VAR_15, 1)) != VAR_8) {
    return VAR_22;
  }

  if (FUNC_9(VAR_15->pGroupbyExpr)) {
    VAR_17->runtimeEnv.hashList = FUNC_19(10039, sizeof(void *), VAR_13);
    VAR_17->runtimeEnv.usedIndex = 0;
    VAR_17->runtimeEnv.pResult = VAR_17->pResult;
  }

  if (VAR_15->nAggTimeInterval != 0) {
    FUNC_8("tb_metric_mmap", VAR_17->extBufFile);
    VAR_17->meterOutputFd = FUNC_12(VAR_17->extBufFile, VAR_3 | VAR_4, 0666);

    if (!FUNC_1(VAR_17->meterOutputFd)) {
      FUNC_4("QInfo:%p failed to create file: %s on disk. %s", VAR_14, VAR_17->extBufFile, FUNC_16(VAR_12));
      return VAR_7;
    }


    VAR_17->numOfPages = VAR_17->numOfMeters;

    FUNC_6(VAR_17->meterOutputFd, VAR_17->numOfPages * VAR_0);
    VAR_17->runtimeEnv.numOfRowsPerPage = (VAR_0 - sizeof(tFilePage)) / VAR_15->rowSize;
    VAR_17->lastPageId = -1;
    VAR_17->bufSize = VAR_17->numOfPages * VAR_0;

    VAR_17->meterOutputMMapBuf =
        FUNC_11(((void*)0), VAR_17->bufSize, VAR_5 | VAR_6, VAR_2, VAR_17->meterOutputFd, 0);
    if (VAR_17->meterOutputMMapBuf == VAR_1) {
      FUNC_4("QInfo:%p failed to map data file: %s to disk. %s", VAR_14, VAR_17->extBufFile, FUNC_16(VAR_12));
      return VAR_7;
    }
  }


  if (!FUNC_10(VAR_15)) {
    VAR_15->interpoType = VAR_9;
  }

  TSKEY VAR_23 = FUNC_18(VAR_17->rawSKey, VAR_15->nAggTimeInterval,
                                                     VAR_15->intervalTimeUnit, VAR_15->precision);
  FUNC_20(&VAR_17->runtimeEnv.interpoInfo, VAR_15->order.order, VAR_23, 0, 0);

  return VAR_8;
}
