
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numOfCols; int maxCapacity; TYPE_2__* pFields; scalar_t__* colOffset; } ;
typedef TYPE_1__ tColModel ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;
struct TYPE_8__ {scalar_t__ bytes; } ;
typedef TYPE_2__ SSchema ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;

tColModel *FUNC_2(SSchema *VAR_0, int32_t VAR_1, int32_t VAR_2) {
  tColModel *VAR_3 =
      (tColModel *)FUNC_0(1, sizeof(tColModel) + VAR_1 * sizeof(SSchema) + VAR_1 * sizeof(int16_t));
  if (VAR_3 == ((void*)0)) {
    return ((void*)0);
  }

  VAR_3->pFields = (SSchema *)(&VAR_3[1]);
  FUNC_1(VAR_3->pFields, VAR_0, sizeof(SSchema) * VAR_1);

  VAR_3->colOffset = (int16_t *)(&VAR_3->pFields[VAR_1]);
  VAR_3->colOffset[0] = 0;
  for (int32_t VAR_4 = 1; VAR_4 < VAR_1; ++VAR_4) {
    VAR_3->colOffset[VAR_4] = VAR_3->colOffset[VAR_4 - 1] + VAR_3->pFields[VAR_4 - 1].bytes;
  }

  VAR_3->numOfCols = VAR_1;
  VAR_3->maxCapacity = VAR_2;

  return VAR_3;
}
