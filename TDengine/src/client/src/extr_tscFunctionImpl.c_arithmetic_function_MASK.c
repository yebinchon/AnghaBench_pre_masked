
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int numOfRes; } ;
struct TYPE_14__ {TYPE_2__* pExpr; } ;
struct TYPE_13__ {int size; int aOutputBuf; int outputBytes; int order; TYPE_3__* param; } ;
struct TYPE_12__ {scalar_t__ pz; } ;
struct TYPE_10__ {int pBinExpr; } ;
struct TYPE_11__ {TYPE_1__ pBinExprInfo; } ;
typedef TYPE_4__ SQLFunctionCtx ;
typedef TYPE_5__ SArithmeticSupport ;


 int FUNC_0 (int ) ;
 TYPE_8__* FUNC_1 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int,int,TYPE_5__*,int ,int ) ;

__attribute__((used)) static void FUNC_3(SQLFunctionCtx *VAR_1) {
  FUNC_1(VAR_1)->numOfRes += VAR_1->size;
  SArithmeticSupport *VAR_2 = (SArithmeticSupport *)VAR_1->param[0].pz;

  FUNC_2(VAR_2->pExpr->pBinExprInfo.pBinExpr, VAR_1->size, VAR_1->aOutputBuf, VAR_2, VAR_1->order,
                             VAR_0);

  VAR_1->aOutputBuf += VAR_1->outputBytes * VAR_1->size * FUNC_0(VAR_1->order);
}
