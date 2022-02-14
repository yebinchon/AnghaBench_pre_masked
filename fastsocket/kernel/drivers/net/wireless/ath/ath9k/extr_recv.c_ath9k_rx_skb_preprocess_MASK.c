
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ieee80211_rx_status {int flag; int antenna; scalar_t__ signal; int freq; int band; } ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_7__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_3__ conf; } ;
struct ieee80211_hdr {int dummy; } ;
struct TYPE_8__ {int discard_next; } ;
struct ath_softc {TYPE_4__ rx; struct ath_hw* sc_ah; struct ieee80211_hw* hw; } ;
struct ath_rx_status {int rs_more; scalar_t__ rs_moreaggr; int rs_antenna; scalar_t__ rs_rssi; } ;
struct ath_hw {scalar_t__ noise; } ;
struct ath_common {int dummy; } ;
struct TYPE_5__ {int center_freq; int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_common*,struct ieee80211_hw*,struct ath_rx_status*,struct ieee80211_rx_status*) ;
 int FUNC_2 (struct ath_common*,struct ieee80211_hw*,struct ieee80211_hdr*,struct ath_rx_status*) ;
 int FUNC_3 (struct ath_common*,struct ieee80211_hdr*,struct ieee80211_rx_status*,struct ath_rx_status*,int*) ;

__attribute__((used)) static int FUNC_4(struct ath_softc *VAR_3,
       struct ieee80211_hdr *VAR_4,
       struct ath_rx_status *VAR_5,
       struct ieee80211_rx_status *VAR_6,
       bool *VAR_7)
{
 struct ieee80211_hw *VAR_8 = VAR_3->hw;
 struct ath_hw *VAR_9 = VAR_3->sc_ah;
 struct ath_common *VAR_10 = FUNC_0(VAR_9);
 bool VAR_11 = VAR_3->rx.discard_next;

 VAR_3->rx.discard_next = VAR_5->rs_more;
 if (VAR_11)
  return -VAR_0;





 if (!FUNC_3(VAR_10, VAR_4, VAR_6, VAR_5, VAR_7))
  return -VAR_0;


 if (VAR_5->rs_more)
  return 0;

 FUNC_2(VAR_10, VAR_8, VAR_4, VAR_5);

 if (FUNC_1(VAR_10, VAR_8, VAR_5, VAR_6))
  return -VAR_0;

 VAR_6->band = VAR_8->conf.chandef.chan->band;
 VAR_6->freq = VAR_8->conf.chandef.chan->center_freq;
 VAR_6->signal = VAR_9->noise + VAR_5->rs_rssi;
 VAR_6->antenna = VAR_5->rs_antenna;
 VAR_6->flag |= VAR_1;
 if (VAR_5->rs_moreaggr)
  VAR_6->flag |= VAR_2;

 VAR_3->rx.discard_next = 0;
 return 0;
}
