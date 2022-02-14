
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_22__ {int Size; int Buf; } ;
struct TYPE_21__ {int NextIv; int Key; int Iv; } ;
struct TYPE_20__ {int FlagEncrypted; scalar_t__ ExchangeType; } ;
struct TYPE_19__ {TYPE_1__* IkeClient; scalar_t__ NextSendTick; int * SendBuffer; int BlockSize; int CryptoKey; int Iv; } ;
struct TYPE_18__ {int Interrupts; scalar_t__ Now; } ;
struct TYPE_17__ {int ClientPort; int ClientIP; int ServerPort; int ServerIP; } ;
typedef TYPE_2__ IKE_SERVER ;
typedef TYPE_3__ IKE_SA ;
typedef TYPE_4__ IKE_PACKET ;
typedef TYPE_5__ IKE_CRYPTO_PARAM ;
typedef TYPE_6__ BUF ;


 int FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_5 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int *,int ,int *,int ,int ,int ) ;

void FUNC_8(IKE_SERVER *VAR_3, IKE_SA *VAR_4, IKE_PACKET *VAR_5)
{
 BUF *VAR_6;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 if (VAR_5 == ((void*)0))
 {
  FUNC_4(VAR_4->SendBuffer);
  VAR_4->SendBuffer = ((void*)0);
  VAR_4->NextSendTick = 0;
  return;
 }


 if (VAR_5->FlagEncrypted == 0)
 {
  VAR_6 = FUNC_5(VAR_5, ((void*)0));
 }
 else
 {
  IKE_CRYPTO_PARAM VAR_7;

  FUNC_2(VAR_7.Iv, VAR_4->Iv, VAR_4->BlockSize);
  VAR_7.Key = VAR_4->CryptoKey;

  VAR_6 = FUNC_5(VAR_5, &VAR_7);

  FUNC_6(VAR_4, VAR_7.NextIv, VAR_4->BlockSize);
 }

 if (VAR_6 == ((void*)0))
 {
  return;
 }

 if (VAR_5->ExchangeType != VAR_0)
 {

  if (VAR_4->SendBuffer != ((void*)0))
  {
   FUNC_4(VAR_4->SendBuffer);
  }

  VAR_4->SendBuffer = FUNC_1(VAR_6);
  VAR_4->NextSendTick = VAR_3->Now + (UINT64)(VAR_1);
  FUNC_0(VAR_3->Interrupts, VAR_4->NextSendTick);
 }

 FUNC_7(VAR_3, VAR_2, &VAR_4->IkeClient->ServerIP, VAR_4->IkeClient->ServerPort,
  &VAR_4->IkeClient->ClientIP, VAR_4->IkeClient->ClientPort,
  VAR_6->Buf, VAR_6->Size);

 FUNC_3(VAR_6);
}
