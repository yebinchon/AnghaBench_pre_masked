
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int SessionList; } ;
struct TYPE_6__ {int ref; int Name; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ HUB ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

SESSION *FUNC_6(HUB *VAR_0, char *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(VAR_0->SessionList);
 {
  UINT VAR_2;
  for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_0->SessionList);VAR_2++)
  {
   SESSION *VAR_3 = FUNC_1(VAR_0->SessionList, VAR_2);
   if (FUNC_4(VAR_3->Name, VAR_1) == 0)
   {

    FUNC_0(VAR_3->ref);
    FUNC_5(VAR_0->SessionList);
    return VAR_3;
   }
  }
 }
 FUNC_5(VAR_0->SessionList);

 return ((void*)0);
}
