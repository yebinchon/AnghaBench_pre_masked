
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef size_t int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_24__ {scalar_t__ columnIndex; int tableIndex; } ;
struct TYPE_23__ {TYPE_14__* pMeterMeta; } ;
struct TYPE_22__ {scalar_t__ colId; } ;
struct TYPE_19__ {scalar_t__ numOfExprs; TYPE_3__* pExprs; } ;
struct TYPE_21__ {TYPE_2__ exprsInfo; } ;
struct TYPE_18__ {scalar_t__ colIdx; void* flag; scalar_t__ colId; } ;
struct TYPE_20__ {int uid; scalar_t__ interResBytes; scalar_t__ resBytes; scalar_t__ resType; TYPE_1__ colInfo; scalar_t__ functionId; } ;
struct TYPE_17__ {scalar_t__ numOfColumns; int uid; } ;
typedef TYPE_2__ SSqlExprInfo ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SSchema ;
typedef TYPE_6__ SMeterMetaInfo ;
typedef TYPE_7__ SColumnIndex ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 TYPE_5__* FUNC_2 (TYPE_14__*,scalar_t__) ;
 TYPE_6__* FUNC_3 (TYPE_4__*,int ) ;

SSqlExpr* FUNC_4(SSqlCmd* VAR_3, int32_t VAR_4, int16_t VAR_5, SColumnIndex* VAR_6, int16_t VAR_7,
                           int16_t VAR_8, int16_t VAR_9) {
  SMeterMetaInfo* VAR_10 = FUNC_3(VAR_3, VAR_6->tableIndex);

  SSqlExprInfo* VAR_11 = &VAR_3->exprsInfo;

  FUNC_0(VAR_11, VAR_11->numOfExprs + 1);
  FUNC_1(VAR_11, VAR_4);

  SSqlExpr* VAR_12 = &VAR_11->pExprs[VAR_4];

  VAR_12->functionId = VAR_5;
  int16_t VAR_13 = VAR_10->pMeterMeta->numOfColumns;


  if (VAR_6->columnIndex == VAR_2) {
    VAR_12->colInfo.colId = VAR_2;
  } else {
    SSchema* VAR_14 = FUNC_2(VAR_10->pMeterMeta, VAR_6->columnIndex);
    VAR_12->colInfo.colId = VAR_14->colId;
  }


  if (VAR_6->columnIndex >= VAR_13) {
    VAR_6->columnIndex -= VAR_13;
    VAR_12->colInfo.flag = VAR_1;
  } else {
    if (VAR_6->columnIndex != VAR_2) {
      VAR_12->colInfo.flag = VAR_0;
    } else {
      VAR_12->colInfo.flag = VAR_1;
    }
  }

  VAR_12->colInfo.colIdx = VAR_6->columnIndex;
  VAR_12->resType = VAR_7;
  VAR_12->resBytes = VAR_8;
  VAR_12->interResBytes = VAR_9;
  VAR_12->uid = VAR_10->pMeterMeta->uid;

  VAR_11->numOfExprs++;
  return VAR_12;
}
