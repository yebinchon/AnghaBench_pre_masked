
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {scalar_t__ state; int actscanning; int lock; int bGlobalDomain; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct ieee80211_device *VAR_1)
{
 unsigned long VAR_2;
 FUNC_2(VAR_1);
 FUNC_4(&VAR_1->lock, VAR_2);

 if (VAR_1->state == VAR_0){
  VAR_1->actscanning = 1;
  FUNC_3(VAR_1);
 }
 FUNC_5(&VAR_1->lock, VAR_2);
}
