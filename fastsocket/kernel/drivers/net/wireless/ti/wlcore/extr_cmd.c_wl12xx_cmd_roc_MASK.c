
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wl12xx_vif {scalar_t__ band; } ;
struct wl12xx_cmd_roc {int band; scalar_t__ channel; scalar_t__ role_id; } ;
struct wl1271 {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct wl12xx_cmd_roc*) ;
 struct wl12xx_cmd_roc* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct wl12xx_cmd_roc*,int,int ) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_8, struct wl12xx_vif *VAR_9,
     u8 VAR_10, enum ieee80211_band VAR_11, u8 VAR_12)
{
 struct wl12xx_cmd_roc *VAR_13;
 int VAR_14 = 0;

 FUNC_4(VAR_1, "cmd roc %d (%d)", VAR_12, VAR_10);

 if (FUNC_0(VAR_10 == VAR_5))
  return -VAR_2;

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_4);
 if (!VAR_13) {
  VAR_14 = -VAR_3;
  goto out;
 }

 VAR_13->role_id = VAR_10;
 VAR_13->channel = VAR_12;
 switch (VAR_11) {
 case 129:
  VAR_13->band = VAR_6;
  break;
 case 128:
  VAR_13->band = VAR_7;
  break;
 default:
  FUNC_5("roc - unknown band: %d", (int)VAR_9->band);
  VAR_14 = -VAR_2;
  goto out_free;
 }


 VAR_14 = FUNC_3(VAR_8, VAR_0, VAR_13, sizeof(*VAR_13), 0);
 if (VAR_14 < 0) {
  FUNC_5("failed to send ROC command");
  goto out_free;
 }

out_free:
 FUNC_1(VAR_13);

out:
 return VAR_14;
}
