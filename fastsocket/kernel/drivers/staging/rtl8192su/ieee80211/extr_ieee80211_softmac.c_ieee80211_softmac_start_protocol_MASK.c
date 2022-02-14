
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int wx_sem; scalar_t__ sync_scan_hurryup; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_device *VAR_0)
{
 VAR_0->sync_scan_hurryup = 0;
 FUNC_0(&VAR_0->wx_sem);
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->wx_sem);
}
