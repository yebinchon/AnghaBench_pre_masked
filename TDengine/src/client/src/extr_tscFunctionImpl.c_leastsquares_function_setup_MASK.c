
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int startVal; } ;
struct TYPE_11__ {TYPE_1__* param; } ;
struct TYPE_10__ {TYPE_4__* interResultBuf; } ;
struct TYPE_9__ {int dKey; } ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;
typedef TYPE_4__ SLeastsquareInfo ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static bool FUNC_2(SQLFunctionCtx *VAR_0) {
  if (!FUNC_1(VAR_0)) {
    return 0;
  }

  SResultInfo * VAR_1 = FUNC_0(VAR_0);
  SLeastsquareInfo *VAR_2 = VAR_1->interResultBuf;


  VAR_2->startVal = VAR_0->param[0].dKey;
  return 1;
}
