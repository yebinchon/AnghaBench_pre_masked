
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rtl8180_tx_desc {int next_tx_desc; } ;
struct rtl8180_priv {TYPE_1__* tx_ring; int pdev; } ;
struct ieee80211_hw {int wiphy; struct rtl8180_priv* priv; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {unsigned int entries; int queue; scalar_t__ idx; scalar_t__ dma; struct rtl8180_tx_desc* desc; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rtl8180_tx_desc*,int ,int) ;
 struct rtl8180_tx_desc* FUNC_2 (int ,int,scalar_t__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3)
{
 struct rtl8180_priv *VAR_4 = VAR_1->priv;
 struct rtl8180_tx_desc *VAR_5;
 dma_addr_t VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_4->pdev, sizeof(*VAR_5) * VAR_3, &VAR_6);
 if (!VAR_5 || (unsigned long)VAR_5 & 0xFF) {
  FUNC_4(VAR_1->wiphy, "Cannot allocate TX ring (prio = %d)\n",
     VAR_2);
  return -VAR_0;
 }

 FUNC_1(VAR_5, 0, sizeof(*VAR_5)*VAR_3);
 VAR_4->tx_ring[VAR_2].desc = VAR_5;
 VAR_4->tx_ring[VAR_2].dma = VAR_6;
 VAR_4->tx_ring[VAR_2].idx = 0;
 VAR_4->tx_ring[VAR_2].entries = VAR_3;
 FUNC_3(&VAR_4->tx_ring[VAR_2].queue);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  VAR_5[VAR_7].next_tx_desc =
   FUNC_0((u32)VAR_6 + ((VAR_7 + 1) % VAR_3) * sizeof(*VAR_5));

 return 0;
}
