
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int crypt_name ;
typedef int UINT ;
struct TYPE_20__ {int Now; int * SockEvent; int * Interrupts; int ClientId; } ;
struct TYPE_19__ {TYPE_6__* EtherIP; int ClientId; int IsEtherIPOnIPsecTunnelMode; int ServerPort; int ServerIP; int ClientPort; int ClientIP; TYPE_3__* CurrentIpSecSaRecv; } ;
struct TYPE_18__ {int Now; int SockEvent; int * Interrupts; int CurrentEtherId; int IPsec; int Cedar; } ;
struct TYPE_16__ {int CryptoKeySize; TYPE_1__* Crypto; } ;
struct TYPE_17__ {TYPE_2__ TransformSetting; } ;
struct TYPE_15__ {int BlockSize; int Name; } ;
typedef TYPE_4__ IKE_SERVER ;
typedef TYPE_5__ IKE_CLIENT ;
typedef TYPE_6__ ETHERIP_SERVER ;


 int FUNC_0 (char*,TYPE_5__*) ;
 int FUNC_1 (char*,int,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int *,int *,int *,char*,int ) ;
 int VAR_1 ;
 TYPE_6__* FUNC_3 (int ,int ,TYPE_4__*,int *,int ,int *,int ,char*,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (char*,int) ;

void FUNC_7(IKE_SERVER *VAR_2, IKE_CLIENT *VAR_3)
{
 ETHERIP_SERVER *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (VAR_3->EtherIP == ((void*)0))
 {
  char VAR_5[VAR_1];
  UINT VAR_6 = VAR_0;

  FUNC_6(VAR_5, sizeof(VAR_5));

  if (VAR_3->CurrentIpSecSaRecv != ((void*)0))
  {
   FUNC_1(VAR_5, sizeof(VAR_5),
    "IPsec - %s (%u bits)",
    VAR_3->CurrentIpSecSaRecv->TransformSetting.Crypto->Name,
    VAR_3->CurrentIpSecSaRecv->TransformSetting.CryptoKeySize * 8);

   VAR_6 = VAR_3->CurrentIpSecSaRecv->TransformSetting.Crypto->BlockSize;
  }

  VAR_3->EtherIP = FUNC_3(VAR_2->Cedar, VAR_2->IPsec, VAR_2,
   &VAR_3->ClientIP, VAR_3->ClientPort,
   &VAR_3->ServerIP, VAR_3->ServerPort, VAR_5,
   VAR_3->IsEtherIPOnIPsecTunnelMode, VAR_6, VAR_3->ClientId,
   ++VAR_2->CurrentEtherId);

  FUNC_0("IKE_CLIENT 0x%X: EtherIP Server Started.\n", VAR_3);

  FUNC_2(VAR_2, VAR_3, ((void*)0), ((void*)0), ((void*)0), "LI_ETHERIP_SERVER_STARTED", VAR_2->CurrentEtherId);
 }
 else
 {
  FUNC_5(VAR_3->EtherIP->ClientId, sizeof(VAR_3->EtherIP->ClientId), VAR_3->ClientId);
 }

 VAR_4 = VAR_3->EtherIP;

 if (VAR_4->Interrupts == ((void*)0))
 {
  VAR_4->Interrupts = VAR_2->Interrupts;
 }

 if (VAR_4->SockEvent == ((void*)0))
 {
  FUNC_4(VAR_4, VAR_2->SockEvent);
 }

 VAR_4->Now = VAR_2->Now;
}
