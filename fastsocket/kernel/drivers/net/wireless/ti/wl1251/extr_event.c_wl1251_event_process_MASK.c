
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251 {scalar_t__ station_mode; scalar_t__ vif; scalar_t__ rssi_thold; scalar_t__ psm_requested; } ;
struct event_mailbox {int events_vector; int events_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct event_mailbox*) ;
 int FUNC_4 (struct wl1251*,struct event_mailbox*) ;
 int FUNC_5 (struct wl1251*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct wl1251 *VAR_12, struct event_mailbox *VAR_13)
{
 int VAR_14;
 u32 VAR_15;

 FUNC_3(VAR_13);

 VAR_15 = VAR_13->events_vector & ~(VAR_13->events_mask);
 FUNC_2(VAR_1, "vector: 0x%x", VAR_15);

 if (VAR_15 & VAR_8) {
  VAR_14 = FUNC_4(VAR_12, VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
 }

 if (VAR_15 & VAR_0) {
  FUNC_2(VAR_1, "BSS_LOSE_EVENT");

  if (VAR_12->psm_requested &&
      VAR_12->station_mode != VAR_9) {
   VAR_14 = FUNC_5(VAR_12, VAR_9);
   if (VAR_14 < 0)
    return VAR_14;
  }
 }

 if (VAR_15 & VAR_11) {
  FUNC_2(VAR_1, "SYNCHRONIZATION_TIMEOUT_EVENT");


  FUNC_0(VAR_12->vif);
 }

 if (VAR_15 & VAR_5) {
  if (VAR_12->psm_requested) {
   VAR_14 = FUNC_5(VAR_12, VAR_10);
   if (VAR_14 < 0)
    return VAR_14;
  }
 }

 if (VAR_12->vif && VAR_12->rssi_thold) {
  if (VAR_15 & VAR_6) {
   FUNC_2(VAR_1,
         "ROAMING_TRIGGER_LOW_RSSI_EVENT");
   FUNC_1(VAR_12->vif,
    VAR_4,
    VAR_2);
  }

  if (VAR_15 & VAR_7) {
   FUNC_2(VAR_1,
         "ROAMING_TRIGGER_REGAINED_RSSI_EVENT");
   FUNC_1(VAR_12->vif,
    VAR_3,
    VAR_2);
  }
 }

 return 0;
}
