
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_sprom {int il0mac; int et1mac; } ;
struct ieee80211_hw {int flags; int max_rates; TYPE_1__* wiphy; } ;
struct b43_wl {int hw_registred; scalar_t__* tx_queue_stopped; int * tx_queue; int tx_work; int txpower_adjust_work; int beacon_update_trigger; int devlist; int hardirq_lock; int mutex; struct ieee80211_hw* hw; } ;
struct b43_bus_dev {int chip_id; int core_rev; int dev; struct ssb_sprom* bus_sprom; } ;
struct TYPE_2__ {int interface_modes; int flags; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct b43_wl* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (struct b43_wl*,char*,char*,int ) ;
 struct b43_wl* FUNC_9 (struct ieee80211_hw*) ;
 struct ieee80211_hw* FUNC_10 (int,int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int ,char*,int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static struct b43_wl *FUNC_16(struct b43_bus_dev *VAR_14)
{
 struct ssb_sprom *VAR_15 = VAR_14->bus_sprom;
 struct ieee80211_hw *VAR_16;
 struct b43_wl *VAR_17;
 char VAR_18[6];
 int VAR_19;

 VAR_16 = FUNC_10(sizeof(*VAR_17), &VAR_11);
 if (!VAR_16) {
  FUNC_7(((void*)0), "Could not allocate ieee80211 device\n");
  return FUNC_2(-VAR_1);
 }
 VAR_17 = FUNC_9(VAR_16);


 VAR_16->flags = VAR_2 |
      VAR_3;

 VAR_16->wiphy->interface_modes =
  FUNC_1(VAR_5) |
  FUNC_1(VAR_6) |
  FUNC_1(VAR_7) |
  FUNC_1(VAR_8) |
  FUNC_1(VAR_4);

 VAR_16->wiphy->flags |= VAR_9;

 VAR_17->hw_registred = 0;
 VAR_16->max_rates = 2;
 FUNC_5(VAR_16, VAR_14->dev);
 if (FUNC_11(VAR_15->et1mac))
  FUNC_6(VAR_16, VAR_15->et1mac);
 else
  FUNC_6(VAR_16, VAR_15->il0mac);


 VAR_17->hw = VAR_16;
 FUNC_12(&VAR_17->mutex);
 FUNC_15(&VAR_17->hardirq_lock);
 FUNC_3(&VAR_17->devlist);
 FUNC_4(&VAR_17->beacon_update_trigger, VAR_10);
 FUNC_4(&VAR_17->txpower_adjust_work, VAR_12);
 FUNC_4(&VAR_17->tx_work, VAR_13);


 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
  FUNC_13(&VAR_17->tx_queue[VAR_19]);
  VAR_17->tx_queue_stopped[VAR_19] = 0;
 }

 FUNC_14(VAR_18, FUNC_0(VAR_18),
   (VAR_14->chip_id > 0x9999) ? "%d" : "%04X", VAR_14->chip_id);
 FUNC_8(VAR_17, "Broadcom %s WLAN found (core revision %u)\n", VAR_18,
  VAR_14->core_rev);
 return VAR_17;
}
