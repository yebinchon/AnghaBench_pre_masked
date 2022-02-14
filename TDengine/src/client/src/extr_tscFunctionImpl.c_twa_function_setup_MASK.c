
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int inputType; } ;
struct TYPE_9__ {TYPE_1__* interResultBuf; } ;
struct TYPE_8__ {int type; int lastKey; } ;
typedef TYPE_1__ STwaInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static bool FUNC_2(SQLFunctionCtx *VAR_1) {
  if (!FUNC_1(VAR_1)) {
    return 0;
  }

  SResultInfo *VAR_2 = FUNC_0(VAR_1);
  STwaInfo * VAR_3 = VAR_2->interResultBuf;

  VAR_3->lastKey = VAR_0;
  VAR_3->type = VAR_1->inputType;

  return 1;
}
