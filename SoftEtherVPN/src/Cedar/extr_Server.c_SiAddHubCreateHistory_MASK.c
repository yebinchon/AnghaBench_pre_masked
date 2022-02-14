
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int HubCreateHistoryList; } ;
struct TYPE_8__ {int CreatedTime; int HubName; } ;
typedef TYPE_1__ SERVER_HUB_CREATE_HISTORY ;
typedef TYPE_2__ SERVER ;


 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (int) ;

void FUNC_10(SERVER *VAR_0, char *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0->HubCreateHistoryList);
 {
  SERVER_HUB_CREATE_HISTORY *VAR_3 = ((void*)0);
  for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_0->HubCreateHistoryList);VAR_2++)
  {
   SERVER_HUB_CREATE_HISTORY *VAR_4 = FUNC_1(VAR_0->HubCreateHistoryList, VAR_2);

   if (FUNC_5(VAR_4->HubName, VAR_1) == 0)
   {
    VAR_3 = VAR_4;
    break;
   }
  }

  if (VAR_3 == ((void*)0))
  {
   VAR_3 = FUNC_9(sizeof(SERVER_HUB_CREATE_HISTORY));
   FUNC_6(VAR_3->HubName, sizeof(VAR_3->HubName), VAR_1);

   FUNC_0(VAR_0->HubCreateHistoryList, VAR_3);
  }

  VAR_3->CreatedTime = FUNC_7();
 }
 FUNC_8(VAR_0->HubCreateHistoryList);

 FUNC_4(VAR_0);
}
