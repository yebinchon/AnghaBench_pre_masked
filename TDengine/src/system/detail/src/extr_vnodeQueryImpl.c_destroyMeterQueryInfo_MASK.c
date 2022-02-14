
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_4__ {struct TYPE_4__* resultInfo; int interResultBuf; struct TYPE_4__* pageList; } ;
typedef TYPE_1__ SMeterQueryInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(SMeterQueryInfo *VAR_0, int32_t VAR_1) {
  if (VAR_0 == ((void*)0)) {
    return;
  }

  FUNC_0(VAR_0->pageList);
  for (int32_t VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
    FUNC_1(VAR_0->resultInfo[VAR_2].interResultBuf);
  }

  FUNC_0(VAR_0->resultInfo);
  FUNC_0(VAR_0);
}
