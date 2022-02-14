
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ inputType; scalar_t__ aInputElemBuf; scalar_t__ inputBytes; } ;
struct TYPE_8__ {int hasResult; int interResultBuf; } ;
struct TYPE_7__ {int hasResult; } ;
typedef TYPE_1__ STwaInfo ;
typedef TYPE_2__ SResultInfo ;
typedef TYPE_3__ SQLFunctionCtx ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,size_t) ;

void FUNC_3(SQLFunctionCtx *VAR_1) {
  FUNC_1(VAR_1->inputType == VAR_0);
  SResultInfo *VAR_2 = FUNC_0(VAR_1);

  FUNC_2(VAR_2->interResultBuf, VAR_1->aInputElemBuf, (size_t)VAR_1->inputBytes);
  VAR_2->hasResult = ((STwaInfo *)VAR_1->aInputElemBuf)->hasResult;
}
