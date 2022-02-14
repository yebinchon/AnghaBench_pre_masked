
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_5__ {size_t nSize; struct TYPE_5__* pData; } ;
typedef TYPE_1__ SDataBlockList ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__) ;

void* FUNC_2(SDataBlockList* VAR_0) {
  if (VAR_0 == ((void*)0)) {
    return ((void*)0);
  }

  for (int32_t VAR_1 = 0; VAR_1 < VAR_0->nSize; VAR_1++) {
    FUNC_1(VAR_0->pData[VAR_1]);
  }

  FUNC_0(VAR_0->pData);
  FUNC_0(VAR_0);

  return ((void*)0);
}
