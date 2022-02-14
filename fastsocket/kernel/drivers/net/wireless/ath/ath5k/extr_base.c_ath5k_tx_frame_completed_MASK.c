
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; } ;
struct ieee80211_tx_rate {int idx; int count; } ;
struct TYPE_3__ {struct ieee80211_tx_rate* rates; int ack_signal; } ;
struct ieee80211_tx_info {TYPE_1__ status; int flags; } ;
struct ath5k_txq {int dummy; } ;
struct ath5k_tx_status {int ts_final_idx; int ts_status; int ts_antenna; int ts_rssi; int ts_final_retry; } ;
struct TYPE_4__ {int * antenna_tx; int txerr_fifo; int txerr_retry; int txerr_filt; int ack_fail; int tx_bytes_count; int tx_all_count; } ;
struct ath5k_hw {int hw; TYPE_2__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_tx_info*) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int FUNC_4 (struct ath5k_hw*,struct sk_buff*,struct ath5k_txq*,struct ath5k_tx_status*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct ath5k_hw *VAR_5, struct sk_buff *VAR_6,
    struct ath5k_txq *VAR_7, struct ath5k_tx_status *VAR_8)
{
 struct ieee80211_tx_info *VAR_9;
 u8 VAR_10[3];
 int VAR_11;

 VAR_5->stats.tx_all_count++;
 VAR_5->stats.tx_bytes_count += VAR_6->len;
 VAR_9 = FUNC_0(VAR_6);

 VAR_10[0] = VAR_9->status.rates[0].count;
 VAR_10[1] = VAR_9->status.rates[1].count;
 VAR_10[2] = VAR_9->status.rates[2].count;

 FUNC_2(VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_8->ts_final_idx; VAR_11++) {
  struct ieee80211_tx_rate *VAR_12 =
   &VAR_9->status.rates[VAR_11];

  VAR_12->count = VAR_10[VAR_11];
 }

 VAR_9->status.rates[VAR_8->ts_final_idx].count = VAR_8->ts_final_retry;
 VAR_9->status.rates[VAR_8->ts_final_idx + 1].idx = -1;

 if (FUNC_5(VAR_8->ts_status)) {
  VAR_5->stats.ack_fail++;
  if (VAR_8->ts_status & VAR_1) {
   VAR_9->flags |= VAR_4;
   VAR_5->stats.txerr_filt++;
  }
  if (VAR_8->ts_status & VAR_2)
   VAR_5->stats.txerr_retry++;
  if (VAR_8->ts_status & VAR_0)
   VAR_5->stats.txerr_fifo++;
 } else {
  VAR_9->flags |= VAR_3;
  VAR_9->status.ack_signal = VAR_8->ts_rssi;


  VAR_9->status.rates[VAR_8->ts_final_idx].count++;
 }





 FUNC_1(VAR_6);

 if (VAR_8->ts_antenna > 0 && VAR_8->ts_antenna < 5)
  VAR_5->stats.antenna_tx[VAR_8->ts_antenna]++;
 else
  VAR_5->stats.antenna_tx[0]++;

 FUNC_4(VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_3(VAR_5->hw, VAR_6);
}
