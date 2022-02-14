
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct rtl8180_tx_ring {int idx; int entries; int queue; struct rtl8180_tx_desc* desc; } ;
struct rtl8180_tx_desc {int flags2; void* flags; int retry_limit; void* frame_len; void* tx_buf; int plcp_len; int rts_duration; } ;
struct rtl8180_priv {int seqno; TYPE_3__* map; int lock; scalar_t__ r8185; int vif; int pdev; struct rtl8180_tx_ring* tx_ring; } ;
struct TYPE_8__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct ieee80211_hdr {int seq_ctrl; } ;
typedef int dma_addr_t ;
typedef int __le16 ;
struct TYPE_12__ {int bitrate; } ;
struct TYPE_11__ {int hw_value; } ;
struct TYPE_10__ {int hw_value; int bitrate; } ;
struct TYPE_9__ {int TX_DMA_POLLING; } ;
struct TYPE_7__ {int flags; int count; int idx; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 TYPE_6__* FUNC_5 (struct ieee80211_hw*,struct ieee80211_tx_info*,int ) ;
 TYPE_5__* FUNC_6 (struct ieee80211_hw*,struct ieee80211_tx_info*) ;
 TYPE_4__* FUNC_7 (struct ieee80211_hw*,struct ieee80211_tx_info*) ;
 int FUNC_8 (struct ieee80211_hw*,int ,int,struct ieee80211_tx_info*) ;
 int FUNC_9 (struct ieee80211_hw*,unsigned int) ;
 int FUNC_10 (int ,scalar_t__,int,int ) ;
 int FUNC_11 (struct rtl8180_priv*,int *,int) ;
 unsigned int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_16(struct ieee80211_hw *VAR_13,
         struct ieee80211_tx_control *VAR_14,
         struct sk_buff *VAR_15)
{
 struct ieee80211_tx_info *VAR_16 = FUNC_1(VAR_15);
 struct ieee80211_hdr *VAR_17 = (struct ieee80211_hdr *)VAR_15->data;
 struct rtl8180_priv *VAR_18 = VAR_13->priv;
 struct rtl8180_tx_ring *VAR_19;
 struct rtl8180_tx_desc *VAR_20;
 unsigned long VAR_21;
 unsigned int VAR_22, VAR_23;
 dma_addr_t VAR_24;
 u32 VAR_25;
 u8 VAR_26;
 u16 VAR_27 = 0;
 __le16 VAR_28 = 0;

 VAR_23 = FUNC_12(VAR_15);
 VAR_19 = &VAR_18->tx_ring[VAR_23];

 VAR_24 = FUNC_10(VAR_18->pdev, VAR_15->data,
     VAR_15->len, VAR_5);

 VAR_25 = VAR_11 | VAR_8 |
     VAR_9 |
     (FUNC_7(VAR_13, VAR_16)->hw_value << 24) |
     VAR_15->len;

 if (VAR_18->r8185)
  VAR_25 |= VAR_7 |
       VAR_10;

 VAR_26 = VAR_16->control.rates[0].flags;
 if (VAR_26 & VAR_4) {
  VAR_25 |= VAR_12;
  VAR_25 |= FUNC_6(VAR_13, VAR_16)->hw_value << 19;
 } else if (VAR_26 & VAR_3) {
  VAR_25 |= VAR_6;
  VAR_25 |= FUNC_6(VAR_13, VAR_16)->hw_value << 19;
 }

 if (VAR_26 & VAR_4)
  VAR_28 = FUNC_8(VAR_13, VAR_18->vif, VAR_15->len,
            VAR_16);

 if (!VAR_18->r8185) {
  unsigned int VAR_29;

  VAR_27 = FUNC_0(16 * (VAR_15->len + 4),
    (FUNC_7(VAR_13, VAR_16)->bitrate * 2) / 10);
  VAR_29 = (16 * (VAR_15->len + 4)) %
       ((FUNC_7(VAR_13, VAR_16)->bitrate * 2) / 10);
  if (VAR_29 <= 6)
   VAR_27 |= 1 << 15;
 }

 FUNC_14(&VAR_18->lock, VAR_21);

 if (VAR_16->flags & VAR_1) {
  if (VAR_16->flags & VAR_2)
   VAR_18->seqno += 0x10;
  VAR_17->seq_ctrl &= FUNC_3(VAR_0);
  VAR_17->seq_ctrl |= FUNC_3(VAR_18->seqno);
 }

 VAR_22 = (VAR_19->idx + FUNC_13(&VAR_19->queue)) % VAR_19->entries;
 VAR_20 = &VAR_19->desc[VAR_22];

 VAR_20->rts_duration = VAR_28;
 VAR_20->plcp_len = FUNC_3(VAR_27);
 VAR_20->tx_buf = FUNC_4(VAR_24);
 VAR_20->frame_len = FUNC_4(VAR_15->len);
 VAR_20->flags2 = VAR_16->control.rates[1].idx >= 0 ?
  FUNC_5(VAR_13, VAR_16, 0)->bitrate << 4 : 0;
 VAR_20->retry_limit = VAR_16->control.rates[0].count;
 VAR_20->flags = FUNC_4(VAR_25);
 FUNC_2(&VAR_19->queue, VAR_15);
 if (VAR_19->entries - FUNC_13(&VAR_19->queue) < 2)
  FUNC_9(VAR_13, VAR_23);

 FUNC_15(&VAR_18->lock, VAR_21);

 FUNC_11(VAR_18, &VAR_18->map->TX_DMA_POLLING, (1 << (VAR_23 + 4)));
}
