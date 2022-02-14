
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_80211_bssid_ex {int dummy; } ;



__attribute__((used)) static bool FUNC_0(struct ndis_80211_bssid_ex *VAR_0,
      int VAR_1, void *VAR_2, int VAR_3)
{
 void *VAR_4, *VAR_5;

 if (!VAR_0 || VAR_1 <= 0 || VAR_1 > VAR_3)
  return 0;

 VAR_4 = (char *)VAR_2 + VAR_3;
 VAR_5 = (char *)VAR_0 + VAR_1;

 return (int)(VAR_4 - VAR_5) >= 0 && (int)(VAR_5 - VAR_2) >= 0;
}
