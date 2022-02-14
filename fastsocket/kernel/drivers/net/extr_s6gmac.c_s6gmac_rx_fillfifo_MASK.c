
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct s6gmac {int io; int rx_chan; int rx_dma; scalar_t__ rx_skb_i; struct sk_buff** rx_skb; scalar_t__ rx_skb_o; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct s6gmac *VAR_2)
{
 struct sk_buff *VAR_3;
 while ((((u8)(VAR_2->rx_skb_i - VAR_2->rx_skb_o)) < VAR_1)
   && (!FUNC_1(VAR_2->rx_dma, VAR_2->rx_chan))
   && (VAR_3 = FUNC_0(VAR_0 + 2))) {
  VAR_2->rx_skb[(VAR_2->rx_skb_i++) % VAR_1] = VAR_3;
  FUNC_2(VAR_2->rx_dma, VAR_2->rx_chan,
   VAR_2->io, (u32)VAR_3->data, VAR_0);
 }
}
