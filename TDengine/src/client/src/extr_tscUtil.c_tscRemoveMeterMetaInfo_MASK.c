
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_4__ {size_t numOfTables; int * pMeterInfo; } ;
typedef TYPE_1__ SSqlCmd ;
typedef int SMeterMetaInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,size_t) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (TYPE_1__*,size_t) ;

void FUNC_4(SSqlCmd* VAR_0, int32_t VAR_1, bool VAR_2) {
  if (VAR_1 < 0 || VAR_1 >= VAR_0->numOfTables) {
    return;
  }

  SMeterMetaInfo* VAR_3 = FUNC_3(VAR_0, VAR_1);

  FUNC_2(VAR_3, VAR_2);
  FUNC_0(VAR_3);

  int32_t VAR_4 = VAR_0->numOfTables - VAR_1 - 1;
  if (VAR_4 > 0) {
    FUNC_1(&VAR_0->pMeterInfo[VAR_1], &VAR_0->pMeterInfo[VAR_1 + 1], VAR_4 * sizeof(void*));
  }

  VAR_0->numOfTables -= 1;
}
