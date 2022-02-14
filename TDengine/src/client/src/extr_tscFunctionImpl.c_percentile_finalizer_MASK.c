
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ numOfElems; int pOrderDesc; } ;
typedef TYPE_2__ tMemBucket ;
struct TYPE_16__ {TYPE_2__* pMemBucket; } ;
struct TYPE_15__ {int outputBytes; int outputType; scalar_t__ aOutputBuf; TYPE_1__* param; } ;
struct TYPE_14__ {scalar_t__ interResultBuf; } ;
struct TYPE_12__ {scalar_t__ nType; double i64Key; double dKey; } ;
typedef TYPE_3__ SResultInfo ;
typedef TYPE_4__ SQLFunctionCtx ;
typedef TYPE_5__ SPercentileInfo ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 double FUNC_1 (TYPE_2__*,double) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(SQLFunctionCtx *VAR_1) {
  double VAR_2 = VAR_1->param[0].nType == VAR_0 ? VAR_1->param[0].i64Key : VAR_1->param[0].dKey;

  SResultInfo *VAR_3 = FUNC_0(VAR_1);
  tMemBucket * VAR_4 = ((SPercentileInfo *)VAR_3->interResultBuf)->pMemBucket;

  if (VAR_4->numOfElems > 0) {
    *(double *)VAR_1->aOutputBuf = FUNC_1(VAR_4, VAR_2);
  } else {
    FUNC_3(VAR_1->aOutputBuf, VAR_1->outputType, VAR_1->outputBytes);
  }

  FUNC_5(VAR_4->pOrderDesc);
  FUNC_4(VAR_4);

  FUNC_2(FUNC_0(VAR_1));
}
