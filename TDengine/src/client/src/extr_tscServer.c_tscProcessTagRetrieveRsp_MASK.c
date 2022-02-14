
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_11__ {scalar_t__ functionId; } ;
struct TYPE_10__ {TYPE_1__* pMetricMeta; } ;
struct TYPE_9__ {int cmd; } ;
struct TYPE_8__ {int numOfMeters; } ;
typedef TYPE_2__ SSqlObj ;
typedef int SSqlCmd ;
typedef TYPE_3__ SMeterMetaInfo ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_4__* FUNC_2 (int *,int ) ;

int FUNC_3(SSqlObj *VAR_1) {
  SSqlCmd * VAR_2 = &VAR_1->cmd;
  SMeterMetaInfo *VAR_3 = FUNC_0(VAR_2, 0);

  int32_t VAR_4 = 0;
  if (FUNC_2(VAR_2, 0)->functionId == VAR_0) {
    VAR_4 = VAR_3->pMetricMeta->numOfMeters;
  } else {
    VAR_4 = 1;
  }
  return FUNC_1(VAR_1, VAR_4);
}
