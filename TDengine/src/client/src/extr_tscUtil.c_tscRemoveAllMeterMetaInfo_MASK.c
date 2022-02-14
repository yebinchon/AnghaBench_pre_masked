
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int pMeterInfo; int numOfTables; } ;
typedef TYPE_1__ SSqlCmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,char*,int ) ;

void FUNC_4(SSqlCmd* VAR_2, bool VAR_3) {
  int64_t VAR_4 = FUNC_0(VAR_0, VAR_1);

  FUNC_3("%p deref the metric/meter meta in cache, numOfTables:%d", ((char*)VAR_2 - VAR_4), VAR_2->numOfTables);

  while (VAR_2->numOfTables > 0) {
    FUNC_2(VAR_2, VAR_2->numOfTables - 1, VAR_3);
  }

  FUNC_1(VAR_2->pMeterInfo);
}
