
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_7__ {int HubCreateHistoryList; } ;
struct TYPE_6__ {int HubName; } ;
typedef TYPE_1__ SERVER_HUB_CREATE_HISTORY ;
typedef TYPE_2__ SERVER ;


 TYPE_1__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;

bool FUNC_6(SERVER *VAR_0, char *VAR_1)
{
 UINT VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_0);

 FUNC_2(VAR_0->HubCreateHistoryList);
 {
  for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->HubCreateHistoryList);VAR_2++)
  {
   SERVER_HUB_CREATE_HISTORY *VAR_4 = FUNC_0(VAR_0->HubCreateHistoryList, VAR_2);

   if (FUNC_4(VAR_4->HubName, VAR_1) == 0)
   {
    VAR_3 = 1;
    break;
   }
  }
 }
 FUNC_5(VAR_0->HubCreateHistoryList);

 return VAR_3;
}
