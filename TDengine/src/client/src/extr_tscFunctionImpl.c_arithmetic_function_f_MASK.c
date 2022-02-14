
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_13__ {TYPE_2__* pExpr; int offset; } ;
struct TYPE_12__ {int aOutputBuf; int outputBytes; int order; TYPE_1__* param; } ;
struct TYPE_11__ {int pBinExpr; } ;
struct TYPE_10__ {TYPE_3__ pBinExprInfo; } ;
struct TYPE_9__ {scalar_t__ pz; } ;
typedef TYPE_4__ SQLFunctionCtx ;
typedef TYPE_5__ SArithmeticSupport ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int,TYPE_5__*,int ,int ) ;

__attribute__((used)) static bool FUNC_3(SQLFunctionCtx *VAR_1, int32_t VAR_2) {
  FUNC_1(VAR_1, 1);
  SArithmeticSupport *VAR_3 = (SArithmeticSupport *)VAR_1->param[0].pz;

  VAR_3->offset = VAR_2;
  FUNC_2(VAR_3->pExpr->pBinExprInfo.pBinExpr, 1, VAR_1->aOutputBuf, VAR_3, VAR_1->order,
                             VAR_0);

  VAR_1->aOutputBuf += VAR_1->outputBytes * FUNC_0(VAR_1->order);
  return 1;
}
