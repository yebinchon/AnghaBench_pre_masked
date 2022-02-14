
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef size_t int32_t ;
typedef short int16_t ;
struct TYPE_24__ {int numOfFilters; short colId; scalar_t__ bytes; int * filters; } ;
struct TYPE_29__ {scalar_t__ order; int orderColId; } ;
struct TYPE_26__ {int offset; int limit; } ;
struct TYPE_33__ {short numOfCols; short numOfOutputCols; TYPE_9__* colList; TYPE_9__* pFilterInfo; int precision; TYPE_6__* pSelectExpr; TYPE_4__ order; int rowSize; int dataRowSize; TYPE_1__ limit; } ;
struct TYPE_34__ {int* req; short colIdxInBuf; int colIdx; TYPE_11__ data; TYPE_8__ query; } ;
struct TYPE_32__ {short numOfCols; short numOfOutputCols; scalar_t__ order; int orderColId; int offset; int limit; TYPE_11__* colList; } ;
struct TYPE_27__ {short colId; short colIdxInBuf; int colIdx; int flag; } ;
struct TYPE_28__ {short functionId; TYPE_2__ colInfo; } ;
struct TYPE_31__ {scalar_t__ resBytes; TYPE_3__ pBase; } ;
struct TYPE_30__ {int precision; } ;
struct TYPE_25__ {TYPE_5__ cfg; } ;
struct TYPE_23__ {size_t vnode; } ;
typedef TYPE_6__ SSqlFunctionExpr ;
typedef int SSingleColumnFilterInfo ;
typedef TYPE_7__ SQueryMeterMsg ;
typedef TYPE_8__ SQuery ;
typedef TYPE_9__ SQInfo ;
typedef TYPE_10__ SMeterObj ;
typedef TYPE_11__ SColumnInfo ;
typedef int SColumnFilterInfo ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int *,int *) ;
 size_t FUNC_5 (TYPE_9__*,TYPE_8__*) ;
 TYPE_15__* VAR_8 ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*,TYPE_10__*) ;

__attribute__((used)) static SQInfo *FUNC_8(SQueryMeterMsg *VAR_9, SMeterObj *VAR_10, SSqlFunctionExpr *VAR_11) {
  SQInfo *VAR_12 = (SQInfo *)FUNC_2(1, sizeof(SQInfo));
  if (VAR_12 == ((void*)0)) {
    return ((void*)0);
  }

  SQuery *VAR_13 = &(VAR_12->query);

  SColumnInfo *VAR_14 = VAR_9->colList;

  short VAR_15 = VAR_9->numOfCols;
  short VAR_16 = VAR_9->numOfOutputCols;

  VAR_13->numOfCols = VAR_15;
  VAR_13->numOfOutputCols = VAR_16;

  VAR_13->limit.limit = VAR_9->limit;
  VAR_13->limit.offset = VAR_9->offset;

  VAR_13->order.order = VAR_9->order;
  VAR_13->order.orderColId = VAR_9->orderColId;

  VAR_13->colList = FUNC_2(1, sizeof(SSingleColumnFilterInfo) * VAR_15);
  if (VAR_13->colList == ((void*)0)) {
    goto _clean_memory;
  }

  for (int16_t VAR_17 = 0; VAR_17 < VAR_15; ++VAR_17) {
    VAR_13->colList[VAR_17].req[0] = 1;
    VAR_13->colList[VAR_17].colIdxInBuf = VAR_17;

    VAR_13->colList[VAR_17].data = VAR_14[VAR_17];
    SColumnInfo *VAR_18 = &VAR_13->colList[VAR_17].data;

    VAR_18->filters = ((void*)0);

    if (VAR_14[VAR_17].numOfFilters > 0) {
      VAR_18->filters = FUNC_2(1, VAR_14[VAR_17].numOfFilters * sizeof(SColumnFilterInfo));

      for (int32_t VAR_19 = 0; VAR_19 < VAR_14[VAR_17].numOfFilters; ++VAR_19) {
        FUNC_4(&VAR_18->filters[VAR_19], &VAR_14[VAR_17].filters[VAR_19]);
      }
    } else {
      VAR_13->colList[VAR_17].data.filters = ((void*)0);
    }

    VAR_13->dataRowSize += VAR_14[VAR_17].bytes;
  }

  FUNC_7(VAR_13, VAR_10);

  for (int16_t VAR_20 = 0; VAR_20 < VAR_16; ++VAR_20) {
    FUNC_1(VAR_11[VAR_20].resBytes > 0);

    VAR_13->rowSize += VAR_11[VAR_20].resBytes;
    if (FUNC_0(VAR_11[VAR_20].pBase.colInfo.flag)) {
      continue;
    }

    int16_t VAR_21 = VAR_11[VAR_20].pBase.colInfo.colId;
    int16_t VAR_22 = VAR_11[VAR_20].pBase.functionId;


    for (int32_t VAR_23 = 0; VAR_23 < VAR_15; ++VAR_23) {
      if (VAR_13->colList[VAR_23].data.colId == VAR_21) {
        VAR_11[VAR_20].pBase.colInfo.colIdxInBuf = (int16_t)VAR_23;
        VAR_11[VAR_20].pBase.colInfo.colIdx = VAR_13->colList[VAR_23].colIdx;

        if (((VAR_22 == VAR_2 || VAR_22 == VAR_1) && VAR_13->order.order == VAR_7) ||
            ((VAR_22 == VAR_4 || VAR_22 == VAR_3) && VAR_13->order.order == VAR_6)) {
          VAR_13->colList[VAR_23].req[1] = 1;
        } else if (VAR_22 == VAR_5) {
          VAR_13->colList[VAR_23].req[1] = 1;
        }
        break;
      }
    }
  }

  VAR_13->pSelectExpr = VAR_11;

  int32_t VAR_24 = FUNC_5(VAR_12, VAR_13);
  if (VAR_24 != VAR_0) {
    goto _clean_memory;
  }

  FUNC_6(VAR_13);
  VAR_13->precision = VAR_8[VAR_10->vnode].cfg.precision;

  return VAR_12;

_clean_memory:
  FUNC_3(VAR_13->pFilterInfo);
  FUNC_3(VAR_13->colList);
  FUNC_3(VAR_12);

  return ((void*)0);
}
