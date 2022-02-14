
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl1271 {int platform_quirks; scalar_t__ state; int watchdog_recovery; int deferred_rx_queue; int deferred_tx_queue; int wl_lock; int flags; TYPE_1__* fw_status_1; int fw_status_2; } ;
struct TYPE_3__ {int intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct wl1271*,int) ;
 int FUNC_12 (struct wl1271*) ;
 int FUNC_13 (struct wl1271*) ;
 int FUNC_14 (struct wl1271*) ;
 scalar_t__ FUNC_15 (struct wl1271*) ;
 int FUNC_16 (struct wl1271*,TYPE_1__*,int ) ;
 int FUNC_17 (struct wl1271*) ;
 int FUNC_18 (struct wl1271*) ;
 int FUNC_19 (struct wl1271*,TYPE_1__*) ;
 int FUNC_20 (struct wl1271*) ;

__attribute__((used)) static int FUNC_21(struct wl1271 *VAR_16)
{
 int VAR_17 = 0;
 u32 VAR_18;
 int VAR_19 = VAR_12;
 bool VAR_20 = 0;
 unsigned int VAR_21;
 unsigned long VAR_22;





 if (VAR_16->platform_quirks & VAR_13)
  VAR_19 = 1;

 FUNC_9(VAR_0, "IRQ work");

 if (FUNC_8(VAR_16->state != VAR_15))
  goto out;

 VAR_17 = FUNC_14(VAR_16);
 if (VAR_17 < 0)
  goto out;

 while (!VAR_20 && VAR_19--) {





  FUNC_0(VAR_11, &VAR_16->flags);
  FUNC_4();

  VAR_17 = FUNC_16(VAR_16, VAR_16->fw_status_1, VAR_16->fw_status_2);
  if (VAR_17 < 0)
   goto out;

  FUNC_18(VAR_16);

  VAR_18 = FUNC_1(VAR_16->fw_status_1->intr);
  VAR_18 &= VAR_14;
  if (!VAR_18) {
   VAR_20 = 1;
   continue;
  }

  if (FUNC_8(VAR_18 & VAR_7)) {
   FUNC_10("HW watchdog interrupt received! starting recovery.");
   VAR_16->watchdog_recovery = 1;
   VAR_17 = -VAR_1;


   goto out;
  }

  if (FUNC_8(VAR_18 & VAR_8)) {
   FUNC_10("SW watchdog interrupt received! "
         "starting recovery.");
   VAR_16->watchdog_recovery = 1;
   VAR_17 = -VAR_1;


   goto out;
  }

  if (FUNC_2(VAR_18 & VAR_2)) {
   FUNC_9(VAR_0, "WL1271_ACX_INTR_DATA");

   VAR_17 = FUNC_19(VAR_16, VAR_16->fw_status_1);
   if (VAR_17 < 0)
    goto out;


   FUNC_5(&VAR_16->wl_lock, VAR_22);
   if (!FUNC_7(VAR_10, &VAR_16->flags) &&
       FUNC_15(VAR_16) > 0) {
    FUNC_6(&VAR_16->wl_lock, VAR_22);




    VAR_17 = FUNC_20(VAR_16);
    if (VAR_17 < 0)
     goto out;
   } else {
    FUNC_6(&VAR_16->wl_lock, VAR_22);
   }


   VAR_17 = FUNC_17(VAR_16);
   if (VAR_17 < 0)
    goto out;


   VAR_21 = FUNC_3(&VAR_16->deferred_tx_queue) +
          FUNC_3(&VAR_16->deferred_rx_queue);
   if (VAR_21 > VAR_9)
    FUNC_12(VAR_16);
  }

  if (VAR_18 & VAR_3) {
   FUNC_9(VAR_0, "WL1271_ACX_INTR_EVENT_A");
   VAR_17 = FUNC_11(VAR_16, 0);
   if (VAR_17 < 0)
    goto out;
  }

  if (VAR_18 & VAR_4) {
   FUNC_9(VAR_0, "WL1271_ACX_INTR_EVENT_B");
   VAR_17 = FUNC_11(VAR_16, 1);
   if (VAR_17 < 0)
    goto out;
  }

  if (VAR_18 & VAR_6)
   FUNC_9(VAR_0,
         "WL1271_ACX_INTR_INIT_COMPLETE");

  if (VAR_18 & VAR_5)
   FUNC_9(VAR_0, "WL1271_ACX_INTR_HW_AVAILABLE");
 }

 FUNC_13(VAR_16);

out:
 return VAR_17;
}
