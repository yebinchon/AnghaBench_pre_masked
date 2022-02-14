
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct ieee80211_conf {int flags; scalar_t__ power_level; TYPE_2__ chandef; int long_frame_max_tx_count; int short_frame_max_tx_count; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct b43legacy_phy {scalar_t__ channel; scalar_t__ power_level; scalar_t__ radio_on; int type; } ;
struct b43legacy_wldev {int irq_mask; TYPE_3__* wl; int radio_hw_enable; struct b43legacy_phy phy; } ;
struct b43legacy_wl {scalar_t__ radio_enabled; int mutex; int irq_lock; struct b43legacy_wldev* current_dev; } ;
struct TYPE_6__ {int radiotap_enabled; } ;
struct TYPE_4__ {int band; scalar_t__ hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct b43legacy_wldev*,int) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*,scalar_t__,int ) ;
 int FUNC_4 (struct b43legacy_wldev*,int ) ;
 int FUNC_5 (struct b43legacy_wldev*) ;
 int FUNC_6 (struct b43legacy_wldev*,int ,int ) ;
 scalar_t__ FUNC_7 (struct b43legacy_wldev*) ;
 int FUNC_8 (struct b43legacy_wl*,unsigned int) ;
 int FUNC_9 (struct b43legacy_wldev*) ;
 int FUNC_10 (struct b43legacy_wldev*,int ,int ) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 struct b43legacy_wl* FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_18(struct ieee80211_hw *VAR_8,
       u32 VAR_9)
{
 struct b43legacy_wl *VAR_10 = FUNC_12(VAR_8);
 struct b43legacy_wldev *VAR_11;
 struct b43legacy_phy *VAR_12;
 struct ieee80211_conf *VAR_13 = &VAR_8->conf;
 unsigned long VAR_14;
 unsigned int VAR_15 = 0xFFFF;
 int VAR_16;
 int VAR_17 = 0;

 VAR_16 = VAR_0;

 FUNC_14(&VAR_10->mutex);
 VAR_11 = VAR_10->current_dev;
 VAR_12 = &VAR_11->phy;

 if (VAR_9 & VAR_6)
  FUNC_6(VAR_11,
        VAR_13->short_frame_max_tx_count,
        VAR_13->long_frame_max_tx_count);
 VAR_9 &= ~VAR_6;
 if (!VAR_9)
  goto out_unlock_mutex;


 switch (VAR_13->chandef.chan->band) {
 case 128:
  if (VAR_12->type == VAR_4)
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_3;
  break;
 default:
  FUNC_0(1);
 }
 VAR_17 = FUNC_8(VAR_10, VAR_15);
 if (VAR_17)
  goto out_unlock_mutex;




 FUNC_16(&VAR_10->irq_lock, VAR_14);
 if (FUNC_7(VAR_11) < VAR_5) {
  FUNC_17(&VAR_10->irq_lock, VAR_14);
  goto out_unlock_mutex;
 }
 FUNC_10(VAR_11, VAR_1, 0);
 FUNC_17(&VAR_10->irq_lock, VAR_14);
 FUNC_9(VAR_11);



 if (VAR_13->chandef.chan->hw_value != VAR_12->channel)
  FUNC_3(VAR_11, VAR_13->chandef.chan->hw_value,
           0);

 VAR_11->wl->radiotap_enabled = !!(VAR_13->flags & VAR_7);


 if (VAR_13->power_level != 0) {
  if (VAR_13->power_level != VAR_12->power_level) {
   VAR_12->power_level = VAR_13->power_level;
   FUNC_2(VAR_11);
  }
 }


 FUNC_1(VAR_11, VAR_16);

 if (VAR_10->radio_enabled != VAR_12->radio_on) {
  if (VAR_10->radio_enabled) {
   FUNC_5(VAR_11);
   FUNC_11(VAR_11->wl, "Radio turned on by software\n");
   if (!VAR_11->radio_hw_enable)
    FUNC_11(VAR_11->wl, "The hardware RF-kill"
           " button still turns the radio"
           " physically off. Press the"
           " button to turn it on.\n");
  } else {
   FUNC_4(VAR_11, 0);
   FUNC_11(VAR_11->wl, "Radio turned off by"
          " software\n");
  }
 }

 FUNC_16(&VAR_10->irq_lock, VAR_14);
 FUNC_10(VAR_11, VAR_1, VAR_11->irq_mask);
 FUNC_13();
 FUNC_17(&VAR_10->irq_lock, VAR_14);
out_unlock_mutex:
 FUNC_15(&VAR_10->mutex);

 return VAR_17;
}
