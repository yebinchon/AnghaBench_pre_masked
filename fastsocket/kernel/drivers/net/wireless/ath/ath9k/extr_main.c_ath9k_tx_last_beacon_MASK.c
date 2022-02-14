
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enable_beacon; } ;
struct ieee80211_vif {scalar_t__ drv_priv; TYPE_2__ bss_conf; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_vif {struct ath_buf* av_bcbuf; } ;
struct ath_tx_status {int ts_status; } ;
struct TYPE_6__ {int tx_processed; int tx_last; struct ieee80211_vif** bslot; } ;
struct ath_softc {TYPE_3__ beacon; int bcon_tasklet; struct ath_hw* sc_ah; } ;
struct TYPE_4__ {int hw_caps; } ;
struct ath_hw {TYPE_1__ caps; } ;
struct ath_buf {int bf_desc; int bf_mpdu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_hw*,int ,struct ath_tx_status*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_3->priv;
 struct ath_hw *VAR_5 = VAR_4->sc_ah;
 struct ieee80211_vif *VAR_6;
 struct ath_vif *VAR_7;
 struct ath_buf *VAR_8;
 struct ath_tx_status VAR_9;
 bool VAR_10 = !!(VAR_5->caps.hw_caps & VAR_0);
 int VAR_11;

 VAR_6 = VAR_4->beacon.bslot[0];
 if (!VAR_6)
  return 0;

 if (!VAR_6->bss_conf.enable_beacon)
  return 0;

 VAR_7 = (void *)VAR_6->drv_priv;

 if (!VAR_4->beacon.tx_processed && !VAR_10) {
  FUNC_1(&VAR_4->bcon_tasklet);

  VAR_8 = VAR_7->av_bcbuf;
  if (!VAR_8 || !VAR_8->bf_mpdu)
   goto skip;

  VAR_11 = FUNC_0(VAR_5, VAR_8->bf_desc, &VAR_9);
  if (VAR_11 == -VAR_2)
   goto skip;

  VAR_4->beacon.tx_processed = 1;
  VAR_4->beacon.tx_last = !(VAR_9.ts_status & VAR_1);

skip:
  FUNC_2(&VAR_4->bcon_tasklet);
 }

 return VAR_4->beacon.tx_last;
}
