
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int associate_complete_wq; int wq; int state; int associate_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct ieee80211_device *VAR_1)
{


 FUNC_0(&VAR_1->associate_timer);

 VAR_1->state = VAR_0;

 FUNC_1(VAR_1->wq, &VAR_1->associate_complete_wq);
}
