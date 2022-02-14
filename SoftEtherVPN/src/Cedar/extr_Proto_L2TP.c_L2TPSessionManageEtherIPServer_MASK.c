
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int crypt_name ;
typedef int UINT ;
struct TYPE_25__ {int L2TPv3; int Now; int * SockEvent; int * Interrupts; int ClientId; int VendorName; } ;
struct TYPE_24__ {int ClientId; int IsL2TPOnIPsecTunnelMode; int ServerPort; int ServerIP; int ClientPort; int ClientIP; TYPE_3__* CurrentIpSecSaRecv; } ;
struct TYPE_23__ {int CurrentEtherId; int IPsec; int Cedar; } ;
struct TYPE_22__ {int Now; int SockEvent; int * Interrupts; TYPE_8__* IkeClient; TYPE_7__* IkeServer; } ;
struct TYPE_21__ {TYPE_9__* EtherIP; TYPE_4__* Tunnel; } ;
struct TYPE_20__ {int VendorName; } ;
struct TYPE_18__ {int CryptoKeySize; TYPE_1__* Crypto; } ;
struct TYPE_19__ {TYPE_2__ TransformSetting; } ;
struct TYPE_17__ {int BlockSize; int Name; } ;
typedef TYPE_5__ L2TP_SESSION ;
typedef TYPE_6__ L2TP_SERVER ;
typedef TYPE_7__ IKE_SERVER ;
typedef TYPE_8__ IKE_CLIENT ;


 int FUNC_0 (char*,TYPE_8__*) ;
 int FUNC_1 (char*,int,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_7__*,TYPE_8__*,int *,int *,int *,char*,int ) ;
 int VAR_1 ;
 TYPE_9__* FUNC_3 (int ,int ,TYPE_7__*,int *,int ,int *,int ,char*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_9__*,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char*,int) ;

void FUNC_7(L2TP_SERVER *VAR_2, L2TP_SESSION *VAR_3)
{
 IKE_SERVER *VAR_4;
 IKE_CLIENT *VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (VAR_2->IkeClient == ((void*)0) || VAR_2->IkeServer == ((void*)0))
 {
  return;
 }

 VAR_4 = VAR_2->IkeServer;
 VAR_5 = VAR_2->IkeClient;

 if (VAR_3->EtherIP == ((void*)0))
 {
  char VAR_6[VAR_1];
  UINT VAR_7 = VAR_0;

  FUNC_6(VAR_6, sizeof(VAR_6));

  if (VAR_5->CurrentIpSecSaRecv != ((void*)0))
  {
   FUNC_1(VAR_6, sizeof(VAR_6),
    "IPsec - %s (%u bits)",
    VAR_5->CurrentIpSecSaRecv->TransformSetting.Crypto->Name,
    VAR_5->CurrentIpSecSaRecv->TransformSetting.CryptoKeySize * 8);

   VAR_7 = VAR_5->CurrentIpSecSaRecv->TransformSetting.Crypto->BlockSize;
  }

  VAR_3->EtherIP = FUNC_3(VAR_4->Cedar, VAR_4->IPsec, VAR_4,
   &VAR_5->ClientIP, VAR_5->ClientPort,
   &VAR_5->ServerIP, VAR_5->ServerPort, VAR_6,
   VAR_5->IsL2TPOnIPsecTunnelMode, VAR_7, VAR_5->ClientId,
   ++VAR_4->CurrentEtherId);

  FUNC_5(VAR_3->EtherIP->VendorName, sizeof(VAR_3->EtherIP->VendorName), VAR_3->Tunnel->VendorName);

  VAR_3->EtherIP->L2TPv3 = 1;

  FUNC_0("IKE_CLIENT 0x%X: EtherIP Server Started.\n", VAR_5);

  FUNC_2(VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0), "LI_ETHERIP_SERVER_STARTED", VAR_4->CurrentEtherId);
 }
 else
 {
  FUNC_5(VAR_3->EtherIP->ClientId, sizeof(VAR_3->EtherIP->ClientId), VAR_5->ClientId);
 }

 if (VAR_3->EtherIP->Interrupts == ((void*)0))
 {
  VAR_3->EtherIP->Interrupts = VAR_2->Interrupts;
 }

 if (VAR_3->EtherIP->SockEvent == ((void*)0))
 {
  FUNC_4(VAR_3->EtherIP, VAR_2->SockEvent);
 }

 VAR_3->EtherIP->Now = VAR_2->Now;
}
