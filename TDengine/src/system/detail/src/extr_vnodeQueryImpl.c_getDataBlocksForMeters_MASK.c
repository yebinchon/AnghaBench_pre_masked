
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_28__ {int numOfBlocks; scalar_t__ uid; } ;
struct TYPE_27__ {int numOfBlocks; int start; TYPE_6__* pMeterObj; int offsetInHeaderFile; } ;
struct TYPE_26__ {scalar_t__ uid; int meterId; int sid; int vnode; } ;
struct TYPE_23__ {int loadCompInfoUs; int totalCompInfoSize; int readCompInfo; } ;
struct TYPE_21__ {TYPE_3__ summary; } ;
struct TYPE_25__ {int rawEKey; TYPE_1__ runtimeEnv; } ;
struct TYPE_24__ {int killed; } ;
struct TYPE_22__ {int headerFilePath; } ;
typedef int TSKEY ;
typedef int TSCKSUM ;
typedef TYPE_2__ SQueryFileInfo ;
typedef TYPE_3__ SQueryCostSummary ;
typedef int SQuery ;
typedef TYPE_4__ SQInfo ;
typedef TYPE_5__ SMeterQuerySupportObj ;
typedef TYPE_6__ SMeterObj ;
typedef TYPE_7__ SMeterDataInfo ;
typedef TYPE_8__ SCompInfo ;
typedef int SCompBlock ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (TYPE_7__*,int *,int *,int,int ,int ,size_t*) ;
 int FUNC_3 (char*,TYPE_4__*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_7__*,int *,int ,int *,int *) ;
 int FUNC_5 (TYPE_7__*,int *,size_t) ;
 scalar_t__ FUNC_6 () ;
 size_t FUNC_7 (TYPE_4__*,int ,int ,TYPE_8__*,int ) ;
 size_t FUNC_8 (TYPE_4__*,int ,TYPE_8__*,char*,int ,int ) ;

uint32_t FUNC_9(SMeterQuerySupportObj *VAR_0, SQuery *VAR_1, char *VAR_2,
                                int32_t VAR_3, SQueryFileInfo *VAR_4, SMeterDataInfo **VAR_5) {
  uint32_t VAR_6 = 0;
  SQInfo * VAR_7 = (SQInfo *)FUNC_0(VAR_1);
  SQueryCostSummary *VAR_8 = &VAR_0->runtimeEnv.summary;

  TSKEY VAR_9, VAR_10;


  for (int32_t VAR_11 = 0; VAR_11 < VAR_3; ++VAR_11) {
    SMeterObj *VAR_12 = VAR_5[VAR_11]->pMeterObj;

    SCompInfo *VAR_13 = (SCompInfo *)(VAR_2 + VAR_5[VAR_11]->offsetInHeaderFile);
    int32_t VAR_14 = FUNC_7(VAR_7, VAR_4->headerFilePath, VAR_12->vnode, VAR_13,
                                               VAR_5[VAR_11]->offsetInHeaderFile);
    if (VAR_14 != 0) {
      FUNC_1(VAR_5[VAR_11]);
      continue;
    }

    if (VAR_13->numOfBlocks <= 0 || VAR_13->uid != VAR_5[VAR_11]->pMeterObj->uid) {
      FUNC_1(VAR_5[VAR_11]);
      continue;
    }

    int32_t VAR_15 = VAR_13->numOfBlocks * sizeof(SCompBlock);
    SCompBlock *VAR_16 = (SCompBlock *)((char *)VAR_13 + sizeof(SCompInfo));

    int64_t VAR_17 = FUNC_6();


    TSCKSUM VAR_18 = *(TSCKSUM *)((char *)VAR_13 + sizeof(SCompInfo) + VAR_15);
    VAR_14 = FUNC_8(VAR_7, VAR_4->headerFilePath, VAR_13, (char *)VAR_16,
                                   VAR_12->vnode, VAR_18);
    if (VAR_14 < 0) {
      FUNC_1(VAR_5[VAR_11]);
      continue;
    }

    int64_t VAR_19 = FUNC_6();

    VAR_8->readCompInfo++;
    VAR_8->totalCompInfoSize += (VAR_15 + sizeof(SCompInfo) + sizeof(TSCKSUM));
    VAR_8->loadCompInfoUs += (VAR_19 - VAR_17);

    if (!FUNC_4(VAR_5[VAR_11], VAR_1, VAR_0->rawEKey, &VAR_9, &VAR_10)) {
      FUNC_1(VAR_5[VAR_11]);
      continue;
    }

    int32_t VAR_20 = 0;
    if (!FUNC_2(VAR_5[VAR_11], VAR_1, VAR_16, VAR_13->numOfBlocks, VAR_9, VAR_10,
                                      &VAR_20)) {
      FUNC_1(VAR_5[VAR_11]);
      continue;
    }

    if (!FUNC_5(VAR_5[VAR_11], VAR_16, VAR_20)) {
      FUNC_1(VAR_5[VAR_11]);
      VAR_7->killed = 1;

      return 0;
    }

    FUNC_3("QInfo:%p vid:%d sid:%d id:%s, startIndex:%d, %d blocks qualified", VAR_7, VAR_12->vnode, VAR_12->sid,
           VAR_12->meterId, VAR_5[VAR_11]->start, VAR_5[VAR_11]->numOfBlocks);

    VAR_6 += VAR_5[VAR_11]->numOfBlocks;
  }

  return VAR_6;
}
