
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int template ;
struct wl12xx_vif {int basic_rate; int role_id; } ;
struct wl1271 {int dummy; } ;
struct TYPE_2__ {int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; int addr; } ;
struct ieee80211_qos_hdr {void* qos_ctrl; void* frame_control; int addr3; int addr2; int addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ieee80211_qos_hdr*,int ,int) ;
 int FUNC_3 (struct wl1271*,int ,int ,struct ieee80211_qos_hdr*,int,int ,int ) ;
 struct wl12xx_vif* FUNC_4 (struct ieee80211_vif*) ;

int FUNC_5(struct wl1271 *VAR_5, struct ieee80211_vif *VAR_6)
{
 struct wl12xx_vif *VAR_7 = FUNC_4(VAR_6);
 struct ieee80211_qos_hdr VAR_8;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));

 FUNC_1(VAR_8.addr1, VAR_6->bss_conf.bssid, VAR_1);
 FUNC_1(VAR_8.addr2, VAR_6->addr, VAR_1);
 FUNC_1(VAR_8.addr3, VAR_6->bss_conf.bssid, VAR_1);

 VAR_8.frame_control = FUNC_0(VAR_3 |
          VAR_4 |
          VAR_2);


 VAR_8.qos_ctrl = FUNC_0(0);

 return FUNC_3(VAR_5, VAR_7->role_id,
           VAR_0, &VAR_8,
           sizeof(VAR_8), 0,
           VAR_7->basic_rate);
}
