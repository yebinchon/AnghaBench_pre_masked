
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ipv6hdr {scalar_t__ nexthdr; } ;
struct ipv6_opt_hdr {int hdrlen; } ;
struct ethhdr {scalar_t__ h_proto; } ;


 scalar_t__ ETH_HLEN ;
 int ETH_P_IPV6 ;
 scalar_t__ NEXTHDR_TCP ;
 scalar_t__ NEXTHDR_UDP ;
 scalar_t__ htons (int ) ;

__attribute__((used)) static bool be_ipv6_exthdr_check(struct sk_buff *skb)
{
 struct ethhdr *eh = (struct ethhdr *)skb->data;
 u16 offset = ETH_HLEN;

 if (eh->h_proto == htons(ETH_P_IPV6)) {
  struct ipv6hdr *ip6h = (struct ipv6hdr *)(skb->data + offset);

  offset += sizeof(struct ipv6hdr);
  if (ip6h->nexthdr != NEXTHDR_TCP &&
      ip6h->nexthdr != NEXTHDR_UDP) {
   struct ipv6_opt_hdr *ehdr =
    (struct ipv6_opt_hdr *) (skb->data + offset);


   if (ehdr->hdrlen == 0xff)
    return 1;
  }
 }
 return 0;
}
