
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wl12xx_vif {int dummy; } ;
struct TYPE_3__ {scalar_t__ state; size_t ssid_len; int failed; int scanned_ch; struct cfg80211_scan_request* req; int ssid; } ;
struct wl1271 {TYPE_2__* ops; int scan_complete_work; int hw; TYPE_1__ scan; struct wl12xx_vif* scan_wlvif; } ;
struct ieee80211_vif {int dummy; } ;
struct cfg80211_scan_request {scalar_t__ n_channels; } ;
struct TYPE_4__ {int (* scan_start ) (struct wl1271*,struct wl12xx_vif*,struct cfg80211_scan_request*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ,int const*,size_t) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*,struct cfg80211_scan_request*) ;
 struct wl12xx_vif* FUNC_6 (struct ieee80211_vif*) ;

int FUNC_7(struct wl1271 *VAR_5, struct ieee80211_vif *VAR_6,
  const u8 *VAR_7, size_t VAR_8,
  struct cfg80211_scan_request *VAR_9)
{
 struct wl12xx_vif *VAR_10 = FUNC_6(VAR_6);





 FUNC_0(VAR_9->n_channels > VAR_1);

 if (VAR_5->scan.state != VAR_3)
  return -VAR_0;

 VAR_5->scan.state = VAR_2;

 if (VAR_8 && VAR_7) {
  VAR_5->scan.ssid_len = VAR_8;
  FUNC_2(VAR_5->scan.ssid, VAR_7, VAR_8);
 } else {
  VAR_5->scan.ssid_len = 0;
 }

 VAR_5->scan_wlvif = VAR_10;
 VAR_5->scan.req = VAR_9;
 FUNC_3(VAR_5->scan.scanned_ch, 0, sizeof(VAR_5->scan.scanned_ch));


 VAR_5->scan.failed = 1;
 FUNC_1(VAR_5->hw, &VAR_5->scan_complete_work,
         FUNC_4(VAR_4));

 VAR_5->ops->scan_start(VAR_5, VAR_10, VAR_9);

 return 0;
}
