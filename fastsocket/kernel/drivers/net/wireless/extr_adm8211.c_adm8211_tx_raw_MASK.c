
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {unsigned int cur_tx; int dirty_tx; int tx_ring_size; int lock; TYPE_2__* tx_ring; TYPE_1__* tx_buffers; int pdev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {void* status; void* length; void* buffer1; } ;
struct TYPE_3__ {int mapping; size_t hdrlen; struct sk_buff* skb; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_7, struct sk_buff *VAR_8,
      u16 VAR_9,
      size_t VAR_10)
{
 struct adm8211_priv *VAR_11 = VAR_7->priv;
 unsigned long VAR_12;
 dma_addr_t VAR_13;
 unsigned int VAR_14;
 u32 VAR_15;

 VAR_13 = FUNC_3(VAR_11->pdev, VAR_8->data, VAR_8->len,
     VAR_0);

 FUNC_4(&VAR_11->lock, VAR_12);

 if (VAR_11->cur_tx - VAR_11->dirty_tx == VAR_11->tx_ring_size / 2)
  VAR_15 = VAR_3 | VAR_4 | VAR_2;
 else
  VAR_15 = VAR_4 | VAR_2;

 if (VAR_11->cur_tx - VAR_11->dirty_tx == VAR_11->tx_ring_size - 2)
  FUNC_2(VAR_7, 0);

 VAR_14 = VAR_11->cur_tx % VAR_11->tx_ring_size;

 VAR_11->tx_buffers[VAR_14].skb = VAR_8;
 VAR_11->tx_buffers[VAR_14].mapping = VAR_13;
 VAR_11->tx_buffers[VAR_14].hdrlen = VAR_10;
 VAR_11->tx_ring[VAR_14].buffer1 = FUNC_1(VAR_13);

 if (VAR_14 == VAR_11->tx_ring_size - 1)
  VAR_15 |= VAR_5;
 VAR_11->tx_ring[VAR_14].length = FUNC_1(VAR_15 | VAR_8->len);


 VAR_15 = VAR_1 | (VAR_9 << 20) | 8 ;
 VAR_11->tx_ring[VAR_14].status = FUNC_1(VAR_15);

 VAR_11->cur_tx++;

 FUNC_5(&VAR_11->lock, VAR_12);


 FUNC_0(VAR_6, 0);
}
