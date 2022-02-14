
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int TrafficLock; int Traffic; } ;
struct TYPE_10__ {TYPE_4__* Hub; TYPE_1__* Cedar; scalar_t__ ServerMode; int TrafficLock; int Traffic; } ;
struct TYPE_9__ {int Recv; int Send; } ;
struct TYPE_8__ {int TrafficLock; int Traffic; } ;
typedef int TRAFFIC_ENTRY ;
typedef TYPE_2__ TRAFFIC ;
typedef TYPE_3__ SESSION ;
typedef TYPE_4__ HUB ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(SESSION *VAR_0, TRAFFIC *VAR_1)
{
 HUB *VAR_2;
 TRAFFIC VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0->TrafficLock);
 {
  FUNC_0(VAR_0->Traffic, VAR_1);
 }
 FUNC_3(VAR_0->TrafficLock);

 if (VAR_0->ServerMode)
 {
  FUNC_1(&VAR_3, &VAR_1->Send, sizeof(TRAFFIC_ENTRY));
  FUNC_1(&VAR_3, &VAR_1->Recv, sizeof(TRAFFIC_ENTRY));
  FUNC_2(VAR_0->Cedar->TrafficLock);
  {
   FUNC_0(VAR_0->Cedar->Traffic, &VAR_3);
  }
  FUNC_3(VAR_0->Cedar->TrafficLock);

  VAR_2 = VAR_0->Hub;
  FUNC_2(VAR_2->TrafficLock);
  {
   FUNC_0(VAR_2->Traffic, &VAR_3);
  }
  FUNC_3(VAR_2->TrafficLock);
 }
}
