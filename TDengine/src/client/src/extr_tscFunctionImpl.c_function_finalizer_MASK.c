
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int outputBytes; int outputType; int aOutputBuf; } ;
struct TYPE_7__ {scalar_t__ hasResult; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(SQLFunctionCtx *VAR_1) {
  SResultInfo *VAR_2 = FUNC_0(VAR_1);

  if (VAR_2->hasResult != VAR_0) {
    FUNC_1("no result generated, result is set to NULL");
    FUNC_3(VAR_1->aOutputBuf, VAR_1->outputType, VAR_1->outputBytes);
  }

  FUNC_2(FUNC_0(VAR_1));
}
