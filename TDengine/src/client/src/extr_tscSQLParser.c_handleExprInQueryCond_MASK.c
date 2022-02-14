
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ nLen; } ;
struct TYPE_30__ {scalar_t__ nSQLOptr; int colInfo; TYPE_1__ val; struct TYPE_30__* pRight; struct TYPE_30__* pLeft; } ;
typedef TYPE_2__ tSQLExpr ;
typedef scalar_t__ int32_t ;
struct TYPE_36__ {scalar_t__ columnIndex; int tableIndex; } ;
struct TYPE_35__ {int tsJoin; int * pColumnCond; int * pJoinExpr; int tableCondIndex; scalar_t__ relType; TYPE_2__* pTableCond; int * pTimewindow; } ;
struct TYPE_34__ {scalar_t__ numOfColumns; } ;
struct TYPE_33__ {TYPE_6__* pMeterMeta; } ;
struct TYPE_32__ {scalar_t__ type; } ;
struct TYPE_31__ {int type; } ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SSchema ;
typedef TYPE_5__ SMeterMetaInfo ;
typedef TYPE_6__ SMeterMeta ;
typedef TYPE_7__ SCondExpr ;
typedef TYPE_8__ SColumnIndex ;


 TYPE_8__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,TYPE_8__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,char const*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int **,TYPE_2__*,char const*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_4__* FUNC_8 (TYPE_6__*) ;
 TYPE_5__* FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_2__*,TYPE_8__*) ;

__attribute__((used)) static int32_t FUNC_12(SSqlCmd* VAR_15, tSQLExpr** VAR_16, SCondExpr* VAR_17, int32_t* VAR_18,
                                     int32_t VAR_19) {
  const char* VAR_20 = "meter query cannot use tags filter";
  const char* VAR_21 = "illegal column name";
  const char* VAR_22 = "only one query time range allowed";
  const char* VAR_23 = "only one join condition allowed";
  const char* VAR_24 = "AND is allowed to filter on different ordinary columns";
  const char* VAR_25 = "not support ordinary column join";
  const char* VAR_26 = "only one query condition on tbname allowed";
  const char* VAR_27 = "only in/like allowed in filter table name";

  tSQLExpr* VAR_28 = (*VAR_16)->pLeft;
  tSQLExpr* VAR_29 = (*VAR_16)->pRight;

  int32_t VAR_30 = VAR_5;

  SColumnIndex VAR_31 = VAR_0;
  if (FUNC_2(&VAR_28->colInfo, VAR_15, &VAR_31) != VAR_5) {
    FUNC_5(VAR_15, VAR_21);
    return VAR_4;
  }

  FUNC_1(FUNC_3(*VAR_16));

  SMeterMetaInfo* VAR_32 = FUNC_9(VAR_15, VAR_31.tableIndex);
  SMeterMeta* VAR_33 = VAR_32->pMeterMeta;

  if (VAR_31.columnIndex == VAR_1) {
    if (!FUNC_11(VAR_15, *VAR_16, &VAR_31)) {
      return VAR_4;
    }


    if (VAR_29->nSQLOptr == VAR_2) {
      VAR_15->type |= VAR_9;
      VAR_17->tsJoin = 1;





      FUNC_7(*VAR_16);
    } else {
      VAR_30 = FUNC_6(VAR_15, &VAR_17->pTimewindow, *VAR_16, VAR_22, VAR_19);
    }

    *VAR_16 = ((void*)0);
    *VAR_18 = VAR_14;
  } else if (VAR_31.columnIndex >= VAR_33->numOfColumns ||
             VAR_31.columnIndex == VAR_10) {

    if (FUNC_0(VAR_32)) {
      FUNC_5(VAR_15, VAR_20);
      return VAR_4;
    }


    if ((*VAR_16)->nSQLOptr == VAR_3) {
      if (VAR_29->val.nLen > VAR_8) {
        return VAR_4;
      }

      SSchema* VAR_34 = FUNC_8(VAR_32->pMeterMeta);

      if ((!FUNC_4(&VAR_28->colInfo)) && VAR_34[VAR_31.columnIndex].type != VAR_6 &&
          VAR_34[VAR_31.columnIndex].type != VAR_7) {
        FUNC_5(VAR_15, VAR_21);
        return VAR_4;
      }
    }


    if (VAR_31.columnIndex == VAR_10) {
      if (!FUNC_10(*VAR_16)) {
        FUNC_5(VAR_15, VAR_27);
        return VAR_4;
      }

      if (VAR_17->pTableCond == ((void*)0)) {
        VAR_17->pTableCond = *VAR_16;
        VAR_17->relType = VAR_19;
        VAR_17->tableCondIndex = VAR_31.tableIndex;
      } else {
        FUNC_5(VAR_15, VAR_26);
        return VAR_4;
      }

      *VAR_18 = VAR_13;
      *VAR_16 = ((void*)0);
    } else {
      if (VAR_29->nSQLOptr == VAR_2) {
        if (!FUNC_11(VAR_15, *VAR_16, &VAR_31)) {
          return VAR_4;
        }

        if (VAR_17->pJoinExpr != ((void*)0)) {
          FUNC_5(VAR_15, VAR_23);
          return VAR_4;
        }

        VAR_15->type |= VAR_9;
        VAR_30 = FUNC_6(VAR_15, &VAR_17->pJoinExpr, *VAR_16, ((void*)0), VAR_19);
        *VAR_16 = ((void*)0);
      } else {



      }

      *VAR_18 = VAR_12;
    }

  } else {
    *VAR_18 = VAR_11;

    if (VAR_29->nSQLOptr == VAR_2) {
      FUNC_5(VAR_15, VAR_25);
      return VAR_4;
    }






    VAR_30 = FUNC_6(VAR_15, &VAR_17->pColumnCond, *VAR_16, ((void*)0), VAR_19);
    *VAR_16 = ((void*)0);
  }

  return VAR_30;
}
