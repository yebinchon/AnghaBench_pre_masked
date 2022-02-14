
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumItem; TYPE_1__* Items; int HubName; } ;
struct TYPE_4__ {int Hostname; int Mask; int IpAddress; int MacAddress; int ExpireTime; int LeasedTime; int Id; } ;
typedef TYPE_1__ RPC_ENUM_DHCP_ITEM ;
typedef TYPE_2__ RPC_ENUM_DHCP ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,int,size_t,size_t) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ,size_t,size_t) ;
 int FUNC_6 (int *,char*,int ,size_t,size_t) ;
 int FUNC_7 (int *,char*) ;

void FUNC_8(PACK *VAR_0, RPC_ENUM_DHCP *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "NumItem", VAR_1->NumItem);
 FUNC_4(VAR_0, "HubName", VAR_1->HubName);

 FUNC_7(VAR_0, "DhcpTable");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  RPC_ENUM_DHCP_ITEM *VAR_3 = &VAR_1->Items[VAR_2];

  FUNC_2(VAR_0, "Id", VAR_3->Id, VAR_2, VAR_1->NumItem);
  FUNC_6(VAR_0, "LeasedTime", VAR_3->LeasedTime, VAR_2, VAR_1->NumItem);
  FUNC_6(VAR_0, "ExpireTime", VAR_3->ExpireTime, VAR_2, VAR_1->NumItem);
  FUNC_0(VAR_0, "MacAddress", VAR_3->MacAddress, 6, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "IpAddress", VAR_3->IpAddress, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "Mask", VAR_3->Mask, VAR_2, VAR_1->NumItem);
  FUNC_5(VAR_0, "Hostname", VAR_3->Hostname, VAR_2, VAR_1->NumItem);
 }
 FUNC_7(VAR_0, ((void*)0));
}
