
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_vnet_hdr {int dummy; } ;
struct sk_buff {scalar_t__ cb; } ;



__attribute__((used)) static inline struct skb_vnet_hdr *FUNC_0(struct sk_buff *VAR_0)
{
 return (struct skb_vnet_hdr *)VAR_0->cb;
}
