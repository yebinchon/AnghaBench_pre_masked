
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ outputBytes; int aOutputBuf; } ;
struct TYPE_7__ {scalar_t__ initialized; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,size_t) ;

__attribute__((used)) static bool FUNC_3(SQLFunctionCtx *VAR_0) {
  SResultInfo *VAR_1 = FUNC_0(VAR_0);
  if (VAR_1->initialized) {
    return 0;
  }

  FUNC_2(VAR_0->aOutputBuf, 0, (size_t)VAR_0->outputBytes);

  FUNC_1(VAR_1);
  return 1;
}
