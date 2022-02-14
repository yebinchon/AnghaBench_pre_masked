
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {int Me; int HubList; } ;
struct TYPE_11__ {int Name; } ;
struct TYPE_10__ {int Name; } ;
typedef int SERVER ;
typedef int PACK ;
typedef TYPE_1__ HUB_LIST ;
typedef TYPE_2__ HUB ;
typedef TYPE_3__ FARM_MEMBER ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,char*,int ) ;
 int * FUNC_8 (TYPE_3__*,int *,char*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(SERVER *VAR_0, FARM_MEMBER *VAR_1, HUB *VAR_2)
{
 PACK *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->Me == 0)
 {
  VAR_3 = FUNC_6();

  FUNC_7(VAR_3, "HubName", VAR_2->Name);

  VAR_3 = FUNC_8(VAR_1, VAR_3, "deletehub");
  FUNC_2(VAR_3);
 }

 FUNC_5(VAR_1->HubList);
 {
  for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_1->HubList);VAR_4++)
  {
   HUB_LIST *VAR_5 = FUNC_3(VAR_1->HubList, VAR_4);
   if (FUNC_9(VAR_5->Name, VAR_2->Name) == 0)
   {
    FUNC_1(VAR_5);
    FUNC_0(VAR_1->HubList, VAR_5);
   }
  }
 }
 FUNC_10(VAR_1->HubList);
}
