
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {int hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef int SQLFunctionCtx ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(SQLFunctionCtx *VAR_1) {
  int32_t VAR_2 = FUNC_2(VAR_1);

  FUNC_1(VAR_1, VAR_2, 1);
  SResultInfo *VAR_3 = FUNC_0(VAR_1);

  if (VAR_2 > 0) {
    VAR_3->hasResult = VAR_0;
  }
}
