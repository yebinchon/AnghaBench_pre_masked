
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_5__ {int* pVisibleCols; scalar_t__ numOfOutputCols; int * pFields; } ;
typedef int TAOS_FIELD ;
typedef TYPE_1__ SFieldInfo ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int *,int ,char*,int ) ;

void FUNC_3(SFieldInfo* VAR_0, int32_t VAR_1, int8_t VAR_2, char* VAR_3, int16_t VAR_4) {
  FUNC_0(VAR_0, VAR_0->numOfOutputCols + 1);
  FUNC_1(VAR_0, VAR_1);

  TAOS_FIELD* VAR_5 = &VAR_0->pFields[VAR_1];
  FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4);

  VAR_0->pVisibleCols[VAR_1] = 1;
  VAR_0->numOfOutputCols++;
}
