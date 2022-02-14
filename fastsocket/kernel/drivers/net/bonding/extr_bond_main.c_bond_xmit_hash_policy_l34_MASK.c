
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int protocol; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct iphdr {int ihl; int frag_off; scalar_t__ protocol; int saddr; int daddr; } ;
struct ethhdr {int* h_dest; int* h_source; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5,
        struct net_device *VAR_6, int VAR_7)
{
 struct ethhdr *VAR_8 = (struct ethhdr *)VAR_5->data;
 struct iphdr *VAR_9 = FUNC_1(VAR_5);
 __be16 *VAR_10 = (__be16 *)((u32 *)VAR_9 + VAR_9->ihl);
 int VAR_11 = 0;

 if (VAR_5->protocol == FUNC_0(VAR_0)) {
  if (!(VAR_9->frag_off & FUNC_0(VAR_3|VAR_4)) &&
      (VAR_9->protocol == VAR_1 ||
       VAR_9->protocol == VAR_2)) {
   VAR_11 = FUNC_3((*VAR_10 ^ *(VAR_10 + 1)));
  }
  return (VAR_11 ^
   ((FUNC_2(VAR_9->saddr ^ VAR_9->daddr)) & 0xffff)) % VAR_7;

 }

 return (VAR_8->h_dest[5] ^ VAR_8->h_source[5]) % VAR_7;
}
