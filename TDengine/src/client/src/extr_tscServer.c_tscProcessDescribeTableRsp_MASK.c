
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_9__ {TYPE_1__* pMeterMeta; } ;
struct TYPE_8__ {int cmd; } ;
struct TYPE_7__ {scalar_t__ numOfTags; scalar_t__ numOfColumns; } ;
typedef TYPE_2__ SSqlObj ;
typedef int SSqlCmd ;
typedef TYPE_3__ SMeterMetaInfo ;


 TYPE_3__* FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

int FUNC_2(SSqlObj *VAR_0) {
  SSqlCmd * VAR_1 = &VAR_0->cmd;
  SMeterMetaInfo *VAR_2 = FUNC_0(VAR_1, 0);

  int32_t VAR_3 = VAR_2->pMeterMeta->numOfColumns + VAR_2->pMeterMeta->numOfTags;

  return FUNC_1(VAR_0, VAR_3);
}
