
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_65__ TYPE_9__ ;
typedef struct TYPE_64__ TYPE_8__ ;
typedef struct TYPE_63__ TYPE_7__ ;
typedef struct TYPE_62__ TYPE_6__ ;
typedef struct TYPE_61__ TYPE_5__ ;
typedef struct TYPE_60__ TYPE_4__ ;
typedef struct TYPE_59__ TYPE_43__ ;
typedef struct TYPE_58__ TYPE_40__ ;
typedef struct TYPE_57__ TYPE_3__ ;
typedef struct TYPE_56__ TYPE_2__ ;
typedef struct TYPE_55__ TYPE_1__ ;
typedef struct TYPE_54__ TYPE_17__ ;
typedef struct TYPE_53__ TYPE_16__ ;
typedef struct TYPE_52__ TYPE_15__ ;
typedef struct TYPE_51__ TYPE_14__ ;
typedef struct TYPE_50__ TYPE_13__ ;
typedef struct TYPE_49__ TYPE_12__ ;
typedef struct TYPE_48__ TYPE_11__ ;
typedef struct TYPE_47__ TYPE_10__ ;


typedef int tpid ;
typedef int src_mac_dummy ;
typedef int dst_mac_dummy ;
typedef int USHORT ;
typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_48__ {int Size; int DstIP; int SrcIP; scalar_t__ DestPort; scalar_t__ SrcPort; scalar_t__ Data; } ;
typedef TYPE_11__ UDPPACKET ;
typedef int UCHAR ;
struct TYPE_64__ {scalar_t__ EtherIP_IPsec; scalar_t__ L2TP_IPsec; } ;
struct TYPE_65__ {TYPE_8__ Services; } ;
struct TYPE_63__ {int IsFragment; int Protocol; int* Payload; int PayloadSize; int * FragmentHeader; TYPE_6__* IPv6Header; } ;
struct TYPE_61__ {int Value; } ;
struct TYPE_60__ {int Value; } ;
struct TYPE_62__ {TYPE_5__ SrcAddress; TYPE_4__ DestAddress; } ;
struct TYPE_59__ {int Protocol; int SrcIP; int DstIP; } ;
struct TYPE_58__ {int HashSize; } ;
struct TYPE_57__ {TYPE_43__* IPv4Header; } ;
struct TYPE_56__ {int BlockSize; } ;
struct TYPE_55__ {scalar_t__ InitiatorCookie; scalar_t__ ResponderCookie; } ;
struct TYPE_54__ {int* Buf; int Size; } ;
struct TYPE_53__ {int StartQuickModeAsSoon; int LastCommTick; TYPE_13__* CurrentIpSecSaSend; TYPE_13__* CurrentIpSecSaRecv; int TunnelModeClientIP; int TunnelModeServerIP; TYPE_1__* CurrentIkeSa; scalar_t__ ServerPort; scalar_t__ ClientPort; int ServerIP; int ClientIP; } ;
struct TYPE_52__ {int Iv; int Key; } ;
struct TYPE_51__ {int Now; TYPE_9__* IPsec; int ClientList; } ;
struct TYPE_47__ {scalar_t__ CapsuleMode; scalar_t__ LifeKilobytes; TYPE_40__* Hash; TYPE_2__* Crypto; } ;
struct TYPE_50__ {int TotalSize; int StartQM_FlagSet; TYPE_10__ TransformSetting; int LastCommTick; struct TYPE_50__* PairIPsecSa; int CryptoKey; int HashKey; TYPE_16__* IkeClient; } ;
struct TYPE_49__ {int TypeL3; int* IPv4PayloadData; int IPv4PayloadSize; TYPE_7__ IPv6HeaderPacketInfo; TYPE_3__ L3; } ;
typedef TYPE_12__ PKT ;
typedef TYPE_13__ IPSECSA ;
typedef int IP ;
typedef TYPE_14__ IKE_SERVER ;
typedef TYPE_15__ IKE_CRYPTO_PARAM ;
typedef TYPE_16__ IKE_CLIENT ;
typedef TYPE_17__ BUF ;


 scalar_t__ FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int *,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_17__*) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (TYPE_43__*) ;
 int FUNC_7 (TYPE_43__*) ;
 int VAR_14 ;
 int FUNC_8 (int *) ;
 int VAR_15 ;
 int FUNC_9 (int ,int,int*,int) ;
 TYPE_17__* FUNC_10 (int*,int,TYPE_15__*) ;
 int FUNC_11 (TYPE_40__*,int*,int ,int ,int*,int) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int*) ;
 int FUNC_14 (TYPE_13__*) ;


 int VAR_16 ;
 int VAR_17 ;
 TYPE_17__* FUNC_15 () ;
 TYPE_12__* FUNC_16 (int*,int) ;
 int FUNC_17 (TYPE_14__*,TYPE_16__*,int*,int,int) ;
 int FUNC_18 (TYPE_14__*,TYPE_16__*,int*,int) ;
 int FUNC_19 (TYPE_14__*,TYPE_16__*,int*,int,int) ;
 int FUNC_20 (int*) ;
 scalar_t__ FUNC_21 () ;
 TYPE_16__* FUNC_22 (int ,TYPE_16__*) ;
 TYPE_13__* FUNC_23 (TYPE_14__*,int) ;
 int FUNC_24 (TYPE_14__*,TYPE_16__*,int) ;
 int FUNC_25 (TYPE_14__*,TYPE_16__*,int ,int,scalar_t__,scalar_t__) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (TYPE_14__*,TYPE_16__*,int*,scalar_t__,int*,scalar_t__) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (TYPE_17__*,int*,int) ;

void FUNC_30(IKE_SERVER *VAR_18, UDPPACKET *VAR_19)
{
 UCHAR *VAR_20;
 UINT VAR_21;
 UINT VAR_22;
 UINT VAR_23;
 IPSECSA *VAR_24;
 IKE_CLIENT *VAR_25;
 UINT VAR_26;
 UINT VAR_27;
 bool VAR_28 = 0;
 UCHAR *VAR_29;
 UCHAR *VAR_30;
 UCHAR *VAR_31;
 UINT VAR_32;
 IKE_CRYPTO_PARAM VAR_33;
 BUF *VAR_34;
 UCHAR VAR_35[VAR_1];
 bool VAR_36 = 0;

 if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
 {
  return;
 }

 VAR_20 = (UCHAR *)VAR_19->Data;
 VAR_21 = VAR_19->Size;

 if (VAR_19->DestPort == VAR_10)
 {
  if (FUNC_13(&VAR_19->DstIP))
  {

   UINT VAR_37 = FUNC_5(VAR_20, VAR_21);

   VAR_20 += VAR_37;
   VAR_21 -= VAR_37;
  }
 }


 if (VAR_21 < sizeof(UINT))
 {
  return;
 }

 VAR_22 = FUNC_20(VAR_20 + 0);
 if (VAR_22 == 0)
 {
  return;
 }


 if (VAR_21 < (sizeof(UINT) * 2))
 {
  return;
 }
 VAR_23 = FUNC_20(VAR_20 + sizeof(UINT));


 VAR_24 = FUNC_23(VAR_18, VAR_22);
 if (VAR_24 == ((void*)0))
 {

  UINT64 VAR_38 = FUNC_21();
  UINT64 VAR_39 = 0;
  IKE_CLIENT *VAR_40 = ((void*)0);
  IKE_CLIENT VAR_41;


  FUNC_1(&VAR_41.ClientIP, &VAR_19->SrcIP, sizeof(IP));
  VAR_41.ClientPort = VAR_19->SrcPort;
  FUNC_1(&VAR_41.ServerIP, &VAR_19->DstIP, sizeof(IP));
  VAR_41.ServerPort = VAR_19->DestPort;
  VAR_41.CurrentIkeSa = ((void*)0);

  if (VAR_19->DestPort == VAR_10)
  {
   VAR_41.ClientPort = VAR_41.ServerPort = VAR_12;
  }

  VAR_40 = FUNC_22(VAR_18->ClientList, &VAR_41);

  if (VAR_40 != ((void*)0) && VAR_40->CurrentIkeSa != ((void*)0))
  {
   VAR_38 = VAR_40->CurrentIkeSa->InitiatorCookie;
   VAR_39 = VAR_40->CurrentIkeSa->ResponderCookie;
  }

  FUNC_25(VAR_18, (VAR_40 == ((void*)0) ? &VAR_41 : VAR_40), FUNC_12(VAR_22), 0,
   VAR_38, VAR_39);

  FUNC_24(VAR_18, (VAR_40 == ((void*)0) ? &VAR_41 : VAR_40), VAR_22);
  return;
 }

 VAR_36 = FUNC_14(VAR_24);

 VAR_25 = VAR_24->IkeClient;
 if (VAR_25 == ((void*)0))
 {
  return;
 }

 VAR_26 = VAR_24->TransformSetting.Crypto->BlockSize;
 VAR_27 = VAR_0;


 if (VAR_21 < (sizeof(UINT) * 2 + VAR_26 + VAR_27 + VAR_26))
 {
  return;
 }
 VAR_29 = VAR_20 + sizeof(UINT) * 2;


 VAR_30 = VAR_20 + VAR_21 - VAR_27;


 FUNC_11(VAR_24->TransformSetting.Hash, VAR_35, VAR_24->HashKey,
  VAR_24->TransformSetting.Hash->HashSize, VAR_20, VAR_21 - VAR_27);

 if (FUNC_0(VAR_35, VAR_30, VAR_27) != 0)
 {

  return;
 }


 VAR_31 = VAR_20 + sizeof(UINT) * 2 + VAR_26;
 VAR_32 = VAR_21 - VAR_27 - VAR_26 - sizeof(UINT) * 2;
 if (VAR_32 == 0 || (VAR_32 % VAR_26) != 0)
 {

  return;
 }


 VAR_33.Key = VAR_24->CryptoKey;
 FUNC_1(&VAR_33.Iv, VAR_29, VAR_26);

 VAR_34 = FUNC_10(VAR_31, VAR_32, &VAR_33);
 if (VAR_34 != ((void*)0))
 {
  UCHAR *VAR_42 = VAR_34->Buf;
  UINT VAR_43 = VAR_34->Size;
  UCHAR VAR_44 = VAR_42[VAR_43 - 2];
  UCHAR VAR_45 = VAR_42[VAR_43 - 1];
  if ((VAR_43 - 2) >= VAR_44)
  {
   UINT VAR_46 = VAR_43 - 2 - VAR_44;

   VAR_24->TotalSize += VAR_43;

   if (VAR_36)
   {

    if (VAR_45 == VAR_6 || VAR_45 == VAR_7)
    {

     BUF *VAR_47 = FUNC_15();
     static UCHAR VAR_48[6] = {0, 0, 0, 0, 0, 0, };
     static UCHAR VAR_49[6] = {0, 0, 0, 0, 0, 0, };
     USHORT VAR_50 = FUNC_2(VAR_45 == VAR_6 ? VAR_16 : VAR_17);
     PKT *VAR_51;

     FUNC_29(VAR_47, VAR_48, sizeof(VAR_48));
     FUNC_29(VAR_47, VAR_49, sizeof(VAR_49));
     FUNC_29(VAR_47, &VAR_50, sizeof(VAR_50));

     FUNC_29(VAR_47, VAR_42, VAR_43);


     VAR_51 = FUNC_16(VAR_47->Buf, VAR_47->Size);





     if (VAR_51 == ((void*)0))
     {

      VAR_42 = ((void*)0);
      VAR_43 = 0;
     }
     else
     {

      switch (VAR_51->TypeL3)
      {
      case 129:

       FUNC_28(&VAR_25->TunnelModeServerIP, VAR_51->L3.IPv4Header->DstIP);
       FUNC_28(&VAR_25->TunnelModeClientIP, VAR_51->L3.IPv4Header->SrcIP);

       if (FUNC_7(VAR_51->L3.IPv4Header) == 0)
       {
        if ((FUNC_6(VAR_51->L3.IPv4Header) & 0x01) == 0)
        {
         if (VAR_51->L3.IPv4Header->Protocol == VAR_8)
         {

          if (VAR_18->IPsec->Services.EtherIP_IPsec)
          {

           FUNC_17(VAR_18, VAR_25, VAR_51->IPv4PayloadData, VAR_51->IPv4PayloadSize, 1);
          }
         }
         else if (VAR_51->L3.IPv4Header->Protocol == VAR_9)
         {

          if (VAR_18->IPsec->Services.EtherIP_IPsec)
          {

           FUNC_19(VAR_18, VAR_25, VAR_51->IPv4PayloadData, VAR_51->IPv4PayloadSize, 1);
          }
         }
        }
       }
       break;

      case 128:

       FUNC_26(&VAR_25->TunnelModeServerIP, VAR_51->IPv6HeaderPacketInfo.IPv6Header->DestAddress.Value);
       FUNC_26(&VAR_25->TunnelModeClientIP, VAR_51->IPv6HeaderPacketInfo.IPv6Header->SrcAddress.Value);

       if (VAR_51->IPv6HeaderPacketInfo.IsFragment == 0)
       {
        if (VAR_51->IPv6HeaderPacketInfo.FragmentHeader == ((void*)0) || (FUNC_8(VAR_51->IPv6HeaderPacketInfo.FragmentHeader) & VAR_14) == 0)
        {
         if (VAR_51->IPv6HeaderPacketInfo.Protocol == VAR_8)
         {

          if (VAR_18->IPsec->Services.EtherIP_IPsec)
          {

           FUNC_17(VAR_18, VAR_25, VAR_51->IPv6HeaderPacketInfo.Payload, VAR_51->IPv6HeaderPacketInfo.PayloadSize, 1);
          }
         }
         else if (VAR_51->IPv6HeaderPacketInfo.Protocol == VAR_9)
         {

          if (VAR_18->IPsec->Services.EtherIP_IPsec)
          {

           FUNC_19(VAR_18, VAR_25, VAR_51->IPv6HeaderPacketInfo.Payload, VAR_51->IPv6HeaderPacketInfo.PayloadSize, 1);
          }
         }
        }
       }
       break;
      }

      FUNC_4(VAR_51);
     }

     FUNC_3(VAR_47);
    }
   }
   else
   {

    if (VAR_45 == VAR_15)
    {
     if (VAR_18->IPsec->Services.L2TP_IPsec || VAR_18->IPsec->Services.EtherIP_IPsec)
     {

      FUNC_18(VAR_18, VAR_25, VAR_42, VAR_43);
     }
    }
    else if (VAR_45 == VAR_8)
    {
     if (VAR_18->IPsec->Services.EtherIP_IPsec)
     {

      FUNC_17(VAR_18, VAR_25, VAR_42, VAR_43, 0);
     }
    }
    else if (VAR_45 == VAR_9)
    {
     if (VAR_18->IPsec->Services.EtherIP_IPsec)
     {

      FUNC_19(VAR_18, VAR_25, VAR_42, VAR_43, 0);
     }
    }
   }

   VAR_28 = 1;
  }

  FUNC_3(VAR_34);
 }

 if (VAR_28)
 {
  bool VAR_52 = 0;

  VAR_25->CurrentIpSecSaRecv = VAR_24;
  if (VAR_24->PairIPsecSa != ((void*)0))
  {
   VAR_25->CurrentIpSecSaSend = VAR_24->PairIPsecSa;

   if (VAR_19->DestPort == VAR_11)
   {
    IPSECSA *VAR_53 = VAR_25->CurrentIpSecSaSend;
    if (VAR_53->TransformSetting.CapsuleMode == VAR_5)
    {
     VAR_53->TransformSetting.CapsuleMode = VAR_3;
    }
    else if (VAR_53->TransformSetting.CapsuleMode == VAR_4)
    {
     VAR_53->TransformSetting.CapsuleMode = VAR_2;
    }
   }
  }
  VAR_25->LastCommTick = VAR_18->Now;
  VAR_24->LastCommTick = VAR_18->Now;
  if (VAR_24->PairIPsecSa != ((void*)0))
  {
   VAR_24->PairIPsecSa->LastCommTick = VAR_18->Now;
  }

  FUNC_27(VAR_18, VAR_25, &VAR_19->SrcIP, VAR_19->SrcPort, &VAR_19->DstIP, VAR_19->DestPort);

  if (VAR_23 >= 0xf0000000)
  {

   VAR_52 = 1;
  }

  if (VAR_24->TransformSetting.LifeKilobytes != 0)
  {
   UINT64 VAR_54 = (UINT64)VAR_24->TransformSetting.LifeKilobytes * (UINT64)1000;
   UINT64 VAR_55 = VAR_54 * (UINT64)2 / (UINT64)3;

   if (VAR_24->TotalSize >= VAR_55)
   {

    VAR_52 = 1;
   }
  }

  if (VAR_52)
  {
   if (VAR_24->StartQM_FlagSet == 0)
   {
    VAR_25->StartQuickModeAsSoon = 1;
    VAR_24->StartQM_FlagSet = 1;
   }
  }
 }
}
