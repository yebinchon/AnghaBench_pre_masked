
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct iphdr {int saddr; int daddr; } ;
struct ethhdr {int* h_dest; int* h_source; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1,
         struct net_device *VAR_2, int VAR_3)
{
 struct ethhdr *VAR_4 = (struct ethhdr *)VAR_1->data;
 struct iphdr *VAR_5 = FUNC_1(VAR_1);

 if (VAR_1->protocol == FUNC_0(VAR_0)) {
  return ((FUNC_2(VAR_5->saddr ^ VAR_5->daddr) & 0xffff) ^
   (VAR_4->h_dest[5] ^ VAR_4->h_source[5])) % VAR_3;
 }

 return (VAR_4->h_dest[5] ^ VAR_4->h_source[5]) % VAR_3;
}
