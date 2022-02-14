
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {struct ath_softc* priv; } ;
struct ieee80211_hdr {int dummy; } ;
struct ath_softc {int last_rssi; } ;
struct ath_rx_status {int rs_rssi; int rs_moreaggr; int is_mybeacon; } ;
struct TYPE_2__ {int avgbrssi; } ;
struct ath_hw {scalar_t__ opmode; TYPE_1__ stats; } ;
struct ath_common {struct ath_hw* ah; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ath_common *VAR_5,
          struct ieee80211_hw *VAR_6,
          struct ieee80211_hdr *VAR_7,
          struct ath_rx_status *VAR_8)
{
 struct ath_softc *VAR_9 = VAR_6->priv;
 struct ath_hw *VAR_10 = VAR_5->ah;
 int VAR_11;
 int VAR_12 = VAR_8->rs_rssi;

 if (!VAR_8->is_mybeacon ||
     ((VAR_10->opmode != VAR_4) &&
      (VAR_10->opmode != VAR_3)))
  return;

 if (VAR_8->rs_rssi != VAR_0 && !VAR_8->rs_moreaggr)
  FUNC_1(VAR_9->last_rssi, VAR_8->rs_rssi);

 VAR_11 = VAR_9->last_rssi;
 if (FUNC_2(VAR_11 != VAR_1))
  VAR_12 = FUNC_0(VAR_11, VAR_2);
 if (VAR_12 < 0)
  VAR_12 = 0;


 VAR_10->stats.avgbrssi = VAR_12;
}
