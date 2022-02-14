
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {scalar_t__ iw_mode; scalar_t__ state; int start_ibss_wq; int associate_retry_wq; int associate_timer; scalar_t__ proto_started; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ieee80211_device*,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (struct ieee80211_device*) ;

void FUNC_6(struct ieee80211_device *VAR_3)
{
 if (!VAR_3->proto_started)
  return;

 VAR_3->proto_started = 0;

 FUNC_5(VAR_3);
 if((VAR_3->iw_mode == VAR_1)&&(VAR_3->state == VAR_0)) {
  FUNC_0(VAR_3,((void*)0),VAR_2);
 }
 FUNC_2(&VAR_3->associate_timer);
 FUNC_1(&VAR_3->associate_retry_wq);
 FUNC_1(&VAR_3->start_ibss_wq);
 FUNC_4(VAR_3);

 FUNC_3(VAR_3);
}
