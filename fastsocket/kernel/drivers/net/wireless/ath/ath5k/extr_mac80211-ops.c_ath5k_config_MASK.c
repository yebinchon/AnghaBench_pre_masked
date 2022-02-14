
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int chan; } ;
struct ieee80211_conf {int power_level; int short_frame_max_tx_count; int long_frame_max_tx_count; TYPE_1__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct ath5k_hw* priv; } ;
struct TYPE_7__ {int q_tx_num; } ;
struct TYPE_8__ {TYPE_3__ cap_queues; } ;
struct TYPE_6__ {int txp_requested; } ;
struct ath5k_hw {int lock; int ah_ant_mode; TYPE_4__ ah_capabilities; int ah_retry_short; int ah_retry_long; TYPE_2__ ah_txpower; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;
 int FUNC_1 (struct ath5k_hw*,int ) ;
 int FUNC_2 (struct ath5k_hw*,int) ;
 int FUNC_3 (struct ath5k_hw*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_hw *VAR_3, u32 VAR_4)
{
 struct ath5k_hw *VAR_5 = VAR_3->priv;
 struct ieee80211_conf *VAR_6 = &VAR_3->conf;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_4(&VAR_5->lock);

 if (VAR_4 & VAR_0) {
  VAR_7 = FUNC_0(VAR_5, VAR_6->chandef.chan);
  if (VAR_7 < 0)
   goto unlock;
 }

 if ((VAR_4 & VAR_1) &&
 (VAR_5->ah_txpower.txp_requested != VAR_6->power_level)) {
  VAR_5->ah_txpower.txp_requested = VAR_6->power_level;


  FUNC_3(VAR_5, (VAR_6->power_level * 2));
 }

 if (VAR_4 & VAR_2) {
  VAR_5->ah_retry_long = VAR_6->long_frame_max_tx_count;
  VAR_5->ah_retry_short = VAR_6->short_frame_max_tx_count;

  for (VAR_8 = 0; VAR_8 < VAR_5->ah_capabilities.cap_queues.q_tx_num; VAR_8++)
   FUNC_2(VAR_5, VAR_8);
 }
 FUNC_1(VAR_5, VAR_5->ah_ant_mode);

unlock:
 FUNC_5(&VAR_5->lock);
 return VAR_7;
}
