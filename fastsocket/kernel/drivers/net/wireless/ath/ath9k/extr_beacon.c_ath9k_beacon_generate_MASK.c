
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


struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_12__ {TYPE_5__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_6__ control; } ;
struct TYPE_8__ {int timestamp; } ;
struct TYPE_9__ {TYPE_2__ beacon; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ieee80211_hdr {int seq_ctrl; } ;
struct ath_vif {int tsf_adjust; struct ath_buf* av_bcbuf; } ;
struct ath_txq {int axq_depth; int axq_lock; } ;
struct TYPE_10__ {int seq_no; } ;
struct TYPE_7__ {struct ath_txq* cabq; } ;
struct ath_softc {int nvifs; int dev; TYPE_4__ tx; TYPE_1__ beacon; int sc_ah; } ;
struct ath_common {int dummy; } ;
struct ath_buf {scalar_t__ bf_buf_addr; struct sk_buff* bf_mpdu; } ;
struct TYPE_11__ {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct ath_softc*,struct ieee80211_vif*,struct ath_buf*,int ) ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;
 int FUNC_5 (struct ath_softc*,struct ath_txq*) ;
 int FUNC_6 (struct ath_common*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int ,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__,int ,int ) ;
 struct sk_buff* FUNC_12 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct sk_buff* FUNC_13 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static struct ath_buf *FUNC_17(struct ieee80211_hw *VAR_4,
          struct ieee80211_vif *VAR_5)
{
 struct ath_softc *VAR_6 = VAR_4->priv;
 struct ath_common *VAR_7 = FUNC_2(VAR_6->sc_ah);
 struct ath_buf *VAR_8;
 struct ath_vif *VAR_9 = (void *)VAR_5->drv_priv;
 struct sk_buff *VAR_10;
 struct ath_txq *VAR_11 = VAR_6->beacon.cabq;
 struct ieee80211_tx_info *VAR_12;
 struct ieee80211_mgmt *VAR_13;
 int VAR_14;

 if (VAR_9->av_bcbuf == ((void*)0))
  return ((void*)0);

 VAR_8 = VAR_9->av_bcbuf;
 VAR_10 = VAR_8->bf_mpdu;
 if (VAR_10) {
  FUNC_11(VAR_6->dev, VAR_8->bf_buf_addr,
     VAR_10->len, VAR_1);
  FUNC_8(VAR_10);
  VAR_8->bf_buf_addr = 0;
  VAR_8->bf_mpdu = ((void*)0);
 }

 VAR_10 = FUNC_12(VAR_4, VAR_5);
 if (VAR_10 == ((void*)0))
  return ((void*)0);

 VAR_8->bf_mpdu = VAR_10;

 VAR_13 = (struct ieee80211_mgmt *)VAR_10->data;
 VAR_13->u.beacon.timestamp = VAR_9->tsf_adjust;

 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12->flags & VAR_3) {




  struct ieee80211_hdr *VAR_15 = (struct ieee80211_hdr *)VAR_10->data;
  VAR_6->tx.seq_no += 0x10;
  VAR_15->seq_ctrl &= FUNC_7(VAR_2);
  VAR_15->seq_ctrl |= FUNC_7(VAR_6->tx.seq_no);
 }

 VAR_8->bf_buf_addr = FUNC_9(VAR_6->dev, VAR_10->data,
      VAR_10->len, VAR_1);
 if (FUNC_16(FUNC_10(VAR_6->dev, VAR_8->bf_buf_addr))) {
  FUNC_8(VAR_10);
  VAR_8->bf_mpdu = ((void*)0);
  VAR_8->bf_buf_addr = 0;
  FUNC_6(VAR_7, "dma_mapping_error on beaconing\n");
  return ((void*)0);
 }

 VAR_10 = FUNC_13(VAR_4, VAR_5);
 FUNC_14(&VAR_11->axq_lock);
 VAR_14 = VAR_11->axq_depth;
 FUNC_15(&VAR_11->axq_lock);

 if (VAR_10 && VAR_14) {
  if (VAR_6->nvifs > 1) {
   FUNC_4(VAR_7, VAR_0,
    "Flushing previous cabq traffic\n");
   FUNC_5(VAR_6, VAR_11);
  }
 }

 FUNC_1(VAR_6, VAR_5, VAR_8, VAR_12->control.rates[0].idx);

 while (VAR_10) {
  FUNC_3(VAR_4, VAR_10);
  VAR_10 = FUNC_13(VAR_4, VAR_5);
 }

 return VAR_8;
}
