
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ nSQLOptr; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
struct TYPE_21__ {int columnIndex; int tableIndex; } ;
struct TYPE_23__ {scalar_t__ numOfFilters; TYPE_4__ colIndex; TYPE_5__* filterInfo; } ;
struct TYPE_22__ {int filterOnBinary; } ;
struct TYPE_20__ {int * pMeterMeta; } ;
struct TYPE_19__ {scalar_t__ type; } ;
typedef int SSqlCmd ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterMetaInfo ;
typedef int SMeterMeta ;
typedef TYPE_4__ SColumnIndex ;
typedef TYPE_5__ SColumnFilterInfo ;
typedef TYPE_6__ SColumnBase ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_5__* FUNC_0 (TYPE_6__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_5__*,TYPE_4__*,TYPE_1__*) ;
 int FUNC_2 (int *,char const*) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 TYPE_6__* FUNC_4 (int *,TYPE_4__*) ;
 TYPE_3__* FUNC_5 (int *,int ) ;

__attribute__((used)) static int32_t FUNC_6(SSqlCmd* VAR_8, SColumnIndex* VAR_9, tSQLExpr* VAR_10, int32_t VAR_11) {
  SMeterMetaInfo* VAR_12 = FUNC_5(VAR_8, VAR_9->tableIndex);

  SMeterMeta* VAR_13 = VAR_12->pMeterMeta;
  SSchema* VAR_14 = FUNC_3(VAR_13, VAR_9->columnIndex);

  const char* VAR_15 = "non binary column not support like operator";
  const char* VAR_16 = "binary column not support this operator";
  const char* VAR_17 = "OR is not supported on different column filter";

  SColumnBase* VAR_18 = FUNC_4(VAR_8, VAR_9);
  SColumnFilterInfo* VAR_19 = ((void*)0);





  if (VAR_11 == VAR_0) {

    if (VAR_18->numOfFilters == 0) {
      VAR_19 = FUNC_0(VAR_18);
    } else {
      VAR_19 = &VAR_18->filterInfo[0];
    }
  } else if (VAR_11 == VAR_4) {

    VAR_19 = FUNC_0(VAR_18);
  } else {
    return VAR_5;
  }

  VAR_19->filterOnBinary =
      ((VAR_14->type == VAR_6 || VAR_14->type == VAR_7) ? 1 : 0);

  if (VAR_19->filterOnBinary) {
    if (VAR_10->nSQLOptr != VAR_1 && VAR_10->nSQLOptr != VAR_3 && VAR_10->nSQLOptr != VAR_2) {
      FUNC_2(VAR_8, VAR_16);
      return VAR_5;
    }
  } else {
    if (VAR_10->nSQLOptr == VAR_2) {
      FUNC_2(VAR_8, VAR_15);
      return VAR_5;
    }
  }

  VAR_18->colIndex = *VAR_9;
  return FUNC_1(VAR_8, VAR_19, VAR_9, VAR_10);
}
