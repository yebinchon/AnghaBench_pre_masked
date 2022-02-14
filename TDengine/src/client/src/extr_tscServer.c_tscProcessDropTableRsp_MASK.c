
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pMetricMeta; scalar_t__ pMeterMeta; int name; } ;
struct TYPE_6__ {int cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SMeterMetaInfo ;
typedef int SMeterMeta ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,void**,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,TYPE_1__*,int ) ;

int FUNC_4(SSqlObj *VAR_1) {
  SMeterMetaInfo *VAR_2 = FUNC_2(&VAR_1->cmd, 0);

  SMeterMeta *VAR_3 = FUNC_0(VAR_0, VAR_2->name);
  if (VAR_3 == ((void*)0)) {

    return 0;
  }
  FUNC_3("%p force release metermeta after drop table:%s", VAR_1, VAR_2->name);
  FUNC_1(VAR_0, (void **)&VAR_3, 1);

  if (VAR_2->pMeterMeta) {
    FUNC_1(VAR_0, (void **)&(VAR_2->pMeterMeta), 1);
    FUNC_1(VAR_0, (void **)&(VAR_2->pMetricMeta), 1);
  }

  return 0;
}
