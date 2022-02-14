
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name; int pMetricMeta; scalar_t__ pMeterMeta; } ;
struct TYPE_7__ {int cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SMeterMetaInfo ;
typedef int SMeterMeta ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,void**,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,TYPE_1__*,int ) ;

int FUNC_6(SSqlObj *VAR_1) {
  SMeterMetaInfo *VAR_2 = FUNC_4(&VAR_1->cmd, 0);

  SMeterMeta *VAR_3 = FUNC_2(VAR_0, VAR_2->name);
  if (VAR_3 == ((void*)0)) {
    return 0;
  }

  FUNC_5("%p force release metermeta in cache after alter-table: %s", VAR_1, VAR_2->name);
  FUNC_3(VAR_0, (void **)&VAR_3, 1);

  if (VAR_2->pMeterMeta) {
    bool VAR_4 = FUNC_0(VAR_2);

    FUNC_3(VAR_0, (void **)&(VAR_2->pMeterMeta), 1);
    FUNC_3(VAR_0, (void **)&(VAR_2->pMetricMeta), 1);

    if (VAR_4) {
      FUNC_5("%p reset query cache since table:%s is stable", VAR_1, VAR_2->name);
      FUNC_1(VAR_0);
    }
  }

  return 0;
}
