
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct mwl8k_vif {scalar_t__ is_hw_crypto_enabled; } ;
struct mwl8k_rx_queue {size_t head; scalar_t__ rxd_count; TYPE_2__* buf; void* rxd; } ;
struct mwl8k_priv {int vif_list; int pdev; int noise; TYPE_1__* rxd_ops; struct mwl8k_rx_queue* rxq; } ;
struct ieee80211_hdr {int frame_control; int addr1; } ;
struct mwl8k_dma_data {int data; struct ieee80211_hdr wh; } ;
struct ieee80211_rx_status {int flag; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
typedef int status ;
typedef int __le16 ;
struct TYPE_5__ {struct sk_buff* skb; } ;
struct TYPE_4__ {int rxd_size; int (* rxd_process ) (void*,struct ieee80211_rx_status*,int *,int *) ;} ;


 int FUNC_0 (struct sk_buff*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_6 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_7 (void*,int ,int) ;
 scalar_t__ FUNC_8 (struct mwl8k_priv*,void*) ;
 struct mwl8k_vif* FUNC_9 (int *,int ) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (void*,struct ieee80211_rx_status*,int *,int *) ;

__attribute__((used)) static int FUNC_15(struct ieee80211_hw *VAR_8, int VAR_9, int VAR_10)
{
 struct mwl8k_priv *VAR_11 = VAR_8->priv;
 struct mwl8k_vif *VAR_12 = ((void*)0);
 struct mwl8k_rx_queue *VAR_13 = VAR_11->rxq + VAR_9;
 int VAR_14;

 VAR_14 = 0;
 while (VAR_13->rxd_count && VAR_10--) {
  struct sk_buff *VAR_15;
  void *VAR_16;
  int VAR_17;
  struct ieee80211_rx_status VAR_18;
  struct ieee80211_hdr *VAR_19;
  __le16 VAR_20;

  VAR_15 = VAR_13->buf[VAR_13->head].skb;
  if (VAR_15 == ((void*)0))
   break;

  VAR_16 = VAR_13->rxd + (VAR_13->head * VAR_11->rxd_ops->rxd_size);

  VAR_17 = VAR_11->rxd_ops->rxd_process(VAR_16, &VAR_18, &VAR_20,
       &VAR_11->noise);
  if (VAR_17 < 0)
   break;

  VAR_13->buf[VAR_13->head].skb = ((void*)0);

  FUNC_12(VAR_11->pdev,
     FUNC_1(&VAR_13->buf[VAR_13->head], VAR_7),
     VAR_1, VAR_2);
  FUNC_2(&VAR_13->buf[VAR_13->head], VAR_7, 0);

  VAR_13->head++;
  if (VAR_13->head == VAR_0)
   VAR_13->head = 0;

  VAR_13->rxd_count--;

  VAR_19 = &((struct mwl8k_dma_data *)VAR_15->data)->wh;






  if (FUNC_8(VAR_11, (void *)VAR_15->data))
   FUNC_11(VAR_8, VAR_15);

  if (FUNC_3(VAR_19->frame_control)) {





   VAR_12 = FUNC_9(&VAR_11->vif_list,
        VAR_19->addr1);

   if (VAR_12 != ((void*)0) &&
       VAR_12->is_hw_crypto_enabled) {
    if (VAR_18.flag & VAR_5) {
     struct mwl8k_dma_data *VAR_21;
     VAR_21 = (struct mwl8k_dma_data *)VAR_15->data;
     FUNC_7((void *)&(VAR_21->data), 0, 4);
     VAR_17 += 4;
    }

    if (!FUNC_4(VAR_19->frame_control))
     VAR_18.flag |= VAR_4 |
             VAR_3 |
             VAR_6;
   }
  }

  FUNC_13(VAR_15, VAR_17);
  FUNC_10(VAR_15, VAR_20);
  FUNC_6(FUNC_0(VAR_15), &VAR_18, sizeof(VAR_18));
  FUNC_5(VAR_8, VAR_15);

  VAR_14++;
 }

 return VAR_14;
}
