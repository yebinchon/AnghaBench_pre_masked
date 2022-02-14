
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int MonitorPort; void* GroupnameHash; void* UsernameHash; int StormList; TYPE_4__* Session; int Now; int PacketQueue; int Cancel; } ;
struct TYPE_12__ {TYPE_3__* Hub; TYPE_2__* Policy; TYPE_1__* PacketAdapter; int GroupName; int Username; } ;
struct TYPE_11__ {int MonitorList; } ;
struct TYPE_10__ {scalar_t__ MonitorPort; } ;
struct TYPE_9__ {TYPE_5__* Param; } ;
typedef TYPE_4__ SESSION ;
typedef TYPE_5__ HUB_PA ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 TYPE_5__* FUNC_8 (int) ;

bool FUNC_9(SESSION *VAR_1)
{

 HUB_PA *VAR_2 = FUNC_8(sizeof(HUB_PA));
 VAR_2->Cancel = FUNC_2();
 VAR_2->PacketQueue = FUNC_4();
 VAR_2->Now = FUNC_5();
 VAR_2->Session = VAR_1;
 VAR_2->StormList = FUNC_3(VAR_0);
 VAR_2->UsernameHash = FUNC_7(VAR_1->Username);
 VAR_2->GroupnameHash = FUNC_7(VAR_1->GroupName);

 VAR_1->PacketAdapter->Param = VAR_2;

 if (VAR_1->Policy->MonitorPort)
 {

  VAR_2->MonitorPort = 1;


  FUNC_1(VAR_1->Hub->MonitorList);
  {
   FUNC_0(VAR_1->Hub->MonitorList, VAR_1);
  }
  FUNC_6(VAR_1->Hub->MonitorList);
 }

 return 1;
}
