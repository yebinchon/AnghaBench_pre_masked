
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_72__ TYPE_9__ ;
typedef struct TYPE_71__ TYPE_8__ ;
typedef struct TYPE_70__ TYPE_7__ ;
typedef struct TYPE_69__ TYPE_6__ ;
typedef struct TYPE_68__ TYPE_5__ ;
typedef struct TYPE_67__ TYPE_4__ ;
typedef struct TYPE_66__ TYPE_3__ ;
typedef struct TYPE_65__ TYPE_2__ ;
typedef struct TYPE_64__ TYPE_21__ ;
typedef struct TYPE_63__ TYPE_1__ ;
typedef struct TYPE_62__ TYPE_16__ ;
typedef struct TYPE_61__ TYPE_15__ ;
typedef struct TYPE_60__ TYPE_14__ ;
typedef struct TYPE_59__ TYPE_13__ ;
typedef struct TYPE_58__ TYPE_12__ ;
typedef struct TYPE_57__ TYPE_11__ ;
typedef struct TYPE_56__ TYPE_10__ ;


typedef int uint32_t ;
typedef size_t int64_t ;
typedef size_t int32_t ;
typedef int __block_search_fn_t ;
struct TYPE_67__ {int order; } ;
struct TYPE_72__ {size_t fileId; scalar_t__ nAggTimeInterval; scalar_t__ lastKey; scalar_t__ ekey; size_t pos; int skey; TYPE_4__ order; } ;
struct TYPE_71__ {size_t fileTimeUs; int numOfTables; int readDiskBlocks; int skippedFileBlocks; int numOfFiles; } ;
struct TYPE_70__ {char* pHeaderFileData; int dataFilePath; } ;
struct TYPE_68__ {size_t fileId; } ;
struct TYPE_69__ {int numOfFiles; scalar_t__ colDataBuffer; int blockStatus; TYPE_1__* primaryColBuffer; TYPE_13__* pMeterObj; TYPE_7__* pHeaderFiles; TYPE_5__ startPos; TYPE_8__ summary; } ;
struct TYPE_66__ {int sid; } ;
struct TYPE_65__ {int fields; TYPE_16__* compBlock; } ;
struct TYPE_64__ {int numOfSids; } ;
struct TYPE_63__ {scalar_t__ data; } ;
struct TYPE_62__ {size_t numOfPoints; scalar_t__ keyFirst; scalar_t__ keyLast; } ;
struct TYPE_61__ {TYPE_2__ pBlock; int blockIndex; TYPE_14__* pMeterDataInfo; } ;
struct TYPE_60__ {int meterOrderIdx; int groupIdx; TYPE_13__* pMeterObj; TYPE_12__* pMeterQInfo; } ;
struct TYPE_59__ {size_t searchAlgorithm; size_t vnode; int meterId; int sid; } ;
struct TYPE_58__ {int queryRangeSet; } ;
struct TYPE_57__ {TYPE_21__* pSidSet; int pResult; TYPE_3__** pMeterSidExtInfo; int pMeterObj; TYPE_6__ runtimeEnv; } ;
struct TYPE_56__ {int killed; TYPE_13__* pObj; void* code; TYPE_11__* pMeterQuerySupporter; TYPE_9__ query; } ;
typedef int TSKEY ;
typedef TYPE_6__ SQueryRuntimeEnv ;
typedef TYPE_7__ SQueryFileInfo ;
typedef TYPE_8__ SQueryCostSummary ;
typedef TYPE_9__ SQuery ;
typedef TYPE_10__ SQInfo ;
typedef TYPE_11__ SMeterQuerySupportObj ;
typedef TYPE_12__ SMeterQueryInfo ;
typedef TYPE_13__ SMeterObj ;
typedef TYPE_14__ SMeterDataInfo ;
typedef TYPE_15__ SMeterDataBlockInfoEx ;
typedef TYPE_16__ SCompBlock ;
typedef int SBlockInfo ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (TYPE_16__*,int *,int *,TYPE_6__*,size_t,int ,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_9__*) ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (TYPE_14__**,size_t,TYPE_15__**,int,size_t*,size_t) ;
 int FUNC_6 (char*,TYPE_10__*) ;
 int FUNC_7 (char*,TYPE_10__*,int,...) ;
 int FUNC_8 (TYPE_10__*,int ,TYPE_14__*) ;
 int FUNC_9 (TYPE_15__*,size_t) ;
 int FUNC_10 (TYPE_16__*,int ) ;
 int FUNC_11 (TYPE_11__*,TYPE_9__*,char*,size_t,TYPE_7__*,TYPE_14__**) ;
 TYPE_13__* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_9__*) ;
 scalar_t__ FUNC_14 (TYPE_9__*,int *) ;
 int FUNC_15 (TYPE_9__*,int ) ;
 int FUNC_16 (char*,TYPE_10__*,size_t,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_17 (TYPE_11__*,int *,int ,char*,int *,TYPE_14__*,int ,int ) ;
 int FUNC_18 (TYPE_6__*,TYPE_12__*) ;
 int FUNC_19 (TYPE_11__*,int ,int ,int ,TYPE_12__*) ;
 int FUNC_20 (TYPE_11__*,int ,TYPE_12__*) ;
 int FUNC_21 (TYPE_9__*,int ) ;
 size_t FUNC_22 () ;
 size_t FUNC_23 () ;
 int FUNC_24 (TYPE_14__**) ;
 TYPE_14__** FUNC_25 (TYPE_10__*,size_t,TYPE_7__*,TYPE_21__*,TYPE_14__*,size_t*) ;
 size_t FUNC_26 (size_t*,TYPE_6__*,int ) ;
 int * VAR_5 ;

__attribute__((used)) static SMeterDataInfo *FUNC_27(SQInfo *VAR_6, SMeterDataInfo *VAR_7) {
  SQuery * VAR_8 = &VAR_6->query;
  SMeterQuerySupportObj *VAR_9 = VAR_6->pMeterQuerySupporter;
  SQueryRuntimeEnv * VAR_10 = &VAR_9->runtimeEnv;
  SMeterDataBlockInfoEx *VAR_11 = ((void*)0);
  int32_t VAR_12 = 0;

  SMeterObj * VAR_13 = FUNC_12(VAR_9->pMeterObj, VAR_9->pMeterSidExtInfo[0]->sid);
  __block_search_fn_t VAR_14 = VAR_5[VAR_13->searchAlgorithm];

  int32_t VAR_15 = VAR_13->vnode;
  FUNC_7("QInfo:%p start to check data blocks in %d files", VAR_6, VAR_10->numOfFiles);

  int32_t VAR_16 = FUNC_3(VAR_8) ? -1 : VAR_2;
  int32_t VAR_17 = FUNC_0(VAR_8->order.order);
  SQueryCostSummary *VAR_18 = &VAR_10->summary;

  int64_t VAR_19 = 0;
  int64_t VAR_20 = FUNC_23();

  while (1) {
    if (FUNC_13(VAR_8)) {
      break;
    }

    int32_t VAR_21 = FUNC_26(&VAR_16, VAR_10, VAR_8->order.order);
    if (VAR_21 < 0) {
      break;
    }

    VAR_10->startPos.fileId = VAR_16;
    VAR_8->fileId = VAR_16;
    VAR_18->numOfFiles++;

    SQueryFileInfo *VAR_22 = &VAR_10->pHeaderFiles[VAR_21];
    char * VAR_23 = VAR_22->pHeaderFileData;

    int32_t VAR_24 = 0;
    SMeterDataInfo **VAR_25 = FUNC_25(
        VAR_6, VAR_15, VAR_22, VAR_9->pSidSet, VAR_7, &VAR_24);
    FUNC_7("QInfo:%p file:%s, %d meters qualified", VAR_6, VAR_22->dataFilePath, VAR_24);

    if (VAR_25 == ((void*)0)) {
      FUNC_6("QInfo:%p failed to allocate memory to perform query processing, abort", VAR_6);

      VAR_6->code = VAR_4;
      VAR_6->killed = 1;
      return ((void*)0);
    }


    if (VAR_24 == 0) {
      VAR_16 += VAR_17;
      FUNC_24(VAR_25);
      continue;
    }

    uint32_t VAR_26 = FUNC_11(VAR_9, VAR_8, VAR_23, VAR_24, VAR_22,
                                                  VAR_25);

    FUNC_7("QInfo:%p file:%s, %d meters contains %d blocks to be checked", VAR_6, VAR_22->dataFilePath,
           VAR_24, VAR_26);
    if (VAR_26 == 0) {
      VAR_16 += VAR_17;
      FUNC_24(VAR_25);
      continue;
    }

    int32_t VAR_27 = FUNC_5(VAR_25, VAR_24, &VAR_11, VAR_26,
                                       &VAR_12, (int64_t)VAR_6);
    if (VAR_27 < 0) {
      FUNC_6("QInfo:%p failed to allocate memory to perform query processing, abort", VAR_6);
      FUNC_24(VAR_25);

      VAR_6->code = VAR_4;
      VAR_6->killed = 1;
      return ((void*)0);
    }

    FUNC_7("QInfo:%p start to load %d blocks and check", VAR_6, VAR_26);
    int64_t VAR_28 = 10000;
    int64_t VAR_29 = 0;
    int64_t VAR_30 = 0;

    VAR_19 += VAR_26;


    int32_t VAR_31 = FUNC_3(VAR_8) ? 0 : VAR_26 - 1;

    for (; VAR_31 < VAR_26 && VAR_31 >= 0; VAR_31 += VAR_17) {
      if (FUNC_13(VAR_8)) {
        break;
      }


      if (VAR_31 == 0) {
        VAR_29 = FUNC_22();
      } else if ((VAR_31 % VAR_28) == 0) {
        VAR_30 = FUNC_22();
        FUNC_7("QInfo:%p load and check %ld blocks, and continue. elapsed:%ldms", VAR_6, VAR_28,
               VAR_30 - VAR_29);
        VAR_29 = FUNC_22();
      }

      SMeterDataBlockInfoEx *VAR_32 = &VAR_11[VAR_31];
      SMeterDataInfo * VAR_33 = VAR_32->pMeterDataInfo;
      SMeterQueryInfo * VAR_34 = VAR_33->pMeterQInfo;
      SMeterObj * VAR_35 = VAR_33->pMeterObj;

      VAR_6->pObj = VAR_35;
      VAR_10->pMeterObj = VAR_35;

      FUNC_18(VAR_10, VAR_34);

      if (VAR_8->nAggTimeInterval == 0) {
        if ((VAR_8->lastKey > VAR_8->ekey && FUNC_3(VAR_8)) ||
            (VAR_8->lastKey < VAR_8->ekey && !FUNC_3(VAR_8))) {
          FUNC_16(
              "QInfo:%p vid:%d sid:%d id:%s, query completed, no need to scan this data block. qrange:%lld-%lld, "
              "lastKey:%lld",
              VAR_6, VAR_35->vnode, VAR_35->sid, VAR_35->meterId, VAR_8->skey, VAR_8->ekey,
              VAR_8->lastKey);

          continue;
        }

        FUNC_19(VAR_9, VAR_9->pResult, VAR_33->meterOrderIdx,
                            VAR_33->groupIdx, VAR_34);
      } else {
        FUNC_20(VAR_9, VAR_33->meterOrderIdx, VAR_34);
      }

      SCompBlock *VAR_36 = VAR_32->pBlock.compBlock;
      bool VAR_37 = FUNC_15(VAR_8, VAR_34->queryRangeSet);
      int32_t VAR_38 = FUNC_2(VAR_36, &VAR_32->pBlock.fields, &VAR_10->blockStatus, VAR_10,
                                          VAR_21, VAR_32->blockIndex, VAR_14, VAR_37);
      if (VAR_38 != VAR_1) {
        VAR_18->skippedFileBlocks++;
        continue;
      }

      SBlockInfo VAR_39 = FUNC_10(VAR_36, VAR_0);

      FUNC_4(VAR_8->pos >= 0 && VAR_8->pos < VAR_36->numOfPoints);
      TSKEY *VAR_40 = (TSKEY *)VAR_10->primaryColBuffer->data;

      if (FUNC_1(VAR_10->blockStatus) && FUNC_14(VAR_8, &VAR_39)) {
        TSKEY VAR_41 = VAR_40[VAR_8->pos];
        if (!FUNC_8(VAR_6, VAR_41, VAR_33)) {
          continue;
        }
      } else {

        FUNC_4((VAR_36->keyFirst >= VAR_8->lastKey && VAR_36->keyLast <= VAR_8->ekey && FUNC_3(VAR_8)) ||
               (VAR_36->keyFirst >= VAR_8->ekey && VAR_36->keyLast <= VAR_8->lastKey && !FUNC_3(VAR_8)));
      }

      FUNC_17(VAR_9, VAR_40, VAR_10->blockStatus, (char *)VAR_10->colDataBuffer, &VAR_39,
                   VAR_33, VAR_32->pBlock.fields, VAR_14);
    }

    FUNC_24(VAR_25);


    VAR_16 += VAR_17;
  }

  int64_t VAR_42 = FUNC_23() - VAR_20;
  FUNC_7("QInfo:%p complete check %d files, %d blocks, elapsed time:%.3fms", VAR_6, VAR_10->numOfFiles,
         VAR_19, VAR_42 / 1000.0);

  VAR_18->fileTimeUs += VAR_42;
  VAR_18->readDiskBlocks += VAR_19;
  VAR_18->numOfTables = VAR_9->pSidSet->numOfSids;

  FUNC_21(VAR_8, VAR_3);
  FUNC_9(VAR_11, VAR_12);

  return VAR_7;
}
