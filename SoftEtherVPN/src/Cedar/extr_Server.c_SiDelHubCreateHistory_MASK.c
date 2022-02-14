
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int HubCreateHistoryList; } ;
struct TYPE_8__ {int HubName; } ;
typedef TYPE_1__ SERVER_HUB_CREATE_HISTORY ;
typedef TYPE_2__ SERVER ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;

void FUNC_8(SERVER *VAR_0, char *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->HubCreateHistoryList);
 {
  SERVER_HUB_CREATE_HISTORY *VAR_3 = ((void*)0);
  for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0->HubCreateHistoryList);VAR_2++)
  {
   SERVER_HUB_CREATE_HISTORY *VAR_4 = FUNC_2(VAR_0->HubCreateHistoryList, VAR_2);

   if (FUNC_6(VAR_4->HubName, VAR_1) == 0)
   {
    FUNC_0(VAR_0->HubCreateHistoryList, VAR_4);
    FUNC_1(VAR_4);
    break;
   }
  }
 }
 FUNC_7(VAR_0->HubCreateHistoryList);

 FUNC_5(VAR_0);
}
