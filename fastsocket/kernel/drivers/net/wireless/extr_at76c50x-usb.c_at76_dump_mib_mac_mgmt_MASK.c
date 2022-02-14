
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mib_mac_mgmt {int country_string; int multi_domain_capability_enabled; int multi_domain_capability_implemented; int res; int ibss_change; int power_mgmt_mode; int current_bss_type; int current_essid; int current_bssid; int CFP_period; int DTIM_period; int privacy_option_implemented; int CFP_mode; int ATIM_window; int station_id; int medium_occupancy_limit; int CFP_max_duration; int beacon_period; } ;
struct at76_priv {TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,struct mib_mac_mgmt*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mib_mac_mgmt*) ;
 struct mib_mac_mgmt* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct at76_priv *VAR_4)
{
 int VAR_5;
 struct mib_mac_mgmt *VAR_6 = FUNC_4(sizeof(struct mib_mac_mgmt),
      VAR_1);

 if (!VAR_6)
  return;

 VAR_5 = FUNC_1(VAR_4->udev, VAR_3, VAR_6,
      sizeof(struct mib_mac_mgmt));
 if (VAR_5 < 0) {
  FUNC_6(VAR_4->hw->wiphy,
     "at76_get_mib (MAC_MGMT) failed: %d\n", VAR_5);
  goto exit;
 }

 FUNC_0(VAR_0, "%s: MIB MAC_MGMT: beacon_period %d CFP_max_duration "
   "%d medium_occupancy_limit %d station_id 0x%x ATIM_window %d "
   "CFP_mode %d privacy_opt_impl %d DTIM_period %d CFP_period %d "
   "current_bssid %pM current_essid %s current_bss_type %d "
   "pm_mode %d ibss_change %d res %d "
   "multi_domain_capability_implemented %d "
   "international_roaming %d country_string %.3s",
   FUNC_7(VAR_4->hw->wiphy), FUNC_5(VAR_6->beacon_period),
   FUNC_5(VAR_6->CFP_max_duration),
   FUNC_5(VAR_6->medium_occupancy_limit),
   FUNC_5(VAR_6->station_id), FUNC_5(VAR_6->ATIM_window),
   VAR_6->CFP_mode, VAR_6->privacy_option_implemented, VAR_6->DTIM_period,
   VAR_6->CFP_period, VAR_6->current_bssid,
   FUNC_2(VAR_6->current_essid, VAR_2),
   VAR_6->current_bss_type, VAR_6->power_mgmt_mode, VAR_6->ibss_change,
   VAR_6->res, VAR_6->multi_domain_capability_implemented,
   VAR_6->multi_domain_capability_enabled, VAR_6->country_string);
exit:
 FUNC_3(VAR_6);
}
