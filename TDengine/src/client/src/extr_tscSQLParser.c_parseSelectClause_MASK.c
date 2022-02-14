
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_19__ ;
typedef struct TYPE_33__ TYPE_10__ ;


struct TYPE_37__ {size_t nExpr; TYPE_4__* a; } ;
typedef TYPE_3__ tSQLExprList ;
struct TYPE_38__ {char* aliasName; TYPE_10__* pNode; } ;
typedef TYPE_4__ tSQLExprItem ;
typedef size_t int32_t ;
struct TYPE_43__ {int list; int numOfCols; int * pSchema; } ;
struct TYPE_42__ {int member_0; } ;
struct TYPE_41__ {TYPE_19__* pMeterMeta; } ;
struct TYPE_36__ {size_t numOfOutputCols; } ;
struct TYPE_40__ {int count; int command; int type; TYPE_2__ fieldsInfo; } ;
struct TYPE_39__ {int aliasName; } ;
struct TYPE_35__ {scalar_t__ n; int * z; } ;
struct TYPE_34__ {int numOfColumns; } ;
struct TYPE_33__ {scalar_t__ nSQLOptr; TYPE_1__ colInfo; } ;
typedef TYPE_5__ SSqlExpr ;
typedef TYPE_6__ SSqlCmd ;
typedef int SSchema ;
typedef TYPE_7__ SMeterMetaInfo ;
typedef TYPE_8__ SColumnIndex ;
typedef TYPE_9__ SColumnIdListRes ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (TYPE_6__*,size_t,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_10__*,char**) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,size_t,int *,int,int ,int ) ;
 int FUNC_9 (TYPE_6__*,char const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,char*,int ) ;
 int * FUNC_12 (TYPE_19__*) ;
 TYPE_7__* FUNC_13 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_6__*) ;
 TYPE_5__* FUNC_15 (TYPE_6__*,size_t,int ,TYPE_8__*,int ,int,int) ;
 int FUNC_16 (TYPE_6__*) ;
 size_t FUNC_17 (TYPE_10__*,int *,int ,TYPE_9__*) ;

int32_t FUNC_18(SSqlCmd* VAR_17, tSQLExprList* VAR_18, bool VAR_19) {
  FUNC_3(VAR_18 != ((void*)0) && VAR_17 != ((void*)0));

  const char* VAR_20 = "invalid column name/illegal column type in arithmetic expression";
  const char* VAR_21 = "functions can not be mixed up";
  const char* VAR_22 = "not support query expression";

  for (int32_t VAR_23 = 0; VAR_23 < VAR_18->nExpr; ++VAR_23) {
    int32_t VAR_24 = VAR_17->fieldsInfo.numOfOutputCols;
    tSQLExprItem* VAR_25 = &VAR_18->a[VAR_23];


    if (VAR_25->pNode->nSQLOptr == VAR_0 || VAR_25->pNode->nSQLOptr == VAR_2 || VAR_25->pNode->nSQLOptr == VAR_6) {

      if (VAR_25->pNode->nSQLOptr == VAR_2 && (VAR_25->pNode->colInfo.z == ((void*)0) && VAR_25->pNode->colInfo.n == 0)) {
        return VAR_7;
      }


      FUNC_5(VAR_25);

      VAR_17->type |= VAR_14;


      if (FUNC_2(VAR_17, VAR_25) != VAR_8) {
        return VAR_7;
      }
    } else if (VAR_25->pNode->nSQLOptr >= VAR_1 && VAR_25->pNode->nSQLOptr <= VAR_3) {

      if (FUNC_0(VAR_17, VAR_24, VAR_25) != VAR_8) {
        return VAR_7;
      }

    } else if (VAR_25->pNode->nSQLOptr >= VAR_4 && VAR_25->pNode->nSQLOptr <= VAR_5) {

      SMeterMetaInfo* VAR_26 = FUNC_13(VAR_17, 0);
      SSchema* VAR_27 = FUNC_12(VAR_26->pMeterMeta);

      SColumnIdListRes VAR_28 = {.pSchema = VAR_27, .numOfCols = VAR_26->pMeterMeta->numOfColumns};

      int32_t VAR_29 =
          FUNC_17(VAR_25->pNode, VAR_27, VAR_26->pMeterMeta->numOfColumns, &VAR_28);
      if (VAR_29 != VAR_8) {
        FUNC_9(VAR_17, VAR_20);
        return VAR_7;
      }

      char VAR_30[1024] = {0};
      char* VAR_31 = VAR_30;

      if (FUNC_4(VAR_25->pNode, &VAR_31) != VAR_8) {
        return VAR_7;
      }


      SColumnIndex VAR_32 = {0};
      SSqlExpr* VAR_33 = FUNC_15(VAR_17, VAR_24, VAR_12, &VAR_32, VAR_11,
                                         sizeof(double), sizeof(double));
      FUNC_1(VAR_33, VAR_30, VAR_10, FUNC_10(VAR_30), 0);


      if (VAR_25->aliasName != ((void*)0)) {
        FUNC_11(VAR_33->aliasName, VAR_25->aliasName, VAR_9);
      } else {
        FUNC_11(VAR_33->aliasName, VAR_30, VAR_9);
      }

      FUNC_8(VAR_17, VAR_23, &VAR_28.list, sizeof(double), VAR_11, VAR_33->aliasName);
    } else {




      FUNC_9(VAR_17, VAR_22);
      return VAR_7;
    }

    if (VAR_17->fieldsInfo.numOfOutputCols > VAR_13) {
      return VAR_7;
    }
  }

  if (!FUNC_6(VAR_17)) {
    FUNC_9(VAR_17, VAR_21);
    return VAR_7;
  }

  if (VAR_19) {
    VAR_17->type |= VAR_15;
    SMeterMetaInfo* VAR_34 = FUNC_13(VAR_17, 0);

    if (FUNC_14(VAR_17)) {
      VAR_17->command = VAR_16;
      VAR_17->count = VAR_34->pMeterMeta->numOfColumns;
    }





    FUNC_16(VAR_17);

    if (FUNC_7(VAR_17)) {
      return VAR_7;
    }
  }

  return VAR_8;
}
