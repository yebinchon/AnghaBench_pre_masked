
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int sta_sleep; int lock; int mgmt_tx_lock; int ps_tl; int ps_th; int dev; int (* enter_sleep_state ) (int ,int ,int ) ;} ;


 int FUNC_0 (struct ieee80211_device*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct ieee80211_device *VAR_0, short VAR_1)
{
 unsigned long VAR_2,VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);
 if(VAR_0->sta_sleep == 2){

  if(VAR_1){


   VAR_0->sta_sleep = 1;
   VAR_0->enter_sleep_state(VAR_0->dev,VAR_0->ps_th,VAR_0->ps_tl);
  }



 }

 else {

  if((VAR_0->sta_sleep == 0) && !VAR_1){
   FUNC_1(&VAR_0->mgmt_tx_lock, VAR_3);
   FUNC_0(VAR_0, 0);
   FUNC_2(&VAR_0->mgmt_tx_lock, VAR_3);
  }
 }
 FUNC_2(&VAR_0->lock, VAR_2);
}
