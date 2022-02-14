
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ethhdr {int* h_dest; int* h_source; } ;



__attribute__((used)) static int FUNC_0(struct sk_buff *VAR_0,
       struct net_device *VAR_1, int VAR_2)
{
 struct ethhdr *VAR_3 = (struct ethhdr *)VAR_0->data;

 return (VAR_3->h_dest[5] ^ VAR_3->h_source[5]) % VAR_2;
}
