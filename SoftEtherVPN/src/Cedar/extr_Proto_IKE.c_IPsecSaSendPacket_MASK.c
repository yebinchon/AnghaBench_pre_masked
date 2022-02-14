
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_24__ {int Size; int Buf; } ;
struct TYPE_23__ {int NextIv; int Key; int Iv; } ;
struct TYPE_22__ {int FlagEncrypted; } ;
struct TYPE_21__ {int Interrupts; scalar_t__ Now; } ;
struct TYPE_20__ {TYPE_2__* IkeClient; scalar_t__ NextSendTick; int * SendBuffer; TYPE_1__* IkeSa; struct TYPE_20__* PairIPsecSa; int Iv; } ;
struct TYPE_19__ {int ClientPort; int ClientIP; int ServerPort; int ServerIP; } ;
struct TYPE_18__ {int BlockSize; int CryptoKey; } ;
typedef TYPE_3__ IPSECSA ;
typedef TYPE_4__ IKE_SERVER ;
typedef TYPE_5__ IKE_PACKET ;
typedef TYPE_6__ IKE_CRYPTO_PARAM ;
typedef TYPE_7__ BUF ;


 int FUNC_0 (int ,scalar_t__) ;
 int * FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 TYPE_7__* FUNC_6 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,int ,int *,int ,int *,int ,int ,int ) ;

void FUNC_8(IKE_SERVER *VAR_2, IPSECSA *VAR_3, IKE_PACKET *VAR_4)
{
 BUF *VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (VAR_4 == ((void*)0))
 {
  FUNC_4(VAR_3->SendBuffer);
  VAR_3->SendBuffer = ((void*)0);
  VAR_3->NextSendTick = 0;
  return;
 }


 if (VAR_4->FlagEncrypted == 0)
 {
  VAR_5 = FUNC_6(VAR_4, ((void*)0));
 }
 else
 {
  IKE_CRYPTO_PARAM VAR_6;

  FUNC_2(VAR_6.Iv, VAR_3->Iv, VAR_3->IkeSa->BlockSize);
  VAR_6.Key = VAR_3->IkeSa->CryptoKey;

  VAR_5 = FUNC_6(VAR_4, &VAR_6);

  FUNC_5(VAR_3, VAR_6.NextIv, VAR_3->IkeSa->BlockSize);
  FUNC_5(VAR_3->PairIPsecSa, VAR_6.NextIv, VAR_3->IkeSa->BlockSize);
 }

 if (VAR_5 == ((void*)0))
 {
  return;
 }


 if (VAR_3->SendBuffer != ((void*)0))
 {
  FUNC_4(VAR_3->SendBuffer);
 }

 VAR_3->SendBuffer = FUNC_1(VAR_5);
 VAR_3->NextSendTick = VAR_2->Now + (UINT64)(VAR_0);
 FUNC_0(VAR_2->Interrupts, VAR_3->NextSendTick);

 FUNC_7(VAR_2, VAR_1, &VAR_3->IkeClient->ServerIP, VAR_3->IkeClient->ServerPort,
  &VAR_3->IkeClient->ClientIP, VAR_3->IkeClient->ClientPort,
  VAR_5->Buf, VAR_5->Size);

 FUNC_3(VAR_5);
}
