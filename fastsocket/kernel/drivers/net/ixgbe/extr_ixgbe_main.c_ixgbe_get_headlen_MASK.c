
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
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(unsigned char *VAR_10,
          unsigned int VAR_11)
{
 union {
  unsigned char *network;

  struct ethhdr *eth;
  struct vlan_hdr *vlan;

  struct iphdr *ipv4;
  struct ipv6hdr *ipv6;
 } VAR_12;
 __be16 VAR_13;
 u8 VAR_14 = 0;
 u8 VAR_15;


 if (VAR_11 < VAR_0)
  return VAR_11;


 VAR_12.network = VAR_10;


 VAR_13 = VAR_12.eth->h_proto;
 VAR_12.network += VAR_0;


 if (VAR_13 == FUNC_0(VAR_1)) {
  if ((VAR_12.network - VAR_10) > (VAR_11 - VAR_9))
   return VAR_11;

  VAR_13 = VAR_12.vlan->h_vlan_encapsulated_proto;
  VAR_12.network += VAR_9;
 }


 if (VAR_13 == FUNC_0(VAR_3)) {
  if ((VAR_12.network - VAR_10) > (VAR_11 - sizeof(struct iphdr)))
   return VAR_11;


  VAR_15 = (VAR_12.network[0] & 0x0F) << 2;


  if (VAR_15 < sizeof(struct iphdr))
   return VAR_12.network - VAR_10;


  if (!(VAR_12.ipv4->frag_off & FUNC_1(VAR_8)))
   VAR_14 = VAR_12.ipv4->protocol;
 } else if (VAR_13 == FUNC_0(VAR_4)) {
  if ((VAR_12.network - VAR_10) > (VAR_11 - sizeof(struct ipv6hdr)))
   return VAR_11;


  VAR_14 = VAR_12.ipv6->nexthdr;
  VAR_15 = sizeof(struct ipv6hdr);






 } else {
  return VAR_12.network - VAR_10;
 }


 VAR_12.network += VAR_15;


 if (VAR_14 == VAR_6) {
  if ((VAR_12.network - VAR_10) > (VAR_11 - sizeof(struct tcphdr)))
   return VAR_11;


  VAR_15 = (VAR_12.network[12] & 0xF0) >> 2;


  if (VAR_15 < sizeof(struct tcphdr))
   return VAR_12.network - VAR_10;

  VAR_12.network += VAR_15;
 } else if (VAR_14 == VAR_7) {
  if ((VAR_12.network - VAR_10) > (VAR_11 - sizeof(struct udphdr)))
   return VAR_11;

  VAR_12.network += sizeof(struct udphdr);
 }







 if ((VAR_12.network - VAR_10) < VAR_11)
  return VAR_12.network - VAR_10;
 else
  return VAR_11;
}
