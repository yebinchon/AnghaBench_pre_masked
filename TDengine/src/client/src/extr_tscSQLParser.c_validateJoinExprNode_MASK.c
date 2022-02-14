
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ nSQLOptr; int colInfo; struct TYPE_12__* pRight; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int16_t ;
struct TYPE_15__ {scalar_t__ tableIndex; size_t columnIndex; } ;
struct TYPE_14__ {int pMeterMeta; } ;
struct TYPE_13__ {scalar_t__ type; } ;
typedef int SSqlCmd ;
typedef TYPE_2__ SSchema ;
typedef TYPE_3__ SMeterMetaInfo ;
typedef TYPE_4__ SColumnIndex ;


 TYPE_4__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *,int *,TYPE_4__*) ;
 int FUNC_2 (int *,char const*) ;
 TYPE_2__* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_5(SSqlCmd* VAR_6, tSQLExpr* VAR_7, SColumnIndex* VAR_8) {
  const char* VAR_9 = "illegal column name";
  const char* VAR_10 = "= is expected in join expression";
  const char* VAR_11 = "join column must have same type";
  const char* VAR_12 = "self join is not allowed";
  const char* VAR_13 = "join table must be the same type(table to table, super table to super table)";
  const char* VAR_14 = "tags in join condition not support binary/nchar types";

  tSQLExpr* VAR_15 = VAR_7->pRight;

  if (VAR_15->nSQLOptr != VAR_2) {
    return 1;
  }

  if (VAR_7->nSQLOptr != VAR_1) {
    FUNC_2(VAR_6, VAR_10);
    return 0;
  }

  SColumnIndex VAR_16 = VAR_0;

  if (FUNC_1(&VAR_15->colInfo, VAR_6, &VAR_16) != VAR_3) {
    FUNC_2(VAR_6, VAR_9);
    return 0;
  }


  SMeterMetaInfo* VAR_17 = FUNC_4(VAR_6, VAR_8->tableIndex);
  SSchema* VAR_18 = FUNC_3(VAR_17->pMeterMeta);
  int16_t VAR_19 = VAR_18[VAR_8->columnIndex].type;

  SMeterMetaInfo* VAR_20 = FUNC_4(VAR_6, VAR_16.tableIndex);
  SSchema* VAR_21 = FUNC_3(VAR_20->pMeterMeta);
  int16_t VAR_22 = VAR_21[VAR_16.columnIndex].type;

  if (VAR_19 != VAR_22) {
    FUNC_2(VAR_6, VAR_11);
    return 0;
  } else if (VAR_8->tableIndex == VAR_16.tableIndex) {
    FUNC_2(VAR_6, VAR_12);
    return 0;
  } else if (VAR_19 == VAR_4 || VAR_19 == VAR_5) {
    FUNC_2(VAR_6, VAR_14);
    return 0;
  }


  if (FUNC_0(VAR_17) != FUNC_0(VAR_20)) {
    FUNC_2(VAR_6, VAR_13);
    return 0;
  }

  return 1;
}
