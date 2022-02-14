
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {int iw_mode; int bssid; } ;
struct ieee80211_hdr {int addr2; int addr3; } ;




 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct il_priv *VAR_0, struct ieee80211_hdr *VAR_1)
{


 switch (VAR_0->iw_mode) {
 case 129:

  return FUNC_0(VAR_1->addr3, VAR_0->bssid);
 case 128:

  return FUNC_0(VAR_1->addr2, VAR_0->bssid);
 default:
  return 1;
 }
}
