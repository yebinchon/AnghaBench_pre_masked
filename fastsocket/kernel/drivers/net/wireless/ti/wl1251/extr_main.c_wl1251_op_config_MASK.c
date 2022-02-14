
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl1251 {int channel; int psm_requested; scalar_t__ station_mode; scalar_t__ power_level; int mutex; int dtim_period; int beacon_int; int bss_type; int scanning; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_conf {int flags; scalar_t__ power_level; int ps_dtim_period; TYPE_2__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct wl1251* priv; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wl1251*,scalar_t__) ;
 int FUNC_4 (struct wl1251*,int ,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct wl1251*,int ,int,int ,int ) ;
 int FUNC_7 (struct wl1251*) ;
 int FUNC_8 (struct wl1251*) ;
 int FUNC_9 (struct wl1251*,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_8, u32 VAR_9)
{
 struct wl1251 *VAR_10 = VAR_8->priv;
 struct ieee80211_conf *VAR_11 = &VAR_8->conf;
 int VAR_12, VAR_13 = 0;

 VAR_12 = FUNC_0(
   VAR_11->chandef.chan->center_freq);

 FUNC_5(VAR_0, "mac80211 config ch %d psm %s power %d",
       VAR_12,
       VAR_11->flags & VAR_4 ? "on" : "off",
       VAR_11->power_level);

 FUNC_1(&VAR_10->mutex);

 VAR_13 = FUNC_8(VAR_10);
 if (VAR_13 < 0)
  goto out;

 if (VAR_12 != VAR_10->channel) {
  VAR_10->channel = VAR_12;

  VAR_13 = FUNC_6(VAR_10, VAR_10->bss_type, VAR_10->channel,
      VAR_10->beacon_int, VAR_10->dtim_period);
  if (VAR_13 < 0)
   goto out_sleep;
 }

 if (VAR_11->flags & VAR_4 && !VAR_10->psm_requested) {
  FUNC_5(VAR_1, "psm enabled");

  VAR_10->psm_requested = 1;

  VAR_10->dtim_period = VAR_11->ps_dtim_period;

  VAR_13 = FUNC_4(VAR_10, VAR_10->beacon_int,
        VAR_10->dtim_period);




  VAR_13 = FUNC_9(VAR_10, VAR_7);
  if (VAR_13 < 0)
   goto out_sleep;
 } else if (!(VAR_11->flags & VAR_4) &&
     VAR_10->psm_requested) {
  FUNC_5(VAR_1, "psm disabled");

  VAR_10->psm_requested = 0;

  if (VAR_10->station_mode != VAR_5) {
   VAR_13 = FUNC_9(VAR_10, VAR_5);
   if (VAR_13 < 0)
    goto out_sleep;
  }
 }

 if (VAR_9 & VAR_2 && !VAR_10->scanning) {
  if (VAR_11->flags & VAR_3) {
   VAR_13 = FUNC_9(VAR_10, VAR_6);
   if (VAR_13 < 0)
    goto out_sleep;
  } else {
   VAR_13 = FUNC_9(VAR_10, VAR_5);
   if (VAR_13 < 0)
    goto out_sleep;
   VAR_13 = FUNC_6(VAR_10, VAR_10->bss_type, VAR_10->channel,
       VAR_10->beacon_int, VAR_10->dtim_period);
   if (VAR_13 < 0)
    goto out_sleep;
  }
 }

 if (VAR_11->power_level != VAR_10->power_level) {
  VAR_13 = FUNC_3(VAR_10, VAR_11->power_level);
  if (VAR_13 < 0)
   goto out_sleep;

  VAR_10->power_level = VAR_11->power_level;
 }

out_sleep:
 FUNC_7(VAR_10);

out:
 FUNC_2(&VAR_10->mutex);

 return VAR_13;
}
