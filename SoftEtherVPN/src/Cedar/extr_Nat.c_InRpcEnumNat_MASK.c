
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_7__ {int NumItem; TYPE_1__* Items; int HubName; } ;
struct TYPE_6__ {void* TcpStatus; void* RecvSize; void* SendSize; void* LastCommTime; void* CreatedTime; void* DestPort; int DestHost; void* DestIp; void* SrcPort; int SrcHost; void* SrcIp; void* Protocol; void* Id; } ;
typedef TYPE_1__ RPC_ENUM_NAT_ITEM ;
typedef TYPE_2__ RPC_ENUM_NAT ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*,size_t) ;
 void* FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int FUNC_4 (int *,char*,int ,int,size_t) ;
 int FUNC_5 (TYPE_2__*,int) ;
 TYPE_1__* FUNC_6 (int) ;

void FUNC_7(RPC_ENUM_NAT *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, sizeof(RPC_ENUM_NAT));
 VAR_0->NumItem = FUNC_0(VAR_1, "NumItem");
 FUNC_3(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->Items = FUNC_6(sizeof(RPC_ENUM_NAT_ITEM) * VAR_0->NumItem);
 for (VAR_2 = 0;VAR_2 < VAR_0->NumItem;VAR_2++)
 {
  RPC_ENUM_NAT_ITEM *VAR_3 = &VAR_0->Items[VAR_2];

  VAR_3->Id = FUNC_2(VAR_1, "Id", VAR_2);
  VAR_3->Protocol = FUNC_2(VAR_1, "Protocol", VAR_2);
  VAR_3->SrcIp = FUNC_2(VAR_1, "SrcIp", VAR_2);
  FUNC_4(VAR_1, "SrcHost", VAR_3->SrcHost, sizeof(VAR_3->SrcHost), VAR_2);
  VAR_3->SrcPort = FUNC_2(VAR_1, "SrcPort", VAR_2);
  VAR_3->DestIp = FUNC_2(VAR_1, "DestIp", VAR_2);
  FUNC_4(VAR_1, "DestHost", VAR_3->DestHost, sizeof(VAR_3->DestHost), VAR_2);
  VAR_3->DestPort = FUNC_2(VAR_1, "DestPort", VAR_2);
  VAR_3->CreatedTime = FUNC_1(VAR_1, "CreatedTime", VAR_2);
  VAR_3->LastCommTime = FUNC_1(VAR_1, "LastCommTime", VAR_2);
  VAR_3->SendSize = FUNC_1(VAR_1, "SendSize", VAR_2);
  VAR_3->RecvSize = FUNC_1(VAR_1, "RecvSize", VAR_2);
  VAR_3->TcpStatus = FUNC_2(VAR_1, "TcpStatus", VAR_2);
 }
}
