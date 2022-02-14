
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_low_level_stats {int dot11FCSErrorCount; int dot11RTSSuccessCount; int dot11RTSFailureCount; int dot11ACKFailureCount; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct TYPE_2__ {int fcs_error; int rts_ok; int rts_fail; int ack_fail; } ;
struct ath5k_hw {TYPE_1__ stats; } ;


 int FUNC_0 (struct ath5k_hw*) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_hw *VAR_0,
  struct ieee80211_low_level_stats *VAR_1)
{
 struct ath5k_hw *VAR_2 = VAR_0->priv;


 FUNC_0(VAR_2);

 VAR_1->dot11ACKFailureCount = VAR_2->stats.ack_fail;
 VAR_1->dot11RTSFailureCount = VAR_2->stats.rts_fail;
 VAR_1->dot11RTSSuccessCount = VAR_2->stats.rts_ok;
 VAR_1->dot11FCSErrorCount = VAR_2->stats.fcs_error;

 return 0;
}
