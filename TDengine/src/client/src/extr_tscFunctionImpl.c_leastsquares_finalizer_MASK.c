
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {double num; double** mat; } ;
struct TYPE_9__ {int aOutputBuf; int outputBytes; int outputType; } ;
struct TYPE_8__ {TYPE_3__* interResultBuf; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SQLFunctionCtx ;
typedef TYPE_3__ SLeastsquareInfo ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,char*,double,double) ;

__attribute__((used)) static void FUNC_4(SQLFunctionCtx *VAR_0) {

  SResultInfo * VAR_1 = FUNC_0(VAR_0);
  SLeastsquareInfo *VAR_2 = VAR_1->interResultBuf;

  if (VAR_2->num == 0) {
    FUNC_2(VAR_0->aOutputBuf, VAR_0->outputType, VAR_0->outputBytes);
    return;
  }

  double(*VAR_3)[3] = VAR_2->mat;

  VAR_3[1][1] = VAR_2->num;
  VAR_3[1][0] = VAR_3[0][1];

  VAR_3[0][0] -= VAR_3[1][0] * (VAR_3[0][1] / VAR_3[1][1]);
  VAR_3[0][2] -= VAR_3[1][2] * (VAR_3[0][1] / VAR_3[1][1]);
  VAR_3[0][1] = 0;
  VAR_3[1][2] -= VAR_3[0][2] * (VAR_3[1][0] / VAR_3[0][0]);
  VAR_3[1][0] = 0;
  VAR_3[0][2] /= VAR_3[0][0];

  VAR_3[1][2] /= VAR_3[1][1];

  FUNC_3(VAR_0->aOutputBuf, "(%lf, %lf)", VAR_3[0][2], VAR_3[1][2]);
  FUNC_1(FUNC_0(VAR_0));
}
