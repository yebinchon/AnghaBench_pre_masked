
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int link_change_wq; int start_ibss_wq; int associate_retry_wq; int associate_timer; scalar_t__ proto_started; } ;


 int FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (struct ieee80211_device*) ;

void FUNC_6(struct ieee80211_device *VAR_0)
{
 if (!VAR_0->proto_started)
  return;

 VAR_0->proto_started = 0;

 FUNC_5(VAR_0);
 FUNC_2(&VAR_0->associate_timer);
 FUNC_1(&VAR_0->associate_retry_wq);
 FUNC_1(&VAR_0->start_ibss_wq);
 FUNC_1(&VAR_0->link_change_wq);
 FUNC_4(VAR_0);

 FUNC_3(VAR_0);
 FUNC_0(VAR_0);
}
