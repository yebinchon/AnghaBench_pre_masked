
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vlan_hdr {scalar_t__ h_vlan_encapsulated_proto; } ;
struct udphdr {int dummy; } ;
struct tcphdr {int dummy; } ;
struct ipv6hdr {int nexthdr; } ;
struct iphdr {int frag_off; int protocol; } ;
struct ethhdr {scalar_t__ h_proto; } ;
typedef scalar_t__ __be16 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned char *VAR_8,
        unsigned int VAR_9)
{
 union {
  unsigned char *network;

  struct ethhdr *eth;
  struct vlan_hdr *vlan;

  struct iphdr *ipv4;
  struct ipv6hdr *ipv6;
 } VAR_10;
 __be16 VAR_11;
 u8 VAR_12 = 0;
 u8 VAR_13;


 if (VAR_9 < VAR_0)
  return VAR_9;


 VAR_10.network = VAR_8;


 VAR_11 = VAR_10.eth->h_proto;
 VAR_10.network += VAR_0;


 if (VAR_11 == FUNC_0(VAR_1)) {
  if ((VAR_10.network - VAR_8) > (VAR_9 - VAR_7))
   return VAR_9;

  VAR_11 = VAR_10.vlan->h_vlan_encapsulated_proto;
  VAR_10.network += VAR_7;
 }


 if (VAR_11 == FUNC_0(VAR_2)) {
  if ((VAR_10.network - VAR_8) > (VAR_9 - sizeof(struct iphdr)))
   return VAR_9;


  VAR_13 = (VAR_10.network[0] & 0x0F) << 2;


  if (VAR_13 < sizeof(struct iphdr))
   return VAR_10.network - VAR_8;


  if (!(VAR_10.ipv4->frag_off & FUNC_1(VAR_6)))
   VAR_12 = VAR_10.ipv4->protocol;
 } else if (VAR_11 == FUNC_0(VAR_3)) {
  if ((VAR_10.network - VAR_8) > (VAR_9 - sizeof(struct ipv6hdr)))
   return VAR_9;


  VAR_12 = VAR_10.ipv6->nexthdr;
  VAR_13 = sizeof(struct ipv6hdr);
 } else {
  return VAR_10.network - VAR_8;
 }


 VAR_10.network += VAR_13;


 if (VAR_12 == VAR_4) {
  if ((VAR_10.network - VAR_8) > (VAR_9 - sizeof(struct tcphdr)))
   return VAR_9;


  VAR_13 = (VAR_10.network[12] & 0xF0) >> 2;


  if (VAR_13 < sizeof(struct tcphdr))
   return VAR_10.network - VAR_8;

  VAR_10.network += VAR_13;
 } else if (VAR_12 == VAR_5) {
  if ((VAR_10.network - VAR_8) > (VAR_9 - sizeof(struct udphdr)))
   return VAR_9;

  VAR_10.network += sizeof(struct udphdr);
 }






 if ((VAR_10.network - VAR_8) < VAR_9)
  return VAR_10.network - VAR_8;
 else
  return VAR_9;
}
