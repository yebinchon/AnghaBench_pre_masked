
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int associate_complete_wq; int wq; int state; int associate_timer; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct ieee80211_device *VAR_1)
{
 int VAR_2;
 FUNC_1(&VAR_1->associate_timer);

 for(VAR_2 = 0; VAR_2 < 6; VAR_2++) {

 }
 VAR_1->state = VAR_0;
 FUNC_0("Successfully associated\n");

 FUNC_2(VAR_1->wq, &VAR_1->associate_complete_wq);
}
