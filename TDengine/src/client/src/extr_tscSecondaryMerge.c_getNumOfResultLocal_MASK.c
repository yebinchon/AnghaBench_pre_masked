
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_10__ {scalar_t__ numOfRes; } ;
struct TYPE_9__ {scalar_t__ functionId; } ;
struct TYPE_7__ {scalar_t__ numOfExprs; } ;
struct TYPE_8__ {TYPE_1__ exprsInfo; } ;
typedef TYPE_2__ SSqlCmd ;
typedef int SQLFunctionCtx ;


 TYPE_6__* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int64_t FUNC_2(SSqlCmd *VAR_3, SQLFunctionCtx *VAR_4) {
  int64_t VAR_5 = 0;

  for (int32_t VAR_6 = 0; VAR_6 < VAR_3->exprsInfo.numOfExprs; ++VAR_6) {
    int32_t VAR_7 = FUNC_1(VAR_3, VAR_6)->functionId;





    if (VAR_7 == VAR_2 || VAR_7 == VAR_0 || VAR_7 == VAR_1) {
      continue;
    }

    if (VAR_5 < FUNC_0(&VAR_4[VAR_6])->numOfRes) {
      VAR_5 = FUNC_0(&VAR_4[VAR_6])->numOfRes;
    }
  }
  return VAR_5;
}
