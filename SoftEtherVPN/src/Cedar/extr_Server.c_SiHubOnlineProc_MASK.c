
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_14__ {int * HubList; } ;
struct TYPE_13__ {scalar_t__ Type; int Name; TYPE_1__* Cedar; } ;
struct TYPE_12__ {int Name; } ;
struct TYPE_11__ {scalar_t__ ServerType; int * FarmMemberList; } ;
struct TYPE_10__ {TYPE_2__* Server; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ HUB_LIST ;
typedef TYPE_4__ HUB ;
typedef TYPE_5__ FARM_MEMBER ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(HUB *VAR_2)
{
 SERVER *VAR_3;
 UINT VAR_4;

 if (VAR_2 == ((void*)0) || VAR_2->Cedar->Server == ((void*)0) || VAR_2->Cedar->Server->ServerType != VAR_1)
 {

  return;
 }

 VAR_3 = VAR_2->Cedar->Server;

 if (VAR_3->FarmMemberList == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_3->FarmMemberList);
 {
  if (VAR_2->Type == VAR_0)
  {


   for (VAR_4 = 0;VAR_4 < FUNC_1(VAR_3->FarmMemberList);VAR_4++)
   {
    UINT VAR_5;
    bool VAR_6 = 0;
    FARM_MEMBER *VAR_7 = FUNC_0(VAR_3->FarmMemberList, VAR_4);

    FUNC_2(VAR_7->HubList);
    {
     for (VAR_5 = 0;VAR_5 < FUNC_1(VAR_7->HubList);VAR_5++)
     {
      HUB_LIST *VAR_8 = FUNC_0(VAR_7->HubList, VAR_5);
      if (FUNC_4(VAR_8->Name, VAR_2->Name) == 0)
      {
       VAR_6 = 1;
      }
     }
    }
    FUNC_5(VAR_7->HubList);

    if (VAR_6 == 0)
    {
     FUNC_3(VAR_3, VAR_7, VAR_2);
    }
   }
  }
 }
 FUNC_5(VAR_3->FarmMemberList);
}
