
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumItem; TYPE_1__* Items; int HubName; } ;
struct TYPE_6__ {int Hostname; void* Mask; int IpAddress; int MacAddress; void* ExpireTime; void* LeasedTime; void* Id; } ;
typedef TYPE_1__ RPC_ENUM_DHCP_ITEM ;
typedef TYPE_2__ RPC_ENUM_DHCP ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,int,size_t) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int *,char*,size_t) ;
 void* FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,char*,int ,int) ;
 int FUNC_6 (int *,char*,int ,int,size_t) ;
 int FUNC_7 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_8 (int) ;

void FUNC_9(RPC_ENUM_DHCP *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0, sizeof(RPC_ENUM_DHCP));
 VAR_0->NumItem = FUNC_1(VAR_1, "NumItem");
 VAR_0->Items = FUNC_8(sizeof(RPC_ENUM_DHCP_ITEM) * VAR_0->NumItem);
 FUNC_5(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));

 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_ENUM_DHCP_ITEM *VAR_3 = &VAR_0->Items[VAR_2];

  VAR_3->Id = FUNC_3(VAR_1, "Id", VAR_2);
  VAR_3->LeasedTime = FUNC_2(VAR_1, "LeasedTime", VAR_2);
  VAR_3->ExpireTime = FUNC_2(VAR_1, "ExpireTime", VAR_2);
  FUNC_0(VAR_1, "MacAddress", VAR_3->MacAddress, 6, VAR_2);
  VAR_3->IpAddress = FUNC_4(VAR_1, "IpAddress", VAR_2);
  VAR_3->Mask = FUNC_3(VAR_1, "Mask", VAR_2);
  FUNC_6(VAR_1, "Hostname", VAR_3->Hostname, sizeof(VAR_3->Hostname), VAR_2);
 }
}
