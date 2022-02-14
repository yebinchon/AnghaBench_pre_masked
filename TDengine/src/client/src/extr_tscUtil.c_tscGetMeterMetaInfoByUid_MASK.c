
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t int32_t ;
struct TYPE_8__ {size_t numOfTables; TYPE_2__** pMeterInfo; } ;
struct TYPE_7__ {TYPE_1__* pMeterMeta; } ;
struct TYPE_6__ {scalar_t__ uid; } ;
typedef TYPE_3__ SSqlCmd ;
typedef int SMeterMetaInfo ;


 int * FUNC_0 (TYPE_3__*,size_t) ;

SMeterMetaInfo* FUNC_1(SSqlCmd* VAR_0, uint64_t VAR_1, int32_t* VAR_2) {
  int32_t VAR_3 = -1;
  for (int32_t VAR_4 = 0; VAR_4 < VAR_0->numOfTables; ++VAR_4) {
    if (VAR_0->pMeterInfo[VAR_4]->pMeterMeta->uid == VAR_1) {
      VAR_3 = VAR_4;
      break;
    }
  }

  if (VAR_2 != ((void*)0)) {
    *VAR_2 = VAR_3;
  }

  return FUNC_0(VAR_0, VAR_3);
}
