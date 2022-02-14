
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_24__ ;
typedef struct TYPE_26__ TYPE_21__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_25__ {int numOfSids; size_t* starterPos; } ;
typedef TYPE_1__ tSidSet ;
typedef scalar_t__ int64_t ;
typedef size_t int32_t ;
struct TYPE_35__ {scalar_t__ compInfoOffset; } ;
struct TYPE_34__ {TYPE_24__* pMeterQInfo; scalar_t__ offsetInHeaderFile; int * pMeterObj; } ;
struct TYPE_33__ {scalar_t__ lastKeyOnFile; int sid; int meterId; int vnode; } ;
struct TYPE_32__ {scalar_t__ rawSKey; scalar_t__ rawEKey; int pMeterObj; TYPE_5__** pMeterSidExtInfo; } ;
struct TYPE_31__ {int sid; } ;
struct TYPE_30__ {TYPE_6__* pMeterQuerySupporter; int query; } ;
struct TYPE_29__ {char* pHeaderFileData; scalar_t__ headFileSize; int headerFilePath; } ;
struct TYPE_26__ {int maxSessions; } ;
struct TYPE_28__ {TYPE_21__ cfg; int fileId; int numOfFiles; } ;
struct TYPE_27__ {scalar_t__ lastKey; } ;
typedef scalar_t__ TSKEY ;
typedef int TSCKSUM ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SQueryFileInfo ;
typedef int SQuery ;
typedef TYPE_4__ SQInfo ;
typedef TYPE_5__ SMeterSidExtInfo ;
typedef TYPE_6__ SMeterQuerySupportObj ;
typedef TYPE_7__ SMeterObj ;
typedef TYPE_8__ SMeterDataInfo ;
typedef TYPE_9__ SCompHeader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_24__* FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*,TYPE_4__*,int ,...) ;
 TYPE_7__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_21__*) ;
 TYPE_8__** FUNC_6 (int) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_8__**,size_t,int,int ) ;
 int FUNC_8 (TYPE_8__*,TYPE_7__*,size_t,size_t) ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ,size_t,char*,size_t) ;
 TYPE_2__* VAR_3 ;

SMeterDataInfo **FUNC_10(SQInfo *VAR_4, int32_t VAR_5, SQueryFileInfo *VAR_6,
                                            tSidSet *VAR_7, SMeterDataInfo *VAR_8, int32_t *VAR_9) {
  SQuery * VAR_10 = &VAR_4->query;
  SMeterQuerySupportObj *VAR_11 = VAR_4->pMeterQuerySupporter;
  SMeterSidExtInfo ** VAR_12 = VAR_11->pMeterSidExtInfo;

  SVnodeObj *VAR_13 = &VAR_3[VAR_5];

  char * VAR_14 = VAR_6->pHeaderFileData;
  int32_t VAR_15 = sizeof(SCompHeader) * (VAR_13->cfg.maxSessions) + sizeof(TSCKSUM);


  if (FUNC_9(VAR_4, VAR_6->headerFilePath, VAR_5, VAR_14, VAR_15) < 0) {
    *VAR_9 = 0;
    return 0;
  }

  int64_t VAR_16 = FUNC_5(VAR_13->numOfFiles, VAR_13->fileId, &VAR_13->cfg);
  SMeterDataInfo **VAR_17 = FUNC_6(VAR_0 * VAR_7->numOfSids);

  int32_t VAR_18 = 0;
  TSKEY VAR_19, VAR_20;

  for (int32_t VAR_21 = 0; VAR_21 < VAR_7->numOfSids; ++VAR_21) {
    SMeterObj *VAR_22 = FUNC_4(VAR_11->pMeterObj, VAR_12[VAR_21]->sid);
    if (VAR_22 == ((void*)0)) {
      FUNC_3("QInfo:%p failed to find required sid:%d", VAR_4, VAR_12[VAR_21]->sid);
      continue;
    }

    if (VAR_21 >= VAR_7->starterPos[VAR_18 + 1]) {
      VAR_18 += 1;
    }

    SMeterDataInfo *VAR_23 = &VAR_8[VAR_21];
    if (VAR_23->pMeterObj == ((void*)0)) {
      FUNC_8(VAR_23, VAR_22, VAR_21, VAR_18);
    }


    if (VAR_23->pMeterQInfo != ((void*)0)) {
      VAR_19 = VAR_23->pMeterQInfo->lastKey;
    } else {
      VAR_19 = VAR_11->rawSKey;
    }


    VAR_20 = VAR_11->rawEKey;

    if (FUNC_0(VAR_10)) {
      FUNC_1(VAR_19 >= VAR_11->rawSKey);
      if (VAR_20 < VAR_16 || VAR_19 > VAR_22->lastKeyOnFile) {
        continue;
      }
    } else {
      FUNC_1(VAR_19 <= VAR_11->rawSKey);
      if (VAR_19 < VAR_16 || VAR_20 > VAR_22->lastKeyOnFile) {
        continue;
      }
    }

    int64_t VAR_24 = VAR_1 + sizeof(SCompHeader) * VAR_22->sid;

    SCompHeader *VAR_25 = (SCompHeader *)(VAR_14 + VAR_24);

    if (VAR_25->compInfoOffset == 0) {
      continue;
    }

    if (VAR_25->compInfoOffset < sizeof(SCompHeader) * VAR_13->cfg.maxSessions + VAR_1 ||
        VAR_25->compInfoOffset > VAR_6->headFileSize) {
      FUNC_3("QInfo:%p vid:%d sid:%d id:%s, compInfoOffset:%d is not valid", VAR_10, VAR_22->vnode, VAR_22->sid,
             VAR_22->meterId, VAR_25->compInfoOffset);
      continue;
    }

    VAR_23->offsetInHeaderFile = (uint64_t)VAR_25->compInfoOffset;

    if (VAR_23->pMeterQInfo == ((void*)0)) {
      VAR_23->pMeterQInfo = FUNC_2(VAR_10, VAR_11->rawSKey, VAR_11->rawEKey);
    }

    VAR_17[*VAR_9] = VAR_23;
    (*VAR_9) += 1;
  }

  FUNC_1(*VAR_9 <= VAR_7->numOfSids);


  if (*VAR_9 > 1) {
    FUNC_7(VAR_17, *VAR_9, VAR_0, VAR_2);
  }

  return VAR_17;
}
