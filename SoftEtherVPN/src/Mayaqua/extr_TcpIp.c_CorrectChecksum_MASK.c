
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_18__ {scalar_t__ Checksum; int PacketLength; } ;
typedef TYPE_3__ UDP_HEADER ;
struct TYPE_22__ {int Checksum; int DstIP; int SrcIP; } ;
struct TYPE_21__ {int DestAddress; int SrcAddress; } ;
struct TYPE_20__ {int IsFragment; scalar_t__ PayloadSize; int * FragmentHeader; } ;
struct TYPE_17__ {TYPE_3__* UDPHeader; TYPE_3__* TCPHeader; } ;
struct TYPE_16__ {TYPE_7__* IPv6Header; TYPE_8__* IPv4Header; } ;
struct TYPE_19__ {scalar_t__ TypeL3; scalar_t__ TypeL4; scalar_t__ IPv4PayloadSize; TYPE_2__ L4; TYPE_6__ IPv6HeaderPacketInfo; TYPE_1__ L3; } ;
typedef TYPE_3__ TCP_HEADER ;
typedef TYPE_5__ PKT ;
typedef TYPE_6__ IPV6_HEADER_PACKET_INFO ;
typedef TYPE_7__ IPV6_HEADER ;
typedef TYPE_8__ IPV4_HEADER ;


 void* FUNC_0 (int ,int ,int ,TYPE_3__*,scalar_t__,scalar_t__) ;
 void* FUNC_1 (int *,int *,int ,TYPE_3__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (TYPE_8__*) ;
 scalar_t__ FUNC_5 (TYPE_8__*) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_8__*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_8(PKT *VAR_7)
{

 if (VAR_7 == ((void*)0))
 {
  return;
 }

 if (VAR_7->TypeL3 == VAR_3)
 {
  IPV4_HEADER *VAR_8 = VAR_7->L3.IPv4Header;

  if (VAR_8 != ((void*)0))
  {
   if (VAR_8->Checksum == 0x0000)
   {
    VAR_8->Checksum = FUNC_7(VAR_8, FUNC_4(VAR_8) * 4);
   }

   if (VAR_7->TypeL4 == VAR_5)
   {

    if (FUNC_5(VAR_8) == 0 && (FUNC_3(VAR_8) & 0x01) == 0)
    {

     TCP_HEADER *VAR_9 = VAR_7->L4.TCPHeader;

     if (VAR_9 != ((void*)0))
     {
      USHORT VAR_10 = FUNC_0(VAR_8->SrcIP, VAR_8->DstIP, VAR_1, ((void*)0), 0, VAR_7->IPv4PayloadSize);
      USHORT VAR_11 = ~VAR_10;

      if (VAR_9->Checksum == 0 || VAR_9->Checksum == VAR_10 || VAR_9->Checksum == VAR_11)
      {
       VAR_9->Checksum = 0;
       VAR_9->Checksum = FUNC_0(VAR_8->SrcIP, VAR_8->DstIP, VAR_1, VAR_9, VAR_7->IPv4PayloadSize, 0);
      }
     }
    }
   }

   if (VAR_7->TypeL4 == VAR_6)
   {

    if (FUNC_5(VAR_8) == 0 || (FUNC_3(VAR_8) & 0x01) == 0)
    {

     UDP_HEADER *VAR_12 = VAR_7->L4.UDPHeader;

     if (VAR_12 != ((void*)0) && VAR_12->Checksum != 0)
     {
      USHORT VAR_13 = FUNC_2(VAR_12->PacketLength);
      USHORT VAR_14 = FUNC_0(VAR_8->SrcIP, VAR_8->DstIP, VAR_2, ((void*)0), 0, VAR_13);
      USHORT VAR_15 = ~VAR_14;

      if (VAR_12->Checksum == VAR_14 || VAR_12->Checksum == VAR_15)
      {
       VAR_12->Checksum = 0;

       if ((FUNC_3(VAR_8) & 0x01) == 0 && (VAR_7->IPv4PayloadSize >= VAR_13))
       {

        VAR_12->Checksum = FUNC_0(VAR_8->SrcIP, VAR_8->DstIP, VAR_2, VAR_12, VAR_13, 0);
       }
       else
       {


        VAR_12->Checksum = 0;
       }
      }
     }
    }
   }
  }
 }
 else if (VAR_7->TypeL3 == VAR_4)
 {
  IPV6_HEADER *VAR_16 = VAR_7->L3.IPv6Header;
  IPV6_HEADER_PACKET_INFO *VAR_17 = &VAR_7->IPv6HeaderPacketInfo;

  if (VAR_16 != ((void*)0))
  {
   if (VAR_7->TypeL4 == VAR_5)
   {

    if (VAR_17->IsFragment == 0)
    {
     if (VAR_17->FragmentHeader == ((void*)0) || ((FUNC_6(VAR_17->FragmentHeader) & VAR_0) == 0))
     {

      TCP_HEADER *VAR_18 = VAR_7->L4.TCPHeader;

      if (VAR_18 != ((void*)0))
      {
       USHORT VAR_19 = FUNC_1(&VAR_16->SrcAddress, &VAR_16->DestAddress, VAR_1, ((void*)0), 0, VAR_17->PayloadSize);
       USHORT VAR_20 = ~VAR_19;

       if (VAR_18->Checksum == 0 || VAR_18->Checksum == VAR_19 || VAR_18->Checksum == VAR_20)
       {
        VAR_18->Checksum = 0;
        VAR_18->Checksum = FUNC_1(&VAR_16->SrcAddress, &VAR_16->DestAddress, VAR_1, VAR_18, VAR_17->PayloadSize, 0);
       }
      }
     }
    }
   }
   else if (VAR_7->TypeL4 == VAR_6)
   {

    if (VAR_17->IsFragment == 0)
    {
     UDP_HEADER *VAR_21 = VAR_7->L4.UDPHeader;

     if (VAR_21 != ((void*)0) && VAR_21->Checksum != 0)
     {
      USHORT VAR_22 = FUNC_2(VAR_21->PacketLength);
      USHORT VAR_23 = FUNC_1(&VAR_16->SrcAddress, &VAR_16->DestAddress, VAR_2, ((void*)0), 0, VAR_22);
      USHORT VAR_24 = ~VAR_23;

      if (VAR_21->Checksum == 0 || VAR_21->Checksum == VAR_23 || VAR_21->Checksum == VAR_24)
      {
       VAR_21->Checksum = 0;

       if ((VAR_17->FragmentHeader == ((void*)0) || ((FUNC_6(VAR_17->FragmentHeader) & VAR_0) == 0)) && (VAR_17->PayloadSize >= VAR_22))
       {

        VAR_21->Checksum = FUNC_1(&VAR_16->SrcAddress, &VAR_16->DestAddress, VAR_2, VAR_21, VAR_22, 0);
       }
       else
       {

       }
      }
     }
    }
   }
  }
 }
}
