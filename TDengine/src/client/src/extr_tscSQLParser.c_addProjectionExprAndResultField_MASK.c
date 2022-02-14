
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_30__ {TYPE_2__* pNode; } ;
typedef TYPE_3__ tSQLExprItem ;
typedef scalar_t__ int32_t ;
struct TYPE_35__ {scalar_t__ tableIndex; scalar_t__ columnIndex; scalar_t__ member_1; int member_0; } ;
struct TYPE_34__ {scalar_t__ numOfColumns; } ;
struct TYPE_33__ {TYPE_7__* pMeterMeta; } ;
struct TYPE_32__ {int name; int bytes; int type; } ;
struct TYPE_28__ {scalar_t__ numOfOutputCols; } ;
struct TYPE_31__ {scalar_t__ numOfTables; int type; TYPE_1__ fieldsInfo; } ;
struct TYPE_29__ {scalar_t__ nSQLOptr; int colInfo; } ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SSchema ;
typedef TYPE_6__ SMeterMetaInfo ;
typedef TYPE_7__ SMeterMeta ;
typedef TYPE_8__ SColumnIndex ;


 TYPE_8__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_4__*,scalar_t__,TYPE_8__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,TYPE_4__*,TYPE_8__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_4__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_4__*,char const*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_4__*,scalar_t__,int ,TYPE_8__*,TYPE_5__*,int) ;
 TYPE_6__* FUNC_8 (TYPE_4__*,scalar_t__) ;

int32_t FUNC_9(SSqlCmd* VAR_12, tSQLExprItem* VAR_13) {
  const char* VAR_14 = "invalid column name";
  const char* VAR_15 = "tag for table query is not allowed";

  int32_t VAR_16 = VAR_12->fieldsInfo.numOfOutputCols;

  if (VAR_13->pNode->nSQLOptr == VAR_2) {
    SColumnIndex VAR_17 = VAR_0;
    if (FUNC_4(&VAR_13->pNode->colInfo, VAR_12, &VAR_17) != VAR_5) {
      return VAR_4;
    }


    if (VAR_17.tableIndex == VAR_1) {
      for (int32_t VAR_18 = 0; VAR_18 < VAR_12->numOfTables; ++VAR_18) {
        VAR_17.tableIndex = VAR_18;
        int32_t VAR_19 = FUNC_2(VAR_12, &VAR_17, VAR_16);
        VAR_16 += VAR_19;
      }
    } else {
      FUNC_2(VAR_12, &VAR_17, VAR_16);
    }
  } else if (VAR_13->pNode->nSQLOptr == VAR_3) {
    SColumnIndex VAR_20 = VAR_0;

    if (FUNC_3(&VAR_13->pNode->colInfo, VAR_12, &VAR_20) != VAR_5) {
      FUNC_5(VAR_12, VAR_14);
      return VAR_4;
    }

    if (VAR_20.columnIndex == VAR_10) {
      SColumnIndex VAR_21 = {0, VAR_10};
      SSchema VAR_22 = {.type = VAR_6, .bytes = VAR_8};
      FUNC_6(VAR_22.name, VAR_11);

      VAR_12->type = VAR_9;
      FUNC_7(VAR_12, VAR_16, VAR_7, &VAR_21, &VAR_22, 1);
    } else {
      SMeterMetaInfo* VAR_23 = FUNC_8(VAR_12, VAR_20.tableIndex);
      SMeterMeta* VAR_24 = VAR_23->pMeterMeta;

      if (VAR_20.columnIndex >= VAR_24->numOfColumns && FUNC_0(VAR_23)) {
        FUNC_5(VAR_12, VAR_15);
        return VAR_4;
      }

      FUNC_1(VAR_12, VAR_16, &VAR_20, VAR_13);
    }
  } else {
    return VAR_4;
  }

  return VAR_5;
}
