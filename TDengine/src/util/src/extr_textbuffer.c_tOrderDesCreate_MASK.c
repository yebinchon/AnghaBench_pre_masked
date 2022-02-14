
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numOfOrderedCols; int* pData; } ;
struct TYPE_5__ {int tsOrder; TYPE_1__ orderIdx; int * pSchema; } ;
typedef TYPE_2__ tOrderDescriptor ;
typedef int tColModel ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int) ;

tOrderDescriptor *FUNC_1(int32_t *VAR_0, int32_t VAR_1, tColModel *VAR_2,
                                  int32_t VAR_3) {
  tOrderDescriptor *VAR_4 = (tOrderDescriptor *)FUNC_0(sizeof(tOrderDescriptor) + sizeof(int32_t) * VAR_1);
  if (VAR_4 == ((void*)0)) {
    return ((void*)0);
  }

  VAR_4->pSchema = VAR_2;
  VAR_4->tsOrder = VAR_3;

  VAR_4->orderIdx.numOfOrderedCols = VAR_1;
  for (int32_t VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
    VAR_4->orderIdx.pData[VAR_5] = VAR_0[VAR_5];
  }

  return VAR_4;
}
