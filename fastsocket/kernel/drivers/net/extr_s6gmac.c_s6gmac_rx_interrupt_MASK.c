
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct sk_buff {int ip_summed; int protocol; struct net_device* dev; } ;
struct s6gmac {scalar_t__ reg; scalar_t__ rx_skb_o; struct sk_buff** rx_skb; int rx_chan; int rx_dma; scalar_t__ rx_skb_i; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct s6gmac* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_6)
{
 struct s6gmac *VAR_7 = FUNC_2(VAR_6);
 u32 VAR_8;
 struct sk_buff *VAR_9;
 while (((u8)(VAR_7->rx_skb_i - VAR_7->rx_skb_o)) >
   FUNC_5(VAR_7->rx_dma, VAR_7->rx_chan)) {
  VAR_9 = VAR_7->rx_skb[(VAR_7->rx_skb_o++) % VAR_5];
  VAR_8 = FUNC_4(VAR_7->reg + VAR_1);
  if (VAR_8 & (1 << VAR_2)) {
   FUNC_0(VAR_9);
  } else {
   FUNC_6(VAR_9, (VAR_8 >> VAR_3)
    & VAR_4);
   VAR_9->dev = VAR_6;
   VAR_9->protocol = FUNC_1(VAR_9, VAR_6);
   VAR_9->ip_summed = VAR_0;
   FUNC_3(VAR_9);
  }
 }
}
