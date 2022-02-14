
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int n; int z; int type; } ;
struct TYPE_10__ {void* nType; int i64Key; } ;
struct TYPE_8__ {void* nSQLOptr; TYPE_2__ colInfo; TYPE_3__ val; } ;
typedef TYPE_1__ tSQLExpr ;
typedef scalar_t__ int32_t ;
typedef TYPE_2__ SSQLToken ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

tSQLExpr *FUNC_7(SSQLToken *VAR_11, int32_t VAR_12) {
  tSQLExpr *VAR_13 = FUNC_2(1, sizeof(tSQLExpr));

  if (VAR_12 == VAR_4 || VAR_12 == VAR_6 || VAR_12 == VAR_2 || VAR_12 == VAR_1) {
    FUNC_6(VAR_11->type);

    FUNC_4(&VAR_13->val, VAR_11);
    VAR_13->nSQLOptr = VAR_12;
  } else if (VAR_12 == VAR_5) {

    VAR_13->val.i64Key = FUNC_5(VAR_10);
    VAR_13->val.nType = VAR_9;
    VAR_13->nSQLOptr = VAR_7;
  } else if (VAR_12 == VAR_8) {
    int32_t VAR_14 = FUNC_3(VAR_11->z, VAR_11->n, &VAR_13->val.i64Key);
    FUNC_0(VAR_14);

    VAR_13->val.nType = VAR_9;
    VAR_13->nSQLOptr = VAR_7;
  } else {
    FUNC_1(VAR_12 == VAR_3 || VAR_12 == VAR_0);
    if (VAR_11 != ((void*)0)) {
      VAR_13->colInfo = *VAR_11;
    }

    VAR_13->nSQLOptr = VAR_12;
  }
  return VAR_13;
}
