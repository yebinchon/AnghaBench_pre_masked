
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int beacon_txing; int beacon_lock; } ;


 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ieee80211_device *VAR_0)
{
 unsigned long VAR_1;
 FUNC_1(&VAR_0->beacon_lock,VAR_1);

 VAR_0->beacon_txing = 1;
 FUNC_0(VAR_0);

 FUNC_2(&VAR_0->beacon_lock,VAR_1);
}
