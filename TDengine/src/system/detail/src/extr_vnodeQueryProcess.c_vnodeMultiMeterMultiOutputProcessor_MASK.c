
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_12__ ;
typedef struct TYPE_39__ TYPE_11__ ;
typedef struct TYPE_38__ TYPE_10__ ;


struct TYPE_44__ {size_t numOfSubSet; size_t* starterPos; size_t numOfSids; } ;
typedef TYPE_4__ tSidSet ;
typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_49__ {TYPE_2__* resultInfo; int numOfRows; } ;
struct TYPE_48__ {int member_0; } ;
struct TYPE_43__ {scalar_t__ offset; scalar_t__ limit; } ;
struct TYPE_46__ {scalar_t__ pointsRead; scalar_t__ pointsToRead; size_t numOfOutputCols; scalar_t__ numOfFilterCols; scalar_t__ pointsOffset; TYPE_3__ limit; scalar_t__ skey; int pGroupbyExpr; int over; scalar_t__ lastKey; scalar_t__ ekey; } ;
struct TYPE_47__ {int pointsReturned; int pointsRead; TYPE_11__* pMeterQuerySupporter; TYPE_6__ query; } ;
struct TYPE_45__ {size_t usedIndex; size_t numOfFiles; TYPE_9__* pResult; TYPE_1__* pTSBuf; int cur; int pMeterObj; int * pHeaderFiles; int hashList; } ;
struct TYPE_42__ {int numOfRes; } ;
struct TYPE_41__ {int cur; } ;
struct TYPE_40__ {scalar_t__ lastKey; int vnode; } ;
struct TYPE_39__ {size_t subgroupIdx; size_t meterIdx; size_t numOfMeters; TYPE_4__* pSidSet; scalar_t__ rawEKey; scalar_t__ rawSKey; TYPE_9__* pResult; int pMeterObj; TYPE_5__ runtimeEnv; TYPE_10__** pMeterSidExtInfo; } ;
struct TYPE_38__ {int sid; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_5__ SQueryRuntimeEnv ;
typedef TYPE_6__ SQuery ;
typedef TYPE_7__ SQInfo ;
typedef TYPE_8__ SPointInterpoSupporter ;
typedef TYPE_9__ SOutputRes ;
typedef TYPE_10__ SMeterSidExtInfo ;
typedef TYPE_11__ SMeterQuerySupportObj ;
typedef TYPE_12__ SMeterObj ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_9__*,size_t) ;
 int FUNC_4 (TYPE_7__*,TYPE_9__*) ;
 int FUNC_5 (char*,TYPE_7__*,int ,size_t,size_t,...) ;
 scalar_t__ FUNC_6 (TYPE_7__*,size_t,size_t) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 TYPE_12__* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_5__*) ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 scalar_t__ FUNC_14 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (TYPE_6__*) ;
 scalar_t__ FUNC_17 (TYPE_6__*) ;
 int FUNC_18 (TYPE_5__*) ;
 int FUNC_19 (TYPE_7__*,int*,int*,size_t,int ) ;
 int FUNC_20 (int,int,TYPE_11__*,TYPE_8__*) ;
 int FUNC_21 (TYPE_5__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_6__*,int) ;
 int FUNC_24 (int ) ;
 int VAR_4 ;
 int FUNC_25 (size_t,int ,int ) ;
 int FUNC_26 (TYPE_5__*) ;
 int FUNC_27 (TYPE_6__*) ;
 int FUNC_28 (TYPE_6__*,int ) ;

__attribute__((used)) static void FUNC_29(SQInfo *VAR_5) {
  SMeterQuerySupportObj *VAR_6 = VAR_5->pMeterQuerySupporter;

  SMeterSidExtInfo **VAR_7 = VAR_6->pMeterSidExtInfo;
  SQueryRuntimeEnv * VAR_8 = &VAR_6->runtimeEnv;

  SQuery * VAR_9 = &VAR_5->query;
  tSidSet *VAR_10 = VAR_6->pSidSet;

  SMeterObj *VAR_11 = FUNC_11(VAR_6->pMeterObj, VAR_7[0]->sid);

  FUNC_21(VAR_8);

  if (FUNC_16(VAR_9)) {
    FUNC_2(VAR_9->limit.offset == 0 && VAR_9->limit.limit != 0);

    while (VAR_6->subgroupIdx < VAR_10->numOfSubSet) {
      int32_t VAR_12 = VAR_10->starterPos[VAR_6->subgroupIdx];
      int32_t VAR_13 = VAR_10->starterPos[VAR_6->subgroupIdx + 1] - 1;

      if (FUNC_13(VAR_9)) {
        FUNC_5("QInfo:%p last_row query on vid:%d, numOfGroups:%d, current group:%d", VAR_5, VAR_11->vnode,
               VAR_10->numOfSubSet, VAR_6->subgroupIdx);

        TSKEY VAR_14 = -1;
        int32_t VAR_15 = -1;


        VAR_6->meterIdx = VAR_12;

        for (int32_t VAR_16 = VAR_12; VAR_16 <= VAR_13; ++VAR_16, VAR_6->meterIdx++) {
          if (FUNC_17(VAR_9)) {
            FUNC_23(VAR_9, VAR_2);
            return;
          }


          SMeterObj *VAR_17 = FUNC_11(VAR_6->pMeterObj, VAR_7[VAR_16]->sid);
          if (VAR_17 != ((void*)0)) {
            if (VAR_14 < VAR_17->lastKey) {
              VAR_14 = VAR_17->lastKey;
              VAR_15 = VAR_16;
            }
          }
        }

        VAR_9->skey = VAR_14;
        VAR_9->ekey = VAR_14;
        VAR_6->rawSKey = VAR_14;
        VAR_6->rawEKey = VAR_14;

        int64_t VAR_18 = FUNC_6(VAR_5, VAR_15, VAR_12);
        FUNC_2(VAR_18 >= 0);
      } else {
        FUNC_5("QInfo:%p interp query on vid:%d, numOfGroups:%d, current group:%d", VAR_5, VAR_11->vnode,
               VAR_10->numOfSubSet, VAR_6->subgroupIdx);

        for (int32_t VAR_19 = VAR_12; VAR_19 <= VAR_13; ++VAR_19) {
          if (FUNC_17(VAR_9)) {
            FUNC_23(VAR_9, VAR_2);
            return;
          }

          VAR_9->skey = VAR_6->rawSKey;
          VAR_9->ekey = VAR_6->rawEKey;

          int64_t VAR_20 = FUNC_6(VAR_5, VAR_19, VAR_12);
          if (VAR_20 == 1) {
            break;
          }
        }
      }

      VAR_6->subgroupIdx++;


      if (VAR_9->pointsRead >= VAR_9->pointsToRead) {
        break;
      }
    }
  } else {

    FUNC_2(VAR_6->meterIdx >= 0);





    if (VAR_6->subgroupIdx > 0) {
      FUNC_4(VAR_5, VAR_6->pResult);
      VAR_5->pointsRead += VAR_9->pointsRead;

      if (VAR_9->pointsRead > 0) {
        return;
      }
    }

    if (VAR_6->meterIdx >= VAR_10->numOfSids) {
      return;
    }

    for (int32_t VAR_21 = 0; VAR_21 < VAR_8->usedIndex; ++VAR_21) {
      SOutputRes *VAR_22 = &VAR_8->pResult[VAR_21];
      FUNC_3(VAR_22, VAR_9->numOfOutputCols);
    }

    VAR_8->usedIndex = 0;
    FUNC_24(VAR_8->hashList);

    int32_t VAR_23 = 10039;
    VAR_8->hashList = FUNC_25(VAR_23, VAR_0, VAR_4);

    while (VAR_6->meterIdx < VAR_6->numOfMeters) {
      int32_t VAR_24 = VAR_6->meterIdx;

      if (FUNC_17(VAR_9)) {
        FUNC_23(VAR_9, VAR_2);
        return;
      }

      bool VAR_25 = 1;
      bool VAR_26 = 1;
      if (!FUNC_19(VAR_5, &VAR_25, &VAR_26, VAR_24, 0)) {
        VAR_9->skey = VAR_6->rawSKey;
        VAR_9->ekey = VAR_6->rawEKey;

        VAR_6->meterIdx++;
        continue;
      }


      for (int32_t VAR_27 = 0; VAR_27 < VAR_8->numOfFiles; ++VAR_27) {
        FUNC_22(&VAR_8->pHeaderFiles[VAR_27]);
      }


      SPointInterpoSupporter VAR_28 = {0};
      if (FUNC_20(VAR_25, VAR_26, VAR_6, &VAR_28) == 0) {
        VAR_9->skey = VAR_6->rawSKey;
        VAR_9->ekey = VAR_6->rawEKey;

        VAR_6->meterIdx++;
        continue;
      }


      if (VAR_9->numOfFilterCols == 0 && VAR_9->limit.offset > 0) {
        FUNC_10(VAR_8);

        if (FUNC_1(VAR_9->over, VAR_2 | VAR_1)) {
          VAR_9->skey = VAR_6->rawSKey;
          VAR_9->ekey = VAR_6->rawEKey;

          VAR_6->meterIdx++;
          continue;
        }
      }

      FUNC_28(VAR_9, VAR_8->pMeterObj);
      FUNC_27(VAR_9);

      FUNC_26(VAR_8);

      VAR_9->pointsRead = FUNC_12(VAR_8);
      FUNC_9(VAR_8);


      if (FUNC_8(VAR_5)) {
        VAR_6->meterIdx = VAR_6->pSidSet->numOfSids;
        break;
      }

      if (FUNC_1(VAR_9->over, VAR_2 | VAR_1)) {






        VAR_9->skey = VAR_6->rawSKey;
        VAR_9->ekey = VAR_6->rawEKey;
        VAR_6->meterIdx++;


        if (FUNC_1(VAR_9->over, VAR_3) ||
            FUNC_14(VAR_9->pGroupbyExpr, VAR_6->pSidSet)) {
          break;
        }

      } else {

        VAR_9->skey = VAR_9->lastKey;


        if (VAR_9->pointsRead == 0) {
          FUNC_2(!FUNC_1(VAR_9->over, VAR_3));
          continue;
        } else {

          FUNC_2(FUNC_1(VAR_9->over, VAR_3));
          break;
        }
      }
    }
  }

  if (!FUNC_15(VAR_9->pGroupbyExpr) && !FUNC_13(VAR_9)) {
    FUNC_7(VAR_8);
  }

  if (VAR_8->pTSBuf != ((void*)0)) {
    VAR_8->cur = VAR_8->pTSBuf->cur;
  }

  if (FUNC_15(VAR_9->pGroupbyExpr)) {
    for (int32_t VAR_29 = 0; VAR_29 < VAR_8->usedIndex; ++VAR_29) {
      SOutputRes *VAR_30 = &VAR_8->pResult[VAR_29];
      for (int32_t VAR_31 = 0; VAR_31 < VAR_9->numOfOutputCols; ++VAR_31) {
        VAR_30->numOfRows = FUNC_0(VAR_30->numOfRows, VAR_30->resultInfo[VAR_31].numOfRes);
      }
    }

    VAR_5->pMeterQuerySupporter->subgroupIdx = 0;
    VAR_9->pointsRead = 0;
    FUNC_4(VAR_5, VAR_8->pResult);
  }

  VAR_5->pointsRead += VAR_9->pointsRead;
  VAR_9->pointsOffset = VAR_9->pointsToRead;

  FUNC_18(VAR_8);

  FUNC_5(
      "QInfo %p vid:%d, numOfMeters:%d, index:%d, numOfGroups:%d, %d points returned, totalRead:%d totalReturn:%d,"
      "next skey:%lld, offset:%lld",
      VAR_5, VAR_11->vnode, VAR_10->numOfSids, VAR_6->meterIdx, VAR_10->numOfSubSet, VAR_9->pointsRead,
      VAR_5->pointsRead, VAR_5->pointsReturned, VAR_9->skey, VAR_9->limit.offset);
}
