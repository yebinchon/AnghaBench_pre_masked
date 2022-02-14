
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef scalar_t__ UINT ;
struct TYPE_37__ {int * lock; } ;
struct TYPE_36__ {int * lock; } ;
struct TYPE_35__ {int * lock; } ;
struct TYPE_34__ {int * lock; } ;
struct TYPE_33__ {int * lock; } ;
struct TYPE_32__ {int * lock; } ;
struct TYPE_31__ {int * lock; } ;
struct TYPE_30__ {int * lock; } ;
struct TYPE_29__ {int * lock; } ;
struct TYPE_28__ {TYPE_9__* L3SwList; TYPE_8__* LocalBridgeList; TYPE_7__* TrafficDiffList; int * TrafficLock; TYPE_6__* CaList; TYPE_5__* ConnectionList; TYPE_12__* ListenerList; TYPE_4__* HubList; } ;
struct TYPE_27__ {int * lock; } ;
struct TYPE_26__ {int ref; } ;
struct TYPE_25__ {int * TasksFromFarmControllerLock; int * CapsCacheLock; TYPE_3__* HubCreateHistoryList; TYPE_2__* FarmMemberList; int * lock; TYPE_1__* ServerListenerList; TYPE_13__* Cedar; } ;
typedef TYPE_10__ SERVER ;
typedef TYPE_11__ LISTENER ;
typedef TYPE_12__ LIST ;
typedef TYPE_13__ CEDAR ;


 int FUNC_0 (TYPE_12__*,TYPE_11__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,char*) ;
 TYPE_11__* FUNC_3 (TYPE_12__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (TYPE_12__*) ;
 TYPE_12__* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_12__*) ;
 int FUNC_8 (TYPE_11__*) ;
 int FUNC_9 (TYPE_12__*) ;

void FUNC_10(SERVER *VAR_0, UINT VAR_1)
{
 CEDAR *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }




 VAR_2 = VAR_0->Cedar;

 if (VAR_0->ServerListenerList != ((void*)0))
 {
  FUNC_2(VAR_0->ServerListenerList->lock, VAR_1, "s->ServerListenerList->lock");
 }

 FUNC_2(VAR_0->lock, VAR_1, "s->lock");

 if (VAR_0->FarmMemberList != ((void*)0))
 {
  FUNC_2(VAR_0->FarmMemberList->lock, VAR_1, "s->FarmMemberList->lock");
 }

 if (VAR_0->HubCreateHistoryList != ((void*)0))
 {
  FUNC_2(VAR_0->HubCreateHistoryList->lock, VAR_1, "s->HubCreateHistoryList->lock");
 }

 FUNC_2(VAR_0->CapsCacheLock, VAR_1, "s->CapsCacheLock");

 FUNC_2(VAR_0->TasksFromFarmControllerLock, VAR_1, "s->TasksFromFarmControllerLock");

 if (VAR_2 != ((void*)0))
 {
  if (VAR_2->HubList != ((void*)0))
  {
   FUNC_2(VAR_2->HubList->lock, VAR_1, "cedar->HubList->lock");
  }

  if (VAR_2->ListenerList != ((void*)0))
  {
   UINT VAR_3;
   LIST *VAR_4 = FUNC_6(((void*)0));

   FUNC_2(VAR_2->ListenerList->lock, VAR_1, "cedar->ListenerList->lock");

   FUNC_5(VAR_2->ListenerList);
   {
    for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_2->ListenerList);VAR_3++)
    {
     LISTENER *VAR_5 = FUNC_3(VAR_2->ListenerList, VAR_3);

     FUNC_1(VAR_5->ref);

     FUNC_0(VAR_4, VAR_5);
    }
   }
   FUNC_9(VAR_2->ListenerList);

   for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_4);VAR_3++)
   {
    LISTENER *VAR_6 = FUNC_3(VAR_4, VAR_3);


    FUNC_8(VAR_6);
   }

   FUNC_7(VAR_4);
  }

  if (VAR_2->ConnectionList != ((void*)0))
  {
   FUNC_2(VAR_2->ConnectionList->lock, VAR_1, "cedar->ConnectionList->lock");
  }

  if (VAR_2->CaList != ((void*)0))
  {
   FUNC_2(VAR_2->CaList->lock, VAR_1, "cedar->CaList->lock");
  }

  if (VAR_2->TrafficLock != ((void*)0))
  {
   FUNC_2(VAR_2->TrafficLock, VAR_1, "cedar->TrafficLock");
  }

  if (VAR_2->TrafficDiffList != ((void*)0))
  {
   FUNC_2(VAR_2->TrafficDiffList->lock, VAR_1, "cedar->TrafficDiffList->lock");
  }

  if (VAR_2->LocalBridgeList != ((void*)0))
  {
   FUNC_2(VAR_2->LocalBridgeList->lock, VAR_1, "cedar->LocalBridgeList->lock");
  }

  if (VAR_2->L3SwList != ((void*)0))
  {
   FUNC_2(VAR_2->L3SwList->lock, VAR_1, "cedar->L3SwList->lock");
  }
 }


}
