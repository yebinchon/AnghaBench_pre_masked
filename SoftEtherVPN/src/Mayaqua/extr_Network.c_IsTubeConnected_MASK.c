
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* TubePairData; } ;
struct TYPE_4__ {scalar_t__ IsDisconnected; } ;
typedef TYPE_2__ TUBE ;



bool FUNC_0(TUBE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->TubePairData == ((void*)0))
 {
  return 1;
 }

 if (VAR_0->TubePairData->IsDisconnected)
 {
  return 0;
 }

 return 1;
}
