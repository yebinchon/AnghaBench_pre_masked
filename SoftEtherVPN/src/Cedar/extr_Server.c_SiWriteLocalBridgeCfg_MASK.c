
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_5__ {int OsType; } ;
struct TYPE_4__ {char* DeviceName; char* HubName; int TapMacAddress; scalar_t__ TapMode; scalar_t__ LimitBroadcast; scalar_t__ Monitor; scalar_t__ Local; } ;
typedef TYPE_1__ LOCALBRIDGE ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int *,char*,char*) ;
 TYPE_3__* FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(FOLDER *VAR_1, LOCALBRIDGE *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_1, "DeviceName", VAR_2->DeviceName);
 FUNC_1(VAR_1, "HubName", VAR_2->HubName);
 FUNC_0(VAR_1, "NoPromiscuousMode", VAR_2->Local);
 FUNC_0(VAR_1, "MonitorMode", VAR_2->Monitor);
 FUNC_0(VAR_1, "LimitBroadcast", VAR_2->LimitBroadcast);

 if (FUNC_4(FUNC_2()->OsType))
 {
  FUNC_0(VAR_1, "TapMode", VAR_2->TapMode);

  if (VAR_2->TapMode)
  {
   char VAR_3[VAR_0];
   FUNC_3(VAR_3, sizeof(VAR_3), VAR_2->TapMacAddress);
   FUNC_1(VAR_1, "TapMacAddress", VAR_3);
  }
 }
}
