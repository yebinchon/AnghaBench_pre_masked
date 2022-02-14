
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int h ;
struct TYPE_19__ {scalar_t__ Size; int Buf; } ;
struct TYPE_18__ {int Flag; void* MessageSize; void* MessageId; int ExchangeType; int Version; int NextPayload; void* ResponderCookie; void* InitiatorCookie; } ;
struct TYPE_17__ {scalar_t__ FlagEncrypted; TYPE_3__* DecryptedPayload; int * PayloadList; scalar_t__ MessageId; scalar_t__ FlagAuthOnly; scalar_t__ FlagCommit; int ExchangeType; int ResponderCookie; int InitiatorCookie; } ;
typedef TYPE_1__ IKE_PACKET ;
typedef TYPE_2__ IKE_HEADER ;
typedef int IKE_CRYPTO_PARAM ;
typedef TYPE_3__ BUF ;


 void* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int ,scalar_t__,int *) ;
 int FUNC_7 (int *) ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_11 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_2__*,int) ;

BUF *FUNC_13(IKE_PACKET *VAR_4, IKE_CRYPTO_PARAM *VAR_5, bool VAR_6)
{
 IKE_HEADER VAR_7;
 BUF *VAR_8;
 BUF *VAR_9;

 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_4->PayloadList == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_12(&VAR_7, sizeof(VAR_7));
 VAR_7.InitiatorCookie = FUNC_3(VAR_4->InitiatorCookie);
 VAR_7.ResponderCookie = FUNC_3(VAR_4->ResponderCookie);
 VAR_7.NextPayload = FUNC_7(VAR_4->PayloadList);
 VAR_7.Version = VAR_3;
 VAR_7.ExchangeType = VAR_4->ExchangeType;
 VAR_7.Flag = (VAR_4->FlagEncrypted ? VAR_2 : 0) |
  (VAR_4->FlagCommit ? VAR_1 : 0) |
  (VAR_4->FlagAuthOnly ? VAR_0 : 0);
 VAR_7.MessageId = FUNC_2(VAR_4->MessageId);

 if (VAR_4->DecryptedPayload != ((void*)0) && VAR_6)
 {
  VAR_8 = FUNC_0(VAR_4->DecryptedPayload);
 }
 else
 {
  VAR_8 = FUNC_5(VAR_4->PayloadList);
 }

 if (VAR_4->DecryptedPayload != ((void*)0))
 {
  FUNC_4(VAR_4->DecryptedPayload);
 }

 VAR_4->DecryptedPayload = FUNC_0(VAR_8);

 if (VAR_4->FlagEncrypted)
 {
  BUF *VAR_10;

  VAR_10 = FUNC_6(VAR_8->Buf, VAR_8->Size, VAR_5);

  if (VAR_10 == ((void*)0))
  {
   FUNC_1("ISAKMP: Packet Encrypt Failed\n");
   FUNC_4(VAR_8);
   return ((void*)0);
  }

  FUNC_4(VAR_8);

  VAR_8 = VAR_10;
 }

 VAR_7.MessageSize = FUNC_2(VAR_8->Size + sizeof(VAR_7));

 VAR_9 = FUNC_8();
 FUNC_10(VAR_9, &VAR_7, sizeof(VAR_7));
 FUNC_11(VAR_9, VAR_8);

 FUNC_4(VAR_8);

 FUNC_9(VAR_9, 0, 0);

 return VAR_9;
}
