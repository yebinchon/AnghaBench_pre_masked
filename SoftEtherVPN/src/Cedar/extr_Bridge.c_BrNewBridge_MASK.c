
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int Local; int Monitor; int TapMode; int LimitBroadcast; int TapMacAddress; int * ParentLocalBridge; TYPE_1__* Policy; int Name; TYPE_2__* Hub; int Cedar; } ;
struct TYPE_13__ {int Cedar; } ;
struct TYPE_12__ {int MonitorPort; int NoBroadcastLimiter; } ;
typedef int THREAD ;
typedef TYPE_1__ POLICY ;
typedef int LOCALBRIDGE ;
typedef TYPE_2__ HUB ;
typedef TYPE_3__ BRIDGE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (char*,int) ;
 int * FUNC_5 (int ,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,char*) ;
 int FUNC_8 (int *) ;
 TYPE_3__* FUNC_9 (int) ;

BRIDGE *FUNC_10(HUB *VAR_1, char *VAR_2, POLICY *VAR_3, bool VAR_4, bool VAR_5, bool VAR_6, char *VAR_7, bool VAR_8, LOCALBRIDGE *VAR_9)
{
 BRIDGE *VAR_10;
 POLICY *VAR_11;
 THREAD *VAR_12;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_3 == ((void*)0))
 {
  VAR_11 = FUNC_0(FUNC_3());
 }
 else
 {
  VAR_11 = FUNC_0(VAR_3);
 }

 VAR_10 = FUNC_9(sizeof(BRIDGE));
 VAR_10->Cedar = VAR_1->Cedar;
 VAR_10->Hub = VAR_1;
 FUNC_7(VAR_10->Name, sizeof(VAR_10->Name), VAR_2);
 VAR_10->Policy = VAR_11;
 VAR_10->Local = VAR_4;
 VAR_10->Monitor = VAR_5;
 VAR_10->TapMode = VAR_6;
 VAR_10->LimitBroadcast = VAR_8;
 VAR_10->ParentLocalBridge = VAR_9;

 if (VAR_10->TapMode)
 {
  if (VAR_7 != ((void*)0) && FUNC_4(VAR_7, 6) == 0)
  {
   FUNC_1(VAR_10->TapMacAddress, VAR_7, 6);
  }
  else
  {
   FUNC_2(VAR_10->TapMacAddress);
  }
 }

 if (VAR_5)
 {

  VAR_11->MonitorPort = 1;
 }

 if (VAR_10->LimitBroadcast == 0)
 {

  VAR_11->NoBroadcastLimiter = 1;
 }


 VAR_12 = FUNC_5(VAR_0, VAR_10);
 FUNC_8(VAR_12);
 FUNC_6(VAR_12);

 return VAR_10;
}
