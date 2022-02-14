
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_14__ {int Me; int HubList; } ;
struct TYPE_13__ {scalar_t__ Type; int Name; } ;
struct TYPE_12__ {int DynamicHub; int Name; TYPE_3__* FarmMember; } ;
typedef int SERVER ;
typedef int PACK ;
typedef TYPE_1__ HUB_LIST ;
typedef TYPE_2__ HUB ;
typedef TYPE_3__ FARM_MEMBER ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int * FUNC_7 (TYPE_3__*,int *,char*) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (int) ;

void FUNC_13(SERVER *VAR_1, FARM_MEMBER *VAR_2, HUB *VAR_3)
{
 PACK *VAR_4;
 HUB_LIST *VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->Me == 0)
 {
  VAR_4 = FUNC_6();

  FUNC_8(VAR_4, VAR_3);

  VAR_4 = FUNC_7(VAR_2, VAR_4, "createhub");
  FUNC_2(VAR_4);
 }

 VAR_5 = FUNC_12(sizeof(HUB_LIST));
 VAR_5->DynamicHub = (VAR_3->Type == VAR_0 ? 1 : 0);
 FUNC_10(VAR_5->Name, sizeof(VAR_5->Name), VAR_3->Name);
 VAR_5->FarmMember = VAR_2;

 FUNC_5(VAR_2->HubList);
 {
  bool VAR_6 = 0;
  UINT VAR_7;
  for (VAR_7 = 0;VAR_7 < FUNC_4(VAR_2->HubList);VAR_7++)
  {
   HUB_LIST *VAR_8 = FUNC_3(VAR_2->HubList, VAR_7);
   if (FUNC_9(VAR_8->Name, VAR_5->Name) == 0)
   {
    VAR_6 = 1;
   }
  }
  if (VAR_6 == 0)
  {
   FUNC_0(VAR_2->HubList, VAR_5);
  }
  else
  {
   FUNC_1(VAR_5);
  }
 }
 FUNC_11(VAR_2->HubList);
}
