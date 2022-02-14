
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ numOfFilterCols; int checkBufferInLoop; scalar_t__ pointsOffset; } ;
struct TYPE_6__ {int * pTSBuf; TYPE_2__* pQuery; } ;
typedef TYPE_1__ SQueryRuntimeEnv ;
typedef TYPE_2__ SQuery ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int32_t FUNC_2(SQueryRuntimeEnv *VAR_0, int32_t VAR_1) {
  SQuery *VAR_2 = VAR_0->pQuery;

  if (FUNC_1(VAR_2) || FUNC_0(VAR_2) || VAR_2->numOfFilterCols > 0 || VAR_0->pTSBuf != ((void*)0)) {
    return VAR_1;
  }


  if ((VAR_2->checkBufferInLoop == 1) && (VAR_2->pointsOffset <= VAR_1)) {
    VAR_1 = VAR_2->pointsOffset;
  }

  return VAR_1;
}
