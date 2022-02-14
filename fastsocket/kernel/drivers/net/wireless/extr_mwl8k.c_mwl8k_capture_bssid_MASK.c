
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl8k_priv {int capture_bssid; scalar_t__ capture_beacon; } ;
struct ieee80211_hdr {int addr3; int frame_control; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(struct mwl8k_priv *VAR_0, struct ieee80211_hdr *VAR_1)
{
 return VAR_0->capture_beacon &&
  FUNC_1(VAR_1->frame_control) &&
  FUNC_0(VAR_1->addr3, VAR_0->capture_bssid);
}
