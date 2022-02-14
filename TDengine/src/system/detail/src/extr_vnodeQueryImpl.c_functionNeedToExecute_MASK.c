
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ complete; } ;
typedef TYPE_1__ SResultInfo ;
typedef int SQueryRuntimeEnv ;
typedef int SQLFunctionCtx ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static bool FUNC_2(SQueryRuntimeEnv *VAR_8, SQLFunctionCtx *VAR_9, int32_t VAR_10) {
  SResultInfo *VAR_11 = FUNC_0(VAR_9);

  if (VAR_11->complete || VAR_10 == VAR_5 || VAR_10 == VAR_7) {
    return 0;
  }

  if (!FUNC_1(VAR_8) &&
      !(VAR_10 == VAR_3 || VAR_10 == VAR_1 || VAR_10 == VAR_0 ||
        VAR_10 == VAR_2 || VAR_10 == VAR_4 || VAR_10 == VAR_6)) {
    return 0;
  }

  return 1;
}
