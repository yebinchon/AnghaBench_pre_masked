
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ interResultBuf; } ;
struct TYPE_9__ {scalar_t__ aOutputBuf; int outputBytes; int outputType; } ;
struct TYPE_8__ {int num; int res; } ;
typedef TYPE_1__ SStddevInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 double FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_0) {
  SStddevInfo *VAR_1 = (SStddevInfo *)FUNC_0(VAR_0)->interResultBuf;

  if (VAR_1->num <= 0) {
    FUNC_3(VAR_0->aOutputBuf, VAR_0->outputType, VAR_0->outputBytes);
  } else {
    double *VAR_2 = (double *)VAR_0->aOutputBuf;
    *VAR_2 = FUNC_4(VAR_1->res / VAR_1->num);
    FUNC_1(VAR_0, 1, 1);
  }

  FUNC_2(FUNC_0(VAR_0));
}
