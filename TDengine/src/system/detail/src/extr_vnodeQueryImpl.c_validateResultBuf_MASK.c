
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ data; } ;
typedef TYPE_2__ tFilePage ;
typedef size_t int32_t ;
struct TYPE_16__ {int numOfPages; int * pageList; } ;
struct TYPE_13__ {TYPE_1__* pCtx; TYPE_4__* pQuery; } ;
struct TYPE_15__ {TYPE_3__ runtimeEnv; } ;
struct TYPE_14__ {size_t numOfOutputCols; } ;
struct TYPE_11__ {scalar_t__ aOutputBuf; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;
typedef TYPE_4__ SQuery ;
typedef TYPE_5__ SMeterQuerySupportObj ;
typedef TYPE_6__ SMeterQueryInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_2(SMeterQuerySupportObj *VAR_1, SMeterQueryInfo *VAR_2) {
  SQueryRuntimeEnv *VAR_3 = &VAR_1->runtimeEnv;
  SQuery * VAR_4 = VAR_1->runtimeEnv.pQuery;

  tFilePage *VAR_5 = FUNC_1(VAR_1, VAR_2->pageList[VAR_2->numOfPages - 1]);
  for (int32_t VAR_6 = 0; VAR_6 < VAR_4->numOfOutputCols; ++VAR_6) {
    FUNC_0(VAR_3->pCtx[VAR_6].aOutputBuf - VAR_5->data < VAR_0);
  }
}
