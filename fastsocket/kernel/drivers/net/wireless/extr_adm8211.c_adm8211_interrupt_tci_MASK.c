
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int cb; int len; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_tx_ring_info {struct sk_buff* skb; int hdrlen; int mapping; } ;
struct adm8211_tx_hdr {int dummy; } ;
struct adm8211_priv {unsigned int dirty_tx; unsigned int cur_tx; unsigned int tx_ring_size; int lock; int pdev; struct adm8211_tx_ring_info* tx_buffers; TYPE_1__* tx_ring; } ;
struct TYPE_2__ {int status; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211_tx_info*) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_6)
{
 struct adm8211_priv *VAR_7 = VAR_6->priv;
 unsigned int VAR_8;

 FUNC_9(&VAR_7->lock);

 for (VAR_8 = VAR_7->dirty_tx; VAR_7->cur_tx - VAR_8; VAR_8++) {
  unsigned int VAR_9 = VAR_8 % VAR_7->tx_ring_size;
  u32 VAR_10 = FUNC_4(VAR_7->tx_ring[VAR_9].status);
  struct ieee80211_tx_info *VAR_11;
  struct adm8211_tx_ring_info *VAR_12;
  struct sk_buff *VAR_13;

  if (VAR_10 & VAR_4 ||
      !(VAR_10 & VAR_3))
   break;

  VAR_12 = &VAR_7->tx_buffers[VAR_9];
  VAR_13 = VAR_12->skb;
  VAR_11 = FUNC_0(VAR_13);



  FUNC_6(VAR_7->pdev, VAR_12->mapping,
     VAR_12->skb->len, VAR_2);

  FUNC_1(VAR_11);

  FUNC_7(VAR_13, sizeof(struct adm8211_tx_hdr));
  FUNC_5(FUNC_8(VAR_13, VAR_12->hdrlen), VAR_13->cb, VAR_12->hdrlen);
  if (!(VAR_11->flags & VAR_0) &&
      !(VAR_10 & VAR_5))
   VAR_11->flags |= VAR_1;

  FUNC_2(VAR_6, VAR_13);

  VAR_12->skb = ((void*)0);
 }

 if (VAR_7->cur_tx - VAR_8 < VAR_7->tx_ring_size - 2)
  FUNC_3(VAR_6, 0);

 VAR_7->dirty_tx = VAR_8;
 FUNC_10(&VAR_7->lock);
}
