
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ CurrentBus; scalar_t__ CurrentTargetID; } ;
typedef TYPE_1__ FCDevicePage0_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 FCDevicePage0_t **VAR_2 = (FCDevicePage0_t **)VAR_0;
 FCDevicePage0_t **VAR_3 = (FCDevicePage0_t **)VAR_1;

 if ((*VAR_2)->CurrentBus == (*VAR_3)->CurrentBus) {
  if ((*VAR_2)->CurrentTargetID == (*VAR_3)->CurrentTargetID)
   return 0;
  if ((*VAR_2)->CurrentTargetID < (*VAR_3)->CurrentTargetID)
   return -1;
  return 1;
 }
 if ((*VAR_2)->CurrentBus < (*VAR_3)->CurrentBus)
  return -1;
 return 1;
}
