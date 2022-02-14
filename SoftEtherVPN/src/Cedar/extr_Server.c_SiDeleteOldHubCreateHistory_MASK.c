
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int * HubCreateHistoryList; } ;
struct TYPE_8__ {scalar_t__ CreatedTime; } ;
typedef TYPE_1__ SERVER_HUB_CREATE_HISTORY ;
typedef TYPE_2__ SERVER ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *) ;

void FUNC_10(SERVER *VAR_1)
{
 UINT VAR_2;
 LIST *VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_1->HubCreateHistoryList);
 {
  VAR_3 = FUNC_6(((void*)0));

  for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_1->HubCreateHistoryList);VAR_2++)
  {
   SERVER_HUB_CREATE_HISTORY *VAR_4 = FUNC_3(VAR_1->HubCreateHistoryList, VAR_2);

   if ((VAR_4->CreatedTime + ((UINT64)VAR_0)) <= FUNC_8())
   {

    FUNC_0(VAR_3, VAR_4);
   }
  }

  for (VAR_2 = 0;VAR_2 < FUNC_4(VAR_3);VAR_2++)
  {
   SERVER_HUB_CREATE_HISTORY *VAR_5 = FUNC_3(VAR_3, VAR_2);

   FUNC_1(VAR_1->HubCreateHistoryList, VAR_5);

   FUNC_2(VAR_5);
  }

  FUNC_7(VAR_3);
 }
 FUNC_9(VAR_1->HubCreateHistoryList);
}
