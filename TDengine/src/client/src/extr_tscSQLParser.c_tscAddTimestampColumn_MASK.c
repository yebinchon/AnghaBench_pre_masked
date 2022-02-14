
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_17__ {scalar_t__ member_0; scalar_t__ member_1; } ;
struct TYPE_14__ {scalar_t__ numOfExprs; } ;
struct TYPE_16__ {TYPE_2__ exprsInfo; } ;
struct TYPE_13__ {scalar_t__ colId; int flag; } ;
struct TYPE_15__ {scalar_t__ functionId; TYPE_1__ colInfo; } ;
typedef TYPE_3__ SSqlExpr ;
typedef TYPE_4__ SSqlCmd ;
typedef int SColumnList ;
typedef TYPE_5__ SColumnIndex ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_4__*,int ,int *,int ,int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int ,scalar_t__,TYPE_5__*,int ,int ,int ) ;

void FUNC_4(SSqlCmd* VAR_4, int16_t VAR_5, int16_t VAR_6) {

  SSqlExpr* VAR_7 = ((void*)0);
  if (VAR_4->exprsInfo.numOfExprs > 0) {
    VAR_7 = FUNC_2(VAR_4, 0);
  }

  if (VAR_7 == ((void*)0) || VAR_7->colInfo.colId != VAR_0 || VAR_7->functionId != VAR_5) {
    SColumnIndex VAR_8 = {VAR_6, VAR_0};

    VAR_7 = FUNC_3(VAR_4, 0, VAR_5, &VAR_8, VAR_2, VAR_3, VAR_3);
    VAR_7->colInfo.flag = VAR_1;


    SColumnList VAR_9 = FUNC_0(1, VAR_6, VAR_0);

    FUNC_1(VAR_4, 0, &VAR_9, VAR_3, VAR_2, "ts");
  }
}
