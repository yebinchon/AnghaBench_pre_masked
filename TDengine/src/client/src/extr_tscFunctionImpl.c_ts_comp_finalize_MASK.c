
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int aOutputBuf; } ;
struct TYPE_13__ {TYPE_1__* interResultBuf; } ;
struct TYPE_12__ {int path; } ;
struct TYPE_11__ {TYPE_2__* pTSBuf; } ;
typedef TYPE_1__ STSCompInfo ;
typedef TYPE_2__ STSBuf ;
typedef TYPE_3__ SResultInfo ;
typedef TYPE_4__ SQLFunctionCtx ;


 TYPE_3__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(SQLFunctionCtx *VAR_0) {
  SResultInfo *VAR_1 = FUNC_0(VAR_0);

  STSCompInfo *VAR_2 = VAR_1->interResultBuf;
  STSBuf * VAR_3 = VAR_2->pTSBuf;

  FUNC_4(VAR_3);
  FUNC_2(VAR_0->aOutputBuf, VAR_3->path);

  FUNC_3(VAR_3);
  FUNC_1(FUNC_0(VAR_0));
}
