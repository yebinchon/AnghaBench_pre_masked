
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int beacon_lock; } ;


 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(unsigned long VAR_0)
{
 struct ieee80211_device *VAR_1 =
  (struct ieee80211_device *) VAR_0;
 unsigned long VAR_2;

 FUNC_1(&VAR_1->beacon_lock, VAR_2);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->beacon_lock, VAR_2);
}
