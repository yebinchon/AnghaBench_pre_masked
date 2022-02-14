
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_3__ {size_t numOfTables; int ** pMeterInfo; } ;
typedef TYPE_1__ SSqlCmd ;
typedef int SMeterMetaInfo ;



SMeterMetaInfo* FUNC_0(SSqlCmd* VAR_0, int32_t VAR_1) {
  if (VAR_0 == ((void*)0) || VAR_1 >= VAR_0->numOfTables || VAR_1 < 0) {
    return ((void*)0);
  }

  return VAR_0->pMeterInfo[VAR_1];
}
