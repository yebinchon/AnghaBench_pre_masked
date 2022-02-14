
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_9__ ;
typedef struct TYPE_41__ TYPE_8__ ;
typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_26__ {size_t tableIndex; int numOfGroupCols; int orderIndex; int orderType; TYPE_17__* columnInfo; } ;
struct TYPE_40__ {size_t n; int z; } ;
struct TYPE_39__ {scalar_t__ uid; TYPE_7__ cond; } ;
struct TYPE_35__ {int tagCol; int meterId; } ;
struct TYPE_34__ {int tagCol; int meterId; } ;
struct TYPE_36__ {TYPE_2__ right; TYPE_1__ left; } ;
struct TYPE_41__ {scalar_t__ numOfTagCond; int relType; TYPE_6__ tbnameCond; TYPE_3__ joinInfo; } ;
struct TYPE_27__ {char* payload; size_t numOfTables; int payloadLen; int msgType; TYPE_10__ groupbyExpr; TYPE_8__ tagCond; } ;
struct TYPE_42__ {TYPE_11__ cmd; } ;
struct TYPE_38__ {int n; int z; } ;
struct TYPE_37__ {scalar_t__ uid; } ;
struct TYPE_33__ {int colId; scalar_t__ flag; scalar_t__ colIdx; } ;
struct TYPE_32__ {TYPE_5__ cond; } ;
struct TYPE_31__ {size_t numOfTags; int* tagColumnIndex; int name; TYPE_4__* pMeterMeta; } ;
struct TYPE_30__ {void* elemLen; void* numOfTags; int meterId; void* groupbyTagColumnList; void* orderType; void* orderIndex; void** tagCols; void* numOfGroupCols; void* tableCondLen; void* tableCond; void* rel; void* cond; void* condLen; } ;
struct TYPE_29__ {void** metaElem; void* joinCondLen; void* join; void* numOfMeters; } ;
struct TYPE_28__ {int db; } ;
typedef TYPE_8__ STagCond ;
typedef TYPE_9__ SSqlObj ;
typedef TYPE_10__ SSqlGroupbyExpr ;
typedef TYPE_11__ SSqlCmd ;
typedef TYPE_12__ SMgmtHead ;
typedef TYPE_13__ SMetricMetaMsg ;
typedef TYPE_14__ SMetricMetaElemMsg ;
typedef TYPE_15__ SMeterMetaInfo ;
typedef TYPE_16__ SCond ;
typedef TYPE_17__ SColIndexEx ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int) ;
 size_t FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,char*,size_t) ;
 TYPE_16__* FUNC_7 (TYPE_8__*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (TYPE_11__*,size_t) ;
 int FUNC_9 (char*,TYPE_9__*,...) ;
 size_t FUNC_10 (TYPE_11__*) ;
 int FUNC_11 (int ,int ) ;
 TYPE_15__* FUNC_12 (TYPE_11__*,size_t) ;

int FUNC_13(SSqlObj *VAR_5) {
  SMetricMetaMsg *VAR_6;
  char * VAR_7, *VAR_8;
  int VAR_9 = 0;
  int VAR_10 = 0;

  SSqlCmd * VAR_11 = &VAR_5->cmd;
  STagCond *VAR_12 = &VAR_11->tagCond;

  SMeterMetaInfo *VAR_13 = FUNC_12(VAR_11, VAR_10);

  int32_t VAR_14 = FUNC_10(VAR_11);
  if (VAR_0 != FUNC_8(VAR_11, VAR_14)) {
    FUNC_9("%p failed to malloc for metric meter msg", VAR_5);
    return -1;
  }

  VAR_8 = VAR_11->payload + VAR_4;
  VAR_7 = VAR_8;

  SMgmtHead *VAR_15 = (SMgmtHead *)VAR_7;
  FUNC_11(VAR_13->name, VAR_15->db);

  VAR_7 += sizeof(SMgmtHead);

  VAR_6 = (SMetricMetaMsg *)VAR_7;
  VAR_6->numOfMeters = FUNC_1(VAR_11->numOfTables);

  VAR_7 += sizeof(SMetricMetaMsg);

  int32_t VAR_16 = VAR_7 - (char *)VAR_6;
  VAR_6->join = FUNC_1(VAR_16);


  VAR_6->joinCondLen = FUNC_1((VAR_1 + sizeof(int16_t)) * 2);

  FUNC_3(VAR_7, VAR_12->joinInfo.left.meterId, VAR_1);
  VAR_7 += VAR_1;

  *(int16_t *)VAR_7 = VAR_12->joinInfo.left.tagCol;
  VAR_7 += sizeof(int16_t);

  FUNC_3(VAR_7, VAR_12->joinInfo.right.meterId, VAR_1);
  VAR_7 += VAR_1;

  *(int16_t *)VAR_7 = VAR_12->joinInfo.right.tagCol;
  VAR_7 += sizeof(int16_t);

  for (int32_t VAR_17 = 0; VAR_17 < VAR_11->numOfTables; ++VAR_17) {
    VAR_13 = FUNC_12(VAR_11, VAR_17);
    uint64_t VAR_18 = VAR_13->pMeterMeta->uid;

    VAR_16 = VAR_7 - (char *)VAR_6;
    VAR_6->metaElem[VAR_17] = FUNC_1(VAR_16);

    SMetricMetaElemMsg *VAR_19 = (SMetricMetaElemMsg *)VAR_7;
    VAR_7 += sizeof(SMetricMetaElemMsg);


    int32_t VAR_20 = 0;
    if (VAR_12->numOfTagCond > 0) {
      SCond *VAR_21 = FUNC_7(VAR_12, VAR_18);
      if (VAR_21 != ((void*)0)) {
        VAR_20 = VAR_21->cond.n + 1;
        bool VAR_22 = FUNC_6(VAR_21->cond.z, VAR_21->cond.n, VAR_7, VAR_21->cond.n * VAR_3);
        if (!VAR_22) {
          FUNC_9("%p mbs to ucs4 failed:%s", VAR_5, FUNC_7(VAR_12, VAR_18));
          return 0;
        }
      }
    }

    VAR_19->condLen = FUNC_1(VAR_20);

    VAR_16 = VAR_7 - (char *)VAR_6;
    VAR_19->cond = FUNC_1(VAR_16);
    VAR_7 += VAR_20 * VAR_3;

    VAR_19->rel = FUNC_2(VAR_12->relType);
    if (VAR_12->tbnameCond.uid == VAR_18) {
      VAR_16 = VAR_7 - (char *)VAR_6;

      VAR_19->tableCond = FUNC_1(VAR_16);
      VAR_19->tableCondLen = FUNC_1(VAR_12->tbnameCond.cond.n);

      FUNC_3(VAR_7, VAR_12->tbnameCond.cond.z, VAR_12->tbnameCond.cond.n);
      VAR_7 += VAR_12->tbnameCond.cond.n;
    }

    SSqlGroupbyExpr *VAR_23 = &VAR_11->groupbyExpr;

    if (VAR_23->tableIndex != VAR_17) {
      VAR_19->orderType = 0;
      VAR_19->orderIndex = 0;
      VAR_19->numOfGroupCols = 0;
    } else {
      VAR_19->numOfGroupCols = FUNC_2(VAR_23->numOfGroupCols);
      for (int32_t VAR_24 = 0; VAR_24 < VAR_13->numOfTags; ++VAR_24) {
        VAR_19->tagCols[VAR_24] = FUNC_2(VAR_13->tagColumnIndex[VAR_24]);
      }

      if (VAR_23->numOfGroupCols != 0) {
        VAR_19->orderIndex = FUNC_2(VAR_23->orderIndex);
        VAR_19->orderType = FUNC_2(VAR_23->orderType);
        VAR_16 = VAR_7 - (char *)VAR_6;

        VAR_19->groupbyTagColumnList = FUNC_1(VAR_16);
        for (int32_t VAR_25 = 0; VAR_25 < VAR_11->groupbyExpr.numOfGroupCols; ++VAR_25) {
          SColIndexEx *VAR_26 = &VAR_11->groupbyExpr.columnInfo[VAR_25];

          *((int16_t *)VAR_7) = VAR_26->colId;
          VAR_7 += sizeof(VAR_26->colId);

          *((int16_t *)VAR_7) += VAR_26->colIdx;
          VAR_7 += sizeof(VAR_26->colIdx);

          *((int16_t *)VAR_7) += VAR_26->flag;
          VAR_7 += sizeof(VAR_26->flag);
        }
      }
    }

    FUNC_5(VAR_19->meterId, VAR_13->name);
    VAR_19->numOfTags = FUNC_2(VAR_13->numOfTags);

    int16_t VAR_27 = VAR_7 - (char *)VAR_19;
    VAR_19->elemLen = FUNC_2(VAR_27);
  }

  VAR_9 = VAR_7 - VAR_8;
  VAR_11->payloadLen = VAR_9;
  VAR_11->msgType = VAR_2;
  FUNC_0(VAR_9 + FUNC_4() <= VAR_14);
  return VAR_9;
}
