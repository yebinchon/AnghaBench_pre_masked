
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_4__* chan; } ;
struct ieee80211_conf {int flags; scalar_t__ power_level; TYPE_1__ chandef; int long_frame_max_tx_count; int short_frame_max_tx_count; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct b43_phy {int is_40mhz; scalar_t__ channel; scalar_t__ desired_txpower; scalar_t__ radio_on; TYPE_2__* ops; } ;
struct b43_wldev {TYPE_3__* wl; int radio_hw_enable; struct b43_phy phy; } ;
struct b43_wl {scalar_t__ radio_enabled; TYPE_5__* vif; int mutex; struct b43_wldev* current_dev; } ;
struct TYPE_10__ {int bss_conf; } ;
struct TYPE_9__ {scalar_t__ hw_value; } ;
struct TYPE_8__ {int radiotap_enabled; } ;
struct TYPE_7__ {int (* set_rx_antenna ) (struct b43_wldev*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*,int) ;
 int FUNC_3 (struct ieee80211_hw*,TYPE_5__*,int *,int ) ;
 int FUNC_4 (struct b43_wldev*,int) ;
 int FUNC_5 (struct b43_wldev*,int ,int ) ;
 int FUNC_6 (struct b43_wldev*,int) ;
 int FUNC_7 (struct b43_wl*,TYPE_4__*) ;
 int FUNC_8 (struct b43_wldev*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_10 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_11 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_12 (struct ieee80211_conf*) ;
 struct b43_wl* FUNC_13 (struct ieee80211_hw*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct b43_wldev*,int) ;

__attribute__((used)) static int FUNC_17(struct ieee80211_hw *VAR_5, u32 VAR_6)
{
 struct b43_wl *VAR_7 = FUNC_13(VAR_5);
 struct b43_wldev *VAR_8;
 struct b43_phy *VAR_9;
 struct ieee80211_conf *VAR_10 = &VAR_5->conf;
 int VAR_11;
 int VAR_12 = 0;
 bool VAR_13 = 0;

 FUNC_14(&VAR_7->mutex);

 VAR_8 = VAR_7->current_dev;


 VAR_12 = FUNC_7(VAR_7, VAR_10->chandef.chan);
 if (VAR_12)
  goto out_unlock_mutex;


 if (VAR_8 != VAR_7->current_dev) {
  VAR_8 = VAR_7->current_dev;
  VAR_6 = ~0;
  VAR_13 = 1;
 }

 VAR_9 = &VAR_8->phy;

 if (FUNC_10(VAR_10))
  VAR_9->is_40mhz =
   (FUNC_11(VAR_10) || FUNC_12(VAR_10));
 else
  VAR_9->is_40mhz = 0;

 FUNC_1(VAR_8);

 if (VAR_6 & VAR_3)
  FUNC_5(VAR_8, VAR_10->short_frame_max_tx_count,
       VAR_10->long_frame_max_tx_count);
 VAR_6 &= ~VAR_3;
 if (!VAR_6)
  goto out_mac_enable;



 if (VAR_10->chandef.chan->hw_value != VAR_9->channel)
  FUNC_8(VAR_8, VAR_10->chandef.chan->hw_value);

 VAR_8->wl->radiotap_enabled = !!(VAR_10->flags & VAR_4);


 if (VAR_10->power_level != 0) {
  if (VAR_10->power_level != VAR_9->desired_txpower) {
   VAR_9->desired_txpower = VAR_10->power_level;
   FUNC_4(VAR_8, VAR_1 |
         VAR_2);
  }
 }


 VAR_11 = VAR_0;
 FUNC_2(VAR_8, VAR_11);
 VAR_11 = VAR_0;
 if (VAR_9->ops->set_rx_antenna)
  VAR_9->ops->set_rx_antenna(VAR_8, VAR_11);

 if (VAR_7->radio_enabled != VAR_9->radio_on) {
  if (VAR_7->radio_enabled) {
   FUNC_6(VAR_8, 0);
   FUNC_9(VAR_8->wl, "Radio turned on by software\n");
   if (!VAR_8->radio_hw_enable) {
    FUNC_9(VAR_8->wl, "The hardware RF-kill button "
     "still turns the radio physically off. "
     "Press the button to turn it on.\n");
   }
  } else {
   FUNC_6(VAR_8, 1);
   FUNC_9(VAR_8->wl, "Radio turned off by software\n");
  }
 }

out_mac_enable:
 FUNC_0(VAR_8);
out_unlock_mutex:
 FUNC_15(&VAR_7->mutex);

 if (VAR_7->vif && VAR_13)
  FUNC_3(VAR_5, VAR_7->vif, &VAR_7->vif->bss_conf, ~0);

 return VAR_12;
}
