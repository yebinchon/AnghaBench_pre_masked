
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT ;
typedef void UCHAR ;
struct TYPE_14__ {int Size; } ;
struct TYPE_13__ {int Size; void* Buf; } ;
struct TYPE_12__ {int Flag; int NextPayload; int MessageSize; int MessageId; int ExchangeType; int ResponderCookie; int InitiatorCookie; } ;
struct TYPE_11__ {int MessageSize; int FlagEncrypted; int FlagCommit; int FlagAuthOnly; int MessageId; TYPE_9__* DecryptedPayload; int PayloadList; int ExchangeType; void* ResponderCookie; void* InitiatorCookie; } ;
typedef TYPE_1__ IKE_PACKET ;
typedef TYPE_2__ IKE_HEADER ;
typedef int IKE_CRYPTO_PARAM ;
typedef TYPE_3__ BUF ;


 TYPE_9__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_5 (void*,int,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (void*,int,int ,int*) ;
 int FUNC_8 (int ,int) ;
 void* FUNC_9 (void*,int) ;
 TYPE_1__* FUNC_10 (int) ;

IKE_PACKET *FUNC_11(void *VAR_3, UINT VAR_4, IKE_CRYPTO_PARAM *VAR_5, bool VAR_6)
{
 IKE_PACKET *VAR_7 = ((void*)0);
 BUF *VAR_8;

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_8 = FUNC_9(VAR_3, VAR_4);

 if (VAR_8->Size < sizeof(IKE_HEADER))
 {
  FUNC_1("ISAKMP: Invalid Packet Size\n");
 }
 else
 {

  IKE_HEADER *VAR_9 = (IKE_HEADER *)VAR_8->Buf;

  VAR_7 = FUNC_10(sizeof(IKE_PACKET));

  VAR_7->MessageSize = FUNC_2(VAR_9->MessageSize);
  VAR_7->InitiatorCookie = FUNC_3(VAR_9->InitiatorCookie);
  VAR_7->ResponderCookie = FUNC_3(VAR_9->ResponderCookie);
  VAR_7->ExchangeType = VAR_9->ExchangeType;
  VAR_7->FlagEncrypted = (VAR_9->Flag & VAR_2) ? 1 : 0;
  VAR_7->FlagCommit = (VAR_9->Flag & VAR_1) ? 1 : 0;
  VAR_7->FlagAuthOnly = (VAR_9->Flag & VAR_0) ? 1 : 0;
  VAR_7->MessageId = FUNC_2(VAR_9->MessageId);

  if (VAR_8->Size < FUNC_2(VAR_9->MessageSize) ||
   FUNC_2(VAR_9->MessageSize) < sizeof(IKE_HEADER))
  {
   FUNC_1("ISAKMP: Invalid Packet Size\n");

   FUNC_6(VAR_7);
   VAR_7 = ((void*)0);
  }
  else
  {
   if (VAR_6 == 0)
   {
    bool VAR_10 = 0;
    UCHAR *VAR_11;
    UINT VAR_12;
    BUF *VAR_13 = ((void*)0);

    VAR_11 = ((UCHAR *)VAR_9) + sizeof(IKE_HEADER);
    VAR_12 = FUNC_2(VAR_9->MessageSize) - sizeof(IKE_HEADER);


    if (VAR_7->FlagEncrypted)
    {
     VAR_13 = FUNC_5(VAR_11, VAR_12, VAR_5);

     if (VAR_13 != ((void*)0))
     {
      VAR_10 = 1;

      VAR_11 = VAR_13->Buf;
      VAR_12 = VAR_13->Size;

      VAR_7->DecryptedPayload = FUNC_0(VAR_13);
     }
    }
    else
    {
     VAR_10 = 1;
    }

    if (VAR_10 == 0)
    {
     FUNC_1("ISAKMP: Decrypt Failed\n");

     FUNC_6(VAR_7);
     VAR_7 = ((void*)0);
    }
    else
    {
     UINT VAR_14;


     VAR_7->PayloadList = FUNC_7(VAR_11,
      VAR_12,
      VAR_9->NextPayload,
      &VAR_14);

     if (VAR_7->DecryptedPayload != ((void*)0))
     {
      VAR_7->DecryptedPayload->Size = FUNC_8(VAR_7->DecryptedPayload->Size, VAR_14);
     }
     else
     {
      VAR_7->DecryptedPayload = FUNC_9(VAR_11, VAR_12);
     }
    }

    if (VAR_13 != ((void*)0))
    {
     FUNC_4(VAR_13);
    }
   }
  }
 }

 FUNC_4(VAR_8);

 return VAR_7;
}
