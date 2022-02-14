
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int t ;
struct TYPE_25__ {int FarmMember; int Name; int TrafficLock; TYPE_13__* Traffic; TYPE_12__* OldTraffic; } ;
struct TYPE_21__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_18__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_24__ {TYPE_4__ Recv; TYPE_1__ Send; } ;
struct TYPE_23__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_22__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_20__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_19__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_17__ {TYPE_5__ Recv; TYPE_2__ Send; } ;
struct TYPE_16__ {TYPE_6__ Recv; TYPE_3__ Send; } ;
typedef TYPE_7__ TRAFFIC ;
typedef TYPE_8__ HUB ;


 int FUNC_0 (TYPE_8__*,int ,int ,TYPE_7__*) ;
 int FUNC_1 (TYPE_12__*,TYPE_13__*,int) ;
 scalar_t__ FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,int) ;

void FUNC_6(HUB *VAR_1)
{
 TRAFFIC VAR_2;

 if (VAR_1 == ((void*)0) || VAR_1->FarmMember == 0)
 {
  return;
 }

 FUNC_5(&VAR_2, sizeof(VAR_2));

 FUNC_3(VAR_1->TrafficLock);
 {
  VAR_2.Send.BroadcastBytes =
   VAR_1->Traffic->Send.BroadcastBytes - VAR_1->OldTraffic->Send.BroadcastBytes;
  VAR_2.Send.BroadcastCount =
   VAR_1->Traffic->Send.BroadcastCount - VAR_1->OldTraffic->Send.BroadcastCount;
  VAR_2.Send.UnicastBytes =
   VAR_1->Traffic->Send.UnicastBytes - VAR_1->OldTraffic->Send.UnicastBytes;
  VAR_2.Send.UnicastCount =
   VAR_1->Traffic->Send.UnicastCount - VAR_1->OldTraffic->Send.UnicastCount;
  VAR_2.Recv.BroadcastBytes =
   VAR_1->Traffic->Recv.BroadcastBytes - VAR_1->OldTraffic->Recv.BroadcastBytes;
  VAR_2.Recv.BroadcastCount =
   VAR_1->Traffic->Recv.BroadcastCount - VAR_1->OldTraffic->Recv.BroadcastCount;
  VAR_2.Recv.UnicastBytes =
   VAR_1->Traffic->Recv.UnicastBytes - VAR_1->OldTraffic->Recv.UnicastBytes;
  VAR_2.Recv.UnicastCount =
   VAR_1->Traffic->Recv.UnicastCount - VAR_1->OldTraffic->Recv.UnicastCount;
  FUNC_1(VAR_1->OldTraffic, VAR_1->Traffic, sizeof(TRAFFIC));
 }
 FUNC_4(VAR_1->TrafficLock);

 if (FUNC_2(&VAR_2, sizeof(TRAFFIC)))
 {
  return;
 }

 FUNC_0(VAR_1, VAR_1->Name, VAR_0, &VAR_2);
}
