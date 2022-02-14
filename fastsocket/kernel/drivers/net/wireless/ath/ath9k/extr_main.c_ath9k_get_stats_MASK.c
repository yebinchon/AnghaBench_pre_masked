
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_low_level_stats {int dot11RTSSuccessCount; int dot11FCSErrorCount; int dot11RTSFailureCount; int dot11ACKFailureCount; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath9k_mib_stats {int rts_good; int fcs_bad; int rts_bad; int ackrcv_bad; } ;
struct ath_hw {struct ath9k_mib_stats ah_mibStats; } ;



__attribute__((used)) static int FUNC_0(struct ieee80211_hw *VAR_0,
      struct ieee80211_low_level_stats *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_0->priv;
 struct ath_hw *VAR_3 = VAR_2->sc_ah;
 struct ath9k_mib_stats *VAR_4 = &VAR_3->ah_mibStats;

 VAR_1->dot11ACKFailureCount = VAR_4->ackrcv_bad;
 VAR_1->dot11RTSFailureCount = VAR_4->rts_bad;
 VAR_1->dot11FCSErrorCount = VAR_4->fcs_bad;
 VAR_1->dot11RTSSuccessCount = VAR_4->rts_good;
 return 0;
}
