
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_35__ {TYPE_7__* Group; int lock; int Traffic; } ;
typedef TYPE_8__ USER ;
struct TYPE_31__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_28__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_36__ {TYPE_4__ Recv; TYPE_1__ Send; } ;
struct TYPE_34__ {int lock; int Traffic; } ;
struct TYPE_33__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_32__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_30__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_29__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_27__ {TYPE_5__ Recv; TYPE_2__ Send; } ;
struct TYPE_26__ {TYPE_6__ Recv; TYPE_3__ Send; } ;
struct TYPE_25__ {int FarmMember; } ;
struct TYPE_24__ {int TrafficLock; TYPE_16__* Traffic; TYPE_15__* OldTraffic; } ;
typedef TYPE_9__ TRAFFIC ;
typedef TYPE_10__ SESSION ;
typedef TYPE_11__ HUB ;


 TYPE_8__* FUNC_0 (TYPE_11__*,char*) ;
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (int ,TYPE_9__*) ;
 int FUNC_4 (TYPE_11__*,char*,int ,TYPE_9__*) ;
 int FUNC_5 (TYPE_15__*,TYPE_16__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_8__*) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;

void FUNC_9(HUB *VAR_1, char *VAR_2, SESSION *VAR_3)
{
 TRAFFIC VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_3->TrafficLock);
 {

  VAR_4.Send.BroadcastBytes =
   VAR_3->Traffic->Send.BroadcastBytes - VAR_3->OldTraffic->Send.BroadcastBytes;
  VAR_4.Send.BroadcastCount =
   VAR_3->Traffic->Send.BroadcastCount - VAR_3->OldTraffic->Send.BroadcastCount;
  VAR_4.Send.UnicastBytes =
   VAR_3->Traffic->Send.UnicastBytes - VAR_3->OldTraffic->Send.UnicastBytes;
  VAR_4.Send.UnicastCount =
   VAR_3->Traffic->Send.UnicastCount - VAR_3->OldTraffic->Send.UnicastCount;
  VAR_4.Recv.BroadcastBytes =
   VAR_3->Traffic->Recv.BroadcastBytes - VAR_3->OldTraffic->Recv.BroadcastBytes;
  VAR_4.Recv.BroadcastCount =
   VAR_3->Traffic->Recv.BroadcastCount - VAR_3->OldTraffic->Recv.BroadcastCount;
  VAR_4.Recv.UnicastBytes =
   VAR_3->Traffic->Recv.UnicastBytes - VAR_3->OldTraffic->Recv.UnicastBytes;
  VAR_4.Recv.UnicastCount =
   VAR_3->Traffic->Recv.UnicastCount - VAR_3->OldTraffic->Recv.UnicastCount;
  FUNC_5(VAR_3->OldTraffic, VAR_3->Traffic, sizeof(TRAFFIC));

  if (VAR_1->FarmMember == 0)
  {

   FUNC_1(VAR_1);
   {
    USER *VAR_5 = FUNC_0(VAR_1, VAR_2);
    if (VAR_5 != ((void*)0))
    {
     FUNC_6(VAR_5->lock);
     {
      FUNC_3(VAR_5->Traffic, &VAR_4);
     }
     FUNC_8(VAR_5->lock);
     if (VAR_5->Group != ((void*)0))
     {
      FUNC_6(VAR_5->Group->lock);
      {
       FUNC_3(VAR_5->Group->Traffic, &VAR_4);
      }
      FUNC_8(VAR_5->Group->lock);
     }
     FUNC_7(VAR_5);
    }
   }
   FUNC_2(VAR_1);
  }
  else
  {

   FUNC_4(VAR_1, VAR_2, VAR_0, &VAR_4);
  }
 }
 FUNC_8(VAR_3->TrafficLock);
}
