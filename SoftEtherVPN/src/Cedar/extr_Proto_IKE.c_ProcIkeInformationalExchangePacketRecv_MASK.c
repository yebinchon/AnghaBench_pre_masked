
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_57__ TYPE_9__ ;
typedef struct TYPE_56__ TYPE_8__ ;
typedef struct TYPE_55__ TYPE_7__ ;
typedef struct TYPE_54__ TYPE_6__ ;
typedef struct TYPE_53__ TYPE_5__ ;
typedef struct TYPE_52__ TYPE_4__ ;
typedef struct TYPE_51__ TYPE_3__ ;
typedef struct TYPE_50__ TYPE_2__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_15__ ;
typedef struct TYPE_47__ TYPE_14__ ;
typedef struct TYPE_46__ TYPE_13__ ;
typedef struct TYPE_45__ TYPE_12__ ;
typedef struct TYPE_44__ TYPE_11__ ;
typedef struct TYPE_43__ TYPE_10__ ;


typedef int cp ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_55__ {int Size; int Data; int DestPort; int DstIP; int SrcPort; int SrcIP; } ;
typedef TYPE_7__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_51__ {int Hash; } ;
struct TYPE_57__ {TYPE_14__* IkeClient; int LastCommTick; int HashSize; int SKEYID_a; TYPE_3__ TransformSetting; int CryptoKey; scalar_t__ Established; } ;
struct TYPE_56__ {int Now; } ;
struct TYPE_54__ {int Size; scalar_t__ Buf; } ;
struct TYPE_53__ {int Size; int Buf; } ;
struct TYPE_44__ {scalar_t__ MessageType; TYPE_6__* Spi; TYPE_5__* MessageData; } ;
struct TYPE_52__ {TYPE_11__ Notice; int Delete; } ;
struct TYPE_50__ {int Size; scalar_t__ Buf; } ;
struct TYPE_49__ {int Size; } ;
struct TYPE_48__ {int Size; int Buf; } ;
struct TYPE_47__ {TYPE_9__* CurrentIkeSa; int LastCommTick; } ;
struct TYPE_46__ {int Iv; int Key; } ;
struct TYPE_45__ {scalar_t__ InitiatorCookie; scalar_t__ ResponderCookie; scalar_t__ MessageId; int FlagEncrypted; int PayloadList; TYPE_2__* DecryptedPayload; } ;
struct TYPE_43__ {TYPE_4__ Payload; TYPE_1__* BitArray; } ;
typedef TYPE_8__ IKE_SERVER ;
typedef TYPE_9__ IKE_SA ;
typedef TYPE_10__ IKE_PACKET_PAYLOAD ;
typedef TYPE_11__ IKE_PACKET_NOTICE_PAYLOAD ;
typedef int IKE_PACKET_DELETE_PAYLOAD ;
typedef TYPE_12__ IKE_PACKET ;
typedef TYPE_13__ IKE_CRYPTO_PARAM ;
typedef int IKE_COMMON_HEADER ;
typedef TYPE_14__ IKE_CLIENT ;
typedef TYPE_15__ BUF ;


 TYPE_9__* FUNC_0 (TYPE_8__*,scalar_t__,TYPE_14__*) ;
 int FUNC_1 (TYPE_15__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_9__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_10__*,int *,int ) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (TYPE_12__*) ;
 TYPE_10__* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_9 (int,scalar_t__,scalar_t__,int) ;
 TYPE_12__* FUNC_10 (int ,int ,TYPE_13__*) ;
 TYPE_15__* FUNC_11 () ;
 int FUNC_12 (TYPE_8__*,TYPE_14__*,int *) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int *) ;
 TYPE_9__* FUNC_15 (TYPE_8__*,scalar_t__,scalar_t__) ;
 TYPE_14__* FUNC_16 (TYPE_8__*,int *,int ,int *,int ,TYPE_12__*) ;
 int FUNC_17 (TYPE_8__*,TYPE_14__*,int ) ;
 int FUNC_18 (TYPE_15__*,void*,int) ;
 int FUNC_19 (TYPE_15__*,scalar_t__) ;
 int FUNC_20 (TYPE_13__*,int) ;

void FUNC_21(IKE_SERVER *VAR_6, UDPPACKET *VAR_7, IKE_PACKET *VAR_8)
{
 IKE_CLIENT *VAR_9;
 IKE_SA *VAR_10;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_8->InitiatorCookie == 0 || VAR_8->ResponderCookie == 0
  || VAR_8->MessageId == 0 || VAR_8->FlagEncrypted == 0)
 {
  return;
 }

 VAR_9 = FUNC_16(VAR_6, &VAR_7->SrcIP, VAR_7->SrcPort, &VAR_7->DstIP, VAR_7->DestPort, VAR_8);

 if (VAR_9 == ((void*)0))
 {
  return;
 }

 VAR_10 = FUNC_0(VAR_6, VAR_8->ResponderCookie, VAR_9);

 if (VAR_10 != ((void*)0) && VAR_10->Established)
 {
  IKE_PACKET *VAR_11;
  IKE_CRYPTO_PARAM VAR_12;


  FUNC_20(&VAR_12, sizeof(VAR_12));
  VAR_12.Key = VAR_10->CryptoKey;
  FUNC_2(VAR_12.Iv, VAR_10, VAR_8->MessageId);

  VAR_11 = FUNC_10(VAR_7->Data, VAR_7->Size, &VAR_12);



  if (VAR_11 != ((void*)0))
  {

   IKE_PACKET_PAYLOAD *VAR_13;

   VAR_13 = FUNC_6(VAR_11->PayloadList, VAR_4, 0);
   if (VAR_13 != ((void*)0))
   {

    UINT VAR_14 = sizeof(IKE_COMMON_HEADER) + VAR_13->BitArray->Size;
    void *VAR_15 = ((UCHAR *)VAR_11->DecryptedPayload->Buf) + VAR_14;
    if (VAR_11->DecryptedPayload->Size > VAR_14)
    {
     UINT VAR_16 = VAR_11->DecryptedPayload->Size - VAR_14;
     UCHAR VAR_17[VAR_0];
     BUF *VAR_18;

     VAR_18 = FUNC_11();
     FUNC_19(VAR_18, VAR_8->MessageId);
     FUNC_18(VAR_18, VAR_15, VAR_16);

     FUNC_8(VAR_10->TransformSetting.Hash, VAR_17, VAR_10->SKEYID_a, VAR_10->HashSize,
      VAR_18->Buf, VAR_18->Size);


     if (FUNC_3(VAR_13, VAR_17, VAR_10->HashSize))
     {
      UINT VAR_19, VAR_20;

      VAR_20 = FUNC_7(VAR_11->PayloadList, VAR_3);
      for (VAR_19 = 0;VAR_19 < VAR_20;VAR_19++)
      {
       IKE_PACKET_PAYLOAD *VAR_21 = FUNC_6(VAR_11->PayloadList, VAR_3, VAR_19);
       IKE_PACKET_DELETE_PAYLOAD *VAR_22 = &VAR_21->Payload.Delete;

       FUNC_12(VAR_6, VAR_9, VAR_22);
      }
      VAR_20 = FUNC_7(VAR_11->PayloadList, VAR_5);

      for (VAR_19 = 0;VAR_19 < VAR_20;VAR_19++)
      {
       IKE_PACKET_PAYLOAD *VAR_23 = FUNC_6(VAR_11->PayloadList, VAR_5, VAR_19);
       IKE_PACKET_NOTICE_PAYLOAD *VAR_24 = &VAR_23->Payload.Notice;

       if (VAR_24->MessageType == VAR_1 || VAR_24->MessageType == VAR_2)
       {
        if (VAR_24->MessageData != ((void*)0) && VAR_24->MessageData->Size == sizeof(UINT))
        {
         UINT VAR_25 = FUNC_13(VAR_24->MessageData->Buf);

         if (VAR_24->Spi->Size == (sizeof(UINT64) * 2))
         {
          UINT64 VAR_26 = FUNC_14(((UCHAR *)VAR_24->Spi->Buf));
          UINT64 VAR_27 = FUNC_14(((UCHAR *)VAR_24->Spi->Buf) + sizeof(UINT64));

          if (VAR_26 != 0 && VAR_27 != 0)
          {
           IKE_SA *VAR_28 = FUNC_15(VAR_6, VAR_26, VAR_27);

           if (VAR_28 != ((void*)0) && VAR_28->IkeClient == VAR_9)
           {
            if (VAR_24->MessageType == VAR_1)
            {

             FUNC_17(VAR_6, VAR_9,
              FUNC_9(1, VAR_26, VAR_27,
              VAR_25));
            }


            VAR_28->LastCommTick = VAR_6->Now;
            VAR_10->LastCommTick = VAR_6->Now;
            VAR_28->IkeClient->LastCommTick = VAR_6->Now;
            VAR_10->IkeClient->LastCommTick = VAR_6->Now;
            VAR_10->IkeClient->CurrentIkeSa = VAR_10;
           }
          }
         }
        }
       }
      }
     }

     FUNC_1(VAR_18);
    }
   }

   FUNC_5(VAR_11);
  }
 }
}
