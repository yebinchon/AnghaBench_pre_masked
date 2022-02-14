
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tFilePage ;
typedef size_t int32_t ;
struct TYPE_6__ {int nAlloc; int * result; TYPE_1__* resultInfo; } ;
struct TYPE_5__ {int bufLen; } ;
typedef TYPE_1__ SResultInfo ;
typedef TYPE_2__ SOutputRes ;


 int FUNC_0 (int ,int ,size_t) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(SOutputRes *VAR_0, int32_t VAR_1) {
  if (VAR_0 == ((void*)0)) {
    return;
  }

  for (int32_t VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
    SResultInfo *VAR_3 = &VAR_0->resultInfo[VAR_2];
    int32_t VAR_4 = sizeof(tFilePage) + VAR_3->bufLen * VAR_0->nAlloc;

    FUNC_0(VAR_0->result[VAR_2], 0, (size_t)VAR_4);
    FUNC_1(VAR_3);
  }
}
