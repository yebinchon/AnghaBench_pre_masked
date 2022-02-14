
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t NumItem; TYPE_1__* Items; int HubName; } ;
struct TYPE_4__ {int TcpStatus; int RecvSize; int SendSize; int LastCommTime; int CreatedTime; int DestPort; int DestHost; int DestIp; int SrcPort; int SrcHost; int SrcIp; int Protocol; int Id; } ;
typedef TYPE_1__ RPC_ENUM_NAT_ITEM ;
typedef TYPE_2__ RPC_ENUM_NAT ;
typedef int PACK ;


 int FUNC_0 (int *,char*,size_t) ;
 int FUNC_1 (int *,char*,int ,size_t,size_t) ;
 int FUNC_2 (int *,char*,int ,size_t,size_t) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ,size_t,size_t) ;
 int FUNC_6 (int *,char*,int ,size_t,size_t) ;
 int FUNC_7 (int *,char*) ;

void FUNC_8(PACK *VAR_0, RPC_ENUM_NAT *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "NumItem", VAR_1->NumItem);
 FUNC_4(VAR_0, "HubName", VAR_1->HubName);

 FUNC_7(VAR_0, "NatTable");
 for (VAR_2 = 0;VAR_2 < VAR_1->NumItem;VAR_2++)
 {
  RPC_ENUM_NAT_ITEM *VAR_3 = &VAR_1->Items[VAR_2];

  FUNC_2(VAR_0, "Id", VAR_3->Id, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "Protocol", VAR_3->Protocol, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "SrcIp", VAR_3->SrcIp, VAR_2, VAR_1->NumItem);
  FUNC_5(VAR_0, "SrcHost", VAR_3->SrcHost, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "SrcPort", VAR_3->SrcPort, VAR_2, VAR_1->NumItem);
  FUNC_3(VAR_0, "DestIp", VAR_3->DestIp, VAR_2, VAR_1->NumItem);
  FUNC_5(VAR_0, "DestHost", VAR_3->DestHost, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "DestPort", VAR_3->DestPort, VAR_2, VAR_1->NumItem);
  FUNC_6(VAR_0, "CreatedTime", VAR_3->CreatedTime, VAR_2, VAR_1->NumItem);
  FUNC_6(VAR_0, "LastCommTime", VAR_3->LastCommTime, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "SendSize", VAR_3->SendSize, VAR_2, VAR_1->NumItem);
  FUNC_1(VAR_0, "RecvSize", VAR_3->RecvSize, VAR_2, VAR_1->NumItem);
  FUNC_2(VAR_0, "TcpStatus", VAR_3->TcpStatus, VAR_2, VAR_1->NumItem);
 }
 FUNC_7(VAR_0, ((void*)0));
}
