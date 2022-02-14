
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
typedef unsigned int u16 ;
struct sk_buff {unsigned int len; int data; } ;
struct TYPE_11__ {TYPE_4__* rates; int vif; TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_5__ control; } ;
struct ieee80211_rate {unsigned int hw_value_short; unsigned int hw_value; } ;
struct ath5k_txq {int lock; int qnum; scalar_t__* link; int txq_len; int q; } ;
struct TYPE_9__ {scalar_t__ cap_has_mrr_support; } ;
struct TYPE_8__ {int txp_requested; } ;
struct ath5k_hw {int (* ah_setup_tx_desc ) (struct ath5k_hw*,struct ath5k_desc*,unsigned int,int ,int,int ,int,unsigned int,unsigned int,unsigned int,int ,unsigned int,unsigned int,unsigned int) ;int dev; int hw; TYPE_3__ ah_capabilities; int ah_tx_ant; TYPE_2__ ah_txpower; } ;
struct ath5k_desc {scalar_t__ ds_link; int ds_data; } ;
struct ath5k_buf {int skbaddr; scalar_t__ daddr; int list; struct sk_buff* skb; struct ath5k_desc* desc; } ;
typedef int mrr_tries ;
typedef int mrr_rate ;
struct TYPE_12__ {unsigned int hw_value; } ;
struct TYPE_10__ {int flags; unsigned int count; } ;
struct TYPE_7__ {unsigned int hw_key_idx; scalar_t__ icv_len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ath5k_hw*,int ,scalar_t__) ;
 int FUNC_2 (struct ath5k_hw*,struct ath5k_desc*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (struct ath5k_hw*,int ) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 int FUNC_5 (int ,int ,unsigned int,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ,unsigned int,struct ieee80211_tx_info*) ;
 struct ieee80211_rate* FUNC_8 (int ,struct ieee80211_tx_info*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 TYPE_6__* FUNC_10 (int ,struct ieee80211_tx_info*) ;
 struct ieee80211_rate* FUNC_11 (int ,struct ieee80211_tx_info*) ;
 int FUNC_12 (int ,int ,unsigned int,struct ieee80211_tx_info*) ;
 unsigned int FUNC_13 (int ) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (unsigned int*,int ,int) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct ath5k_hw*,struct ath5k_desc*,unsigned int,int ,int,int ,int,unsigned int,unsigned int,unsigned int,int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_20(struct ath5k_hw *VAR_12, struct ath5k_buf *VAR_13,
    struct ath5k_txq *VAR_14, int VAR_15)
{
 struct ath5k_desc *VAR_16 = VAR_13->desc;
 struct sk_buff *VAR_17 = VAR_13->skb;
 struct ieee80211_tx_info *VAR_18 = FUNC_0(VAR_17);
 unsigned int VAR_19, VAR_20, VAR_21 = VAR_5;
 struct ieee80211_rate *VAR_22;
 unsigned int VAR_23[3], VAR_24[3];
 int VAR_25, VAR_26;
 u16 VAR_27;
 u16 VAR_28 = 0;
 u16 VAR_29 = 0;
 u8 VAR_30;

 VAR_20 = VAR_2 | VAR_0;


 VAR_13->skbaddr = FUNC_4(VAR_12->dev, VAR_17->data, VAR_17->len,
   VAR_6);

 VAR_22 = FUNC_11(VAR_12->hw, VAR_18);
 if (!VAR_22) {
  VAR_26 = -VAR_7;
  goto err_unmap;
 }

 if (VAR_18->flags & VAR_8)
  VAR_20 |= VAR_3;

 VAR_30 = VAR_18->control.rates[0].flags;
 VAR_27 = (VAR_30 & VAR_11) ?
  VAR_22->hw_value_short : VAR_22->hw_value;

 VAR_19 = VAR_17->len;




 if (VAR_18->control.hw_key) {
  VAR_21 = VAR_18->control.hw_key->hw_key_idx;
  VAR_19 += VAR_18->control.hw_key->icv_len;
 }
 if (VAR_30 & VAR_10) {
  VAR_20 |= VAR_4;
  VAR_28 = FUNC_10(VAR_12->hw, VAR_18)->hw_value;
  VAR_29 = FUNC_13(FUNC_12(VAR_12->hw,
   VAR_18->control.vif, VAR_19, VAR_18));
 }
 if (VAR_30 & VAR_9) {
  VAR_20 |= VAR_1;
  VAR_28 = FUNC_10(VAR_12->hw, VAR_18)->hw_value;
  VAR_29 = FUNC_13(FUNC_7(VAR_12->hw,
   VAR_18->control.vif, VAR_19, VAR_18));
 }
 VAR_26 = VAR_12->ah_setup_tx_desc(VAR_12, VAR_16, VAR_19,
  FUNC_9(VAR_17), VAR_15,
  FUNC_6(VAR_17),
  (VAR_12->ah_txpower.txp_requested * 2),
  VAR_27,
  VAR_18->control.rates[0].count, VAR_21, VAR_12->ah_tx_ant, VAR_20,
  VAR_28, VAR_29);
 if (VAR_26)
  goto err_unmap;


 if (VAR_12->ah_capabilities.cap_has_mrr_support) {
  FUNC_15(VAR_23, 0, sizeof(VAR_23));
  FUNC_15(VAR_24, 0, sizeof(VAR_24));
  for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
   VAR_22 = FUNC_8(VAR_12->hw, VAR_18, VAR_25);
   if (!VAR_22)
    break;

   VAR_23[VAR_25] = VAR_22->hw_value;
   VAR_24[VAR_25] = VAR_18->control.rates[VAR_25 + 1].count;
  }

  FUNC_2(VAR_12, VAR_16,
   VAR_23[0], VAR_24[0],
   VAR_23[1], VAR_24[1],
   VAR_23[2], VAR_24[2]);
 }

 VAR_16->ds_link = 0;
 VAR_16->ds_data = VAR_13->skbaddr;

 FUNC_17(&VAR_14->lock);
 FUNC_14(&VAR_13->list, &VAR_14->q);
 VAR_14->txq_len++;
 if (VAR_14->link == ((void*)0))
  FUNC_1(VAR_12, VAR_14->qnum, VAR_13->daddr);
 else
  *VAR_14->link = VAR_13->daddr;

 VAR_14->link = &VAR_16->ds_link;
 FUNC_3(VAR_12, VAR_14->qnum);
 FUNC_16();
 FUNC_18(&VAR_14->lock);

 return 0;
err_unmap:
 FUNC_5(VAR_12->dev, VAR_13->skbaddr, VAR_17->len, VAR_6);
 return VAR_26;
}
