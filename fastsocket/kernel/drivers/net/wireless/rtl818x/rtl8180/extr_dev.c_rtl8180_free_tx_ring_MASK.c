
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct rtl8180_tx_ring {size_t idx; int entries; struct rtl8180_tx_desc* desc; int dma; int queue; } ;
struct rtl8180_tx_desc {int tx_buf; } ;
struct rtl8180_priv {int pdev; struct rtl8180_tx_ring* tx_ring; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,struct rtl8180_tx_desc*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1, unsigned int VAR_2)
{
 struct rtl8180_priv *VAR_3 = VAR_1->priv;
 struct rtl8180_tx_ring *VAR_4 = &VAR_3->tx_ring[VAR_2];

 while (FUNC_5(&VAR_4->queue)) {
  struct rtl8180_tx_desc *VAR_5 = &VAR_4->desc[VAR_4->idx];
  struct sk_buff *VAR_6 = FUNC_0(&VAR_4->queue);

  FUNC_4(VAR_3->pdev, FUNC_2(VAR_5->tx_buf),
     VAR_6->len, VAR_0);
  FUNC_1(VAR_6);
  VAR_4->idx = (VAR_4->idx + 1) % VAR_4->entries;
 }

 FUNC_3(VAR_3->pdev, sizeof(*VAR_4->desc)*VAR_4->entries,
       VAR_4->desc, VAR_4->dma);
 VAR_4->desc = ((void*)0);
}
