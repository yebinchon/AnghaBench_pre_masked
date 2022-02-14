
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int wx_sem; int * pDot11dInfo; int wq; int GPIOChangeRFWorkItem; int associate_retry_wq; int associate_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct ieee80211_device *VAR_0)
{
 FUNC_3(&VAR_0->wx_sem);

 FUNC_1(&VAR_0->associate_timer);
 FUNC_0(&VAR_0->associate_retry_wq);



 FUNC_0(&VAR_0->GPIOChangeRFWorkItem);

 FUNC_2(VAR_0->wq);
 if(((void*)0) != VAR_0->pDot11dInfo)
  FUNC_4(VAR_0->pDot11dInfo);
 FUNC_5(&VAR_0->wx_sem);
}
