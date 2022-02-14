
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int numOfTags; int numOfColumns; } ;
struct TYPE_8__ {TYPE_5__* pMeterMeta; } ;
struct TYPE_7__ {int colId; } ;
typedef int SSqlCmd ;
typedef TYPE_1__ SSchema ;
typedef TYPE_2__ SMeterMetaInfo ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_5__*) ;
 TYPE_2__* FUNC_2 (int *,int ) ;

bool FUNC_3(SSqlCmd* VAR_0, int32_t VAR_1) {
  SMeterMetaInfo* VAR_2 = FUNC_2(VAR_0, 0);
  if (VAR_2->pMeterMeta == ((void*)0)) {
    return 0;
  }

  if (VAR_1 == -1 && FUNC_0(VAR_2)) {
    return 1;
  }

  SSchema* VAR_3 = FUNC_1(VAR_2->pMeterMeta);
  int32_t VAR_4 = VAR_2->pMeterMeta->numOfTags + VAR_2->pMeterMeta->numOfColumns;

  for (int32_t VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
    if (VAR_3[VAR_5].colId == VAR_1) {
      return 1;
    }
  }

  return 0;
}
