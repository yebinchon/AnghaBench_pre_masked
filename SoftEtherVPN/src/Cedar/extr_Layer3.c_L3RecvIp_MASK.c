
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_28__ {scalar_t__ SrcIP; int TimeToLive; scalar_t__ DstIP; int Type; void* Checksum; scalar_t__* FlagsAndFragmentOffset; void* Protocol; void* TotalLength; } ;
struct TYPE_27__ {scalar_t__ IpAddress; int Switch; } ;
struct TYPE_26__ {int NextHopIp; TYPE_3__* Packet; scalar_t__ Expire; } ;
struct TYPE_24__ {TYPE_6__* IPv4Header; } ;
struct TYPE_23__ {TYPE_6__* ICMPHeader; } ;
struct TYPE_25__ {int PacketSize; scalar_t__ TypeL4; int* PacketData; TYPE_2__ L3; TYPE_1__ L4; scalar_t__ BroadcastPacket; int MacAddressSrc; } ;
typedef TYPE_3__ PKT ;
typedef int MAC_HEADER ;
typedef TYPE_4__ L3PACKET ;
typedef TYPE_5__ L3IF ;
typedef TYPE_6__ IPV4_HEADER ;
typedef TYPE_6__ ICMP_HEADER ;


 int FUNC_0 (int*,TYPE_6__*,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (TYPE_6__*,int) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_6__*) ;
 void* FUNC_8 (TYPE_6__*,int) ;
 TYPE_5__* FUNC_9 (int ,scalar_t__,int*) ;
 int FUNC_10 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_11 (TYPE_5__*,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (int,int) ;
 TYPE_3__* FUNC_13 (int*,int) ;
 scalar_t__ FUNC_14 () ;
 void* FUNC_15 (int) ;

void FUNC_16(L3IF *VAR_5, PKT *VAR_6, bool VAR_7)
{
 IPV4_HEADER *VAR_8;
 UINT VAR_9;
 UINT VAR_10 = 0;
 L3IF *VAR_11;
 L3PACKET *VAR_12;
 UINT VAR_13 = 0;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }

 VAR_8 = VAR_6->L3.IPv4Header;
 VAR_9 = FUNC_4(VAR_6->L3.IPv4Header) * 4;


 if (FUNC_7(VAR_8) == 0)
 {

  goto FREE_PACKET;
 }


 FUNC_10(VAR_5, VAR_8->SrcIP, VAR_6->MacAddressSrc);

 if (VAR_6->BroadcastPacket)
 {

  goto FREE_PACKET;
 }


 if (VAR_8->TimeToLive >= 1)
 {
  VAR_13 = VAR_8->TimeToLive - 1;
 }
 else
 {
  VAR_13 = 0;
 }

 if (VAR_13 == 0)
 {
  if (VAR_8->DstIP != VAR_5->IpAddress)
  {
   UINT VAR_14 = VAR_6->PacketSize - sizeof(MAC_HEADER);
   UINT VAR_15 = sizeof(MAC_HEADER) + sizeof(IPV4_HEADER) + sizeof(ICMP_HEADER) + 4 + VAR_9 + 8;
   UCHAR *VAR_16;
   IPV4_HEADER *VAR_17;
   ICMP_HEADER *VAR_18;
   UCHAR *VAR_19;
   PKT *VAR_20;
   UINT VAR_21 = FUNC_12(VAR_6->PacketSize - VAR_9, VAR_9 + 8);


   VAR_16 = FUNC_15(VAR_15);
   VAR_17 = (IPV4_HEADER *)(VAR_16 + sizeof(MAC_HEADER));
   VAR_18 = (ICMP_HEADER *)(VAR_16 + sizeof(MAC_HEADER) + sizeof(IPV4_HEADER));
   VAR_19 = VAR_16 + sizeof(MAC_HEADER) + sizeof(IPV4_HEADER) + sizeof(ICMP_HEADER) + 4;

   FUNC_6(VAR_17, 4);
   FUNC_5(VAR_17, sizeof(IPV4_HEADER) / 4);
   VAR_17->TotalLength = FUNC_1((USHORT)(VAR_15 - sizeof(MAC_HEADER)));
   VAR_17->TimeToLive = 0xff;
   VAR_17->Protocol = VAR_2;
   VAR_17->SrcIP = VAR_5->IpAddress;
   VAR_17->DstIP = VAR_8->SrcIP;
   VAR_17->Checksum = FUNC_8(VAR_17, sizeof(IPV4_HEADER));

   VAR_18->Type = 11;
   FUNC_0(VAR_19, VAR_8, VAR_21);
   VAR_18->Checksum = FUNC_8(VAR_18, sizeof(ICMP_HEADER) + VAR_21 + 4);

   VAR_16[12] = 0x08;
   VAR_16[13] = 0x00;

   VAR_20 = FUNC_13(VAR_16, VAR_15);
   if (VAR_20 == ((void*)0))
   {
    FUNC_2(VAR_16);
   }
   else
   {
    FUNC_16(VAR_5, VAR_20, 1);
   }


   goto FREE_PACKET;
  }
 }


 VAR_6->L3.IPv4Header->TimeToLive = (UCHAR)VAR_13;


 VAR_11 = FUNC_9(VAR_5->Switch, VAR_8->DstIP, &VAR_10);

 if (VAR_11 == ((void*)0) && VAR_7 == 0)
 {
  UINT VAR_22 = VAR_6->PacketSize - sizeof(MAC_HEADER);
  UINT VAR_23 = sizeof(MAC_HEADER) + sizeof(IPV4_HEADER) + sizeof(ICMP_HEADER) + 4 + VAR_9 + 8;
  UCHAR *VAR_24;
  IPV4_HEADER *VAR_25;
  ICMP_HEADER *VAR_26;
  UCHAR *VAR_27;
  PKT *VAR_28;
   UINT VAR_29 = FUNC_12(VAR_6->PacketSize - VAR_9, VAR_9 + 8);


  VAR_24 = FUNC_15(VAR_23);
  VAR_25 = (IPV4_HEADER *)(VAR_24 + sizeof(MAC_HEADER));
  VAR_26 = (ICMP_HEADER *)(VAR_24 + sizeof(MAC_HEADER) + sizeof(IPV4_HEADER));
  VAR_27 = VAR_24 + sizeof(MAC_HEADER) + sizeof(IPV4_HEADER) + sizeof(ICMP_HEADER) + 4;

  FUNC_6(VAR_25, 4);
  FUNC_5(VAR_25, sizeof(IPV4_HEADER) / 4);
  VAR_25->TotalLength = FUNC_1((USHORT)(VAR_23 - sizeof(MAC_HEADER)));
  VAR_25->TimeToLive = 0xff;
  VAR_25->Protocol = VAR_2;
  VAR_25->SrcIP = VAR_5->IpAddress;
  VAR_25->DstIP = VAR_8->SrcIP;
  VAR_25->Checksum = FUNC_8(VAR_25, sizeof(IPV4_HEADER));

  VAR_26->Type = 3;
  FUNC_0(VAR_27, VAR_8, VAR_29);
  VAR_26->Checksum = FUNC_8(VAR_26, sizeof(ICMP_HEADER) + VAR_29 + 4);

  VAR_24[12] = 0x08;
  VAR_24[13] = 0x00;

  VAR_28 = FUNC_13(VAR_24, VAR_23);
  if (VAR_28 == ((void*)0))
  {
   FUNC_2(VAR_24);
  }
  else
  {
   FUNC_16(VAR_5, VAR_28, 1);
  }


  goto FREE_PACKET;
 }

 if (VAR_11 != ((void*)0) && VAR_8->DstIP == VAR_11->IpAddress)
 {
  bool VAR_30 = 1;

  if (VAR_6->TypeL4 == VAR_4)
  {
   ICMP_HEADER *VAR_31 = VAR_6->L4.ICMPHeader;
   if (VAR_31->Type == VAR_0)
   {

    UINT VAR_32, VAR_33;
    VAR_32 = VAR_6->L3.IPv4Header->DstIP;
    VAR_33 = VAR_6->L3.IPv4Header->SrcIP;

    VAR_6->L3.IPv4Header->DstIP = VAR_33;
    VAR_6->L3.IPv4Header->SrcIP = VAR_32;

    VAR_8->TimeToLive = 0xff;


    VAR_8->FlagsAndFragmentOffset[0] = VAR_8->FlagsAndFragmentOffset[1] = 0;
    VAR_31->Checksum = 0;
    VAR_31->Type = VAR_1;
    VAR_31->Checksum = FUNC_8(VAR_31, VAR_6->PacketSize - sizeof(MAC_HEADER) - VAR_9);

    VAR_11 = FUNC_9(VAR_5->Switch, VAR_8->DstIP, &VAR_10);

    VAR_30 = 0;
   }
  }

  if (VAR_30)
  {
   goto FREE_PACKET;
  }
 }

 if (VAR_11 == ((void*)0))
 {

  goto FREE_PACKET;
 }


 VAR_8->Checksum = 0;
 VAR_8->Checksum = FUNC_8(VAR_8, VAR_9);


 VAR_12 = FUNC_15(sizeof(L3PACKET));
 VAR_12->Expire = FUNC_14() + VAR_3;
 VAR_12->NextHopIp = VAR_10;
 VAR_12->Packet = VAR_6;


 FUNC_11(VAR_5, VAR_11, VAR_12);

 return;

FREE_PACKET:

 FUNC_2(VAR_6->PacketData);
 FUNC_3(VAR_6);
 return;
}
