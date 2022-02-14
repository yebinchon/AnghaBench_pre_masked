
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumItem; TYPE_1__* Items; } ;
struct TYPE_6__ {void* TapMode; void* Active; void* Online; int HubName; int DeviceName; } ;
typedef TYPE_1__ RPC_LOCALBRIDGE ;
typedef TYPE_2__ RPC_ENUM_LOCALBRIDGE ;
typedef int PACK ;


 void* FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int,size_t) ;
 int FUNC_3 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_4 (int) ;

void FUNC_5(RPC_ENUM_LOCALBRIDGE *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_ENUM_LOCALBRIDGE));
 VAR_0->NumItem = FUNC_1(VAR_1, "NumItem");
 VAR_0->Items = FUNC_4(sizeof(RPC_LOCALBRIDGE) * VAR_0->NumItem);

 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_LOCALBRIDGE *VAR_3 = &VAR_0->Items[VAR_2];

  FUNC_2(VAR_1, "DeviceName", VAR_3->DeviceName, sizeof(VAR_3->DeviceName), VAR_2);
  FUNC_2(VAR_1, "HubNameLB", VAR_3->HubName, sizeof(VAR_3->HubName), VAR_2);
  VAR_3->Online = FUNC_0(VAR_1, "Online", VAR_2);
  VAR_3->Active = FUNC_0(VAR_1, "Active", VAR_2);
  VAR_3->TapMode = FUNC_0(VAR_1, "TapMode", VAR_2);
 }
}
