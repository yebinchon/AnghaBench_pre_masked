
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int SessionList; } ;
struct TYPE_6__ {scalar_t__ UniqueId; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ HUB ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

SESSION *FUNC_2(HUB *VAR_0, UINT VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->SessionList);VAR_2++)
 {
  SESSION *VAR_3 = FUNC_0(VAR_0->SessionList, VAR_2);

  if (VAR_3->UniqueId == VAR_1)
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
