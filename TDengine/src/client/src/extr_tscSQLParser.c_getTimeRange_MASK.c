
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nType; scalar_t__ nLen; int i64Key; int dKey; int pz; } ;
struct TYPE_5__ {scalar_t__ nSQLOptr; TYPE_3__ val; } ;
typedef TYPE_1__ tSQLExpr ;
typedef int int64_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_6__ {scalar_t__ n; scalar_t__ type; int z; } ;
typedef TYPE_2__ SSQLToken ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ,char,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 scalar_t__ FUNC_4 (int ,int*,scalar_t__,int ) ;

int32_t FUNC_5(int64_t* VAR_18, int64_t* VAR_19, tSQLExpr* VAR_20, int32_t VAR_21, int16_t VAR_22) {

  if (VAR_20->nSQLOptr == VAR_5) {
    return VAR_13;
  }





  if (VAR_20->nSQLOptr == VAR_10 || VAR_21 == VAR_6) {
    return VAR_12;
  }

  int64_t VAR_23 = 0;
  bool VAR_24 = 0;
  if (VAR_20->val.nType == VAR_15) {
    VAR_20->val.nLen = FUNC_0(VAR_20->val.pz);

    char* VAR_25 = FUNC_1(VAR_20->val.pz, '-', VAR_20->val.nLen, 0);
    if (VAR_25 != ((void*)0)) {
      if (FUNC_4(VAR_20->val.pz, &VAR_23, VAR_20->val.nLen, VAR_16) == VAR_13) {
        VAR_24 = 1;
      } else {
        return VAR_12;
      }
    } else {
      SSQLToken VAR_26 = {.z = VAR_20->val.pz, .n = VAR_20->val.nLen, .type = VAR_5};
      int32_t VAR_27 = FUNC_2(VAR_20->val.pz, &VAR_26.type);

      if ((VAR_26.type != VAR_7 && VAR_26.type != VAR_2) || VAR_27 != VAR_20->val.nLen) {
        return VAR_12;
      }
    }
  } else if (VAR_20->nSQLOptr == VAR_7 && VAR_22 == VAR_17) {






    if (VAR_20->val.i64Key <= VAR_0 / 1000) {
      VAR_20->val.i64Key *= 1000;
    }
  } else if (VAR_20->nSQLOptr == VAR_2 && VAR_22 == VAR_17) {
    VAR_20->val.dKey *= 1000;
  }

  if (!VAR_24) {




    FUNC_3(&VAR_20->val, (char*)&VAR_23, VAR_14);







    if (VAR_20->nSQLOptr == VAR_11 && VAR_22 == VAR_17) {
      if (VAR_23 <= VAR_0 / 1000) {
        VAR_23 *= 1000;
      }
    }
  }

  int32_t VAR_28 = 1;

  if (VAR_22 == VAR_17) {
    VAR_28 *= 1000;
  }

  if (VAR_21 == VAR_8) {
    *VAR_19 = VAR_23;
  } else if (VAR_21 == VAR_9) {
    *VAR_19 = VAR_23 - VAR_28;
  } else if (VAR_21 == VAR_4) {
    *VAR_18 = VAR_23 + VAR_28;
  } else if (VAR_21 == VAR_3) {
    *VAR_18 = VAR_23;
  } else if (VAR_21 == VAR_1) {
    *VAR_18 = VAR_23;
    *VAR_19 = *VAR_18;
  }
  return VAR_13;
}
