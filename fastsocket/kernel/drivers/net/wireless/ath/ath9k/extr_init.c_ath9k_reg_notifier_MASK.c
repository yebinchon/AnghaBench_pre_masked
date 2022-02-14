
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct regulatory_request {int dfs_region; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct TYPE_7__ {int txpowlimit; } ;
struct ath_softc {TYPE_4__* dfs_detector; int curtxpow; TYPE_3__ config; struct ath_hw* sc_ah; } ;
struct ath_regulatory {int power_limit; } ;
struct ath_hw {TYPE_2__* curchan; } ;
struct TYPE_8__ {int (* set_dfs_domain ) (TYPE_4__*,int ) ;} ;
struct TYPE_6__ {TYPE_1__* chan; } ;
struct TYPE_5__ {int max_power; } ;


 struct ath_regulatory* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int,int) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct wiphy*,struct regulatory_request*,struct ath_regulatory*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 struct ieee80211_hw* FUNC_6 (struct wiphy*) ;

__attribute__((used)) static void FUNC_7(struct wiphy *VAR_0,
          struct regulatory_request *VAR_1)
{
 struct ieee80211_hw *VAR_2 = FUNC_6(VAR_0);
 struct ath_softc *VAR_3 = VAR_2->priv;
 struct ath_hw *VAR_4 = VAR_3->sc_ah;
 struct ath_regulatory *VAR_5 = FUNC_0(VAR_4);

 FUNC_4(VAR_0, VAR_1, VAR_5);


 if (VAR_4->curchan) {
  VAR_3->config.txpowlimit = 2 * VAR_4->curchan->chan->max_power;
  FUNC_3(VAR_3);
  FUNC_1(VAR_4, VAR_3->config.txpowlimit, 0);
  VAR_3->curtxpow = FUNC_0(VAR_4)->power_limit;

  if (VAR_3->dfs_detector != ((void*)0))
   VAR_3->dfs_detector->set_dfs_domain(VAR_3->dfs_detector,
        VAR_1->dfs_region);
  FUNC_2(VAR_3);
 }
}
