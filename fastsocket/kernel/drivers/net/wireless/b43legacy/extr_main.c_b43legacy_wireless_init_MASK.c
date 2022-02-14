
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ssb_sprom {int il0mac; int et1mac; } ;
struct TYPE_5__ {int revision; } ;
struct ssb_device {TYPE_2__ id; TYPE_3__* bus; int dev; } ;
struct ieee80211_hw {int flags; int queues; int max_rates; TYPE_1__* wiphy; } ;
struct b43legacy_wl {scalar_t__* tx_queue_stopped; int * tx_queue; int tx_work; int beacon_update_trigger; int devlist; int mutex; int leds_lock; int irq_lock; struct ieee80211_hw* hw; } ;
struct TYPE_6__ {int chip_id; struct ssb_sprom sprom; } ;
struct TYPE_4__ {int interface_modes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_10 ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (struct b43legacy_wl*,char*,int ,int ) ;
 struct b43legacy_wl* FUNC_8 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_9 (int,int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct b43legacy_wl*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ssb_device*,struct b43legacy_wl*) ;

__attribute__((used)) static int FUNC_16(struct ssb_device *VAR_11)
{
 struct ssb_sprom *VAR_12 = &VAR_11->bus->sprom;
 struct ieee80211_hw *VAR_13;
 struct b43legacy_wl *VAR_14;
 int VAR_15 = -VAR_1;
 int VAR_16;

 FUNC_5(VAR_11->bus);

 VAR_13 = FUNC_9(sizeof(*VAR_14), &VAR_9);
 if (!VAR_13) {
  FUNC_6(((void*)0), "Could not allocate ieee80211 device\n");
  goto out;
 }


 VAR_13->flags = VAR_2 |
      VAR_3;
 VAR_13->wiphy->interface_modes =
  FUNC_0(VAR_5) |
  FUNC_0(VAR_6) |
  FUNC_0(VAR_7) |
  FUNC_0(VAR_4);
 VAR_13->queues = 1;
 VAR_13->max_rates = 2;
 FUNC_3(VAR_13, VAR_11->dev);
 if (FUNC_10(VAR_12->et1mac))
  FUNC_4(VAR_13, VAR_12->et1mac);
 else
  FUNC_4(VAR_13, VAR_12->il0mac);


 VAR_14 = FUNC_8(VAR_13);
 FUNC_11(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->hw = VAR_13;
 FUNC_14(&VAR_14->irq_lock);
 FUNC_14(&VAR_14->leds_lock);
 FUNC_12(&VAR_14->mutex);
 FUNC_1(&VAR_14->devlist);
 FUNC_2(&VAR_14->beacon_update_trigger, VAR_8);
 FUNC_2(&VAR_14->tx_work, VAR_10);


 for (VAR_16 = 0; VAR_16 < VAR_0; VAR_16++) {
  FUNC_13(&VAR_14->tx_queue[VAR_16]);
  VAR_14->tx_queue_stopped[VAR_16] = 0;
 }

 FUNC_15(VAR_11, VAR_14);
 FUNC_7(VAR_14, "Broadcom %04X WLAN found (core revision %u)\n",
        VAR_11->bus->chip_id, VAR_11->id.revision);
 VAR_15 = 0;
out:
 return VAR_15;
}
