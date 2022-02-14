
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_bss_conf {int beacon_int; int dtim_period; int ibss_creator; int bssid; } ;
struct ath_beacon_config {int beacon_interval; int dtim_period; int listen_interval; int dtim_count; int bmiss_timeout; int ibss_creator; } ;
struct ath_softc {struct ath_beacon_config cur_beacon_conf; int sc_ah; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_2(struct ath_softc *VAR_2,
          struct ieee80211_bss_conf *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_0(VAR_2->sc_ah);
 struct ath_beacon_config *VAR_5 = &VAR_2->cur_beacon_conf;

 FUNC_1(VAR_4, VAR_1,
  "Caching beacon data for BSS: %pM\n", VAR_3->bssid);

 VAR_5->beacon_interval = VAR_3->beacon_int;
 VAR_5->dtim_period = VAR_3->dtim_period;
 VAR_5->listen_interval = 1;
 VAR_5->dtim_count = 1;
 VAR_5->ibss_creator = VAR_3->ibss_creator;
 VAR_5->bmiss_timeout =
  VAR_0 * VAR_5->beacon_interval;







 if (VAR_5->beacon_interval == 0)
  VAR_5->beacon_interval = 100;






 if (VAR_5->dtim_period == 0)
  VAR_5->dtim_period = 1;

}
