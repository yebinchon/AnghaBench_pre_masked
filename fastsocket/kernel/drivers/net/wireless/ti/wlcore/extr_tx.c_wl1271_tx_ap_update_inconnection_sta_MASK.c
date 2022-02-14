
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271_tx_hw_descr {int dummy; } ;
struct wl1271 {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271*,int ) ;

__attribute__((used)) static void FUNC_2(struct wl1271 *VAR_0,
       struct sk_buff *VAR_1)
{
 struct ieee80211_hdr *VAR_2;






 VAR_2 = (struct ieee80211_hdr *)(VAR_1->data +
           sizeof(struct wl1271_tx_hw_descr));
 if (FUNC_0(VAR_2->frame_control))
  FUNC_1(VAR_0, VAR_2->addr1);
}
