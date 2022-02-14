
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;
struct wl1251 {int bssid; int mac_addr; } ;
struct ieee80211_qos_hdr {void* qos_ctrl; void* frame_control; int addr3; int addr2; int addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ieee80211_qos_hdr*,int ,int) ;
 int FUNC_3 (struct wl1251*,int ,struct ieee80211_qos_hdr*,int) ;

__attribute__((used)) static int FUNC_4(struct wl1251 *VAR_5)
{
 struct ieee80211_qos_hdr VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));

 FUNC_1(VAR_6.addr1, VAR_5->bssid, VAR_1);
 FUNC_1(VAR_6.addr2, VAR_5->mac_addr, VAR_1);
 FUNC_1(VAR_6.addr3, VAR_5->bssid, VAR_1);

 VAR_6.frame_control = FUNC_0(VAR_3 |
          VAR_4 |
          VAR_2);


 VAR_6.qos_ctrl = FUNC_0(0);

 return FUNC_3(VAR_5, VAR_0, &VAR_6,
           sizeof(VAR_6));
}
