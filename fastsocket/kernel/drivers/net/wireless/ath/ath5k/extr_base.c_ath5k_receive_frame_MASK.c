
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_rx_status {size_t band; int antenna; size_t rate_idx; int flag; scalar_t__ signal; int freq; int mactime; } ;
struct ath5k_rx_status {int rs_status; int rs_antenna; scalar_t__ rs_rate; scalar_t__ rs_rssi; int rs_tstamp; } ;
struct TYPE_5__ {int * antenna_rx; } ;
struct ath5k_hw {scalar_t__ opmode; int hw; TYPE_4__* curchan; TYPE_3__* sbands; TYPE_1__ stats; scalar_t__ ah_noise_floor; } ;
struct TYPE_8__ {size_t band; int center_freq; } ;
struct TYPE_7__ {TYPE_2__* bitrates; } ;
struct TYPE_6__ {scalar_t__ hw_value_short; } ;


 int VAR_0 ;
 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath5k_hw*,struct sk_buff*,struct ieee80211_rx_status*) ;
 int FUNC_2 (struct ath5k_hw*,int ) ;
 size_t FUNC_3 (struct ath5k_hw*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct ath5k_hw*,struct sk_buff*,struct ath5k_rx_status*) ;
 int FUNC_6 (struct ath5k_hw*,struct sk_buff*,scalar_t__) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 int FUNC_8 (struct ath5k_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void
FUNC_10(struct ath5k_hw *VAR_5, struct sk_buff *VAR_6,
      struct ath5k_rx_status *VAR_7)
{
 struct ieee80211_rx_status *VAR_8;

 FUNC_4(VAR_6);

 VAR_8 = FUNC_0(VAR_6);

 VAR_8->flag = 0;
 if (FUNC_9(VAR_7->rs_status & VAR_0))
  VAR_8->flag |= VAR_3;
 VAR_8->mactime = FUNC_2(VAR_5, VAR_7->rs_tstamp);
 VAR_8->flag |= VAR_2;

 VAR_8->freq = VAR_5->curchan->center_freq;
 VAR_8->band = VAR_5->curchan->band;

 VAR_8->signal = VAR_5->ah_noise_floor + VAR_7->rs_rssi;

 VAR_8->antenna = VAR_7->rs_antenna;

 if (VAR_7->rs_antenna > 0 && VAR_7->rs_antenna < 5)
  VAR_5->stats.antenna_rx[VAR_7->rs_antenna]++;
 else
  VAR_5->stats.antenna_rx[0]++;

 VAR_8->rate_idx = FUNC_3(VAR_5, VAR_7->rs_rate);
 VAR_8->flag |= FUNC_5(VAR_5, VAR_6, VAR_7);

 if (VAR_8->rate_idx >= 0 && VAR_7->rs_rate ==
     VAR_5->sbands[VAR_5->curchan->band].bitrates[VAR_8->rate_idx].hw_value_short)
  VAR_8->flag |= VAR_4;

 FUNC_8(VAR_5, VAR_6);

 FUNC_6(VAR_5, VAR_6, VAR_7->rs_rssi);


 if (VAR_5->opmode == VAR_1)
  FUNC_1(VAR_5, VAR_6, VAR_8);

 FUNC_7(VAR_5->hw, VAR_6);
}
