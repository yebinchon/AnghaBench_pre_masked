
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct rtl8180_priv {int * rx_ring; int rx_ring_dma; int pdev; struct sk_buff** rx_buf; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl8180_priv *VAR_3 = VAR_2->priv;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  struct sk_buff *VAR_5 = VAR_3->rx_buf[VAR_4];
  if (!VAR_5)
   continue;

  FUNC_2(VAR_3->pdev,
     *((dma_addr_t *)VAR_5->cb),
     VAR_0, VAR_1);
  FUNC_0(VAR_5);
 }

 FUNC_1(VAR_3->pdev, sizeof(*VAR_3->rx_ring) * 32,
       VAR_3->rx_ring, VAR_3->rx_ring_dma);
 VAR_3->rx_ring = ((void*)0);
}
