
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


typedef int UINT ;
struct TYPE_20__ {TYPE_4__* L2TP; TYPE_3__* CurrentIpSecSaRecv; int ClientIP; int L2TPClientIP; int ServerIP; int L2TPServerIP; } ;
struct TYPE_19__ {int Now; int SockEvent; int * Interrupts; int Cedar; } ;
struct TYPE_18__ {int Now; int * SockEvent; int * Interrupts; int CryptName; TYPE_6__* IkeClient; } ;
struct TYPE_16__ {int CryptoKeySize; TYPE_1__* Crypto; } ;
struct TYPE_17__ {TYPE_2__ TransformSetting; } ;
struct TYPE_15__ {int Name; int BlockSize; } ;
typedef TYPE_4__ L2TP_SERVER ;
typedef int IP ;
typedef TYPE_5__ IKE_SERVER ;
typedef TYPE_6__ IKE_CLIENT ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (char*,TYPE_6__*) ;
 int FUNC_2 (int ,int,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_5__*,TYPE_6__*,int *,int *,char*) ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int ,TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ) ;

void FUNC_7(IKE_SERVER *VAR_1, IKE_CLIENT *VAR_2)
{
 L2TP_SERVER *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->L2TP == ((void*)0))
 {
  UINT VAR_4 = VAR_0;

  if (VAR_2->CurrentIpSecSaRecv != ((void*)0))
  {
   VAR_4 = VAR_2->CurrentIpSecSaRecv->TransformSetting.Crypto->BlockSize;
  }

  VAR_2->L2TP = FUNC_5(VAR_1->Cedar, VAR_1, FUNC_4(&VAR_2->ClientIP), VAR_4);
  VAR_2->L2TP->IkeClient = VAR_2;

  FUNC_0(&VAR_2->L2TPServerIP, &VAR_2->ServerIP, sizeof(IP));
  FUNC_0(&VAR_2->L2TPClientIP, &VAR_2->ClientIP, sizeof(IP));

  if (VAR_2->CurrentIpSecSaRecv != ((void*)0))
  {
   FUNC_2(VAR_2->L2TP->CryptName, sizeof(VAR_2->L2TP->CryptName),
    "IPsec - %s (%u bits)",
    VAR_2->CurrentIpSecSaRecv->TransformSetting.Crypto->Name,
    VAR_2->CurrentIpSecSaRecv->TransformSetting.CryptoKeySize * 8);
  }

  FUNC_1("IKE_CLIENT 0x%X: L2TP Server Started.\n", VAR_2);

  FUNC_3(VAR_1, VAR_2, ((void*)0), ((void*)0), "LI_L2TP_SERVER_STARTED");
 }

 VAR_3 = VAR_2->L2TP;

 if (VAR_3->Interrupts == ((void*)0))
 {
  VAR_3->Interrupts = VAR_1->Interrupts;
 }

 if (VAR_3->SockEvent == ((void*)0))
 {
  FUNC_6(VAR_3, VAR_1->SockEvent);
 }

 VAR_3->Now = VAR_1->Now;
}
