
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef int v6 ;
typedef int v4 ;
typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_41__ {TYPE_7__* PacketAdapter; } ;
struct TYPE_40__ {int Size; int Flag; int TimeToLive; int HopLimit; int * Buf; int DestAddress; int SrcAddress; void* NextHeader; void* PayloadLength; int Checksum; int DstIP; int SrcIP; void* Protocol; void* Identification; void* TotalLength; void* WindowSize; scalar_t__ SeqNumber; scalar_t__ AckNumber; int SrcPort; int DstPort; } ;
struct TYPE_39__ {scalar_t__ Param; } ;
struct TYPE_38__ {TYPE_5__* IPv6Header; } ;
struct TYPE_37__ {int SrcAddress; int DestAddress; } ;
struct TYPE_36__ {TYPE_3__* IPv4Header; } ;
struct TYPE_35__ {int SrcIP; int DstIP; } ;
struct TYPE_34__ {TYPE_8__ Protocol; TYPE_8__* DestAddress; TYPE_8__* SrcAddress; } ;
struct TYPE_33__ {TYPE_8__* TCPHeader; } ;
struct TYPE_32__ {scalar_t__ TypeL3; scalar_t__ TypeL4; TYPE_6__ IPv6HeaderPacketInfo; TYPE_4__ L3; TYPE_2__* MacHeader; scalar_t__ PayloadSize; TYPE_1__ L4; } ;
typedef TYPE_8__ TCP_HEADER ;
typedef TYPE_9__ SESSION ;
typedef TYPE_10__ PKT ;
typedef TYPE_8__ IPV6_HEADER ;
typedef int IPV6_ADDR ;
typedef TYPE_8__ IPV4_HEADER ;
typedef int HUB_PA ;
typedef int HUB ;
typedef TYPE_8__ BUF ;


 TYPE_8__* FUNC_0 (int *,TYPE_9__*,char*) ;
 int FUNC_1 (int ,int ,void*,TYPE_8__*,int,int ) ;
 int FUNC_2 (int *,int *,void*,TYPE_8__*,int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*,int) ;
 int FUNC_9 (TYPE_8__*,int) ;
 int FUNC_10 (TYPE_8__*,int) ;
 int FUNC_11 (TYPE_8__*,int) ;
 void* VAR_0 ;
 int FUNC_12 (TYPE_8__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_8__* FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int *,int *,int,int *,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (TYPE_8__*,int) ;
 int FUNC_17 (TYPE_8__*,TYPE_8__*,int) ;
 int FUNC_18 (TYPE_8__*,int) ;
 scalar_t__ FUNC_19 (int) ;

void FUNC_20(HUB *VAR_6, SESSION *VAR_7, PKT *VAR_8, char *VAR_9)
{
 BUF *VAR_10;
 UINT VAR_11;
 TCP_HEADER *VAR_12;
 TCP_HEADER *VAR_13;
 BUF *VAR_14;

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }
 if (VAR_8->TypeL3 != VAR_1 && VAR_8->TypeL3 != VAR_2)
 {
  return;
 }
 if (VAR_8->TypeL4 != VAR_3)
 {
  return;
 }

 VAR_13 = VAR_8->L4.TCPHeader;
 if (VAR_13 == ((void*)0))
 {
  return;
 }


 VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_9);
 if (VAR_10 == ((void*)0))
 {
  return;
 }


 VAR_11 = sizeof(TCP_HEADER) + VAR_10->Size;
 VAR_12 = (TCP_HEADER *)FUNC_19(VAR_11);
 VAR_12->SrcPort = VAR_13->DstPort;
 VAR_12->DstPort = VAR_13->SrcPort;
 VAR_12->SeqNumber = VAR_13->AckNumber;
 VAR_12->AckNumber = FUNC_5(FUNC_5(VAR_13->SeqNumber) + VAR_8->PayloadSize);
 FUNC_16(VAR_12, 5);
 VAR_12->Flag = VAR_4 | VAR_5;
 VAR_12->WindowSize = FUNC_4(0xFFFF);
 FUNC_3(((UCHAR *)VAR_12) + sizeof(TCP_HEADER), VAR_10->Buf, VAR_10->Size);


 if (VAR_8->TypeL3 == VAR_1)
 {

  VAR_12->Checksum = FUNC_1(VAR_8->L3.IPv4Header->DstIP, VAR_8->L3.IPv4Header->SrcIP, VAR_0,
   VAR_12, VAR_11, 0);
 }
 else
 {

  VAR_12->Checksum = FUNC_2(&VAR_8->IPv6HeaderPacketInfo.IPv6Header->DestAddress,
   &VAR_8->IPv6HeaderPacketInfo.IPv6Header->SrcAddress, VAR_0, VAR_12, VAR_11, 0);
 }


 VAR_14 = FUNC_13();


 FUNC_17(VAR_14, VAR_8->MacHeader->SrcAddress, 6);
 FUNC_17(VAR_14, VAR_8->MacHeader->DestAddress, 6);
 FUNC_17(VAR_14, &VAR_8->MacHeader->Protocol, 2);

 if (VAR_8->TypeL3 == VAR_1)
 {

  IPV4_HEADER VAR_15;

  FUNC_18(&VAR_15, sizeof(VAR_15));

  FUNC_10(&VAR_15, 4);
  FUNC_9(&VAR_15, 5);
  VAR_15 = FUNC_4((USHORT)(sizeof(IPV4_HEADER) + VAR_11));
  VAR_15 = FUNC_4(FUNC_14());
  FUNC_8(&VAR_15, 0x02);
  VAR_15 = 128;
  VAR_15 = VAR_0;
  VAR_15 = VAR_8->L3.IPv4Header->DstIP;
  VAR_15 = VAR_8->L3.IPv4Header->SrcIP;
  VAR_15 = FUNC_12(&VAR_15, sizeof(VAR_15));

  FUNC_17(VAR_14, &VAR_15, sizeof(VAR_15));
 }
 else
 {

  IPV6_HEADER VAR_16;

  FUNC_18(&VAR_16, sizeof(VAR_16));

  FUNC_11(&VAR_16, 6);
  VAR_16 = FUNC_4(VAR_11);
  VAR_16 = VAR_0;
  VAR_16 = 64;

  FUNC_3(&VAR_16, &VAR_8->IPv6HeaderPacketInfo.IPv6Header->DestAddress, sizeof(IPV6_ADDR));
  FUNC_3(&VAR_16, &VAR_8->IPv6HeaderPacketInfo.IPv6Header->SrcAddress, sizeof(IPV6_ADDR));

  FUNC_17(VAR_14, &VAR_16, sizeof(VAR_16));
 }

 FUNC_17(VAR_14, VAR_12, VAR_11);


 FUNC_15((HUB_PA *)VAR_7->PacketAdapter->Param,
  ((void*)0), VAR_14->Buf, VAR_14->Size, ((void*)0), 0, 0);


 FUNC_6(VAR_12);
 FUNC_7(VAR_10);
 FUNC_6(VAR_14);
}
