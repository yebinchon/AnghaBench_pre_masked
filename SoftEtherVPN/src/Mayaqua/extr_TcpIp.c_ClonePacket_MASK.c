
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UDP_HEADER ;
struct TYPE_11__ {int * NeighborAdvertisementHeader; int * NeighborSoliciationHeader; int * RouterAdvertisementHeader; int * RouterSoliciationHeader; } ;
struct TYPE_16__ {int PayloadSize; int DataSize; int EchoDataSize; int DestAddress; int SrcAddress; int OptionList; TYPE_1__ Headers; int Type; int * EchoData; int * Data; int * Payload; int * FragmentHeader; int * RoutingHeader; int * EndPointHeader; int * HopHeader; int * IPv6Header; } ;
struct TYPE_12__ {TYPE_7__* IkeHeader; TYPE_7__* DHCPv4Header; } ;
struct TYPE_14__ {TYPE_7__* UDPHeader; TYPE_7__* TCPHeader; TYPE_7__* ICMPHeader; } ;
struct TYPE_13__ {TYPE_7__* IPv6Header; TYPE_7__* IPv4Header; TYPE_7__* ARPv4Header; } ;
struct TYPE_15__ {int PacketSize; int TypeL3; int TypeL4; int TypeL7; int * HttpLog; TYPE_7__* PacketData; TYPE_7__* MacHeader; int MacAddressDest; int MacAddressSrc; int DnsQueryHost; TYPE_2__ L7; TYPE_4__ L4; TYPE_7__ ICMPv6HeaderPacketInfo; TYPE_7__ IPv6HeaderPacketInfo; TYPE_3__ L3; int InvalidSourcePacket; int BroadcastPacket; } ;
typedef int TCP_HEADER ;
typedef TYPE_5__ PKT ;
typedef int MAC_HEADER ;
typedef int IPV6_OPTION_HEADER ;
typedef int IPV6_HEADER_PACKET_INFO ;
typedef int IPV6_HEADER ;
typedef int IPV6_FRAGMENT_HEADER ;
typedef int IPV4_HEADER ;
typedef int IKE_HEADER ;
typedef int ICMP_HEADER ;
typedef int ICMPV6_ROUTER_SOLICIATION_HEADER ;
typedef int ICMPV6_ROUTER_ADVERTISEMENT_HEADER ;
typedef int ICMPV6_NEIGHBOR_SOLICIATION_HEADER ;
typedef int ICMPV6_NEIGHBOR_ADVERTISEMENT_HEADER ;
typedef int ICMPV6_HEADER_INFO ;
typedef int HTTPLOG ;
typedef int DHCPV4_HEADER ;
typedef int ARPV4_HEADER ;


 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_7__*,TYPE_7__*,int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ,int,int ) ;
 TYPE_5__* FUNC_5 (int) ;

PKT *FUNC_6(PKT *VAR_0, bool VAR_1)
{
 PKT *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_5(sizeof(PKT));
 VAR_2->PacketSize = VAR_0->PacketSize;


 VAR_2->MacHeader = FUNC_3(sizeof(MAC_HEADER));
 FUNC_2(VAR_2->MacHeader, VAR_0->MacHeader, sizeof(MAC_HEADER));


 VAR_2->BroadcastPacket = VAR_0->BroadcastPacket;
 VAR_2->InvalidSourcePacket = VAR_0->InvalidSourcePacket;


 FUNC_2(&VAR_2->IPv6HeaderPacketInfo, &VAR_0->IPv6HeaderPacketInfo, sizeof(IPV6_HEADER_PACKET_INFO));
 FUNC_2(&VAR_2->ICMPv6HeaderPacketInfo, &VAR_0->ICMPv6HeaderPacketInfo, sizeof(ICMPV6_HEADER_INFO));


 VAR_2->TypeL3 = VAR_0->TypeL3;
 switch (VAR_2->TypeL3)
 {
 case 137:

  VAR_2->L3.ARPv4Header = FUNC_3(sizeof(ARPV4_HEADER));
  FUNC_2(VAR_2->L3.ARPv4Header, VAR_0->L3.ARPv4Header, sizeof(ARPV4_HEADER));
  break;

 case 136:

  VAR_2->L3.IPv4Header = FUNC_3(sizeof(IPV4_HEADER));
  FUNC_2(VAR_2->L3.IPv4Header, VAR_0->L3.IPv4Header, sizeof(IPV4_HEADER));
  break;

 case 135:

  VAR_2->L3.IPv6Header = FUNC_3(sizeof(IPV6_HEADER));
  FUNC_2(VAR_2->L3.IPv6Header, VAR_0->L3.IPv6Header, sizeof(IPV6_HEADER));

  VAR_2->IPv6HeaderPacketInfo.IPv6Header = FUNC_0(VAR_0->IPv6HeaderPacketInfo.IPv6Header,
   sizeof(IPV6_HEADER));

  VAR_2->IPv6HeaderPacketInfo.HopHeader = FUNC_0(VAR_0->IPv6HeaderPacketInfo.HopHeader,
   sizeof(IPV6_OPTION_HEADER));

  VAR_2->IPv6HeaderPacketInfo.EndPointHeader = FUNC_0(VAR_0->IPv6HeaderPacketInfo.EndPointHeader,
   sizeof(IPV6_OPTION_HEADER));

  VAR_2->IPv6HeaderPacketInfo.RoutingHeader = FUNC_0(VAR_0->IPv6HeaderPacketInfo.RoutingHeader,
   sizeof(IPV6_OPTION_HEADER));

  VAR_2->IPv6HeaderPacketInfo.FragmentHeader = FUNC_0(VAR_0->IPv6HeaderPacketInfo.FragmentHeader,
   sizeof(IPV6_FRAGMENT_HEADER));

  VAR_2->IPv6HeaderPacketInfo.Payload = FUNC_0(VAR_0->IPv6HeaderPacketInfo.Payload,
   VAR_0->IPv6HeaderPacketInfo.PayloadSize);
  break;
 }


 VAR_2->TypeL4 = VAR_0->TypeL4;
 switch (VAR_2->TypeL4)
 {
 case 134:

  VAR_2->L4.ICMPHeader = FUNC_3(sizeof(ICMP_HEADER));
  FUNC_2(VAR_2->L4.ICMPHeader, VAR_0->L4.ICMPHeader, sizeof(ICMP_HEADER));
  break;

 case 133:

  VAR_2->L4.ICMPHeader = FUNC_3(sizeof(ICMP_HEADER));
  FUNC_2(VAR_2->L4.ICMPHeader, VAR_0->L4.ICMPHeader, sizeof(ICMP_HEADER));

  VAR_2->ICMPv6HeaderPacketInfo.Data = FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.Data,
   VAR_0->ICMPv6HeaderPacketInfo.DataSize);

  VAR_2->ICMPv6HeaderPacketInfo.EchoData = FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.EchoData,
   VAR_0->ICMPv6HeaderPacketInfo.EchoDataSize);

  switch (VAR_2->ICMPv6HeaderPacketInfo.Type)
  {
  case 143:
  case 142:
   break;

  case 138:
   VAR_2->ICMPv6HeaderPacketInfo.Headers.RouterSoliciationHeader =
    FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.Headers.RouterSoliciationHeader,
    sizeof(ICMPV6_ROUTER_SOLICIATION_HEADER));
   break;

  case 139:
   VAR_2->ICMPv6HeaderPacketInfo.Headers.RouterAdvertisementHeader =
    FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.Headers.RouterAdvertisementHeader,
    sizeof(ICMPV6_ROUTER_ADVERTISEMENT_HEADER));
   break;

  case 140:
   VAR_2->ICMPv6HeaderPacketInfo.Headers.NeighborSoliciationHeader =
    FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.Headers.NeighborSoliciationHeader,
    sizeof(ICMPV6_NEIGHBOR_SOLICIATION_HEADER));
   break;

  case 141:
   VAR_2->ICMPv6HeaderPacketInfo.Headers.NeighborAdvertisementHeader =
    FUNC_0(VAR_0->ICMPv6HeaderPacketInfo.Headers.NeighborAdvertisementHeader,
    sizeof(ICMPV6_NEIGHBOR_ADVERTISEMENT_HEADER));
   break;
  }

  FUNC_1(&VAR_2->ICMPv6HeaderPacketInfo.OptionList,
   &VAR_0->ICMPv6HeaderPacketInfo.OptionList);
  break;

 case 132:

  VAR_2->L4.TCPHeader = FUNC_3(sizeof(TCP_HEADER));
  FUNC_2(VAR_2->L4.TCPHeader, VAR_0->L4.TCPHeader, sizeof(TCP_HEADER));
  break;

 case 131:

  VAR_2->L4.UDPHeader = FUNC_3(sizeof(UDP_HEADER));
  FUNC_2(VAR_2->L4.UDPHeader, VAR_0->L4.UDPHeader, sizeof(UDP_HEADER));
  break;
 }


 VAR_2->TypeL7 = VAR_0->TypeL7;
 switch (VAR_2->TypeL7)
 {
 case 130:

  VAR_2->L7.DHCPv4Header = FUNC_3(sizeof(DHCPV4_HEADER));
  FUNC_2(VAR_2->L7.DHCPv4Header, VAR_0->L7.DHCPv4Header, sizeof(DHCPV4_HEADER));
  break;

 case 128:

  VAR_2->L7.IkeHeader = FUNC_3(sizeof(IKE_HEADER));
  FUNC_2(VAR_2->L7.IkeHeader, VAR_0->L7.IkeHeader, sizeof(IKE_HEADER));
  break;

  case 129:
   FUNC_4(VAR_2->DnsQueryHost, sizeof(VAR_2->DnsQueryHost), VAR_0->DnsQueryHost);
   break;
 }


 VAR_2->MacAddressSrc = VAR_2->MacHeader->SrcAddress;
 VAR_2->MacAddressDest = VAR_2->MacHeader->DestAddress;

 if (VAR_1)
 {

  VAR_2->PacketData = FUNC_3(VAR_0->PacketSize);
  FUNC_2(VAR_2->PacketData, VAR_0->PacketData, VAR_0->PacketSize);
 }

 if (VAR_0->HttpLog != ((void*)0))
 {
  VAR_2->HttpLog = FUNC_0(VAR_0->HttpLog, sizeof(HTTPLOG));
 }

 return VAR_2;
}
